/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((min((min(3571742994917826576, var_19)), var_18)) / var_19));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = 46078;
                var_21 = ((2180812381 * (((((arr_1 [i_1]) > 8419))))));
                arr_5 [i_0] [i_0] = var_14;
            }
        }
    }
    #pragma endscop
}
