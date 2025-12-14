/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, 65513));
    var_15 = (max(var_15, ((((var_12 ? ((171005113 ? 1 : 876343466)) : (-1 / 22))) << (188 - 177)))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_16 *= (arr_1 [i_0 + 1] [i_0 + 1]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_3 + 1] [i_2] [i_2] [i_0] [i_0 - 1] = ((!(((-(arr_4 [i_1 + 1] [i_3 + 1] [i_1 + 1]))))));
                                arr_16 [i_0] [i_0] [i_0 - 1] [i_2] = (arr_4 [i_0 - 1] [i_1 + 1] [i_2]);
                                arr_17 [i_0] [i_2] [i_2] = 65514;
                            }
                        }
                    }
                    var_17 = (max(var_17, 65528));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_18 ^= 65514;
        arr_21 [i_5] [i_5] = ((+(((arr_18 [4] [i_5]) ? 140737488355327 : (arr_20 [i_5])))));
        var_19 ^= 12;
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        arr_24 [0] = (((-2147483647 - 1) / (arr_6 [i_6] [i_6] [i_6] [i_6])));
        arr_25 [i_6] = 24;
        arr_26 [i_6] [i_6] = (arr_23 [i_6] [i_6]);
        var_20 = arr_3 [3] [i_6];
    }
    for (int i_7 = 3; i_7 < 13;i_7 += 1)
    {
        var_21 *= arr_27 [i_7 - 2];
        arr_29 [i_7] = (arr_28 [i_7 - 1]);
    }
    #pragma endscop
}
