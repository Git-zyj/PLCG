/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46863
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
    var_15 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    arr_7 [i_2] = ((/* implicit */_Bool) 1057975005);
                    var_16 -= ((/* implicit */unsigned char) ((arr_5 [i_0 + 3] [i_0 + 3] [(unsigned short)1]) >= (arr_5 [i_0 + 1] [i_0 + 1] [i_2])));
                    arr_8 [3] [i_1] [i_1] [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1585133847294703556LL)) ? (((var_6) ? (((/* implicit */long long int) ((/* implicit */int) (short)-16384))) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 17590038560768ULL))))));
                }
                var_17 = ((((((3786005982U) << (((3702301985570154853ULL) - (3702301985570154841ULL))))) ^ (arr_5 [i_0 - 1] [i_0 + 1] [i_0 + 2]))) | (((/* implicit */unsigned int) ((((var_6) ? (((/* implicit */int) (short)16374)) : (((/* implicit */int) (unsigned short)40565)))) ^ (((/* implicit */int) (unsigned short)24971))))));
            }
        } 
    } 
}
