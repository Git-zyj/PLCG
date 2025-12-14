/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33755
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
    var_16 = var_1;
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) arr_1 [i_0]))));
        var_18 = ((/* implicit */unsigned int) ((((max((arr_0 [(unsigned char)21]), (arr_1 [i_0 - 1]))) & (((/* implicit */unsigned long long int) ((var_15) >> (((var_11) - (1463287650)))))))) << ((((~(arr_0 [i_0 - 1]))) - (12410071560749564606ULL)))));
        var_19 = ((/* implicit */unsigned char) ((arr_0 [(unsigned short)9]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) (short)3903)) && (((/* implicit */_Bool) arr_1 [i_0]))))), (((short) arr_0 [i_0 - 2]))))))));
    }
    var_20 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) == (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)46691)) & (0)))) : (max((((/* implicit */long long int) var_0)), (var_5)))))));
}
