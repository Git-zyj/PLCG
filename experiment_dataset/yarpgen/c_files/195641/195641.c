/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_13 ^= (max((((((var_12 ? 1 : (arr_1 [1] [1])))) ? ((var_11 ? 0 : (arr_2 [1]))) : var_9)), ((max(0, (max(-1, -31)))))));
                var_14 |= var_7;
                var_15 = (((((arr_5 [i_0 - 2]) + (((arr_5 [i_1]) ? (arr_2 [i_0]) : var_0)))) - (arr_1 [i_0 - 1] [i_1 - 2])));
            }
        }
    }
    var_16 = ((var_1 ? 0 : (max((-11163 < var_12), (~var_5)))));
    #pragma endscop
}
