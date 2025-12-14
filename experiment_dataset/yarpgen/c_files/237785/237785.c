/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    var_18 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] = (45776 ? 45785 : 0);
                var_19 = ((-8715744098609568633 > (((var_4 % (1 * -1))))));
                arr_5 [i_1] [i_1] = var_3;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_0] [i_1] = (((var_10 | 46030) ? ((((arr_6 [i_2]) | var_2))) : var_8));
                    var_20 = (((arr_0 [i_1 - 1]) ? var_16 : (arr_0 [i_1 + 1])));
                    var_21 = ((-(arr_3 [i_0] [i_1 + 1])));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_22 = (((arr_12 [i_1 - 1] [i_1 - 1]) ? (arr_12 [i_1 + 1] [i_1 - 1]) : (arr_12 [i_1 - 1] [i_1 + 1])));
                            arr_15 [i_2] [i_1] [i_2] = 1;
                        }
                        var_23 = ((3842769945 ? ((var_11 ? 840832264 : (arr_6 [i_0]))) : (arr_3 [i_1 + 1] [i_3])));
                        arr_16 [1] [i_1] [1] [i_3] [i_3] [1] = ((var_4 + 2147483647) << (((var_2 & 109) - 72)));
                        arr_17 [i_0] [i_1] [i_0] [i_2] [i_0] [i_3] = (var_16 ? ((var_13 ? var_9 : var_8)) : var_0);
                        var_24 = ((((var_13 ? (arr_6 [i_0]) : var_10)) & 1));
                    }
                    for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_5 - 1] [i_0] [i_0] = ((!(((var_3 >> (((arr_19 [i_0] [i_1] [i_1]) - 148)))))));
                        var_25 = (~3842769945);
                    }
                    for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        arr_25 [i_2] = var_11;
                        arr_26 [i_0] [10] [i_0] [i_2] = ((((var_4 ? 1 : (arr_8 [i_1] [i_6]))) >= (arr_18 [i_0] [i_1 - 1] [i_2] [i_6 + 2])));
                        arr_27 [i_0] [i_0] [i_0] [i_6] = (~38901);
                        arr_28 [i_0] [i_1] [i_0] [i_1] = -12;
                        var_26 = -8465114548707047396;
                    }
                    var_27 = ((arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 - 1]) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_1 - 1] [i_1 + 1]) : (arr_10 [i_1] [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 1] [i_1 - 1]));
                }
                var_28 = (max((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]), ((1 ? (var_1 * var_11) : var_11))));
            }
        }
    }
    #pragma endscop
}
