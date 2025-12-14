/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 15;i_4 += 1) /* same iter space */
                        {
                            var_13 = (min(var_13, -9));
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0] [i_4] = ((~(arr_9 [i_2] [i_2])));
                        }
                        for (int i_5 = 1; i_5 < 15;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_0] [i_0] [i_5] [i_0] [i_0] [i_0] = ((+(((arr_4 [i_2] [i_2] [i_2 + 3]) | (arr_12 [i_1] [i_2] [i_2 + 1] [i_5 - 1] [i_5 + 3] [i_5])))));
                            arr_18 [i_0] [i_1] [i_5] [i_3] [i_5] [i_0] [i_5] = (3 ? 1067633084 : -9176176632656535083);
                        }
                        var_14 = (min(var_14, (((var_1 + ((var_1 - (arr_0 [i_2 + 3]))))))));
                    }
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        arr_22 [i_0] [i_0] [i_1] [i_1] [i_2 - 1] [i_6 + 1] = (~var_3);
                        var_15 = (min(var_15, -6887313088386656347));
                        var_16 = ((((min((arr_7 [i_2 - 3] [i_2 + 3] [i_2 - 1]), (1 & 11429)))) == var_0));
                        var_17 = ((((-((var_4 + (arr_16 [i_6] [i_0]))))) <= (((var_6 ? ((min(var_12, var_6))) : (236 <= 32750))))));
                        var_18 = (arr_1 [i_1]);
                    }
                    for (int i_7 = 3; i_7 < 17;i_7 += 1)
                    {
                        arr_26 [i_0] [i_0] [i_0] |= ((((min((arr_15 [i_7 - 1]), 9059534133816509480))) ? (arr_15 [i_7 - 2]) : ((min((arr_15 [i_7 - 3]), var_6)))));

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_19 = (-32760 ? (-32767 - 1) : ((-(arr_4 [i_2 - 2] [i_2 + 2] [i_7 - 3]))));
                            var_20 = 32760;
                            arr_31 [i_0] [i_7] = var_2;
                            arr_32 [i_0] [i_1] [i_2] [i_7] [i_8] = ((max(((-(arr_24 [i_0] [i_0] [i_0]))), var_0)) + var_7);
                        }
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            var_21 = (arr_24 [i_0] [i_0] [i_0]);
                            arr_35 [i_0] [i_1] [i_1] [i_0] [i_7] [i_7] [i_7] = (arr_6 [i_9] [i_1] [i_0]);
                            arr_36 [i_9] [i_7] [i_7] [i_0] = (arr_11 [i_7 - 2] [i_7 - 2] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1]);
                            var_22 = ((((((arr_34 [i_0] [0] [i_7 - 1] [i_7]) % (arr_34 [i_9] [i_1] [i_7 + 1] [5])))) ? (arr_34 [i_0] [i_1] [i_7 - 3] [i_7]) : ((((!(arr_34 [i_0] [i_9] [i_7 - 2] [i_9])))))));
                            arr_37 [i_2] [i_1] [i_7] [i_7] [i_1] = ((-22247 ? (arr_13 [i_9] [i_9] [i_7] [i_2 + 2] [i_1] [i_0]) : 18));
                        }
                        var_23 &= (((((((((((arr_2 [i_0] [i_0]) + 2147483647)) >> (2147483647 - 2147483622)))) ? 3 : ((-(arr_33 [i_7] [i_0] [i_7 + 1] [i_7])))))) ? (((((~(arr_20 [i_0] [i_0] [i_0] [i_0]))) > (((var_11 > (arr_29 [i_7] [i_2] [i_1] [i_0] [i_0]))))))) : var_10));
                        arr_38 [i_7] [i_7] [i_2] [i_7] [i_0] = -var_12;
                        arr_39 [i_7] [i_7] [i_2] [i_2] = 31;
                    }
                    var_24 = ((((arr_7 [i_2 - 3] [i_2 - 2] [i_2 - 2]) ? (arr_7 [i_2 + 2] [i_2 + 2] [i_2 + 3]) : (arr_7 [i_2 - 3] [i_2 + 1] [i_2 - 2]))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            {
                arr_46 [i_10] [i_10] = (arr_45 [i_10]);
                var_25 = -4452750498955799138;
            }
        }
    }
    #pragma endscop
}
