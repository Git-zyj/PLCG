/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((-(max(2367016941988744083, -8573963021373049305)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [2] [i_1] = (min(-1034600020758898710, -1034600020758898710));
                var_16 = arr_3 [i_0];
                var_17 = 41930;
                var_18 -= ((((max((min(var_10, (arr_2 [1] [1]))), -26))) & ((((-(arr_3 [i_1]))) & (((var_14 ? var_11 : var_2)))))));
            }
        }
    }
    var_19 = (max(var_19, var_7));
    var_20 = (max(((((min(var_2, var_13))) ? var_5 : ((1 ? var_3 : var_0)))), (((-14139 ? -684324884592217986 : -111)))));
    var_21 = 1034600020758898705;
    #pragma endscop
}
