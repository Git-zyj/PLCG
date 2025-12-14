/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    var_20 = (max(var_13, (min(5294966635150849542, 2116049345525844757))));
    var_21 = var_13;
    var_22 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        var_23 = (((arr_5 [i_1] [i_1] [i_1 + 3] [i_1]) ? var_18 : 2116049345525844757));
                        var_24 = ((-((-31 ? (arr_5 [i_0] [0] [i_3 - 2] [i_3]) : (arr_5 [i_3] [0] [i_3 - 2] [4])))));
                        arr_10 [i_3] [i_3] [i_2] [i_3] = (arr_1 [i_0]);
                    }
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {

                        for (int i_5 = 3; i_5 < 9;i_5 += 1)
                        {
                            var_25 = (min(((var_0 * (arr_3 [i_1 + 1] [i_2 + 1]))), (arr_9 [i_4])));
                            var_26 = (arr_0 [i_1 + 1]);
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            var_27 = max(var_7, (~var_4));
                            var_28 = (((32 || 0) ? (arr_4 [2] [i_1] [2]) : (arr_2 [i_4])));
                            var_29 = ((((max(-701149429, -32397))) ? (arr_13 [i_0] [i_4]) : (((var_3 > var_1) & var_12))));
                            arr_20 [i_2] [i_2] [i_4] [i_2] [i_2] = 0;
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            var_30 = (((arr_16 [i_4 - 1] [i_4] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_4] [i_1 + 2]) == (arr_12 [i_4] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_1 + 1] [i_4])));
                            var_31 = -6504464256577057095;
                        }
                        var_32 += (((arr_19 [i_1 + 3] [i_1 + 2] [i_2 + 1] [i_2 + 1] [i_4 - 1]) || var_11));
                    }
                    var_33 = ((((((-127 - 1) & -63))) == (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] [i_2])));
                }
                arr_23 [i_0] [i_0] = ((((min((arr_8 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 3] [i_1 + 3]), (arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 1])))) >= ((-116 ? ((18446744073709551615 ? -19 : 1023)) : (max(var_7, -1909393040))))));

                /* vectorizable */
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    var_34 = (arr_7 [i_8]);
                    var_35 *= ((-(arr_3 [i_0] [i_1 + 2])));
                }
                var_36 = (((arr_2 [i_0]) ? (((!((min(1574, (arr_13 [i_0] [i_0]))))))) : var_7));
            }
        }
    }
    #pragma endscop
}
