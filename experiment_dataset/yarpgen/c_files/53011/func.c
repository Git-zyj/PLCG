/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53011
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)33410), (((/* implicit */unsigned short) (_Bool)1)))))) : (var_12)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-32)), ((unsigned short)32126))))) ^ (max((var_4), (var_7))))) : (((/* implicit */unsigned int) (-(((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) var_15)))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (unsigned char)255))))), ((+(((((/* implicit */_Bool) (unsigned short)30220)) ? (12589479132871484078ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) min((((((/* implicit */_Bool) (unsigned short)2230)) && (((/* implicit */_Bool) (unsigned short)34719)))), ((!(((/* implicit */_Bool) arr_1 [i_0] [18ULL])))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((((/* implicit */int) var_2)) > (((/* implicit */int) var_17)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9022018857329261450LL)) ? (var_8) : (524287U)))) : ((-(663018523842449149ULL))))))));
        var_23 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)33409))));
        var_24 = ((/* implicit */unsigned char) var_6);
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((13835058055282163712ULL) & (((/* implicit */unsigned long long int) var_4))))) ? (6078798326878534397ULL) : (((/* implicit */unsigned long long int) ((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (~(((max((arr_0 [i_2]), (((/* implicit */long long int) (short)-30953)))) & (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_6))))))))))));
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_10) >> (((var_4) - (1201024277U)))))))))) - (var_14)));
        arr_10 [i_2] = ((/* implicit */_Bool) var_3);
        arr_11 [i_2] = min((((/* implicit */unsigned long long int) (-((-(4294967295U)))))), ((+(arr_7 [i_2]))));
    }
    var_27 = ((/* implicit */long long int) (+(max((((/* implicit */int) ((-6682963195182441080LL) > ((-9223372036854775807LL - 1LL))))), ((+(((/* implicit */int) (unsigned short)64414))))))));
}
