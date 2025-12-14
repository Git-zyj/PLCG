/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = arr_3 [i_0] [i_0] [i_0];

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_11 [13] [13] [i_1] [i_0] = ((((+((((arr_1 [1]) == (arr_10 [i_0] [i_1] [i_2] [12] [12] [12])))))) == ((-(((arr_4 [12] [12] [i_2]) & (arr_3 [3] [7] [13])))))));
                        var_21 = (arr_9 [i_0] [i_0] [14] [i_3]);
                        var_22 = (max(var_22, (((-((((((arr_9 [13] [0] [i_2] [11]) ? (arr_4 [9] [4] [i_3]) : (arr_1 [i_3]))) < (((arr_3 [i_0] [0] [i_2]) ? (arr_0 [i_0]) : (arr_1 [i_0])))))))))));
                        var_23 = (58277 && 2837461190);
                        var_24 = ((((((arr_9 [i_0] [i_0] [13] [13]) * (((-(arr_5 [i_1] [i_3]))))))) & ((1 ? (-9223372036854775807 - 1) : 58277))));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_14 [i_4] [i_1] [i_1] [i_0] = ((~((1395539444 ? 5867983024802080881 : 2177420013))));
                        var_25 = (-((((-111 ? -1681950863 : 40068)) / (((arr_5 [11] [11]) / (arr_8 [i_0] [i_1]))))));
                    }
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        arr_18 [i_0] [i_0] [i_0] [1] = (((-127 - 1) != 0));
                        var_26 = ((((((((arr_13 [i_0] [10] [3] [i_0] [i_0] [i_0]) + 9223372036854775807)) << (((arr_7 [6] [i_2] [i_5 + 1]) - 54475))))) <= (((arr_9 [i_2] [i_2] [i_1] [i_5 + 1]) ? (((arr_4 [i_1] [i_2] [i_5]) ^ 2117547283)) : ((((arr_3 [i_1] [i_1] [i_1]) | (arr_12 [i_0] [i_1] [i_1] [i_2] [i_2] [i_5]))))))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 10;i_7 += 1)
        {
            {
                var_27 -= (min(58277, 4327017802378392308));
                var_28 = (min((arr_16 [i_6] [i_6] [i_7 + 2] [i_7 - 2] [i_6] [i_6]), (((~-111) & ((59 ? 27882 : 2899427852))))));
            }
        }
    }
    var_29 ^= ((0 ? 7643293921995836056 : 7259));
    var_30 = (min(var_30, (var_5 <= 1)));
    var_31 = ((((((var_7 > var_14) > ((var_1 ? var_11 : var_0))))) * (((((var_13 ? var_3 : var_15))) ? (var_2 != var_17) : var_6))));
    #pragma endscop
}
