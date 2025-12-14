/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
        {
            var_20 = (((-(arr_2 [i_0 - 2]))));
            var_21 = ((var_13 ? (arr_0 [i_0]) : (arr_4 [i_1] [i_1] [i_0])));
            arr_5 [i_0] [10] &= (min((min(((-26622 ? -116398377 : -22)), var_0)), (arr_0 [i_0])));
            var_22 = (max(var_22, (((1986076049 ? var_15 : (max(((2307844466 ? (arr_2 [i_0]) : -7686016769102244835)), (arr_4 [i_0] [i_0] [16]))))))));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_23 = 1;
            arr_9 [i_0] [i_2] [i_0] = (max((((arr_4 [7] [i_2] [i_2]) ? (arr_2 [i_0]) : -5706142553758760366)), (+-59188)));
            var_24 &= (arr_4 [11] [i_0] [11]);
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {
            var_25 ^= (min((-9223372036854775807 - 1), (((((-313 / (arr_11 [i_3] [i_0])))) * ((9223372036854775807 ? 7524295161619092097 : var_5))))));
            arr_14 [5] [5] [0] = (arr_0 [i_0 + 3]);

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                var_26 = (min((arr_1 [i_0] [i_0]), 222));
                arr_17 [i_3] = -124;
                var_27 = 9223372036854775806;
                arr_18 [14] [4] [i_0] = (((!-5209) ? 17549729480441790509 : 27912));
            }
            var_28 = (min(var_28, ((((((!(((var_8 >> (((arr_2 [i_0]) + 50)))))))) > var_15)))));
        }
        arr_19 [i_0 + 4] = (((((var_4 ? (var_16 != 16784651857744706227) : var_14))) ? (arr_2 [i_0 + 3]) : (min(var_17, var_4))));
    }
    var_29 ^= var_11;
    #pragma endscop
}
