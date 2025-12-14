/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 8191;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = (max((((min((arr_1 [i_0]), (arr_1 [i_1]))) | (arr_0 [i_0 - 1]))), 8166));
                var_20 = (-4748 * -8166);
            }
        }
    }
    var_21 |= ((min(((max(var_10, var_9))), ((8188 ? var_5 : 8191)))));
    var_22 ^= ((-((min(0, var_9)))));
    #pragma endscop
}
