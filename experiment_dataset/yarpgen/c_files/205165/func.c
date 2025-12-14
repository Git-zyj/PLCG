/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205165
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
    var_19 += ((/* implicit */short) ((-3880047260405140942LL) + (((/* implicit */long long int) 3107696209U))));
    var_20 = ((/* implicit */unsigned int) ((var_1) > ((~(max((var_14), (((/* implicit */unsigned int) var_12))))))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) - (min((2147253812U), (1211184953U))))) : ((~(((((/* implicit */_Bool) var_14)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)93))));
        var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) * (((/* implicit */int) ((var_5) <= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1]))))))));
        var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_0 - 2]) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (arr_1 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_1 [i_0 - 1]))))));
        arr_2 [i_0] = ((/* implicit */signed char) min((var_1), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1]))))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) <= (var_1)))))))));
    }
    var_25 = ((/* implicit */long long int) ((((/* implicit */int) var_10)) < (((((/* implicit */int) (unsigned char)144)) | (((/* implicit */int) (_Bool)1))))));
}
