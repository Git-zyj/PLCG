/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (((((((var_1 ? var_7 : var_9)) != -var_4))) >= var_4));
    var_19 = (max(var_19, ((max(var_13, var_9)))));
    var_20 = 1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_21 = ((~1) + (((-32 * (arr_2 [1] [i_0 + 3])))));
                    var_22 = (((arr_1 [i_0 + 3]) ^ (~1)));
                }
            }
        }
    }
    #pragma endscop
}
