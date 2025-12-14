/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_11, var_9));
    var_13 = ((~(~12661163264561348220)));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = arr_0 [i_0] [i_0];
        var_14 = var_4;

        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            arr_6 [i_0] = var_11;
            var_15 ^= (((((max((arr_3 [0] [i_1] [i_1]), 4294967295)) & 20)) / ((((!(arr_0 [i_0 - 1] [8]))) ? 1520287145 : (min((arr_5 [i_0] [i_0]), 14))))));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_16 = -1477567277;
            var_17 = (-(((arr_4 [i_0 + 1] [i_0 + 1]) << (var_2 - 10121))));
            arr_9 [i_0] [i_0] [i_0] = ((-((((236 & (arr_1 [i_0])))))));
            var_18 ^= 20;
        }
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_19 = (max((max((arr_12 [i_0 - 1] [i_0] [i_0 - 3]), var_8)), (((arr_10 [i_3 + 3] [i_3 + 3] [i_0 + 1]) ? (arr_10 [i_3 + 1] [i_3 + 1] [i_0 - 1]) : (arr_10 [i_3 - 1] [i_3] [i_0 - 1])))));
                        arr_17 [i_0] [i_0] [i_0] [i_5] = 126;
                    }
                    var_20 = ((((-1 ? 3330449058 : 12509001654449483233)) * (114 / 1170007090)));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
    {
        arr_20 [i_6] = (((arr_19 [i_6] [i_6]) < (((arr_18 [i_6]) ? var_3 : var_0))));
        var_21 = (((-(arr_18 [i_6]))));
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
    {
        var_22 = (((((var_11 ? (!-5178483334628644298) : (!var_1)))) ? (arr_18 [i_7]) : (((arr_19 [i_7] [i_7]) + (arr_21 [i_7] [i_7])))));
        var_23 = ((1027560969 * ((((((((arr_19 [i_7] [i_7]) == var_1))) <= var_2))))));
    }
    var_24 = var_1;
    #pragma endscop
}
