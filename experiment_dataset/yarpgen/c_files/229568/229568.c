/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;
    var_17 = (min(var_17, var_10));
    var_18 = (var_15 ? 0 : var_2);
    var_19 &= var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = (arr_4 [i_1] [i_0]);
                arr_5 [i_0] = arr_0 [i_0] [i_1];
            }
        }
    }
    #pragma endscop
}
