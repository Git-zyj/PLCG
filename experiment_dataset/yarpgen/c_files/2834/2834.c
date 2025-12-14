/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (min((arr_3 [i_0] [i_1 - 4] [i_0]), (arr_5 [i_0] [i_1])));
                var_15 = (var_0 > var_14);
                var_16 = ((((((min(var_0, var_10))))) ? var_8 : (max((var_10 && var_5), (((arr_1 [i_0]) ? 1 : 281474976710655))))));
                var_17 += (((!343698086) ? (((((((arr_0 [14]) ? var_9 : 0))) ? 14 : (arr_5 [8] [8])))) : ((~((var_9 ? var_4 : 864238921))))));
            }
        }
    }
    var_18 &= (((((var_12 ? (16 <= var_10) : (!var_3)))) ? 1273313215 : ((-(~var_5)))));
    #pragma endscop
}
