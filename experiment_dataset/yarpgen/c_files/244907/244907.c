/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = (max(((+((var_16 ? (arr_0 [i_0]) : (arr_2 [9] [7]))))), (0 + var_14)));
        arr_5 [i_0] [i_0] |= ((1 ? 7056319054108778138 : -32764));
        var_18 = var_6;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_9 [i_1] = min(((~(((arr_8 [i_1] [i_1]) ? var_7 : 3584)))), ((min(var_4, (min((arr_7 [i_1] [i_1]), (arr_6 [1] [14])))))));
        arr_10 [i_1] = ((-2111121611545002368 ? (((arr_6 [i_1] [i_1]) * (!3587))) : 61952));
        var_19 -= -7056319054108778140;

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_13 [i_2] [15] [i_1] = ((((!(arr_8 [i_1] [i_2]))) ? (((-(arr_6 [i_1] [i_1])))) : (5581 / 1199813806223525018)));

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                arr_16 [5] [i_2] [i_1] = ((!(((((((arr_15 [i_3] [i_2] [23]) ? var_2 : 7056319054108778138))) ? (~var_11) : (65535 - var_12))))));
                arr_17 [i_1] [i_2] [i_2] [i_2] = ((-(arr_12 [i_1])));
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                arr_20 [22] [10] [i_4] = ((max((max(2674238430773125051, var_12)), (arr_19 [i_1] [i_1] [18] [i_1]))) - ((max((~152), var_12))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            var_20 = (((!1199813806223525041) << (var_16 - 57153)));
                            arr_26 [i_6] [1] [i_5] [2] [i_1] = var_5;
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                {
                    arr_31 [i_1] [i_1] [i_1] = (max((min(var_0, (arr_21 [i_7] [i_2] [i_2] [i_1]))), 3563));
                    var_21 = (!(arr_28 [i_7] [i_2]));
                    var_22 = (min(((max(34412, -9068668056230753555))), (((((min((arr_30 [i_7] [i_4] [i_4] [i_2] [i_2] [i_1]), var_15))) ? var_0 : (!var_14))))));
                }
                for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                {
                    var_23 = 0;
                    var_24 = 1138267428;
                    arr_34 [1] [i_2] [1] [22] = var_7;
                }
            }
            var_25 = (min((arr_32 [i_1] [i_2] [i_2] [i_2]), (min((((arr_23 [10]) | -1199813806223525029)), var_5))));
        }
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    {
                        var_26 = ((-9068668056230753557 ? ((min((arr_40 [1]), 48))) : -8));

                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            var_27 = (min(var_27, ((max(-1199813806223525018, (arr_32 [i_11] [i_1] [i_9] [i_1]))))));
                            var_28 = ((~(~-68)));
                            var_29 += var_9;
                            arr_46 [i_1] [i_9] [i_1] [i_11] [i_1] |= -17427900984189009777;
                        }
                        var_30 = (~52020);
                    }
                }
            }
            arr_47 [i_1] [i_9] [i_9] = (max(var_14, (min(10434726699056956431, ((min(6137, var_7)))))));
        }
    }
    var_31 = ((!(((max(23151, 8012017374652595185))))));
    #pragma endscop
}
