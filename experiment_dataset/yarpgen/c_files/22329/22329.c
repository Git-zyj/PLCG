/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_11 = (!34);
                                var_12 = (~var_6);
                                var_13 += -32747;
                            }
                        }
                    }
                }
                var_14 = arr_8 [i_0] [i_0] [i_1];
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_15 -= ((((((arr_11 [i_5] [i_5]) ? 1707128689 : var_8))) ? (~var_5) : ((145 ? -1162054187420637302 : 32739))));
        /* LoopNest 3 */
        for (int i_6 = 4; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {
                        arr_21 [i_5] [i_6] [i_6] [i_7] [i_7] [i_8] = ((var_6 ? 24576 : (((var_0 ? var_7 : 32746)))));
                        var_16 = (arr_20 [i_7 - 2] [i_7 - 2] [i_7 - 2]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
