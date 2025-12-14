/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32118
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
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) min((((/* implicit */short) var_4)), (var_11)))), (var_15))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)194))) : (var_7))), (max((((/* implicit */long long int) var_1)), (var_9)))))))))));
    var_17 = ((/* implicit */int) ((((/* implicit */int) ((short) min((((/* implicit */long long int) var_10)), (var_7))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_15)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_5))))), (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) + ((+(610578068)))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) 610578096);
    }
    var_19 = ((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned long long int) ((int) var_10))), (var_12))));
}
