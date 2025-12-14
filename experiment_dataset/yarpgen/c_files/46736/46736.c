/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_14 ? var_10 : (((var_15 + var_12) ? (var_1 >= var_1) : var_13))));

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_19 -= ((~(((arr_0 [i_0] [i_0 - 1]) + (((1 ? (arr_1 [i_0 - 2]) : var_7)))))));
        arr_2 [i_0 - 3] [i_0] &= ((var_16 >= ((((min((arr_0 [i_0] [i_0]), var_1))) ? (arr_1 [i_0]) : (5980225563192971954 + var_16)))));

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            arr_5 [i_1] [i_0] = (min((1 % var_1), (~-6299405928332470412)));
            arr_6 [i_0] [i_0] = 1;
        }
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            var_20 *= (((min((66 % 46), var_12)) >= (min(((-(arr_3 [i_0] [i_0 + 1]))), 1))));
            arr_9 [i_2] [i_2] = (((arr_7 [i_2 + 1]) ? (arr_3 [i_2 + 1] [i_0 - 1]) : 13));
            var_21 ^= (((((arr_0 [i_0 + 1] [i_0]) ^ ((min((arr_8 [i_0]), (arr_3 [i_0] [i_2 + 1])))))) | var_7));
        }
        for (int i_3 = 1; i_3 < 7;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 7;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 8;i_6 += 1)
                    {
                        {
                            arr_20 [i_6 + 1] [i_3] [i_4] [i_3] [i_3] [i_0] = 1;
                            arr_21 [i_0] [i_3] [i_3] [i_4] [i_3] [i_5] [i_3] = -2650099993375107802;
                            arr_22 [i_0] [i_3] = ((arr_16 [i_3] [i_3] [i_0] [i_3]) - 2650099993375107798);
                        }
                    }
                }
            }
            var_22 = ((min((arr_15 [i_0] [i_0 + 2]), (arr_1 [i_0 - 2]))));
            arr_23 [8] [8] |= (((((arr_1 [i_0 + 2]) ? (((1 ? 1 : (arr_13 [2] [2] [2])))) : 4294967289))) ? (12847 % -2650099993375107794) : ((((!((((arr_3 [i_3 - 1] [i_3 + 2]) ? 128849018880 : 1999722024))))))));
            arr_24 [i_3] [i_3] = (((arr_15 [i_0 - 1] [i_3 + 2]) ? ((min((arr_15 [i_0 - 3] [i_3 + 3]), (arr_15 [i_0 - 1] [i_3 + 2])))) : ((~(arr_15 [i_0 - 2] [i_3 + 1])))));
            var_23 *= 1;
        }
    }
    #pragma endscop
}
