/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = ((~((2269814212194729984 ? (arr_3 [i_0] [i_1 + 3] [i_1]) : -133886024644124073))));
                arr_5 [i_1] = 133886024644124072;
                var_12 = arr_1 [i_1];
            }
        }
    }
    #pragma endscop
}
