/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_11 = (max(var_11, ((((((arr_1 [16] [i_1 - 3]) <= ((min((arr_2 [0] [i_1]), (arr_2 [0] [16])))))) ? (var_5 >= -18436) : 1)))));
                arr_4 [i_0] = -18453;
                var_12 = (((var_9 || var_9) ? (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : 1521865459)) : ((0 ? 1 : 1))));
                var_13 = 2342264656;
            }
        }
    }
    #pragma endscop
}
