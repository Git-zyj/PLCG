/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            {
                var_10 = -1900399810;

                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        var_11 |= (((arr_10 [i_0] [i_0] [i_0] [i_2 + 2]) || (arr_8 [i_1 + 1] [i_2 + 1] [i_2] [i_2 + 2])));
                        var_12 = ((var_2 ? var_9 : (arr_7 [i_0])));
                        arr_11 [i_3] [i_1] [i_1] [i_0 - 2] = 17757;
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        var_13 = var_4;
                        var_14 = -21039;
                        arr_14 [i_0] = var_6;

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_15 = ((((!(arr_8 [i_0] [i_2 - 1] [i_1 - 1] [i_0 - 4]))) ? (!625269940822274775) : (-14 || -737206399)));
                            var_16 = (((!var_4) ? (max((arr_10 [i_0] [i_2] [i_4] [i_4]), ((((arr_7 [i_1]) || (arr_10 [i_1] [i_1] [i_4] [6])))))) : (!var_3)));
                            var_17 = (252 || 65510);
                            arr_18 [i_5] [i_5] [i_5] = ((((min(-1589340804, -17672))) ? (737206407 || 2147483647) : -625269940822274775));
                        }
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            arr_23 [i_0 + 2] [i_0 + 2] [i_2 + 2] [8] [i_4] = 18429615003884108177;
                            var_18 |= (max((arr_12 [i_6 + 1] [2] [i_6] [i_6] [i_6 + 1] [i_0 + 2]), (!-737206399)));
                            var_19 *= ((((((arr_12 [0] [0] [i_2 - 1] [i_2 - 1] [0] [i_2]) ? 0 : (arr_4 [i_2] [i_2 + 1] [5])))) || ((((arr_7 [i_1 + 4]) ? var_4 : (arr_4 [i_4] [i_0 + 1] [i_0 + 1]))))));
                            arr_24 [i_0] [i_0] [i_0 - 2] = (arr_0 [7]);
                        }
                        for (int i_7 = 1; i_7 < 8;i_7 += 1)
                        {
                            arr_27 [i_0 + 3] [i_0] [i_0 + 1] [i_7] [i_0 - 2] = var_1;
                            arr_28 [i_0] [5] [i_4] [i_7] = ((((0 ? -1483003134 : 772100937)) + (((((min(737206399, (arr_15 [i_0] [i_0] [i_1] [i_1] [i_2] [i_4] [i_7 + 2])))) ? (max((arr_16 [i_7]), (arr_15 [i_0 + 1] [i_0 + 1] [i_2] [i_2] [i_0 + 1] [1] [1]))) : ((((arr_16 [i_2]) || var_0))))))));
                            arr_29 [i_7] [i_4] [i_2] [9] [i_7] = (arr_5 [i_0] [i_0]);
                            var_20 = (!-14);
                            var_21 += var_1;
                        }
                        var_22 = (arr_0 [i_1 + 2]);
                    }
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_23 = var_8;
                        var_24 *= (min(((((((arr_8 [i_0] [i_1] [i_1] [i_8]) + (arr_19 [i_0] [i_1 - 2] [i_2] [i_2] [i_8])))) & (max(-30630, -625269940822274775)))), (arr_6 [i_1])));
                    }
                    arr_33 [i_0] [0] [i_0 - 3] [i_0] = ((((((arr_3 [i_0 + 3] [1]) ? (arr_25 [i_0] [i_0] [i_0] [i_0 + 3] [i_0]) : (arr_25 [i_0] [i_0] [i_0 - 4] [i_0 - 2] [i_0 + 2])))) ? (max((arr_25 [i_1] [i_0] [i_0 - 3] [i_0 - 2] [i_0]), (arr_25 [i_0] [i_0] [i_0] [i_0 - 3] [i_0 - 4]))) : (((arr_3 [i_0 + 2] [i_0]) ? -79 : 772100937))));
                }
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    var_25 = (min(737206399, 1249504083));
                    arr_37 [i_9] = (!var_6);
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 8;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 9;i_11 += 1)
                        {
                            {
                                var_26 = (min(182, 4263629885));
                                arr_42 [i_0] [i_0] [i_9] [i_0] = ((!(arr_1 [i_9])));
                                var_27 *= ((20667 - (((arr_3 [i_0 + 3] [i_0 - 3]) ? (arr_2 [i_0] [i_0 - 3]) : (arr_3 [i_0] [i_0 - 3])))));
                            }
                        }
                    }
                }
                arr_43 [i_1 + 3] = ((!((max(var_1, (arr_20 [i_1 + 1] [i_0 + 2] [i_0 - 3] [i_0 + 2] [i_0 - 3]))))));
            }
        }
    }
    var_28 = (((!3) ? var_8 : var_1));
    var_29 = (((var_6 < var_3) - var_6));
    var_30 = var_0;
    var_31 = var_4;
    #pragma endscop
}
