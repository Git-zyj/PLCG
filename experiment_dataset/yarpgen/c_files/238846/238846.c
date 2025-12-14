/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = (((arr_4 [i_0]) ? (~1329257139) : (var_9 ^ var_10)));
                var_19 = ((0 ? 0 : -42));
                var_20 = (((max((arr_1 [i_0] [i_1]), ((var_5 ? 10118407143954250092 : (arr_4 [0]))))) < 18446744073709551615));
            }
        }
    }
    var_21 = var_13;
    #pragma endscop
}
