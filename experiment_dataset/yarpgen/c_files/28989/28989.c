/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_19 ^= ((var_5 > ((((~var_2) > (max(var_11, var_18)))))));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_20 = (max(var_20, ((((((min((arr_3 [i_0]), var_10)) > (((var_2 ? (arr_3 [8]) : var_12))))) ? ((((arr_5 [3]) > (arr_0 [7] [i_0 + 1])))) : (((arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 2]) ? (arr_2 [i_0 + 2] [i_0 + 2] [i_0 + 1]) : (arr_2 [i_0 - 1] [i_0 - 3] [i_0 + 1]))))))));
                    arr_6 [i_1] [i_0] = ((!((min(13408, 13757164232398747136)))));
                    arr_7 [i_0 - 3] [i_1] [i_2] [i_2] = (((0 > 1) ? (((+((var_5 ? (arr_4 [i_1] [i_1]) : 95))))) : ((-(max(var_15, (arr_4 [i_0] [i_0 - 2])))))));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        var_21 = (max(((max((arr_5 [7]), (arr_2 [i_0] [i_3] [i_2])))), ((min((var_15 > 402653184), (arr_1 [i_2]))))));
                        var_22 = ((max(((1 ? -117 : 32096974)), (-795505145 > var_7))));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_4] [i_4] [i_4] [i_4] = (min(394074421, ((1 ? (24126 > 4689579841310804479) : -374417347454917814))));
                        var_23 = ((((((arr_13 [i_0] [i_0] [i_0] [i_2] [i_4] [i_4]) ? (arr_4 [i_4] [i_4]) : var_4))) ? ((max(13480847140490086894, 0))) : ((((arr_11 [i_2] [i_4] [i_0]) ? ((var_5 ? (arr_2 [i_4] [i_0] [i_0]) : (arr_13 [i_1] [i_1] [0] [4] [0] [i_1]))) : (arr_10 [i_0 - 1] [1] [i_1] [i_1] [i_2] [i_4]))))));
                        var_24 = (max((var_1 > 0), ((255 ? 12659 : (268435455 > 15456)))));
                    }
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    var_25 = (~18446744073709551615);
                    var_26 &= -15456;
                    var_27 = (((((arr_11 [i_0 - 1] [i_0 + 2] [i_0 + 1]) > (arr_15 [i_0 + 2]))) ? var_7 : (max((arr_12 [i_0 - 3] [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0]), (arr_12 [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1] [3])))));
                }
                var_28 = (min((min((((var_17 > (arr_11 [i_1] [i_1] [2])))), (arr_10 [i_0] [i_0] [i_1] [8] [1] [0]))), ((max((arr_0 [i_0] [i_0]), ((max((arr_1 [i_1]), 0))))))));
                var_29 = (min(var_29, -0));
            }
        }
    }
    var_30 = (max(var_30, ((max(0, 0)))));
    #pragma endscop
}
