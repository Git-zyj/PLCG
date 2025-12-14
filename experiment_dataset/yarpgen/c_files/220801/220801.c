/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((((((61618 ^ var_16) ? var_0 : var_2))) ? var_6 : var_1));
    var_18 = ((((max((var_2 / var_11), var_8))) ? ((((var_12 ? 116 : 116)) - 524287)) : (((-15438 - var_4) ? (~var_9) : (~39738)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 ^= 101;
                    var_20 = ((((((arr_2 [i_0]) ? var_14 : (arr_2 [i_0])))) ? (((!(arr_2 [i_2])))) : (((arr_2 [i_1]) ? (arr_2 [i_1]) : (arr_2 [i_1])))));
                }
            }
        }
    }
    #pragma endscop
}
