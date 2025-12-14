/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((((min(-6, 128))) - (var_7 + 1))))));
    var_13 = (var_7 < 103);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_14 *= (~192);
        arr_3 [i_0] [5] = (((arr_1 [i_0 + 1] [2]) ? (arr_0 [i_0 + 1]) : (arr_1 [i_0 + 1] [i_0 + 1])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 *= (102 / -12);

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_16 = (max(var_16, (~var_5)));
                        var_17 = (max(var_17, (!var_1)));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_18 = (min(var_18, 1711901472));
                        var_19 = (arr_0 [i_1]);
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 16;i_8 += 1)
                {
                    {
                        var_20 = 102;
                        var_21 = (min((154 | 3550193193), -1));
                        var_22 = var_5;
                        var_23 = (((arr_17 [i_8] [i_8 + 2]) || (((-32748 + (arr_17 [1] [i_8 + 2]))))));
                        var_24 = (((min((arr_21 [i_8] [i_8 - 1] [i_8 - 3] [i_8]), var_8)) << (((max(var_2, (13498161423676348401 || -32761))) - 663778782))));
                    }
                }
            }
        }
        var_25 -= (min((min(var_11, 154)), ((min((arr_14 [i_5] [i_5]), var_6)))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_26 = (arr_16 [i_9]);
        var_27 = (min(var_27, (((var_8 == (arr_22 [i_9] [i_9]))))));
    }
    var_28 ^= -1334441915;
    #pragma endscop
}
