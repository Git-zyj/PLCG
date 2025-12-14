/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49770
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_4)), (((((/* implicit */int) var_10)) | (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) || (var_15))))) | (var_14))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)-66)), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (var_1))))))));
    var_17 = ((/* implicit */unsigned int) min((var_17), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446743798831644672ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-9223372036854775807LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)66))) : (((unsigned int) var_14))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_18 = ((/* implicit */_Bool) (~(4399097832594622865ULL)));
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (!(((/* implicit */_Bool) min((min((9223372036854775801LL), (((/* implicit */long long int) (unsigned short)54266)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_2 [i_0])))))))))))));
    }
    for (signed char i_1 = 1; i_1 < 13; i_1 += 4) 
    {
        arr_5 [i_1] [i_1] |= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */int) (short)-16598)) : (((/* implicit */int) (_Bool)1))))));
        var_20 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
        var_21 = ((/* implicit */short) 274877906951ULL);
    }
}
