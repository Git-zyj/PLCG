/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192994
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
    var_16 = ((/* implicit */unsigned char) ((_Bool) var_1));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) 11624296025800661213ULL)) ? (12863279168964210620ULL) : (((/* implicit */unsigned long long int) 1573200467))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [7] [6U])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (-677003899)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) : ((~(var_9))))) ^ (((/* implicit */long long int) (~(((/* implicit */int) max((arr_0 [i_0] [i_0]), (((/* implicit */signed char) arr_1 [i_0] [i_0])))))))));
        var_18 = max((((/* implicit */unsigned int) ((((min((((/* implicit */int) arr_1 [i_0] [(unsigned short)9])), (var_7))) + (2147483647))) >> (((/* implicit */int) var_1))))), (min(((~(var_8))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))))));
        arr_3 [i_0] = max((((/* implicit */long long int) (((_Bool)1) ? (2037790910U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (min((((/* implicit */long long int) ((short) 10420654783371500869ULL))), (((((/* implicit */_Bool) -7170078899413959792LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7170078899413959792LL))))));
        var_19 = ((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) ((arr_1 [i_0] [i_0]) ? (((((/* implicit */_Bool) 153416018)) ? (-1065711013) : (((/* implicit */int) var_13)))) : (((/* implicit */int) (_Bool)1)))))));
        var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
    }
    var_21 = ((/* implicit */unsigned char) var_10);
    var_22 *= ((unsigned char) ((((1292496629) / (((/* implicit */int) var_13)))) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)178)))))));
}
