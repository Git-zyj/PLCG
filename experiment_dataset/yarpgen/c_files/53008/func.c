/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53008
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) - (min((((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_5)))), ((+(((/* implicit */int) var_2))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] |= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) != (((unsigned int) (signed char)3))))), (((unsigned int) (((_Bool)1) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)46)))))));
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)47))))) : (((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)12884)) ? (((/* implicit */int) (unsigned char)69)) : (((/* implicit */int) (unsigned short)9092))))) : (min((((/* implicit */unsigned int) (signed char)-12)), (var_8))))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */short) var_7)), (arr_1 [i_0])))), (min((((/* implicit */unsigned long long int) arr_2 [(_Bool)1])), (2305702271725338624ULL)))))) ? (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (_Bool)1))))))) : (((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)44444)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (unsigned char)215)))))));
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) arr_1 [i_0]))));
    }
}
