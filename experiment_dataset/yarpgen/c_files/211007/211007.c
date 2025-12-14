/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (588786804 ^ var_11)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = var_1;
                var_16 = 26268;
                var_17 |= var_0;
            }
        }
    }
    var_18 |= (var_6 * var_1);
    #pragma endscop
}
