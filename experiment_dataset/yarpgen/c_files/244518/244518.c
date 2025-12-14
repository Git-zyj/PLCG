/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_10 = ((((((var_5 >= (arr_0 [i_0] [i_1]))) ? (((var_2 >> (((arr_1 [i_1]) - 42384))))) : (((arr_0 [i_0] [i_1]) | (arr_3 [i_1]))))) % ((((((9330155777927049959 ? 1 : 1073741823))) ? (((var_4 ^ (arr_1 [i_1])))) : (((arr_1 [17]) ? 1310952200 : 1)))))));
                arr_4 [i_0] [i_0] [i_0] = ((((((((var_8 ? var_5 : var_9)) != (56 < var_3))))) > ((((0 ? -3224214603499469006 : (arr_1 [i_0]))) >> ((((0 ? 1 : 14925371663995149469)) - 14925371663995149437))))));
            }
        }
    }
    var_11 = (((((var_3 ^ var_6) >> ((((246 ? var_3 : var_8)) - 4518609973094466352)))) << ((((737429940 ? var_7 : var_4)) / ((-2147483641 ? var_4 : var_7))))));
    var_12 = ((((((((var_9 ? var_9 : 250))) ? (((var_7 ? var_8 : 686383017))) : ((342161230343035085 ? 105 : var_3))))) ? ((((((var_3 ? var_9 : -28421))) < ((var_2 ? 65535 : 4361422606398231687))))) : (((((426835165 ? var_0 : var_0))) ? (var_4 - 11) : (14 < 4294967295)))));
    #pragma endscop
}
