/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218827
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
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) < (arr_2 [i_0]))) ? (((/* implicit */int) var_15)) : (((((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) ^ (min((arr_1 [i_0] [i_0]), (((/* implicit */int) (short)30649))))))));
            var_16 = ((/* implicit */int) ((min((arr_2 [(signed char)7]), (((/* implicit */unsigned long long int) 1077899632)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
        }
        arr_5 [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((((/* implicit */int) var_3)), (1077899632)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) 1077899640))))) : (-376839912))), (((-376839942) | (-1688129132)))));
    }
    var_17 = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_9))))), (((/* implicit */unsigned long long int) var_8))));
}
