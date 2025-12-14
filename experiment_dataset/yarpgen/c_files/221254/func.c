/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221254
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
    var_18 = ((/* implicit */long long int) var_5);
    var_19 = ((min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (var_12))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) == (var_6)))))) / (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_0))) - (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) ((signed char) arr_0 [i_0]))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) var_16)))) : (min((((arr_1 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)196))))), (((/* implicit */unsigned long long int) ((var_7) == (((/* implicit */int) arr_0 [6U]))))))));
        var_20 *= ((((((/* implicit */_Bool) (unsigned char)244)) ? (4144815223U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))) - (0U));
        var_21 |= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) 4294967283U)) : (arr_1 [i_0])))));
        var_22 = ((((/* implicit */_Bool) 144115188075855871ULL)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-99)), ((unsigned short)65535)))) : (((/* implicit */int) (unsigned short)67)));
    }
}
