/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [4] = (((((((var_13 ? var_9 : var_5)) - (1770410394 <= -1859243347)))) ? (((var_15 - var_2) ? (var_4 / var_11) : (((var_10 >> (var_4 - 2342083185)))))) : ((((((var_11 ? var_14 : var_16))) ? var_7 : var_16)))));
                var_17 += ((var_5 ? (var_9 >= var_8) : ((var_8 ? var_16 : ((var_15 ? var_8 : var_7))))));
            }
        }
    }
    var_18 = ((((((var_10 == var_14) <= ((var_9 ? var_9 : var_5))))) * (((((var_7 ? var_3 : var_7))) ? (var_11 >= var_4) : (var_12 < var_7)))));
    #pragma endscop
}
