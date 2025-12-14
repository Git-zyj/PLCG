/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                    {
                        var_18 = (!-1);
                        arr_9 [10] [10] [11] [i_3] = (((var_2 > 65535) + (arr_1 [i_1 + 1])));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        var_19 = ((+((((arr_11 [i_4] [i_4] [i_4] [i_2] [i_2] [i_4]) != var_11)))));

                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_20 *= -var_10;
                            var_21 = var_4;
                        }
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        var_22 = (min(var_22, (((!(((arr_1 [i_0]) < (max(var_8, 132)))))))));
                        arr_18 [1] [i_1 - 2] [i_2] [i_6] [i_6] [i_2] = (((min((8029 - 0), (((204 < (arr_2 [i_2])))))) + (((!18446744073709551615) - -18446744073709551615))));
                        arr_19 [2] [i_1 - 2] [i_2] [i_6] [i_1] |= ((((((max((arr_16 [i_6]), (arr_6 [i_6] [i_6] [i_6] [i_6])))) * (max(236, 18446744073709551602)))) - (((((max(var_2, var_16)) < (78 - -1708177262884983924)))))));
                        var_23 = ((!(((var_5 + (var_11 + var_8))))));
                    }
                    arr_20 [8] [8] [i_2] &= (max((-var_4 - -var_14), (((!(var_11 - -10932))))));
                    var_24 *= (((~((var_5 - (arr_2 [9]))))));
                }
                var_25 = ((((((((243 << (-62 + 84))) < (!var_14))))) - ((-(arr_17 [i_1 - 1] [i_1] [i_1] [i_0])))));
            }
        }
    }
    var_26 = var_10;
    var_27 = (((((~-1) | var_6)) != var_7));
    #pragma endscop
}
