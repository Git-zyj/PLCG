/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = (min(var_14, ((max((((((var_12 ? -5705433790789404743 : 24789))) ? (((arr_0 [i_0]) | 1048575)) : (max(2147483647, (arr_0 [i_1 + 1]))))), 299798212)))));
                arr_4 [i_0] [i_0] [i_0] = (min(5369880228200234682, (((var_12 ? 4670012671285669931 : -159)))));
                arr_5 [i_0] [i_1] [i_1 - 2] = max(97, (((arr_1 [i_0]) + (-32336 % var_11))));
            }
        }
    }
    var_15 = (max(var_15, ((min(var_12, var_11)))));
    #pragma endscop
}
