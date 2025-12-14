/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (((((178 ? var_8 : ((32640 ? -32640 : var_4))))) ? -32641 : var_9));
    var_12 = (((((var_4 ? ((2965365977 ? 8956996865426699725 : 18446744073709551586)) : var_0))) ? -var_5 : var_4));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = ((var_10 ? -var_5 : (~var_4)));
                var_14 = ((-(!13249)));
                arr_4 [i_0] [i_1] [i_1] = ((-var_5 ? ((var_0 ? var_7 : 28690)) : 32625));
            }
        }
    }
    var_15 = ((var_8 ? var_5 : var_7));
    #pragma endscop
}
