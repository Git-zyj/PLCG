/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_5 [10] [1] [1] |= (max(-var_16, (!var_3)));

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                var_20 = (max(var_20, (((var_0 > ((((arr_4 [i_0] [i_0]) > (arr_4 [i_1] [2])))))))));

                for (int i_3 = 4; i_3 < 13;i_3 += 1)
                {
                    arr_10 [i_0] [i_0] [i_0] [i_3] = (arr_8 [10] [i_1] [i_2] [i_3] [i_0]);
                    arr_11 [i_0] [1] [i_0] [6] [i_0] [i_0] = ((+((((!75) != ((max(var_3, 1))))))));
                    arr_12 [i_0] [i_3] &= (((((max(191, 61))))) > (min(1, 4503599627370495)));
                    arr_13 [i_0] = var_6;
                }
            }
            var_21 -= (!((((((var_11 > (arr_9 [i_0] [i_0] [10] [0])))) / (1 != var_14)))));
        }
        var_22 = (max(var_22, (((((((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) << (8191 - 8191)))) >= ((2223370738 ? (((var_18 ? (arr_0 [i_0]) : var_4))) : (arr_6 [i_0] [i_0]))))))));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_23 = (min(var_23, (((((!(((var_12 << (arr_16 [i_4]))))))) << (((!(var_6 <= var_1))))))));
        arr_17 [i_4] = arr_1 [5];
        arr_18 [i_4] = ((-((max(var_16, 185)))));
        var_24 = (-0 ? (((-(arr_1 [i_4])))) : -567626618);
        var_25 -= -3452593111;
    }
    #pragma endscop
}
