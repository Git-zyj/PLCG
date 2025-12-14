/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205052
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
    var_16 = max((((/* implicit */short) var_7)), ((short)63));
    var_17 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-64)) ? (((/* implicit */int) (unsigned short)1023)) : (((/* implicit */int) (_Bool)1))))), (min((9223372036854775807LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 8388607ULL)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) var_8)))))))));
    var_18 = ((/* implicit */signed char) max((((var_13) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 9223372036854775807LL)))) : (((9759844700846406822ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)22780)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1396625300U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (4U)))))))));
    var_19 = ((/* implicit */unsigned int) ((var_5) ^ (((((((/* implicit */int) var_6)) / (((/* implicit */int) (unsigned char)56)))) / (((((/* implicit */int) (short)127)) / (((/* implicit */int) (unsigned char)123))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 12396063529129237179ULL)) ? (8686899372863144793ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58599)))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) min(((short)-30746), ((short)24)))) + (2147483647))) << (((((var_5) + (1944284182))) - (16)))))) : (4294967284U)));
        var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) (short)10)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 7U)) || (((/* implicit */_Bool) var_10)))))) : (((((/* implicit */_Bool) 6050680544580314433ULL)) ? (48284350497585634ULL) : (8686899372863144784ULL)))))) || (((_Bool) arr_2 [(unsigned char)8])));
    }
}
