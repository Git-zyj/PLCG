/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_2] |= (((max(65533, var_11)) ^ ((((arr_3 [i_2] [i_2] [i_1 + 1]) ^ var_9)))));
                    var_15 = (((((var_3 == 10523194659913426124) - -var_9)) & (arr_0 [i_0])));
                }
            }
        }
    }

    for (int i_3 = 3; i_3 < 11;i_3 += 1) /* same iter space */
    {
        var_16 = (((((0 ? var_1 : var_14)) << (-140550738 + 140550738))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    var_17 = ((var_14 << (((var_1 | var_7) - 2130388989))));
                    arr_14 [i_5] |= (var_10 - var_14);
                    var_18 = (max(var_18, var_1));

                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        arr_17 [i_3] [i_4] [i_4] [i_6] = (max(-0, 441518757));
                        arr_18 [i_3 - 3] [i_3 - 3] [2] [i_4] = (~((min(var_2, var_0))));
                        var_19 = (max(var_19, ((((!var_5) + (max(1731124524, (arr_8 [i_3 + 1] [i_6]))))))));

                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            arr_22 [i_3] [i_5] [i_3] |= var_8;
                            var_20 = ((-(max(((var_4 ? 7923549413796125492 : var_12)), (7923549413796125491 + -1669112267761752673)))));
                            var_21 = (min((((1045529359 ? (!var_6) : (min(var_2, var_7))))), ((var_11 ? (~18446744073709551615) : var_5))));
                        }
                        for (int i_8 = 2; i_8 < 11;i_8 += 1)
                        {
                            arr_26 [i_8] [i_4] [i_3 - 2] [i_5] [i_4] [i_3 - 2] = ((9223372036854775807 ? 845776658072740625 : -3719));
                            var_22 -= ((((max(((11260322958444132018 ? -1 : 11260322958444132018)), -118))) ? (441518757 + var_13) : (!var_12)));
                        }
                        arr_27 [i_5] [i_4] [i_5] [i_5] [i_5] = var_11;
                    }
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        var_23 -= ((((((arr_6 [i_3 - 3] [13]) ^ 441518767))) >= (max((max(7923549413796125492, 140550738)), var_5))));
                        var_24 = (max(var_24, (!0)));
                        arr_31 [i_4] = (var_6 || 1);
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_25 = (((-var_2 ? var_8 : 2787)) / (arr_9 [i_3 - 1]));
                        arr_36 [i_4] [i_3] [i_4] [2] [i_5] [1] = var_2;
                    }
                }
            }
        }
    }
    for (int i_11 = 3; i_11 < 11;i_11 += 1) /* same iter space */
    {
        arr_40 [i_11] [i_11] = 7430;
        var_26 = ((((max(-var_7, (var_1 + var_1)))) || (((((-32767 - 1) <= var_11))))));
    }
    /* vectorizable */
    for (int i_12 = 3; i_12 < 11;i_12 += 1) /* same iter space */
    {
        arr_43 [i_12] = (((var_2 + 140550743) + var_7));
        arr_44 [5] [i_12 + 1] |= 18446744073709551615;
    }
    #pragma endscop
}
