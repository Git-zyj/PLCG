/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (((min(var_8, ((5 ? -98 : var_3))))))));
                arr_5 [i_0] [i_1] = (((max(-18665, 18664))));
                arr_6 [i_0] = (((max(((42294 ? var_5 : var_5)), ((min(var_2, var_7))))) > (arr_2 [i_1])));
            }
        }
    }
    #pragma endscop
}
