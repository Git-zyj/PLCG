/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_12 += ((!((max(((-(arr_5 [0]))), ((max(var_6, var_9))))))));
                var_13 = (min(127, 54912));
                var_14 = var_11;
                var_15 = ((-155 ? 212 : 21));
            }
        }
    }
    var_16 = max(var_1, 19706);
    #pragma endscop
}
