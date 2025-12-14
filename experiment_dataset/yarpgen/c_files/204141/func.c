/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204141
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
    var_20 -= ((((/* implicit */_Bool) ((((min((-2401077035894685063LL), (((/* implicit */long long int) var_4)))) + (9223372036854775807LL))) >> (((((((/* implicit */int) var_15)) | (((/* implicit */int) var_12)))) - (32211)))))) ? (((var_7) ? (var_10) : (2401077035894685063LL))) : (((((7168908585894822091LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_7))))) ^ (((/* implicit */long long int) var_13)))));
    var_21 -= ((/* implicit */_Bool) var_0);
    var_22 = ((/* implicit */_Bool) ((var_4) * (((/* implicit */unsigned int) ((((((/* implicit */int) var_18)) >> (((var_4) - (4225091418U))))) / (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_18)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        arr_2 [(unsigned char)15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 - 2]) : (((/* implicit */long long int) arr_0 [i_0 - 2] [10LL]))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7))));
        var_23 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) ((4294967295U) > (((/* implicit */unsigned int) var_6))))) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_19))) == (-2401077035894685063LL))))))), (min((min((((/* implicit */long long int) arr_0 [i_0] [i_0])), (arr_1 [i_0]))), (((/* implicit */long long int) min((512U), (4294967295U))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_0 + 1] [i_0]))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) arr_0 [i_0 - 2] [i_0])) : (arr_1 [i_0]))) + (max((((/* implicit */long long int) arr_0 [i_0] [i_0])), (arr_1 [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) var_4);
        arr_5 [i_0] = var_15;
    }
}
