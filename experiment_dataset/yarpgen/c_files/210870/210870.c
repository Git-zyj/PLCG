/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((max(var_8, (!var_2))));
    var_11 = (min((max(0, -9141688562105671534)), var_0));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [5] = 9141688562105671534;
            var_12 -= var_6;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_8 [i_2] = (((var_9 + 9141688562105671533) ? var_8 : (~-9141688562105671522)));
            var_13 &= 2139038311;
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            arr_15 [i_2] = ((var_8 ? (arr_7 [i_5] [i_2] [i_0 - 1]) : (arr_6 [i_2] [i_2] [i_3 - 2])));
                            var_14 = (!var_2);
                            var_15 = (arr_1 [i_5]);
                            arr_16 [i_0] [i_2] [i_3 - 1] [i_2] [i_5] = 1;
                            arr_17 [i_0 + 1] [i_2] [i_2] [i_4] [i_5] = ((var_3 ? var_9 : ((var_8 ? var_0 : var_0))));
                        }
                        for (int i_6 = 2; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            var_16 = (min(var_16, (((((arr_13 [i_0] [i_2] [i_3] [i_4] [i_6 + 2]) ? (arr_10 [i_4] [i_2] [i_3 + 2] [i_4]) : var_8))))));
                            var_17 = var_4;
                            var_18 = ((var_9 < (((arr_6 [i_2] [i_2] [i_2]) ^ 9141688562105671533))));
                            var_19 *= 330742209;
                            arr_21 [i_6] [i_6] [i_6] [i_6] [2] [i_2] = ((var_5 >> (-96 + 100)));
                        }
                        for (int i_7 = 2; i_7 < 11;i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_2] = (!4907);
                            var_20 = (!(arr_22 [i_0 + 2] [i_3] [i_0 + 2] [i_4] [i_7] [3] [i_2]));
                            var_21 = (((((var_9 ? (arr_19 [i_0] [i_0] [3] [i_2] [i_0]) : var_6))) * (var_0 - var_5)));
                        }
                        var_22 = var_8;
                        arr_26 [i_2] [i_3 + 3] = ((!(arr_11 [i_0 - 1])));
                    }
                }
            }
        }
        arr_27 [i_0] = (min((((arr_4 [i_0 - 1] [i_0 + 2]) >> 1)), ((min(1488665213, (arr_19 [i_0 - 1] [i_0 + 1] [i_0 + 2] [2] [i_0 - 1]))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                {
                    arr_34 [5] [i_8] [11] = (((((!(((~(arr_31 [i_8] [1]))))))) >> (var_1 - 51)));
                    arr_35 [i_0 + 2] [i_8] [i_9] = ((~(arr_0 [i_0 + 1] [i_0 + 1])));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            {
                                arr_40 [i_0] [i_0] [i_11] [i_9] [i_9] [0] [i_11] = (max((((var_6 ? 2389815714234011301 : var_3))), ((min((arr_32 [i_8]), (arr_32 [i_10]))))));
                                var_23 = (!((min(6034619884163980320, (var_2 <= 928127570)))));
                                arr_41 [i_11] = (min(-var_3, ((max(var_8, (arr_2 [i_9]))))));
                                var_24 = (max(var_24, ((((((((((arr_28 [i_8]) ? (arr_18 [i_8]) : 73))) ? (arr_19 [i_0] [i_0 - 1] [i_9] [i_9] [i_0 - 1]) : ((3469594881 ? 5933251385661845 : 1051866025))))) ? 22282 : (min((!49406), var_0)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_12 = 2; i_12 < 13;i_12 += 1)
    {
        arr_44 [i_12] [i_12] = (arr_43 [i_12 + 1]);
        var_25 = ((((arr_43 [i_12 + 1]) ? (arr_42 [i_12]) : (((arr_42 [i_12]) ? (arr_42 [i_12 - 1]) : var_3)))));
    }
    #pragma endscop
}
