/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240863
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((signed char) max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (arr_0 [i_0]))))), (min((max((((/* implicit */long long int) (signed char)-46)), (arr_0 [i_0]))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_0])) > (var_12)))))))));
        var_14 = ((/* implicit */unsigned long long int) (!((_Bool)1)));
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48721)) ? (((/* implicit */int) (unsigned short)254)) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 977582850U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0]) : (((/* implicit */long long int) 0U))))))) ? ((+(((((/* implicit */_Bool) arr_0 [i_0])) ? (1455354873U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)98))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3317384446U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))))))))));
        var_16 = ((/* implicit */unsigned int) (-(((arr_0 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (short)24576)))))));
    }
    var_17 = ((/* implicit */unsigned char) var_10);
}
