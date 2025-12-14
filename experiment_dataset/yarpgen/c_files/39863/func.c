/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39863
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
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((min((var_2), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)172)), (var_6)))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)181)) ? (arr_0 [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)172))))))))));
        var_20 = ((/* implicit */unsigned short) (-(arr_0 [i_0])));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */long long int) 1223421905U)) : (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) - (var_12)))))) ? (((/* implicit */int) max((((unsigned short) 1770521005U)), (((/* implicit */unsigned short) var_3))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2524446296U)) ? (((/* implicit */unsigned long long int) 3514535665U)) : (arr_0 [i_1])))) ? (var_6) : (((/* implicit */int) (unsigned short)26981))))));
        var_22 ^= ((/* implicit */unsigned int) ((_Bool) (+(((/* implicit */int) ((_Bool) 780431630U))))));
        var_23 = ((/* implicit */unsigned int) (unsigned char)238);
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (18156523552906703644ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)52))) : (((258849330U) * (((/* implicit */unsigned int) 1558304722))))))) : ((-(((((/* implicit */_Bool) 18446744073709551612ULL)) ? (1374515031555986290ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))))));
        arr_6 [i_1] = ((/* implicit */unsigned char) (signed char)30);
    }
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (1122076988U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)72)))))) ? (((((/* implicit */_Bool) ((long long int) var_17))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)46649))))) : (min((((/* implicit */unsigned long long int) (unsigned char)219)), (var_11))))) : (((/* implicit */unsigned long long int) var_14))));
}
