/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~var_10);
    var_15 = 3821619613;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [2] [2]);
        var_16 = (min(var_16, (((((min(((var_5 ? (arr_0 [i_0] [i_0]) : var_11)), ((-(arr_0 [i_0] [i_0])))))) ? (min((((arr_0 [i_0] [i_0]) ? var_0 : (arr_0 [i_0] [i_0]))), ((min((arr_0 [5] [5]), var_5))))) : var_11)))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 6;i_4 += 1)
                    {
                        {
                            var_17 = ((arr_5 [i_1]) ? var_3 : (arr_4 [i_1]));
                            var_18 = (max(var_18, var_0));
                            arr_13 [i_1] [i_3] [i_1] [i_1] [i_1] = var_12;
                            var_19 *= (((arr_0 [i_2 + 1] [i_3]) ? var_11 : var_10));
                        }
                    }
                }
                var_20 = (arr_8 [i_0] [i_0] [i_2]);
                arr_14 [2] [1] [i_2] [2] &= ((((((arr_12 [i_2 - 1] [i_2 + 1] [i_2 - 1]) ? (arr_6 [i_2 + 1] [i_2 - 1] [i_2 - 1]) : (arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1])))) ? (((arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 1]) ? (arr_7 [i_2 + 1] [i_2 + 1] [0]) : (arr_12 [i_2 + 1] [i_2 + 1] [i_2 + 1]))) : (arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1])));
            }
            arr_15 [i_1] [9] = ((arr_11 [i_1] [i_1] [i_0] [i_0] [i_0]) ? (((arr_6 [9] [i_0] [i_0]) ? (arr_5 [i_1]) : var_6)) : (((((arr_10 [i_0] [i_0] [i_0] [i_1] [8] [i_1] [i_1]) ? (arr_10 [i_0] [i_0] [0] [i_1] [i_1] [7] [i_0]) : var_0)))));
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            var_21 = (min(var_21, (~var_3)));
            var_22 -= ((((((arr_17 [1] [i_5]) ? var_7 : var_6))) ? (arr_5 [i_5]) : 1));
        }
        arr_19 [i_0] = ((((min(-var_12, (((!(arr_0 [i_0] [i_0]))))))) ? 1 : (arr_4 [1])));
    }
    #pragma endscop
}
