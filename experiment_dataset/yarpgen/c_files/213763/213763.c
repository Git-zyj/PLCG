/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    var_16 = (min(((max((191 < -4377), var_14))), (min(var_7, var_7))));
    var_17 = ((19253 ? var_10 : (((((var_2 ? var_10 : var_14))) ? ((var_0 ? var_7 : var_10)) : var_2))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_18 = ((((((arr_0 [16]) ? (arr_0 [20]) : var_13))) != ((4352 ? 977254092 : 499701349))));
        arr_2 [i_0] [i_0] = ((~(arr_0 [i_0 + 2])));
        var_19 = (((1 < 17992002186290131286) || (((13884 ? 18446744073709551615 : var_12)))));
        var_20 = (((((arr_1 [i_0 + 2] [19]) ? 32767 : (arr_0 [i_0])))) ? (-18 ^ 51651) : var_12);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        var_21 = (max(var_21, (arr_6 [i_0 + 3] [i_3] [i_3 + 1])));
                        var_22 = (!-var_13);
                        var_23 |= (arr_0 [i_2]);
                        var_24 = -956902181;
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_25 = (arr_3 [i_0] [i_0] [i_0]);
                        var_26 *= var_8;
                        var_27 = (arr_9 [i_0] [i_0]);
                        var_28 = (arr_1 [2] [i_1]);
                    }
                    var_29 = 1;
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_30 += ((var_13 ? (arr_13 [0] [i_1] [i_0] [i_1] [i_1] [i_0]) : 956902181));
                                var_31 = ((var_7 * (var_8 != 17692727818052471990)));
                                arr_18 [i_0 + 3] [i_1] [i_0 + 3] [i_0] [i_0] [i_0 + 3] = (arr_15 [i_0 + 3] [i_0 + 3] [i_6]);
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        arr_22 [i_7] = (min((((((var_1 ? var_5 : 1332))) ? ((min(9949, -1281373891))) : (min(24718, var_6)))), var_14));
        var_32 = (!var_13);
        var_33 = (arr_0 [i_7]);
        var_34 -= ((var_4 ? (arr_4 [i_7] [i_7] [i_7]) : ((((643406307 ^ (arr_16 [i_7] [i_7]))) * -88))));
        arr_23 [i_7] = (arr_12 [i_7] [i_7] [i_7] [i_7] [i_7]);
    }
    #pragma endscop
}
