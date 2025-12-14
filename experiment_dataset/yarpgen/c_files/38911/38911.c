/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 0;
    var_15 = ((max((var_7 > 1), var_8)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((!(max(var_11, 0))));
                var_16 ^= ((0 * (!var_13)));
                var_17 = ((~(~-63)));
            }
        }
    }
    #pragma endscop
}
