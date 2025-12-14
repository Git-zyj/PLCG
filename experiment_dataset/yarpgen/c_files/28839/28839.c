/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_10;
    var_12 = ((-(~-var_7)));
    var_13 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] [i_0 - 2] [i_1] = (min(-3, (((18446744073709551615 * var_0) ? (4637648522526127367 - var_9) : (var_9 >= 5)))));
                var_14 |= (var_8 ? (((var_10 % 8) ? var_4 : ((var_3 ? var_4 : 64966)))) : (((var_3 | 56) ^ 12)));
            }
        }
    }
    #pragma endscop
}
