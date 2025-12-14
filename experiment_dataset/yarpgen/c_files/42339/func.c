/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42339
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) arr_2 [i_1]);
                var_18 = ((/* implicit */long long int) var_16);
                var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)4))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        var_20 = ((/* implicit */_Bool) ((short) ((((arr_9 [i_2] [i_2]) + (2147483647))) << (((/* implicit */int) var_6)))));
        arr_11 [i_2] [14] |= ((/* implicit */unsigned long long int) 4294967294U);
    }
}
