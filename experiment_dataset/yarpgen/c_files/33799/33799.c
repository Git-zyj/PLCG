/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 3; i_4 < 20;i_4 += 1)
                            {
                                var_20 = (((!var_14) ? var_16 : (((var_7 ? var_9 : var_17)))));
                                var_21 = (((arr_7 [i_0] [i_4 + 1] [i_4 + 1]) ? (arr_7 [i_0] [i_4 + 2] [i_4 + 1]) : var_1));
                            }
                            for (int i_5 = 0; i_5 < 22;i_5 += 1)
                            {
                                var_22 = (max(var_22, ((max((((!(var_12 & 6687)))), var_6)))));
                                var_23 = (max(var_23, ((max(((max((arr_1 [i_0] [i_1]), (arr_1 [i_3] [i_2])))), (arr_1 [i_1] [i_2]))))));
                                arr_18 [i_1] [i_2] [17] [i_0] = 16106127360;
                                arr_19 [i_0] = min(((var_14 ? (arr_2 [i_1] [i_0]) : var_13)), ((((!var_7) * ((min(var_6, var_7)))))));
                            }
                            var_24 = (i_0 % 2 == zero) ? ((((((arr_14 [i_0] [i_0] [i_2] [i_3] [i_0] [i_0]) >> ((((-(arr_4 [i_0] [i_3]))) + 31872)))) * var_7))) : ((((((arr_14 [i_0] [i_0] [i_2] [i_3] [i_0] [i_0]) >> ((((((-(arr_4 [i_0] [i_3]))) + 31872)) - 21515)))) * var_7)));
                            var_25 = var_8;
                        }
                    }
                }
                var_26 = (max(var_26, var_0));
                arr_20 [i_0] = (var_10 <= (arr_0 [i_0]));
                arr_21 [i_0] [i_1] [i_1] &= (-((max((arr_3 [i_1] [i_1] [i_1]), (arr_3 [i_1] [i_1] [i_1])))));
            }
        }
    }

    for (int i_6 = 3; i_6 < 23;i_6 += 1)
    {
        arr_24 [i_6] = ((((((arr_22 [i_6 + 2]) ? var_6 : (arr_22 [i_6 + 1])))) ? (arr_22 [i_6 - 1]) : (arr_23 [i_6 - 2])));
        arr_25 [i_6] [i_6] = (max((arr_23 [i_6]), (((((1 ? 3899347155 : 1))) % ((16667771423880600519 % (-32767 - 1)))))));

        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_27 = (max((!var_0), var_16));
                arr_32 [15] [i_8] [i_7] [0] = (((((arr_22 [i_6 - 3]) ? (max(var_11, 18014398509481976)) : ((((arr_30 [i_6] [1]) + var_18))))) == var_4));
                var_28 = (395620140 ? 8343291024891031576 : 112883277234129006);
                var_29 = (arr_28 [i_6] [i_7] [i_8]);
                var_30 = ((var_14 ? var_19 : var_15));
            }
            var_31 = (min(var_31, (arr_31 [i_6 - 1] [i_6 - 1])));
        }
    }
    #pragma endscop
}
