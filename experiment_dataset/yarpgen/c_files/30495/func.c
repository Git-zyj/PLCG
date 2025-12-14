/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30495
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
    var_15 |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)84)))), (((-1874049476) | (var_8)))))) + ((~((((_Bool)0) ? (var_5) : (var_2)))))));
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_10))));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) min(((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))), (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)29707))))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)163)), (var_14))))) : (((var_0) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
    var_18 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_3)))) < (var_3))))) / (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)105)) | (((/* implicit */int) var_10))))), (((unsigned long long int) (short)(-32767 - 1))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */short) var_12);
                arr_6 [i_1] = var_9;
                var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)35829)) ? (((/* implicit */int) arr_2 [(unsigned char)18])) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_6)))) <= (((/* implicit */unsigned long long int) var_6)))))));
            }
        } 
    } 
}
