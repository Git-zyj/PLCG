/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((var_10 ? ((var_2 ? ((39149 ? 223 : 6)) : (227 <= var_4))) : var_10)))));
    var_17 = ((((((min(29524, -8003)))) - var_2)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                var_18 = ((~(-1337238125013291449 % 234)));
                var_19 = ((14032 ? ((min((max(var_13, 42)), (arr_3 [i_1 + 1] [i_0] [i_0])))) : (117 * 15991)));
                var_20 = (min(var_20, ((((((arr_3 [i_0] [i_0] [i_1 - 2]) ? (((max(var_9, -29499)))) : (min(192, (arr_2 [i_0]))))))))));
            }
        }
    }
    #pragma endscop
}
