/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_16 += ((+((max((arr_3 [i_0]), (arr_3 [i_1]))))));
                var_17 += 21;
            }
        }
    }
    var_18 = min(var_12, var_2);
    #pragma endscop
}
