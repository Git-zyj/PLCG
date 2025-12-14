/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((~((min(106, 1)))))) ? var_6 : ((((min(var_8, var_12))) ? 2 : 16492674416640))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = (min(((-(min(206158430208, -16492674416641)))), (((((((arr_0 [i_0]) ? 16492674416642 : (arr_1 [i_0] [i_1])))) && (-206158430209 + -1))))));
                var_18 = ((-206158430238 ? ((0 >> (16492674416638 - 16492674416622))) : -32767));
            }
        }
    }
    #pragma endscop
}
