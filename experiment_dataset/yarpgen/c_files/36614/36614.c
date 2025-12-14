/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 20938;
    var_20 = var_9;
    var_21 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] = (max((((!((min((arr_2 [i_0]), 18446744073709551589)))))), 50));
                var_22 -= ((-(arr_4 [i_0])));
                var_23 |= (min(((!(arr_5 [i_1]))), (!56)));
            }
        }
    }
    var_24 = var_17;
    #pragma endscop
}
