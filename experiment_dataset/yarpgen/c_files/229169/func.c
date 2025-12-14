/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229169
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
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) var_0);
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_0])), (375984248613549275ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_4))))) : ((-(arr_1 [i_0])))))) ? (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (unsigned char)4)))), (((/* implicit */int) (_Bool)1))))) : (((((unsigned long long int) arr_3 [i_0 + 1])) * (((/* implicit */unsigned long long int) var_3))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))) > (arr_5 [i_1])));
        arr_6 [i_1] = ((arr_5 [i_1]) <= ((+(arr_5 [i_1]))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_1]) : (((/* implicit */long long int) arr_4 [i_1])))) + (((/* implicit */long long int) arr_4 [i_1]))));
        arr_8 [i_1] [i_1] = ((/* implicit */short) ((arr_4 [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4)))));
    }
    var_16 = ((/* implicit */unsigned long long int) ((var_12) >= (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
    var_17 = ((/* implicit */short) ((var_0) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_9)))))))))));
}
