/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = (max(var_20, var_17));
                var_21 = -80;
            }
        }
    }
    var_22 ^= (((((-((14931876833919644572 ? 127 : var_5))))) ? (var_6 / var_1) : ((1 ? (var_15 * var_6) : ((-1 ? -18 : 255))))));
    var_23 += var_1;
    #pragma endscop
}
