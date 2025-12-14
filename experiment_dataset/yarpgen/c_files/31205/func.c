/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31205
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [1U] = ((/* implicit */_Bool) 4294967283U);
        var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((short) (+(4294967283U))))), (((((/* implicit */_Bool) arr_1 [i_0] [(unsigned char)8])) ? (((var_1) ? (536868864U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 536868864U)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_1))))) != (var_2)))), (var_7)));
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) max(((+(((/* implicit */int) (short)4999)))), (((/* implicit */int) (short)22914)))))));
        var_18 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-22914)) ? (((/* implicit */int) (short)31744)) : (((/* implicit */int) var_5))))) != (3758098432U)))), (((((/* implicit */_Bool) arr_5 [i_1])) ? (((unsigned long long int) 4294967294U)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))))));
        arr_8 [(unsigned char)7] = ((/* implicit */short) ((((/* implicit */_Bool) min((((var_1) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-28457)) ? (12U) : (((/* implicit */unsigned int) var_4)))))))) ? (((((/* implicit */_Bool) ((signed char) arr_6 [i_1]))) ? (((arr_6 [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) : (arr_7 [i_1]))) : (arr_7 [i_1]))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15)))), (((/* implicit */int) (_Bool)1)))))));
    }
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3615157470U)) ? (-5538183791333648029LL) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (0LL)))))) && (((/* implicit */_Bool) ((unsigned int) max((((/* implicit */signed char) var_1)), ((signed char)97))))))))));
    var_20 = ((/* implicit */unsigned int) min((var_20), (509861949U)));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967294U)) ? (536868864U) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)57133)), (var_3)))) ? (max((((/* implicit */unsigned int) (short)32759)), (var_2))) : (((unsigned int) var_1))))));
}
