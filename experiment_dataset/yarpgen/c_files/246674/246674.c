/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1264092361;
    var_20 ^= (((((~((0 ? 3 : var_11))))) * ((((var_4 ? 27280 : var_7)) / var_3))));
    var_21 = var_0;
    var_22 = (max(27296, 15284543087330327791));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            arr_16 [i_2] [i_1] [i_1] [i_4 - 1] = (arr_9 [i_2] [i_1] [i_2] [i_4 + 1]);
                            var_23 = (max((arr_1 [i_3]), ((((arr_1 [i_2]) == var_5)))));
                            var_24 = ((!(-2147483647 - 1)));
                        }
                        arr_17 [4] [8] [i_1] [i_2] [i_2] = (min((max(var_9, (arr_14 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0]))), ((57674 ? (arr_14 [i_0] [i_2] [i_2] [i_2] [i_2] [i_3]) : (arr_14 [i_0] [i_2] [i_1] [i_3] [i_2] [i_3])))));
                        var_25 = ((var_6 == ((((!((((arr_4 [i_3] [i_2]) ? 3369475512 : var_16)))))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                    {
                        var_26 *= (((((var_18 ? var_15 : (arr_6 [i_0] [i_1])))) ? var_17 : var_13));

                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            var_27 ^= ((var_0 ? (arr_7 [i_6 + 1] [i_6 + 1] [i_6 - 1]) : (arr_7 [i_6 + 1] [i_6 - 1] [i_6 + 1])));
                            arr_24 [i_0] [i_0] [i_2] [i_5] [i_6] [i_2] = (25460 == 1);
                            arr_25 [17] [i_0] [i_1] [i_2] [i_5] [1] [i_2] = (arr_14 [i_6 + 1] [i_2] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 - 1]);
                        }
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            arr_30 [i_2] [i_2] = (~var_13);
                            arr_31 [i_1] [i_2] [i_2] = var_3;
                            var_28 ^= ((var_17 ? var_4 : var_13));
                        }
                    }
                    var_29 ^= 14081;
                    var_30 = var_15;
                    var_31 = (((((11087116166173231596 % (((-43 ? -34 : -7217)))))) ? ((((min(var_15, (arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (max(var_7, 34)) : (((max(var_5, var_3)))))) : ((109 ? (-32767 - 1) : var_7))));
                }
            }
        }
    }
    #pragma endscop
}
