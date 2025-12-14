/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        var_11 -= 2016;
                        arr_10 [i_3 + 1] [i_0] [i_1] [i_0] [i_0] = ((-2016 ? (-2016 & 5109053989498046746) : 433288392));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_12 *= -2013;
                            arr_16 [i_0] [i_0] [11] [11] [11] = 1068450741643395886;
                            arr_17 [i_5] [i_1] [i_1] = var_4;
                            var_13 = (((arr_12 [i_1] [i_0]) - 5109053989498046746));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [1] = 2026;
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_21 [i_0] [i_0] [i_6] [i_4] [i_6] = (0 - var_2);
                            var_14 *= arr_20 [i_2] [i_2] [i_2];
                        }
                        arr_22 [14] [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_3 [i_0] [i_2]) == (arr_3 [i_4] [i_1])));

                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            arr_25 [i_2] [i_7] = (18446744073709551614 ? 34909494181888 : 433288369);
                            var_15 &= ((var_8 ? 4189042262 : (arr_2 [2] [i_1])));
                            var_16 = var_4;
                            var_17 = (1023139540 == 532676608);
                        }
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_18 = (min(var_18, ((((arr_26 [i_8] [i_4] [8] [i_1] [i_0]) ? (((var_4 ? var_1 : 1288789269))) : 5109053989498046750)))));
                            arr_30 [i_8] [i_2] [i_2] [1] [i_0] = 1;
                            var_19 = (var_5 ? (arr_0 [i_8] [i_0]) : 18446744073709551609);
                        }
                        for (int i_9 = 0; i_9 < 0;i_9 += 1)
                        {
                            var_20 = var_6;
                            var_21 = ((((3149289680 ? -2029 : 2))) ? ((var_1 ? var_4 : 0)) : 16777200);
                        }
                    }
                    var_22 = 0;
                    arr_33 [i_0] [i_1] [i_0] = 2797941758;
                    var_23 = (((arr_32 [i_2] [1] [i_1] [i_0] [i_0] [i_0]) ? 2042 : 958269080));
                }
            }
        }
    }
    var_24 = ((((var_5 ? var_7 : var_6))) ? var_8 : 5977905177606449953);
    #pragma endscop
}
