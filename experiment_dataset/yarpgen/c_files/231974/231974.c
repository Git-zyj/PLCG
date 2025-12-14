/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (((123 ^ (~var_6))));
    var_16 -= ((min(var_4, (max(3210522709, 1084444577)))));
    var_17 = 93;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = 1860507988;
                var_19 &= (min(((-28 ? 46 : 786726311702406625)), (134213632 + 262143)));
                var_20 = ((((((max(var_8, -124))) != ((-100 + (arr_3 [1]))))) ? (786726311702406625 % 110) : (((((max(0, (-9223372036854775807 - 1)))) ? (max(127, 3210522709)) : (((1 ? 227 : (arr_0 [i_1])))))))));
            }
        }
    }
    #pragma endscop
}
