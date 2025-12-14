/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1 - 1] = (((((arr_3 [1]) && (arr_1 [i_1 + 1]))) && var_1));
                arr_5 [i_1] [i_0] [i_0] |= ((!(((0 ? 1552420545 : 1)))));
                var_12 = (max(var_12, 3350445607));
            }
        }
    }
    var_13 = (max(((((max(-11, var_10))) ? var_3 : var_3)), ((var_0 ? (var_5 ^ var_4) : ((var_0 ? var_4 : 34))))));
    #pragma endscop
}
