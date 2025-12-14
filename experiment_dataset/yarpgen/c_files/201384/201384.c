/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((!((max(1, -3423561277080496485)))));
                var_17 = (2 * 18446744073709551605);
                var_18 *= (((max((arr_1 [0]), 4575657221408423936)) / (((~(arr_3 [1] [i_1]))))));
                var_19 = (((((((arr_3 [i_0] [i_1]) % (arr_3 [i_0] [i_1])))) ? 65535 : ((~(arr_0 [i_0]))))));
            }
        }
    }
    var_20 = (max(var_20, (((min(var_7, var_11))))));
    var_21 = ((((56 ? ((var_16 ? var_2 : var_7)) : var_9))) ? (((var_7 ? (~2) : var_15))) : (((32512 ^ 255) ? (((min(var_7, var_7)))) : (var_12 & var_16))));
    #pragma endscop
}
