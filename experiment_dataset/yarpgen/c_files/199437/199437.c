/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, -16));
    var_16 = (max(var_16, ((((((-((127 ? var_12 : 16767))))) / var_5)))));
    var_17 = ((var_13 || (var_1 - 3838698968)));
    var_18 &= ((!(((var_12 ? var_10 : var_14)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = max(1097260794, 3197706501);
        arr_3 [i_0] = (((((1097260794 >> (6357710429041872766 - 6357710429041872735)))) || ((max(var_4, 6357710429041872766)))));

        for (int i_1 = 3; i_1 < 18;i_1 += 1) /* same iter space */
        {
            arr_8 [i_0] [4] [i_1] = (arr_1 [i_0] [i_1 - 3]);
            var_20 = ((-(arr_4 [i_0] [i_0])));
        }
        for (int i_2 = 3; i_2 < 18;i_2 += 1) /* same iter space */
        {
            arr_12 [i_0] &= (min((((!(((var_9 ? var_0 : -86)))))), ((((0 ? 1097260803 : var_14)) / 234))));
            var_21 = ((12089033644667678850 ? (arr_1 [i_0] [i_2 - 3]) : 0));
            var_22 = (-(3085489230 ^ 11));
        }
        for (int i_3 = 3; i_3 < 18;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_23 = (arr_13 [i_0]);
                            var_24 |= ((1 ^ (!160170930)));
                            var_25 = (max(((min(((-(arr_16 [15] [i_3] [i_5 + 2]))), (((arr_20 [i_3] [i_0] [i_3] [i_0]) / (arr_22 [i_5])))))), (max(((6357710429041872791 ? (arr_13 [i_6]) : -7547596238749583124)), ((((arr_13 [i_6]) >> (1679932322 - 1679932315))))))));
                            arr_23 [i_0] = (~var_9);
                        }
                    }
                }
                var_26 = (max(var_26, ((min((((arr_9 [i_3 - 2] [i_3 - 2]) ? var_9 : (max(2715021636, 6357710429041872764)))), ((((var_0 ? (arr_22 [i_0]) : var_4)))))))));
            }
            var_27 = ((-(min(-79, (arr_18 [9] [i_0] [i_3] [i_3 - 1])))));
            arr_24 [i_0] [i_3 - 3] = (max((115 + 13313711986354056107), 3497045743));
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_28 = 0;
        var_29 = (max(var_29, ((max(((((((57 ? -51 : var_5)) + 9223372036854775807)) >> ((((~(arr_26 [1]))) + 52734)))), 12089033644667678850)))));
        var_30 = (max(var_30, ((min(1, 3332451691512055635)))));
        arr_27 [i_7] = var_5;
        var_31 ^= (max(3, (((1 - (arr_26 [14]))))));
    }
    #pragma endscop
}
