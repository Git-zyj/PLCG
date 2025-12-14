/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [23] [i_0] = (arr_0 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            arr_12 [i_1] [i_1] [i_4] [i_3] [i_4] = (((32750 ? -65535 : ((max(var_0, (arr_4 [i_0] [i_4] [i_2])))))));
                            var_19 += min((arr_10 [i_0] [i_1] [i_2] [i_3] [i_2]), ((max(3416, var_2))));
                        }
                        var_20 = ((var_2 / (((((-3416 ? (arr_6 [i_2] [i_2] [17] [i_0]) : (arr_6 [i_3] [i_2] [i_1] [i_0])))) ? var_12 : (((arr_3 [i_3] [i_0] [6]) ? -3433 : 18446744073709551608))))));

                        for (int i_5 = 1; i_5 < 23;i_5 += 1)
                        {
                            var_21 = -16;
                            var_22 = (max(var_22, (max((max((((arr_5 [i_0]) * var_14)), var_8)), -var_8))));
                            var_23 = ((((((arr_5 [i_0]) == (max(var_4, 9136346855999802425))))) <= (var_15 % 3417)));
                            arr_16 [i_0] [i_0] [6] [i_2] [i_5 - 1] = (((arr_7 [i_0] [i_1] [i_0]) ? (((arr_14 [i_0] [i_1] [i_2] [i_3] [8]) ? (!var_16) : var_6)) : (-2147483647 - 1)));
                            var_24 = ((-2873665097723035236 ? -3417 : ((var_3 ? ((((arr_8 [i_0] [i_1] [i_2] [4]) || 3416))) : (arr_10 [i_5] [i_2] [i_0] [i_2] [i_0])))));
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            var_25 = ((!(arr_9 [i_3])));
                            var_26 |= var_15;
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_27 |= (((((!(arr_14 [i_7] [i_7] [i_7] [14] [i_7])))) != ((min((var_12 != var_6), ((var_18 * (-127 - 1))))))));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    {
                        var_28 = ((((((arr_7 [i_8] [i_9] [i_10 - 1]) ? (arr_7 [i_7] [i_8] [i_7]) : (arr_7 [i_7] [i_7] [i_7])))) || ((max((arr_14 [i_8] [i_9] [i_8] [i_8] [i_7]), (((15 ? (arr_10 [i_9] [i_8] [i_10 - 1] [i_7] [i_7]) : var_6))))))));
                        var_29 ^= ((((arr_11 [16] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) == (min((arr_14 [i_7] [i_8] [1] [i_7] [i_10]), (arr_13 [i_7] [i_8] [12] [i_9] [i_7]))))));
                        arr_29 [i_7] [i_8] [i_7] = var_10;
                        var_30 = (max(((((max(var_4, var_14))) ? (((arr_0 [20]) & (arr_10 [i_7] [i_8] [i_9] [i_7] [i_10]))) : (((arr_1 [i_7] [20]) ? (arr_15 [i_7] [i_10] [i_7] [i_10 - 1] [i_7] [i_7] [i_7]) : (arr_14 [i_7] [i_8] [i_9] [i_10] [i_7]))))), (((~((max((arr_26 [i_7]), 13))))))));
                        var_31 ^= max(((max(var_4, -29850))), (((var_9 || (((arr_17 [i_7] [22] [i_8] [22] [i_7]) >= (arr_20 [i_7])))))));
                    }
                }
            }
        }
    }
    var_32 = (min(var_32, var_9));
    #pragma endscop
}
