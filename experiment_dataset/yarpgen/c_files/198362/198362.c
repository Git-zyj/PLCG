/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = ((-(arr_0 [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_13 [i_1] [i_1] [1] [i_3] = (arr_2 [i_0]);
                            var_18 = ((!(arr_12 [11] [i_2] [i_1] [i_0])));
                            var_19 = (((arr_7 [17] [i_0]) & -13));
                        }
                    }
                }
                var_20 = (((((356377245 / (((max(110, 15934))))))) ? ((15 ? 3938590040 : 3513155091)) : (((~(arr_7 [i_0] [i_0]))))));
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_21 [i_5] [i_1] = (arr_1 [i_0]);
                                var_21 = ((21 & ((((59 > 1019368984) < 35578)))));
                                var_22 = (!218);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_23 = arr_5 [i_1] [16] [i_1] [i_1];
                            var_24 = var_9;
                            arr_28 [i_0] [i_1] [i_7] [i_8] = ((~(~-1)));
                            var_25 = (min(((~(arr_19 [i_7 - 1] [18] [i_7 + 2]))), (var_3 / 1634238208145595182)));
                        }
                    }
                }
            }
        }
    }

    for (int i_9 = 1; i_9 < 11;i_9 += 1) /* same iter space */
    {
        var_26 = (((arr_1 [i_9]) ? ((-16 ? 29945 : 3)) : (((arr_8 [i_9] [i_9] [i_9 + 3]) ? ((~(arr_20 [i_9 - 1] [i_9 + 3] [14] [8] [i_9] [6] [i_9 + 2]))) : (~-119)))));
        arr_32 [i_9] [i_9 + 2] = ((((1 ? (arr_27 [i_9] [i_9] [i_9 - 1] [i_9] [i_9 + 2] [15]) : 18446744073709551615)) ^ (((~(~49615))))));
    }
    for (int i_10 = 1; i_10 < 11;i_10 += 1) /* same iter space */
    {
        arr_35 [10] [i_10] = ((!((min(((((arr_17 [18] [0] [0] [i_10] [i_10 + 1] [i_10]) < var_10))), ((var_5 ? (arr_24 [i_10] [i_10 + 3]) : -127)))))));
        var_27 = 1487048629;
    }
    for (int i_11 = 1; i_11 < 12;i_11 += 1)
    {
        var_28 = 86;
        var_29 = (arr_12 [10] [i_11] [10] [11]);
        var_30 = (((arr_9 [i_11 - 1] [i_11 + 1] [i_11] [i_11 + 1]) <= ((((((arr_16 [i_11] [i_11] [i_11] [i_11]) > (arr_5 [16] [16] [i_11] [16]))) ? ((((arr_3 [4] [i_11 + 1] [4]) < var_8))) : -121)))));
    }
    var_31 = ((var_12 >> (35592 - 35561)));
    var_32 = 6851;
    #pragma endscop
}
