/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231027
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) + ((+(var_1))))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) max(((signed char)56), (arr_0 [i_0] [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(short)13])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (var_11)))));
        var_15 ^= ((/* implicit */unsigned char) ((((max(((~(var_11))), (((/* implicit */long long int) -193763073)))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [(signed char)16]))) * (4294967283U))))) - (4294967216U)))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        for (unsigned int i_2 = 1; i_2 < 21; i_2 += 1) 
        {
            {
                arr_9 [i_2] [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_1] [i_2 + 1]))));
                var_16 -= ((/* implicit */unsigned char) var_5);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) 5748041443088021747LL);
}
