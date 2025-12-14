/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [8] |= var_8;
                    arr_9 [3] [i_0] [i_1] [1] = (((min(-62, 9223372036854775801)) - var_1));
                    arr_10 [i_1] = ((var_8 > var_0) ? (((arr_4 [i_2] [i_1] [i_2 - 2]) - (arr_4 [i_2] [i_1] [i_2 + 1]))) : (arr_6 [i_0] [8] [i_2] [i_2]));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_13 -= ((((arr_12 [2] [2] [2]) > (-62 || 18446744073709551614))));

                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            arr_16 [i_0] [i_0] [i_2] [13] [i_2] [i_1] [19] = (((((((-1 | 9223372036854775801) + 9223372036854775807)) << (((((arr_3 [i_4]) + 7860998365548995164)) - 37)))) > ((((((var_7 ? (arr_0 [i_2]) : 62))) ? (arr_1 [5] [i_2]) : ((var_1 ? -48 : (arr_4 [i_0] [i_1] [i_0]))))))));
                            var_14 = (max(((((min((arr_3 [i_2]), 0))) ? (((-(arr_4 [i_0] [i_1] [i_1])))) : var_8)), (((var_8 * var_2) & var_9))));
                            var_15 = ((-(arr_15 [i_2 - 1] [i_1] [i_2 - 1])));
                        }
                        for (int i_5 = 1; i_5 < 20;i_5 += 1)
                        {
                            var_16 = var_7;
                            arr_20 [9] [i_1] [i_3] [1] = (min((10 > var_0), 13));
                        }
                        var_17 = max((arr_17 [i_3] [i_1] [i_2 - 1]), var_9);
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_18 = -4200;
                            var_19 *= (max(((((arr_19 [22] [i_1] [i_1] [i_1] [i_7]) != var_4))), ((var_5 ? (arr_18 [12] [i_2 + 1]) : (var_12 == var_5)))));
                        }
                        arr_26 [i_6] |= (0 | 31);
                        var_20 ^= (min(-var_11, (((var_0 ? -1 : 15)))));
                    }
                }
            }
        }
    }
    var_21 = ((((min(2942693181792668444, 12))) ? (var_11 > var_0) : (min(-var_5, var_5))));
    #pragma endscop
}
