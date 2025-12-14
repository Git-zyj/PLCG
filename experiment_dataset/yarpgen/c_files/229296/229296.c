/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = (((max((arr_0 [i_0] [i_0]), ((var_5 ? var_13 : (arr_4 [i_0]))))) - (var_1 >= -23)));
                var_18 = (max(var_18, (-var_4 != var_3)));
            }
        }
    }
    var_19 = (((((!var_11) || (!var_13))) && var_10));
    #pragma endscop
}
