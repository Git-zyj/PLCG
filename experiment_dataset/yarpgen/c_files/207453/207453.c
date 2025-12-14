/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (~var_14);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((min(var_16, -1143914305352105984))) ? var_14 : (((min(4503599358935040, var_4)) * (~var_15)))));
        var_20 |= (max(((((((arr_0 [6]) >> (var_14 - 2567231979)))) ? ((((!(arr_1 [i_0]))))) : (max(var_14, var_2)))), (~var_17)));

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_1] = ((~((-(((!(arr_0 [i_0]))))))));
            var_21 *= var_3;
            var_22 = (min(var_22, (min(var_2, 1))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] [10] |= 40826;

            for (int i_3 = 2; i_3 < 22;i_3 += 1)
            {
                var_23 = (arr_11 [9] [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            arr_19 [i_0] [i_0] = ((((-(((arr_8 [i_0]) - var_16))))) ? (arr_18 [5] [5] [i_0] [i_4] [i_5]) : 4503599358935031);
                            var_24 *= min((((!var_15) ? ((960 ? 4503599358935040 : var_18)) : (arr_3 [i_5] [i_5] [1]))), 4503599358935031);
                            var_25 += (((-4503599358935031 + 9223372036854775807) >> (((((-2147483647 - 1) - -2147483645)) + 50))));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                arr_22 [i_0] [i_0] [i_0] = ((-(arr_8 [i_0])));
                var_26 = var_3;
            }
        }
    }
    var_27 += (min(var_14, ((((var_18 && 1) << (var_5 & var_8))))));
    var_28 = (((max(var_12, (var_17 | var_10))) * ((-(!4503599358935040)))));
    #pragma endscop
}
