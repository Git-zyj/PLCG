/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53230
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_9)))))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((+(var_5)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_4)) : (var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((max((var_2), (((/* implicit */long long int) arr_2 [i_1])))), (((/* implicit */long long int) arr_1 [i_0] [i_1]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1]))) & (((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */unsigned long long int) 1799181444))))))));
                arr_4 [i_0] [i_1] &= ((/* implicit */unsigned short) min(((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */long long int) min((arr_1 [i_0 - 1] [i_0 - 1]), (((/* implicit */int) arr_2 [i_1]))))) : (var_2))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) <= (var_4))))) & (((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned int) arr_1 [i_0] [i_1])))))))));
                var_14 = ((/* implicit */unsigned char) max((arr_1 [i_0] [i_1]), (((((/* implicit */_Bool) ((arr_1 [i_0] [i_1]) / (((/* implicit */int) arr_2 [i_0 - 1]))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) var_10)))) : (arr_0 [i_0 + 1])))));
            }
        } 
    } 
}
