/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236247
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
    var_18 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned short) max((var_7), (var_9))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_17)), (var_10)))) ? (((2564074642U) % (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
    var_19 = ((/* implicit */_Bool) var_3);
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_7))));
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_17)), (var_14))))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) min((((/* implicit */short) ((_Bool) var_12))), (((short) var_0))))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_3 [15] [15] |= (short)-12;
        arr_4 [i_0] = ((/* implicit */short) arr_0 [i_0] [(short)3]);
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_22 = ((/* implicit */signed char) arr_7 [i_1] [i_1]);
        var_23 = ((/* implicit */long long int) (-(var_8)));
        var_24 = var_13;
        var_25 = ((/* implicit */int) var_0);
    }
}
