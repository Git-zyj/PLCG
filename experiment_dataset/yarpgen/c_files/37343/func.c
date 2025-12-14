/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37343
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
    var_13 = ((/* implicit */unsigned short) 2593038548U);
    var_14 = ((/* implicit */short) max((((((/* implicit */_Bool) min((9223372036854775807LL), (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned long long int) 4294967295U)))))), (((/* implicit */unsigned long long int) (~(((unsigned int) var_6)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0])))) <= (((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            arr_7 [i_1] = (~((~((~(633903799U))))));
            var_15 += ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)17291)) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) : (((/* implicit */int) (short)7393))))), (var_4))), (((/* implicit */unsigned long long int) (+(arr_5 [i_0] [i_0] [i_1]))))));
        }
    }
    for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 2) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_7);
        arr_11 [i_2] |= ((/* implicit */unsigned int) ((unsigned char) ((arr_9 [i_2 + 1]) & (arr_8 [i_2 - 1]))));
    }
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_9))), (((/* implicit */long long int) (+(((/* implicit */int) var_8))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))))));
}
