/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_16 = (max(var_16, ((min(var_12, 6144)))));
        var_17 = ((((((-21097 + -18868) || 1692793858))) >> (var_0 * var_12)));
        var_18 = (min(var_18, (arr_1 [i_0])));
        arr_3 [0] |= ((!(arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((((((((5642567039696118049 ? (arr_0 [i_1]) : (arr_0 [i_1])))) ? (arr_5 [i_1]) : (arr_0 [i_1])))) ? (arr_0 [i_1]) : (((arr_1 [i_1]) ? (((var_0 << (((arr_5 [i_1]) + 874795875))))) : (((arr_0 [i_1]) ? 5642567039696118049 : 216))))));

        for (int i_2 = 2; i_2 < 7;i_2 += 1)
        {
            var_19 = (((((-(max(3089237582929687758, (arr_2 [i_1])))))) ? (((arr_5 [i_2 + 1]) / 93)) : ((((15725970125745504863 != 31) && 21097)))));
            var_20 = (min(var_20, ((((21097 + -21097) + ((-(arr_7 [i_2 - 2] [i_2 + 2] [i_2 + 3]))))))));
        }
        var_21 = (((arr_9 [i_1] [i_1]) >= (max((arr_9 [1] [1]), (arr_9 [i_1] [i_1])))));
    }
    var_22 = ((49 ? 0 : 210));
    #pragma endscop
}
