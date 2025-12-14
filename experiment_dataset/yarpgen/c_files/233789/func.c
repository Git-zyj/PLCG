/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233789
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)26)), (var_11)))) ? ((+(-1507436742))) : (var_2)))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) ((short) var_11)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) % (10634951942811889439ULL))), (((/* implicit */unsigned long long int) arr_1 [i_0 - 2])))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [12U])) ? (min((((/* implicit */long long int) var_15)), (-7287269435946775117LL))) : (((/* implicit */long long int) (~(var_11)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) (+((+(var_14))))));
        var_17 += ((/* implicit */int) var_9);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7287269435946775117LL)) ? (((/* implicit */int) (signed char)-65)) : (((/* implicit */int) (unsigned char)48))));
    }
    for (long long int i_1 = 1; i_1 < 12; i_1 += 4) 
    {
        var_18 += ((/* implicit */unsigned char) ((((((/* implicit */long long int) var_2)) != (arr_5 [i_1 - 1]))) ? (min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) 1397878423)) : (7287269435946775117LL))), (arr_5 [i_1 + 3]))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_14))))), (var_6)))))));
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_6 [i_1 + 2] [i_1 + 2])) ? (arr_5 [i_1 + 2]) : (arr_5 [i_1 + 1])))))));
        var_20 = ((/* implicit */unsigned char) 10209856576244403465ULL);
        var_21 = ((/* implicit */unsigned char) max(((+(var_10))), (((/* implicit */int) ((((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1])) == (((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 1])))))));
        arr_7 [i_1] = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) (unsigned char)91)), (min((1900491889640095687LL), (((/* implicit */long long int) (unsigned char)127)))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (short)-24914)) == (((/* implicit */int) (unsigned short)55685))))), (((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
    }
}
