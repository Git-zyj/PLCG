/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (arr_1 [i_0])));
                var_12 ^= (arr_1 [11]);
                var_13 = (274609471488 & 77);
            }
        }
    }
    var_14 = (((((var_5 ? (((var_0 << (var_3 - 402)))) : ((var_4 ? var_10 : var_9))))) ? (((((var_4 ? var_5 : var_9))) ? (~var_9) : var_10)) : (((((65523 ? 65535 : 8357)) + var_5)))));
    var_15 = (((var_0 >= var_8) ? (((((var_7 ? var_5 : var_10))) ? (((var_6 + 9223372036854775807) >> (var_2 - 146))) : -var_8)) : var_1));
    #pragma endscop
}
