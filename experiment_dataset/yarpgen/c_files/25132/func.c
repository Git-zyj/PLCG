/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25132
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
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (((unsigned int) (unsigned short)28)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_12 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23106))) : (var_9))))));
            var_13 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -364465357)) || (((/* implicit */_Bool) var_9)))))) : (1465010157U)));
            var_14 ^= (~(((/* implicit */int) arr_5 [i_1] [i_0 - 1])));
            var_15 ^= ((/* implicit */short) var_7);
        }
        arr_6 [0U] [i_0] &= ((/* implicit */long long int) ((unsigned short) ((long long int) arr_4 [i_0])));
        arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [4ULL])))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))) : (((4294967281U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125)))))));
    }
}
