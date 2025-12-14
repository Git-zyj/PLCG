/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    var_15 = (var_0 | var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 = (max(var_16, ((((!((max((arr_0 [i_1]), (arr_0 [15])))))) ? ((((((!(arr_4 [10])))) >> (var_10 - 2050990979)))) : ((((min(var_6, var_4))) ? (arr_4 [24]) : (0 | 11239734670696224191)))))));
                var_17 -= 3331885471676980856;
                arr_5 [i_0] = (var_4 == var_6);
            }
        }
    }
    var_18 = var_4;
    #pragma endscop
}
