/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    var_20 = (min(var_5, ((min((-8331984665864035782 || 8331984665864035782), (var_6 <= var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = ((((max((arr_0 [i_0] [i_0 + 1]), 0))) ? -17 : ((max((arr_0 [i_0] [i_0 + 1]), (arr_1 [i_0] [i_0 + 1]))))));
                var_22 = -15406134171189632957;
                var_23 = ((~(((((min(var_1, var_1)))) ^ 3786859533675154849))));
                var_24 = (((((max((arr_3 [i_0] [7]), (arr_0 [i_0 + 1] [2]))) & (max((arr_2 [7] [i_1] [i_1]), 15406134171189632928)))) / (max((((18 < (arr_3 [i_0 - 1] [1])))), 15406134171189632960))));
            }
        }
    }
    #pragma endscop
}
