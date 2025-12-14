/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_13 % var_16);
    var_21 = ((((var_14 < ((var_19 << (var_8 + 6375619585437449272))))) ? ((max(var_12, 1463876210))) : (var_16 < var_8)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0]);
        var_22 = (arr_1 [i_0]);
        var_23 = (min(var_23, ((((arr_2 [i_0]) >> ((((((((~(arr_2 [i_0]))) + 2147483647)) << (((arr_1 [i_0]) - 1803989986)))) - 2147483613)))))));
        arr_4 [i_0] = arr_1 [i_0];
        var_24 = (min(var_24, (((((-(((var_16 < (arr_2 [5])))))) < (((((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0]))) | (arr_1 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_25 &= ((-(((arr_2 [i_1]) ? (arr_5 [i_1]) : (arr_2 [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 11;i_3 += 1)
            {
                {
                    var_26 = ((~(arr_9 [i_3 - 1] [i_2] [i_3 - 3])));
                    arr_12 [i_2] [i_2] [i_3] [i_3] = ((-(arr_9 [i_1] [i_2] [i_3])));
                }
            }
        }
        var_27 = ((arr_7 [i_1] [10] [i_1]) ? (arr_2 [i_1]) : (((arr_6 [i_1] [i_1]) ? (arr_0 [i_1]) : (arr_9 [i_1] [i_1] [1]))));
        arr_13 [i_1] = ((((arr_10 [i_1] [i_1] [i_1]) && ((((arr_8 [i_1] [i_1] [i_1]) ? (arr_8 [i_1] [2] [i_1]) : (arr_7 [i_1] [0] [i_1])))))));
    }
    var_28 = (var_7 | var_12);
    #pragma endscop
}
