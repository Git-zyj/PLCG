/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224329
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) min(((-((~(var_12))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (1152921504606846975LL)))) ? (max((((/* implicit */long long int) (short)29214)), (var_6))) : (min((((/* implicit */long long int) (short)-1039)), (var_6)))))))))));
                var_17 *= ((/* implicit */unsigned short) max(((~(min((((/* implicit */int) arr_0 [i_0])), (arr_4 [(unsigned char)20] [(unsigned char)20]))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 + 1] [21ULL])))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (var_3)))) ? (max((var_6), (var_11))) : (((/* implicit */long long int) ((var_10) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_13)))))))))))));
}
