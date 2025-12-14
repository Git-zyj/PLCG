/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239711
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
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) var_3))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        arr_2 [(unsigned char)9] [(unsigned short)0] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) arr_0 [i_0 + 1])))));
        var_16 *= ((/* implicit */short) max((((/* implicit */unsigned int) var_12)), (((unsigned int) var_11))));
        var_17 |= ((/* implicit */short) max((((/* implicit */signed char) ((arr_1 [i_0 - 1]) > (arr_1 [i_0 + 1])))), (((signed char) 1639381779088069680LL))));
    }
    for (signed char i_1 = 3; i_1 < 20; i_1 += 3) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29597))) : (var_6))), (((unsigned long long int) (unsigned char)6))))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 - 2])))));
        arr_7 [i_1] = ((/* implicit */unsigned int) arr_4 [i_1 - 2]);
        var_19 = ((/* implicit */short) ((arr_6 [i_1 + 1]) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_1 - 3]))))) : (((unsigned int) var_7))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_6 [i_1])))), (((/* implicit */int) (short)712)))))));
    }
    var_21 = ((/* implicit */_Bool) var_2);
}
