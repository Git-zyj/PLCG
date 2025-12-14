/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_0;
    var_11 *= (((max(6052740877894583136, (max(var_0, -6052740877894583115)))) == var_1));
    var_12 = ((min((min(var_1, var_1)), (124 != -1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = 6052740877894583136;
                var_14 *= ((max(-98, ((8642 ? -6805533434243232817 : 1073739776)))));
            }
        }
    }
    #pragma endscop
}
