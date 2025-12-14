/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221316
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = max((min((((1468442999590751799ULL) - (2821577837756611210ULL))), (((/* implicit */unsigned long long int) ((arr_1 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) var_8)))))))), (((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((arr_1 [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) : (min((1468442999590751799ULL), (2215294349412280182ULL))))));
        var_11 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_1)), (max((min((((/* implicit */unsigned long long int) 2911767011U)), (5872111088820319206ULL))), (((2215294349412280182ULL) << (((((/* implicit */int) var_9)) + (20667)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    for (long long int i_1 = 2; i_1 < 18; i_1 += 1) 
    {
        arr_6 [(unsigned short)0] [(unsigned short)0] &= ((/* implicit */int) max((((max((arr_5 [2LL] [18ULL]), (arr_4 [i_1]))) ^ (arr_4 [i_1 - 1]))), (arr_4 [i_1])));
        var_12 = ((/* implicit */signed char) 9223372036854775807LL);
        arr_7 [(short)14] |= var_4;
    }
    var_13 = ((/* implicit */signed char) (-(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_10))))));
    var_14 *= ((((/* implicit */int) var_9)) / (((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned short) var_9))))) ? (((/* implicit */int) var_7)) : ((-(((/* implicit */int) var_2)))))));
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) var_10))))), (((var_3) ? (9223372036854775807LL) : (((/* implicit */long long int) 2911767011U))))))) && (var_3)));
}
