/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(((((!var_6) != var_3))), (((13245499600469020624 < var_2) ? var_11 : -var_5))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))) <= ((((arr_2 [i_0]) <= (arr_2 [i_0]))))));
        var_18 = (((max(((((arr_0 [i_0]) && var_11))), (((arr_2 [i_0]) ? (arr_2 [i_0]) : var_9)))) >> (((max((arr_1 [i_0] [i_0]), -var_6)) - 13191114794764683872))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_19 ^= ((-(((((var_4 ? var_4 : (arr_6 [i_0])))) * (min((arr_2 [i_0]), var_13))))));
            var_20 = (((((var_9 ? var_3 : -1105948620) >> (var_3 - 2045486892540700962)))));
            var_21 = (min((arr_0 [i_0]), var_0));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                arr_14 [i_0] [i_0] = (~(1 + var_13));
                var_22 += var_11;
            }
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                var_23 = (arr_9 [i_0] [i_2]);
                arr_17 [i_0] [i_0] [i_0] [i_0] |= ((~(arr_1 [i_0] [i_2])));
                arr_18 [i_0] [i_2] [i_4] [i_0] = var_2;
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    {
                        var_24 = ((~(((arr_4 [i_0]) * var_4))));
                        var_25 = (arr_1 [1] [i_5 + 1]);
                    }
                }
            }
            var_26 = (((!(arr_2 [9]))));
        }
        var_27 = ((max(((var_3 ? -3351437315821148016 : (arr_1 [i_0] [6])), 1))));
    }
    var_28 = (min(((-((var_4 ? var_14 : var_0)))), var_0));
    #pragma endscop
}
