/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((var_9 / (var_3 && var_3))))));

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_11 = ((((((arr_2 [i_0]) ^ (arr_1 [i_0] [i_0])))) ? ((min((var_0 + 17962), (var_6 || 1)))) : (((arr_2 [i_0 - 1]) ? 18141626617937435100 : -1875))));
        var_12 = var_5;
        var_13 *= (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_14 += (arr_4 [10]);
        arr_5 [i_1] [i_1] = var_3;
        var_15 = ((((-(arr_0 [i_1]))) >= (arr_0 [i_1])));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                var_16 = (min(var_16, 11228137843328828782));

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_17 *= (~var_3);
                    var_18 = (arr_10 [i_4] [i_3] [i_2] [i_1]);
                }
            }
            arr_15 [i_1] [i_1] = -var_9;

            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                var_19 = ((1 ? -228208037 : 14079));
                arr_19 [i_1] [i_5] [i_5] [i_5] = (arr_4 [i_1]);
                var_20 = (min(var_20, (arr_8 [i_1] [1] [i_5])));
                var_21 = (min(var_21, (((~(arr_12 [i_1] [i_1] [i_2 + 1] [i_2] [i_2]))))));
            }
            var_22 = (-(arr_16 [i_2 + 1] [i_1] [i_1] [i_1]));
            var_23 = (min(var_23, ((((((var_1 ? 4569369103897683645 : (arr_3 [i_2])))) ? (((var_7 >> (arr_6 [9] [9] [i_2 + 1])))) : ((var_6 ? (arr_8 [i_1] [4] [i_2]) : (arr_16 [i_1] [1] [1] [i_1]))))))));
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            arr_24 [i_1] [i_1] = ((((min((arr_17 [i_1] [5] [i_1] [i_1]), (arr_17 [5] [i_6] [i_6] [i_1])))) == (arr_6 [i_1] [i_6] [5])));

            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                var_24 = (arr_1 [i_1] [i_1]);
                var_25 = var_7;
                var_26 = (min((arr_2 [i_1]), (min((max((arr_1 [i_1] [i_1]), 9975)), -1797971598))));
                var_27 = var_5;
            }
            arr_29 [i_1] = (((arr_6 [6] [i_6] [i_6]) > ((-(((!(arr_28 [i_6] [i_6] [i_1]))))))));
        }
    }
    var_28 = (min(var_28, (((3215963619772346421 ? -34 : var_4)))));
    #pragma endscop
}
