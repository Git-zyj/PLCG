/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (arr_0 [10] [i_0 - 3])));
                var_18 += (((arr_5 [14] [14]) != 6728510348121264474));
            }
        }
    }
    var_19 = (min(var_19, var_8));
    var_20 += max(var_13, var_5);
    var_21 = (-((((min(-9109832712658881229, var_15))) ? var_9 : (var_1 || var_8))));
    #pragma endscop
}
