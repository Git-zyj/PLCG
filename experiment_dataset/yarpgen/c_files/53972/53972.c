/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((((~(-32767 - 1)))), var_11));
    var_17 *= max(var_13, (((var_2 >= 2241832961) ? var_8 : var_4)));
    var_18 = ((var_14 << (((min(((var_2 ? var_2 : var_15)), (((-2147483619 ? 32756 : -389005386))))) - 32754))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [1] = 8132552066385301799;
        var_19 = (max(var_19, ((((((-(arr_0 [i_0])))) ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = 15368568555315044757;

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_20 = (var_3 != 9013);
                            arr_15 [i_0] [i_1 - 2] [i_2] [i_3] |= (((arr_12 [i_2 - 2] [i_2] [i_2] [i_2]) ? (arr_12 [i_2 + 2] [i_2 + 1] [i_2] [i_2 + 2]) : (arr_13 [i_2 - 1] [i_2] [i_2] [1] [i_2 - 1])));
                            arr_16 [i_0] [i_1 + 1] [i_2] [i_3] [1] = (2920976727937294357 == 0);
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                        {
                            var_21 = var_12;
                            arr_19 [i_0] [i_1 + 1] [i_2 - 1] [i_3] [i_3] [i_5] = (((((var_11 ? 1 : var_15))) ? (!var_10) : var_0));
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_1] [i_1] [i_1 + 3] = (arr_7 [i_0] [6] [i_2]);
                            arr_25 [i_0] |= ((~((var_11 ? var_2 : (arr_23 [i_3] [15] [i_3] [i_3] [i_3] [i_3])))));
                            var_22 -= (((arr_10 [i_2 - 1] [i_2] [i_2] [i_2 + 2] [i_2 - 1] [i_2 + 2]) / (arr_10 [i_2 - 1] [i_2] [i_2] [i_2 + 2] [i_2 - 1] [i_2])));
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            arr_29 [i_0] [i_0] [i_0] [i_2] [i_2 - 1] [i_3] [i_0] = ((var_7 >> ((((~(arr_26 [i_7] [i_7] [i_7] [i_7] [i_7]))) + 68))));
                            arr_30 [i_0] [i_0] [17] [i_0] [i_0] [i_0] = ((-(arr_13 [i_2 - 2] [i_2 + 1] [i_2] [i_2] [i_2 - 1])));
                            var_23 = arr_4 [i_0] [i_0] [i_0];
                            var_24 = (((arr_7 [i_1 + 1] [i_2 - 1] [i_3]) << (var_2 + 12323)));
                            var_25 = var_15;
                        }
                        arr_31 [i_0] [i_0] = (((arr_28 [i_1 + 1] [i_1 + 1] [i_1 - 2]) ? var_10 : var_11));
                    }
                    var_26 += -2147483619;
                }
            }
        }
    }
    var_27 = var_6;
    #pragma endscop
}
