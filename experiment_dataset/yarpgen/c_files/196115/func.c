/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196115
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
    for (int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_0 [i_0 + 1] [i_0 + 1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))) : (((/* implicit */int) ((unsigned short) var_3)))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)126))) / (9U)));
        var_17 = ((/* implicit */signed char) min(((+(((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (arr_1 [i_0]) : (var_3))))), (((/* implicit */unsigned long long int) max((((unsigned short) (signed char)88)), (((/* implicit */unsigned short) arr_0 [i_0 + 1] [i_0 + 1])))))));
    }
    var_18 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) & (((/* implicit */int) var_7))))) ? ((~(2147352576))) : (min((var_5), (((/* implicit */int) (_Bool)0))))))), (((((/* implicit */_Bool) 4177920)) ? (((/* implicit */long long int) ((1575302229) - (var_5)))) : (var_2)))));
    var_19 = ((/* implicit */_Bool) (((+(-1575302230))) & (((/* implicit */int) (signed char)-120))));
    var_20 = ((/* implicit */short) (+(-1575302230)));
    var_21 = ((/* implicit */unsigned short) (unsigned char)31);
}
