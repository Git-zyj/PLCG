/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max(-33, 0))) ? 1321496202593524421 : 0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    arr_9 [9] [i_1] [i_2] = 9223372036854775807;
                    arr_10 [i_0] [i_0] [i_2] = (max((arr_7 [i_0] [i_2]), ((((-33 ? var_18 : (arr_7 [i_0] [i_1])))))));
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    arr_13 [2] [i_1] [i_1] = (max((min(var_18, (arr_0 [i_3]))), (arr_0 [i_0])));
                    arr_14 [i_0] [i_1] [i_0] = ((((((arr_8 [5]) ? ((1 ^ (arr_8 [i_3]))) : 0))) ? (arr_8 [i_0]) : ((var_3 ? (arr_6 [i_0] [i_0]) : var_12))));
                }
                for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                {
                    var_21 = ((((((arr_4 [i_0] [i_1]) ? (arr_4 [2] [i_1]) : (arr_4 [i_0] [i_4])))) ? ((((arr_4 [i_0] [i_4]) ? (arr_4 [i_1] [i_4]) : 1097868826))) : ((18446744073709551615 ? (arr_4 [i_0] [i_1]) : var_8))));
                    var_22 = ((((min(var_14, (~var_12)))) ? ((((arr_5 [i_4] [i_1] [i_0]) != ((var_9 ? var_10 : (arr_11 [i_1])))))) : 7));
                    arr_18 [7] [i_4] [i_0] [i_0] = var_0;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_24 [i_6] [i_6] = 1;
                                arr_25 [i_0] [i_6] = (arr_15 [i_0] [i_0] [i_4] [i_5]);
                                arr_26 [i_0] [i_1] [i_0] [i_5] [i_6 + 1] [0] [i_6] = (arr_5 [i_6] [i_4] [i_1]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 7;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            arr_31 [i_0] [i_1] [i_7] [i_8] [i_7 + 3] [i_0] = (arr_27 [3] [i_7 - 1] [i_7 - 1] [i_7 + 2]);
                            var_23 = (max(var_23, (arr_11 [i_0])));
                            arr_32 [i_8] [i_7] [i_1] [i_1] [1] [i_0] = ((((((((arr_17 [7] [i_1] [i_7] [2]) ? var_10 : (arr_22 [i_0] [i_0] [i_1] [i_7] [i_1]))) & (arr_19 [i_0] [i_0] [i_0] [i_0])))) ? -80 : -24866));
                            arr_33 [i_0] [i_1] [i_7 + 3] [i_7] [i_8] = 221;
                        }
                    }
                }
                arr_34 [i_0] = (min(1, (((arr_28 [i_0] [i_1] [i_1]) ? (arr_11 [i_0]) : (arr_28 [i_0] [i_1] [i_1])))));
            }
        }
    }
    #pragma endscop
}
