/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = (((((!((min((arr_3 [i_0]), (arr_2 [i_0]))))))) < (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        {
                            var_18 -= ((~((36771 - ((36746 ? 58520 : 13995))))));
                            var_19 = (arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] [i_4]);
                            var_20 = ((+((min((arr_6 [i_4] [i_3] [i_2] [i_0]), (arr_6 [i_4] [i_3] [i_1] [i_0]))))));
                        }
                    }
                }
            }
            var_21 ^= arr_10 [i_0] [i_0] [i_0] [i_0] [i_0];
            var_22 -= (min(((((arr_4 [i_0] [i_0] [i_0]) >= (arr_4 [23] [i_0] [23])))), ((-(arr_4 [i_0] [18] [i_0])))));
        }
        var_23 = ((((min((min((arr_4 [i_0] [i_0] [i_0]), (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (arr_5 [i_0] [i_0])))) - ((((min((arr_11 [i_0] [i_0] [21] [i_0] [i_0] [i_0] [i_0]), (arr_3 [i_0])))) ? ((min((arr_11 [2] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_2 [i_0])))) : (arr_4 [i_0] [4] [i_0])))));
    }
    var_24 = (min(((var_0 ? ((min(var_10, var_15))) : (var_1 <= var_12))), var_12));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            {
                var_25 = ((+(((arr_1 [i_5]) ? (arr_1 [i_5]) : (arr_7 [i_5])))));
                var_26 = (max(var_26, (((((((arr_17 [i_5] [2]) ? (arr_17 [i_5] [i_6]) : (arr_17 [i_5] [i_6])))) ? (((arr_17 [i_5] [i_6]) ? (arr_4 [i_6] [i_6] [i_5]) : (arr_17 [i_6] [i_5]))) : (((!(arr_4 [i_5] [i_5] [i_6])))))))));
            }
        }
    }
    #pragma endscop
}
