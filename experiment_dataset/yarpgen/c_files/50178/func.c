/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50178
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
    var_17 = ((var_1) ? (((((/* implicit */_Bool) min((var_15), (((/* implicit */long long int) 252230271))))) ? (((/* implicit */unsigned long long int) (~(var_16)))) : (((unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)(-32767 - 1)))))));
    var_18 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 252230296)) ? (252230285) : (((/* implicit */int) (unsigned char)238))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (var_5) : (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) var_4)))));
    var_19 = ((/* implicit */_Bool) (-((~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_4)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */short) max((252230296), (((/* implicit */int) (short)(-32767 - 1)))));
        arr_4 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (short)32760)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23302))) : (17225701381775131505ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0])))))));
    }
}
