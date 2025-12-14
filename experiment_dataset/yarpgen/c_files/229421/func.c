/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229421
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
    var_16 = ((/* implicit */unsigned short) ((int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)99)))) / (((/* implicit */int) var_6)))));
    var_17 -= ((/* implicit */unsigned long long int) ((-4182701094945742654LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)156)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) 10593305595603417334ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_1 [i_0]))))), (arr_1 [i_0])));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)55))))) ? (((2699213914U) >> (((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)107)), ((unsigned short)65535)))) - (65518))))) : (((/* implicit */unsigned int) ((arr_0 [i_0]) ? (((/* implicit */int) ((1550836219U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(_Bool)1])))))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) < (((/* implicit */int) var_12))))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 8; i_1 += 3) 
    {
        var_20 -= ((((/* implicit */_Bool) arr_3 [i_1 - 3])) ? (((/* implicit */int) arr_2 [i_1 + 2])) : (((/* implicit */int) (_Bool)1)));
        arr_5 [i_1 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)211)) ? (((((/* implicit */_Bool) (short)-20668)) ? (1161574045) : (((/* implicit */int) (short)2092)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 6836064569611163090LL)))))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */int) (short)-32181)) / (((/* implicit */int) (signed char)45))));
        var_22 *= ((/* implicit */signed char) var_14);
        arr_6 [i_1] [i_1 - 2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((_Bool) var_3))) : (((/* implicit */int) arr_3 [i_1 - 2]))));
    }
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) var_15))))))));
}
