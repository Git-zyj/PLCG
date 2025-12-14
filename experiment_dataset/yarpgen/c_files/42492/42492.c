/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (-6 ? 1 : -27199);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_10 = -78;
                    arr_8 [i_2] [i_1] [i_2] = arr_0 [i_2];
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_11 = (max(var_11, var_8));
                                arr_13 [i_0] [i_2] [i_2] = var_7;
                            }
                        }
                    }
                }
            }
        }
        var_12 = -8167799012811336835;
    }
    var_13 = (~56);
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            {
                var_14 ^= 0;
                var_15 = 76;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            {
                var_16 ^= 1816689687;
                var_17 = (max((arr_22 [i_7]), ((1 ? -691956447 : 1816689672))));
            }
        }
    }
    #pragma endscop
}
