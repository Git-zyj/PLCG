/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 += (max(((((((-(arr_5 [i_0] [6] [6])))) ? ((1 ? var_9 : var_7)) : (28 > 0)))), var_8));
                var_14 += ((+(((!(((38 ? (arr_6 [i_0] [1]) : (-2147483647 - 1)))))))));
            }
        }
    }
    var_15 = ((1 ? 189 : 180));
    var_16 = var_1;
    var_17 |= ((-1 ? 1 : 2));
    #pragma endscop
}
