/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = ((((((min(var_3, var_12))) ? var_7 : (arr_1 [i_0])))) ? (max((arr_0 [4]), (arr_1 [i_0]))) : (((((((arr_0 [i_0]) - (arr_0 [7])))) ? (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : ((((arr_1 [i_0]) && (arr_0 [i_0]))))))));
        arr_2 [i_0] [i_0] = (max((max(((var_0 ? (arr_0 [0]) : (arr_1 [i_0]))), (arr_0 [i_0]))), var_0));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_14 ^= (((min((arr_0 [i_1 + 2]), (arr_3 [i_1 + 1] [i_1 + 2]))) + (max((arr_3 [2] [i_1 + 2]), (arr_0 [i_1])))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 13;i_4 += 1)
                {
                    {
                        var_15 = ((((((var_5 <= (arr_10 [i_1] [i_3] [i_2] [i_1]))) ? (arr_5 [i_1 - 1] [i_2]) : (((arr_1 [i_2]) ? (arr_8 [i_2] [i_3]) : (arr_13 [i_1] [i_1] [i_1] [i_3] [i_4]))))) != (((max((max(var_4, var_1)), (min((arr_5 [i_2] [i_4 - 2]), var_4))))))));
                        arr_15 [i_1] [i_1] = (arr_6 [i_1] [i_1 + 1]);
                    }
                }
            }
        }
        var_16 = (max((arr_3 [i_1] [i_1]), (arr_5 [i_1 + 1] [i_1 + 1])));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 13;i_6 += 1)
            {
                {
                    arr_20 [5] = (arr_13 [i_1 - 1] [i_1 - 1] [9] [i_6 + 2] [i_1 - 1]);
                    arr_21 [i_5] [13] = ((~((min((max(var_3, (arr_11 [i_6] [7] [6] [i_1 - 1]))), var_1)))));
                    var_17 = max((((arr_9 [i_6 - 2] [i_1] [i_1] [i_1]) ? (arr_14 [i_6 + 1] [i_6 - 2] [i_5 - 1] [4]) : (arr_14 [i_6 + 2] [i_6] [i_6] [i_6]))), (((((((arr_0 [i_1]) || (arr_9 [i_1 - 1] [i_5] [i_5] [i_6 + 2])))) > (arr_6 [11] [i_5 + 1])))));
                }
            }
        }
    }
    var_18 = var_1;
    var_19 = (((((max((max(var_2, var_2)), ((max(var_1, var_3))))))) == (min(var_4, (max(var_6, var_5))))));
    var_20 = (min(var_20, ((min(var_5, (((max(var_8, var_5)) >> (var_4 - 174))))))));
    #pragma endscop
}
