/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [4] [3] [i_0] = ((+(((arr_5 [i_0 + 2]) - var_13))));
                arr_7 [i_0] [i_0] = ((min((arr_2 [i_0 - 1]), (arr_1 [i_0 + 2]))));
            }
        }
    }
    var_19 *= ((var_12 ? 12372 : ((6748544017542707667 ? var_13 : var_14))));
    var_20 = 21523448;
    #pragma endscop
}
