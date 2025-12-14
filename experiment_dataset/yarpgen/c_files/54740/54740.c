/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_16 = 1125899906834432;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [14] [i_0] [i_0] [i_0] = (arr_3 [i_1 + 1] [i_0]);
                                arr_12 [i_4] [i_4] [i_4] [i_3] [i_0] = (~var_1);
                                var_17 = (!1443347364);
                            }
                        }
                    }
                    arr_13 [9] [i_0] [i_0] [i_0] = var_1;
                    arr_14 [i_0] = ((~((1019671588 ? (65535 | 4294967282) : var_11))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 16;i_8 += 1)
                {
                    {
                        var_18 = ((~(((~-2056367473) ? (((-(arr_24 [i_5])))) : 13))));

                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            arr_30 [14] [i_6] [15] [i_9] [i_9] = ((((min(var_15, (((-(arr_19 [i_9] [i_9] [i_9]))))))) ? (min((arr_29 [i_6] [i_7] [i_9] [i_8 - 2] [i_7 - 3]), var_5)) : var_8));
                            var_19 = (max(var_19, (((((((653405928 < var_9) + ((var_6 ? 653405928 : var_8))))) || (arr_26 [i_5] [2] [i_7] [i_8 + 2] [i_9]))))));
                        }
                        for (int i_10 = 2; i_10 < 19;i_10 += 1)
                        {
                            var_20 = (min(var_20, ((min((((((arr_26 [12] [i_6] [12] [i_6] [7]) ? (arr_20 [i_8] [i_10 - 2]) : -1697068163)))), ((var_15 % (((var_4 | (arr_27 [i_5] [i_6] [i_7] [i_8] [i_10] [i_5])))))))))));
                            var_21 = (!653405913);
                        }
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            arr_35 [i_5] [i_6] [i_7] [i_11] [i_11] = ((((min((~32), -0))) ? ((((((((arr_31 [i_5] [i_6] [1] [i_7] [i_7 + 3] [i_6] [i_11]) ? -22650 : 33605)) + 2147483647)) >> (((arr_22 [i_7 + 2] [i_7 - 3] [i_7 + 3]) - 3466704512))))) : 14547));
                            arr_36 [i_11] [i_6] [i_6] [18] = (!((((2147483647 <= 1196911597) ? 0 : 356334119821320204))));
                            var_22 = (arr_28 [i_7] [18]);
                            arr_37 [i_5] [i_5] [i_5] [i_5] [i_6] = ((-(7862809384288991707 / 2923676294386423361)));
                        }
                        arr_38 [i_5] [i_5] [i_8] [i_8 - 2] &= (((var_8 % var_11) % var_7));
                    }
                }
            }
        }
        var_23 = (max(((max(9223372036854775807, 41127))), ((var_6 ? (max((arr_27 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]), var_4)) : (((var_1 & (arr_15 [12]))))))));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 18;i_13 += 1)
            {
                {
                    var_24 = ((((109 ? var_9 : var_4)) / ((min((arr_26 [i_13 + 2] [i_12] [i_12] [i_5] [i_5]), var_14)))));
                    arr_43 [i_5] [i_13] [i_13] [i_12] = ((-(((min(25636, 127))))));
                }
            }
        }
        var_25 = (((arr_17 [i_5] [i_5]) <= (((4294967283 ? ((max(var_1, var_1))) : (((arr_15 [i_5]) ? 13054 : (arr_15 [i_5]))))))));
    }
    var_26 = (((((-((var_1 ? var_7 : 4))))) ? 10370118254490207578 : (!var_12)));
    #pragma endscop
}
