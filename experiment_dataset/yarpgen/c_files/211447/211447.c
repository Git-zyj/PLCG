/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((((max(var_2, var_7))) ? (~1699383327) : (5252097893629521665 % var_14)))) ? ((-((var_7 ? var_13 : var_5)))) : (((!18578) ? (!11244) : 0))));
    var_16 = (((((598 ? 43 : 360184594677715173))) / ((-var_11 ? (((max(1, var_11)))) : (min(11465530345419720984, 0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = ((((((((!(arr_2 [i_0] [0])))) % (~var_14)))) ? ((-(var_11 + -7206477306667753964))) : (((~1910293468) ? (-18379 * var_2) : (((arr_0 [i_0]) ? -2757689030590195401 : -2))))));

                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    var_18 = (((!var_8) * ((((!var_13) == ((max(var_3, var_12))))))));
                    arr_7 [i_2] [i_1] [i_2] = 0;
                    arr_8 [4] [i_1] [i_2] [2] |= (((((arr_5 [i_0] [i_0] [i_2]) ? ((-(arr_4 [0] [0]))) : (var_2 == var_12))) / (((!0) + (arr_2 [i_0] [i_0])))));
                    var_19 = (max(var_19, ((min((max(0, ((max(0, var_13))))), (max((((arr_2 [i_0] [i_1]) & var_12)), var_13)))))));
                }
                for (int i_3 = 2; i_3 < 11;i_3 += 1) /* same iter space */
                {
                    var_20 = var_13;
                    arr_13 [i_0] [i_1] [i_0] [i_0] = (var_6 / 56217);
                }
                for (int i_4 = 2; i_4 < 11;i_4 += 1) /* same iter space */
                {
                    var_21 = (min(((((((arr_9 [i_0]) % 127))) ? (((var_7 ? var_5 : var_13))) : ((var_7 ? var_12 : 1)))), var_5));
                    var_22 = (min(var_22, ((((!(!var_3))) ? var_12 : (((((~(arr_15 [i_4 + 1])))) ? ((var_14 ? var_3 : var_12)) : ((4894522347160881632 ? var_12 : (arr_6 [i_1] [i_1] [i_4] [i_4 + 1])))))))));
                    arr_18 [i_0] = var_9;
                }
                var_23 ^= 13520;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        {
                            var_24 = ((-(min((min(9, var_8)), (var_0 * var_1)))));
                            var_25 = ((!((min((~-32753), 47966)))));
                            var_26 = (((((-((-6417552122067276417 ? (arr_19 [i_1] [i_6]) : var_13))))) % (min(55838, (arr_5 [i_6 + 1] [i_6 + 1] [i_6 + 1])))));
                            var_27 = ((~(~15901303650020388150)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
