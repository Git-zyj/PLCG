/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = (min((((~0) ? 9 : 4294967286)), ((min(1, 2652)))));
                arr_7 [i_1] [1] [1] = 56002;

                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    var_14 = (i_1 % 2 == 0) ? (((((var_7 + 2147483647) >> (((arr_8 [3] [2] [i_1 + 1] [i_1]) - 28550)))))) : (((((var_7 + 2147483647) >> (((((arr_8 [3] [2] [i_1 + 1] [i_1]) - 28550)) + 47475))))));
                    var_15 |= (((~((min(0, 50888))))) >= ((((arr_4 [i_1 + 2] [16]) <= (arr_3 [14] [8])))));
                    var_16 = ((!((min(((min((arr_8 [1] [6] [13] [i_1]), var_10))), (max(9204, 2275919524)))))));
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    var_17 = (((arr_4 [i_1 + 1] [i_1]) && (arr_3 [i_1 + 1] [5])));
                    arr_12 [i_1] [15] [11] = ((~(arr_6 [i_3 - 1] [i_1 - 1])));
                }
                for (int i_4 = 3; i_4 < 18;i_4 += 1)
                {
                    var_18 = (((min((arr_8 [i_4 - 2] [5] [i_1 + 1] [i_1]), var_11))) ? var_11 : (((max((arr_13 [i_1] [15] [0]), (var_10 > var_8))))));
                    arr_17 [i_1] [0] [1] = min(((((1 ? 15 : 1)))), (min((min((arr_2 [16]), var_4)), (arr_0 [1]))));
                }
                var_19 = ((((min(var_7, (min(var_11, (-127 - 1)))))) ? (min((((arr_9 [i_1] [13]) ? var_12 : 1)), (arr_8 [14] [1] [18] [i_1]))) : var_12));
                arr_18 [i_1] = (((((!(arr_16 [0] [i_1 - 1] [14] [13])))) >= ((-(arr_16 [1] [i_1 - 1] [12] [1])))));
            }
        }
    }
    var_20 = (min(var_2, 9));
    #pragma endscop
}
