/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2063
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
    var_16 &= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) -21056509)) || (((/* implicit */_Bool) (unsigned short)51929)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)22928))))))) && (((((((/* implicit */_Bool) 3141119812U)) || (((/* implicit */_Bool) var_7)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1153847473U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_15)))))))));
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 2145386496)) | (-4LL))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0 - 1] [i_0])) << (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) (unsigned short)35189)) ? (((/* implicit */int) (unsigned short)1023)) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */int) var_7)) ^ (arr_2 [i_0 - 3]))))) % (((((((/* implicit */int) arr_1 [i_0 - 1] [i_0])) | (((/* implicit */int) arr_0 [i_0])))) & (((((/* implicit */int) var_11)) | (((/* implicit */int) (unsigned short)42578))))))));
        var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)21539)) - (((/* implicit */int) (unsigned short)17105)))) >> (((((((/* implicit */int) var_9)) & (((/* implicit */int) arr_0 [(unsigned short)2])))) - (8282)))))) ? ((((((_Bool)1) ? (var_14) : (var_14))) & (((((/* implicit */_Bool) var_8)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) var_13)) != (((/* implicit */int) (unsigned short)53556)))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_0])) + (678615000))))))))));
    }
}
