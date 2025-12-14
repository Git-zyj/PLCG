/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 22;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_1] = ((!(arr_0 [i_1 + 3])));
            arr_6 [i_1] = var_14;
        }
        for (int i_2 = 3; i_2 < 22;i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] [i_2] [i_0] = ((((max(var_5, ((max(35, var_8)))))) ? ((((max((arr_4 [i_2] [i_2 - 1]), 127))) ? (max(var_0, (arr_8 [i_2] [i_2] [i_2 - 3]))) : (((-2130415020 ? 3970437578 : (arr_7 [i_2 + 1])))))) : ((((-36 != (!var_18)))))));
            var_20 = (min(var_20, ((((arr_1 [i_2]) ? ((2130415049 ? (arr_8 [i_0] [i_2 - 1] [i_2 - 1]) : var_5)) : var_8)))));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            arr_12 [i_0] [i_3] = ((-5751311477096299431 ? ((max(31, 1188411441))) : (((0 != (-13 != 2147483647))))));
            var_21 = ((!(((2147483647 ? (max((arr_4 [i_0] [i_0]), (arr_2 [i_3]))) : (arr_0 [i_0]))))));
        }
        var_22 = (((((arr_8 [i_0] [i_0] [20]) ^ (arr_2 [i_0]))) != ((((var_17 && (arr_2 [i_0])))))));
        var_23 = max(((-(((arr_0 [i_0]) ? (arr_2 [i_0]) : var_18)))), (max((1958381142 & 2147483647), ((max((arr_3 [i_0] [i_0] [i_0]), (arr_11 [i_0])))))));
    }
    var_24 += ((-1958381142 ? ((var_6 ? var_1 : (var_7 | var_7))) : (!-1)));
    #pragma endscop
}
