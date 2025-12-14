/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_11));
    var_19 = (max(var_19, (((((max(3896, -1694374566))) ^ (max(var_16, (~var_3))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 = var_0;
                                var_21 = var_14;
                                var_22 = ((-(arr_4 [i_1] [i_3] [i_4])));
                            }
                        }
                    }
                    var_23 = (~(arr_0 [i_1 + 1]));
                    var_24 = var_12;
                    var_25 = (arr_3 [i_0]);
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_26 = (var_13 * (arr_2 [i_5]));
                    var_27 = 1694374585;
                    var_28 = (~(1285825210059450854 | -1694374564));
                }
                for (int i_6 = 2; i_6 < 9;i_6 += 1)
                {

                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 10;i_7 += 1)
                    {
                        var_29 = (arr_10 [i_6 - 1] [i_6]);

                        for (int i_8 = 3; i_8 < 9;i_8 += 1)
                        {
                            var_30 = (max(var_30, (arr_7 [1] [i_1] [i_6 - 1] [i_8])));
                            var_31 = (max(var_31, var_8));
                        }
                    }
                    for (int i_9 = 1; i_9 < 7;i_9 += 1)
                    {
                        var_32 = (~(arr_11 [i_0]));
                        var_33 &= (min(((max((arr_27 [i_0] [2] [i_6]), (!var_10)))), (max(((((arr_8 [i_6 + 2] [6] [i_6] [i_6]) || 1))), (min((arr_4 [i_0] [i_0] [i_6]), 1694374563))))));
                        var_34 = (max((max(var_1, ((var_2 ? (arr_2 [i_6]) : 288230358971842560)))), ((max(((~(arr_12 [i_0] [i_1] [i_6] [i_9] [9]))), (((arr_23 [i_0] [i_1] [0] [i_6]) ^ var_5)))))));
                        var_35 = (min((max(var_4, (max(2812697693782018377, (arr_14 [i_0] [i_0] [i_1] [i_9] [i_9 - 1] [i_6] [i_0]))))), ((max((arr_21 [i_9 + 3] [i_9 + 1] [i_9] [i_9] [10]), (!var_8))))));
                        var_36 = ((((((arr_27 [i_0] [i_6] [i_0]) ? (arr_27 [i_0] [i_6] [i_6 + 2]) : (arr_27 [i_0] [i_6] [i_9])))) ? (min(((var_8 ? var_3 : var_14)), -1694374564)) : -2128625648034349086));
                    }
                    var_37 = (max(var_37, (((-((~(!var_16))))))));

                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        var_38 ^= (arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] [4] [i_10]);
                        var_39 *= (-(((((2812697693782018377 ? var_5 : var_11))) ? ((((arr_0 [i_0]) ? var_9 : var_11))) : var_6)));

                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            var_40 = var_17;
                            var_41 = (min(var_41, var_9));
                            var_42 = (min(var_42, (((-(+-31))))));
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_43 = (max(((-((max(var_10, var_5))))), (((!((min((arr_9 [6] [i_1 + 1] [i_1] [i_1]), -1694374566))))))));
                            var_44 = (max((((~((18121568456632881229 ? var_6 : var_14))))), ((~(max(var_3, var_1))))));
                            var_45 ^= (max(((max((~-900353265), (((arr_3 [i_0]) ? 65535 : 0))))), (max((!var_6), (max((arr_16 [0] [i_6] [i_0]), var_9))))));
                            var_46 = (min(var_46, ((((var_11 / ((max(var_13, var_6)))))))));
                            var_47 = (max(var_47, (((((max((max(-1694374564, 15634046379927533260)), (~1)))) ? var_12 : (!18446744073709551615))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        var_48 = (((arr_32 [i_0] [4] [i_6] [i_13] [i_0]) ? var_4 : -18158513714737709043));
                        var_49 = 2812697693782018369;
                        var_50 = 1;
                    }
                    var_51 = (min(var_51, (~1)));
                    var_52 = (min(var_52, 12623459332901341655));
                }
                var_53 = ((-(((min(-6167714023646238326, var_7))))));
                var_54 &= ((((max((max(1, 42)), var_17))) ? (!9695075836601414418) : (max((max(var_6, var_7)), ((max((arr_8 [i_1 + 1] [6] [6] [8]), (arr_2 [i_1]))))))));
            }
        }
    }
    var_55 = (~var_2);
    #pragma endscop
}
