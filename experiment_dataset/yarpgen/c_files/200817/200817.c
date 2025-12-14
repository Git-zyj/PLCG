/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((-(arr_0 [i_0] [i_0])))) ? 105 : (arr_0 [i_0] [i_0])));
                var_16 = ((((min(((max((arr_5 [i_0]), var_8))), 2649))) ? ((~(arr_2 [i_0] [i_1]))) : var_0));
                var_17 = (max(var_17, ((((arr_1 [i_0] [i_1]) <= 157)))));
            }
        }
    }
    var_18 = var_9;
    #pragma endscop
}
