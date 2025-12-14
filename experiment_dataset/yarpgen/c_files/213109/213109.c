/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((min(var_15, var_13)), ((min(var_17, var_7)))));
    var_20 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, (((((~(arr_12 [i_4] [i_2] [i_2] [i_0] [i_0]))) / 2001983415)))));
                                arr_13 [i_0] [i_0] = -8740;
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (max((arr_5 [i_1] [i_2] [i_2]), (arr_3 [i_3])));
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [i_0] = (~((~(((!(arr_11 [i_0] [i_0] [i_1] [i_0] [i_2])))))));
                    arr_16 [i_0] = ((((((((56 ? 9029146035377384535 : 1212830259))) - (min(18446744073709551605, var_14))))) ? (min((max(1, -3738261277725226853)), (((arr_5 [i_0] [i_0] [i_2]) ^ -8856672112349935980)))) : ((var_18 ? (arr_6 [i_0] [i_0] [i_1] [i_1] [i_2]) : 238))));
                    var_22 *= 3953226858;

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            var_23 = (min(var_23, (max(-3738261277725226853, var_15))));
                            arr_22 [i_0] = (((-6 + 2) ? ((max((18804 || 1), -23780))) : (min((~18), ((3 ? 232 : 247))))));
                            arr_23 [i_0] [i_0] [i_2] [i_0] [i_5] [i_0] = ((((((-9223372036854775807 - 1) ? 65535 : 5191359747270957349))) ? (arr_6 [i_0] [i_1] [i_0] [i_5] [i_6]) : (((1 ? var_2 : var_18)))));
                            arr_24 [i_0] [i_0] [i_1] [i_2] [i_5] [i_6] = (min((((-(var_3 && 8)))), ((((max(18, var_18))) ? (~var_17) : 14238327852064432858))));
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            arr_27 [i_7] [i_0] [i_2] [i_0] [i_0] = ((-(min(1, 1344485561))));
                            arr_28 [i_0] = ((14803011798542927604 ? 1 : (((-9223372036854775807 - 1) ? -7517821017439671983 : ((3687074857769747020 ? 16211636092206822138 : 5))))));
                            var_24 = (min(var_24, (~4294967265)));
                            arr_29 [i_0] [i_5] [i_0] = ((((-((-(arr_4 [i_1] [i_2] [i_0] [i_7])))))) ? (((1 * 49152) ? -1 : 18802)) : -1);
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                        {
                            arr_33 [i_0] [i_8] [i_0] [i_0] [i_0] = (((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_5])));
                            var_25 = (max(var_25, (((!(arr_26 [i_0] [i_0] [i_0] [i_0]))))));
                        }
                        arr_34 [i_0] [i_0] [i_1] [i_2] [i_0] [i_5] = (((((5 ? (max(var_4, 18446744073709551615)) : 2287726545))) ? (-9223372036854775807 - 1) : (~var_4)));
                        arr_35 [i_0] [i_1] [i_0] [i_5] [i_1] = (arr_10 [i_5] [i_0] [i_2] [i_1] [i_0]);
                        var_26 = ((max((!0), ((var_9 ? 1879416872493883332 : 1)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
