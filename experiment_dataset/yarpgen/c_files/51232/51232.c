/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = (max(((min(330294202, var_15))), ((min((arr_4 [i_0 - 2]), (arr_4 [i_0 - 1]))))));
                arr_6 [i_0] [i_0] = ((((arr_1 [i_1 + 1] [i_0 + 1]) != ((var_16 | (arr_5 [i_0] [i_0]))))));
                var_21 |= (arr_5 [i_0 - 2] [6]);
                arr_7 [i_1] [i_0] [i_0 - 3] = ((((((arr_4 [i_1 + 1]) ? (arr_4 [i_1 - 1]) : (arr_4 [i_1 - 1])))) ? (max((arr_2 [i_1] [6]), (((var_1 + 9223372036854775807) >> (5368 - 5367))))) : var_15));
            }
        }
    }
    var_22 += ((-(((!((min(var_5, var_8))))))));

    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        var_23 = (min(var_23, (arr_5 [0] [0])));
        arr_12 [i_2] = ((~(min((arr_1 [i_2 - 1] [i_2 - 1]), (arr_10 [i_2])))));
        var_24 = (min(var_24, ((((((-((var_15 ? (arr_5 [i_2] [18]) : (arr_0 [2])))))) ? ((~(((!(arr_8 [i_2 + 3] [i_2 + 1])))))) : (min((max((arr_8 [i_2] [i_2]), (arr_8 [i_2] [i_2]))), (((!(arr_4 [i_2])))))))))));

        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            arr_15 [i_3] [i_3] [i_2] = var_16;
            arr_16 [i_3] [i_2 + 2] [i_3] = (((((1989427778 / (arr_14 [i_2 - 1])))) ? ((var_16 ? (max(var_1, (arr_2 [i_3] [i_2]))) : 9031310880041019155)) : var_5));
        }
        var_25 = (arr_0 [1]);
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_26 = (max((min((arr_3 [i_4]), var_6)), var_5));
        var_27 -= max(((var_17 ^ (((((arr_0 [i_4]) + 2147483647)) << (var_3 - 41355))))), (((max(var_1, var_12)))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_23 [i_5] &= (~var_18);
        var_28 = (-((~(arr_21 [i_5] [i_5]))));
    }
    #pragma endscop
}
