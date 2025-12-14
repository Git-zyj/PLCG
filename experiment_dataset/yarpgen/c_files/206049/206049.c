/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_13 = ((~(((arr_1 [i_0]) ? var_8 : (((!(arr_1 [i_1]))))))));
                var_14 = (max(var_10, 56258));
            }
        }
    }
    var_15 = ((var_1 & ((var_7 ? ((var_9 ? 4208632725167371475 : var_11)) : var_2))));
    var_16 = -1701998517;
    var_17 = var_11;
    #pragma endscop
}
