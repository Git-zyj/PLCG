/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53805
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */int) (short)256)) / (((/* implicit */int) var_6))));
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) arr_2 [i_0] [i_0]))));
    }
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) >= (var_5))))) < (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_2))) - (var_1))))))));
    var_17 = ((/* implicit */short) var_7);
    var_18 = ((/* implicit */unsigned short) (((-(-6344878235407012544LL))) & (((/* implicit */long long int) (+(((/* implicit */int) ((signed char) (short)25178))))))));
}
