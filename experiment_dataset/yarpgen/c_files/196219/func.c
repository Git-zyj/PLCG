/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196219
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
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) max((((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)15))) ^ (var_8))) < (((/* implicit */long long int) ((var_4) * (var_4))))))), (((signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)60))) : (var_6)))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (((~(((/* implicit */int) (signed char)15)))) < (((/* implicit */int) (signed char)0))))), (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) / (((/* implicit */int) arr_1 [i_0]))))) : (var_9)))));
        var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [i_0] [i_0]))));
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) 3U)))))));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)11))) ^ (var_10)));
        arr_6 [8ULL] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)6);
    }
    var_17 = ((/* implicit */unsigned int) ((((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (1286031042) : (((/* implicit */int) (signed char)110))))) ^ (((/* implicit */unsigned long long int) var_10))));
}
