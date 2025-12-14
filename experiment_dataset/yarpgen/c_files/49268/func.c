/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49268
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
    var_15 = ((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) 366992091U)) ? (var_2) : (((/* implicit */unsigned int) var_14)))) : (var_12)))) - (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)85)), (15194149388145564132ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)158)), (var_0))))) : (min((((/* implicit */long long int) var_14)), (8758658760516251519LL))))));
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_13)) ? ((+(var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)158))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_10)) == (((/* implicit */int) var_8)))) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) var_0))))))))))));
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) min(((~(((var_13) >> (((595526307U) - (595526296U))))))), (((/* implicit */unsigned int) var_8)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] [(unsigned char)19] = ((/* implicit */unsigned short) (signed char)124);
        arr_3 [i_0] [i_0] = ((/* implicit */short) (+((~((~(((/* implicit */int) var_11))))))));
        arr_4 [i_0 - 1] [i_0] = ((arr_0 [i_0]) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3244154640647729888ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1]))) : (var_12)))) ? (arr_0 [(short)2]) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))))));
        arr_5 [i_0 + 2] [i_0 + 2] = ((/* implicit */short) min((((/* implicit */int) var_3)), (268435392)));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_18 *= ((/* implicit */short) max((15194149388145564103ULL), (((/* implicit */unsigned long long int) arr_6 [i_1]))));
        var_19 = ((/* implicit */short) (+(var_12)));
        arr_9 [i_1] = ((/* implicit */int) var_10);
    }
    var_20 = ((/* implicit */_Bool) ((var_13) / (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) ((unsigned char) var_14))), (max((((/* implicit */short) (unsigned char)158)), (var_7)))))))));
}
