/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (arr_0 [i_1]);
                arr_5 [i_0] [i_0 - 1] = (arr_1 [i_0 + 1] [i_0 - 1]);
                var_13 &= (max(var_4, var_9));
            }
        }
    }
    var_14 *= (-117 || -1152667949);
    var_15 = ((((-3214833867453034284 ^ -1272156003) ? ((0 ? var_11 : 2158316778839344684)) : var_3)));
    #pragma endscop
}
