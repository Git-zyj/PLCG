/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_17;
    var_21 += var_17;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_22 = var_10;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [0] [2] = var_17;
                                arr_15 [i_2] [6] = var_8;
                                var_23 = (min(var_23, var_5));
                            }
                        }
                    }
                }
            }
        }
        var_24 ^= var_12;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 11;i_6 += 1)
            {
                {
                    var_25 = var_16;
                    var_26 = var_6;
                    var_27 = (max(var_27, var_18));
                    arr_21 [i_0] [1] [i_0] [i_0] = var_19;
                }
            }
        }
        arr_22 [i_0] = var_17;
        arr_23 [i_0] [6] = var_5;
    }
    #pragma endscop
}
