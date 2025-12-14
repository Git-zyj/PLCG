/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((((-32767 - 1) ? var_5 : 0))))) + var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_13 -= (arr_2 [i_0] [i_0] [1]);
                var_14 = (arr_0 [i_1 - 4]);
                var_15 = (!var_11);
                var_16 &= var_5;
            }
        }
    }
    var_17 = var_3;
    #pragma endscop
}
