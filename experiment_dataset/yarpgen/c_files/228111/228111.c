/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (min(var_14, ((min((max((arr_0 [i_0] [i_0]), 15100455)), (arr_2 [i_0]))))));
        var_15 += (min((min((arr_0 [13] [i_0]), (arr_2 [i_0]))), (((arr_2 [i_0]) - (arr_0 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = max((((((var_1 ? 115 : 1))) ? (max(var_12, 0)) : (max((arr_0 [i_0] [i_0]), (arr_2 [i_0]))))), (((((arr_0 [i_0] [i_0]) <= (arr_2 [i_0]))) ? (arr_0 [0] [i_0]) : (((-(arr_1 [i_0])))))));
        arr_4 [i_0] = var_5;
    }
    var_16 = (((~-1) ? 1 : ((1 << (1194887889 - 1194887871)))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            {
                var_17 = ((((~(arr_9 [i_1]))) - (((-(arr_2 [i_2 - 2]))))));
                var_18 |= (-((min(124, (arr_5 [i_1])))));
                var_19 ^= var_7;
            }
        }
    }
    var_20 = var_8;
    #pragma endscop
}
