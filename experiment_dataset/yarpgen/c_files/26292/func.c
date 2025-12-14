/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26292
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_13 &= ((/* implicit */long long int) var_11);
    var_14 = ((/* implicit */long long int) var_3);
    var_15 = ((/* implicit */signed char) var_2);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */int) (signed char)-27);
                    arr_10 [i_0] [i_0] = ((/* implicit */int) arr_4 [i_0] [i_0]);
                    var_16 = ((/* implicit */unsigned long long int) arr_5 [i_0]);
                    arr_11 [i_1] |= ((/* implicit */long long int) arr_8 [i_2 - 3] [i_0]);
                }
            } 
        } 
        arr_12 [6] &= ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((/* implicit */int) (short)-25868))) + (8884757670930580175LL)))));
    }
}
