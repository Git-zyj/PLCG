/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((var_5 || ((min(var_0, 22430))))))));
    var_12 = (max(var_12, (min(((((min(var_4, var_7))) ? var_8 : var_7)), var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 *= (min(((-(((arr_3 [i_1] [i_1] [i_0]) << (var_1 - 1338634272909460114))))), (min(((var_2 ? (arr_0 [i_0]) : (arr_3 [i_1] [i_1] [i_0]))), ((min(63197, -781969224)))))));
                var_14 = (min(var_14, ((max((((arr_1 [i_0]) + var_4)), (!var_7))))));
                var_15 = (min(var_15, (arr_3 [i_0] [1] [i_1])));
                var_16 *= ((-var_1 ? var_9 : ((min(0, 10338)))));
                var_17 = -var_4;
            }
        }
    }
    var_18 |= var_3;
    var_19 = (var_7 & ((2093056 ? var_6 : 1)));
    #pragma endscop
}
