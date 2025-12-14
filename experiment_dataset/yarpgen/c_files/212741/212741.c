/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
        var_17 = (max(var_17, (((((((arr_0 [i_0]) ? 1105008080417395874 : (arr_2 [i_0])))) || 1481702772027060334)))));
        var_18 = (max(var_18, (arr_2 [i_0])));
        var_19 &= (((((-(arr_1 [i_0] [17]))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_20 = (((-(arr_4 [i_1] [i_1]))));
        arr_7 [i_1] = (i_1 % 2 == 0) ? (((~(min((arr_0 [i_1]), (((27167 % (arr_5 [i_1]))))))))) : (((~(min((arr_0 [i_1]), (((27167 * (arr_5 [i_1])))))))));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_21 &= 41411;
        var_22 = (max(var_22, ((((((arr_0 [i_2]) ? var_12 : ((min(24111, var_14))))) | (((~1348637329) ? ((var_1 ? var_4 : -26)) : ((-(arr_5 [14]))))))))));
        arr_11 [i_2] &= (((arr_0 [i_2]) < (((((arr_0 [i_2]) >= (arr_0 [i_2])))))));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] [i_3] &= ((var_16 * (((((min(1105008080417395874, 17341735993292155723)) != (~var_16)))))));
        arr_15 [i_3] = var_8;
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                {
                    var_23 &= (arr_24 [i_5] [i_5] [i_5] [i_5]);

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        arr_28 [14] [i_5] [i_6] [i_7] &= (arr_18 [i_5]);
                        arr_29 [2] [i_4] [9] [i_7] = ((-(arr_20 [i_4] [i_5] [i_7])));
                        arr_30 [i_6] [i_4] [i_4] [i_5] [i_4] = (arr_25 [i_6]);
                    }
                }
            }
        }
    }
    var_24 = var_9;

    /* vectorizable */
    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
    {
        var_25 = (arr_19 [i_8] [i_8]);

        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                arr_40 [i_8] [i_8] &= 1105008080417395874;
                arr_41 [i_10] = ((var_8 >= (arr_13 [i_8] [i_10])));
            }
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        {
                            var_26 = 17341735993292155741;
                            var_27 = (arr_38 [i_8]);
                        }
                    }
                }
            }
            arr_49 [i_9] [1] = (1 ^ var_15);
            arr_50 [i_9] = (((arr_25 [i_8]) ? (arr_5 [i_8]) : (!48)));
        }
        arr_51 [i_8] [i_8] = (arr_21 [i_8] [i_8]);
    }
    for (int i_14 = 0; i_14 < 13;i_14 += 1) /* same iter space */
    {
        arr_55 [i_14] [i_14] = (min(((((13545542447607226394 != (arr_33 [i_14]))) ? 1 : (~1105008080417395881))), (max(var_10, 1105008080417395913))));
        var_28 = ((var_4 && (arr_5 [i_14])));
    }
    #pragma endscop
}
