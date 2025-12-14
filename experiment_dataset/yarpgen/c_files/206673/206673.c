/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_13 ^= ((((arr_3 [i_2] [i_1]) | 122)));
                    var_14 = ((3 ? (min(11, -318562361107687465)) : 152));
                }
            }
        }
    }
    var_15 = (((max((9 | 0), 1))) ? (((var_3 + 9223372036854775807) >> (((max(-6837447741951619947, var_11)) + 3485033711330328610)))) : ((((var_8 <= var_2) / (-6837447741951619938 != -5322377300176970779)))));
    var_16 |= var_6;
    #pragma endscop
}
