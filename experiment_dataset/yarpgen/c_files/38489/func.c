/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38489
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) >= ((-(((/* implicit */int) var_3))))))) | (((((/* implicit */int) ((_Bool) var_1))) & (((/* implicit */int) var_2))))));
    var_13 = ((/* implicit */unsigned int) min((var_3), ((!(((/* implicit */_Bool) (-(var_10))))))));
    var_14 = ((/* implicit */unsigned short) ((((long long int) var_3)) % (var_1)));
    var_15 = ((/* implicit */signed char) ((var_1) + (((/* implicit */long long int) (+((-(1714333548))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_16 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) var_10)) / (min((((/* implicit */unsigned long long int) arr_1 [(unsigned short)6])), (arr_0 [(signed char)6] [(signed char)6]))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 - 2])) + (((/* implicit */int) ((_Bool) 1714333548))))))));
        var_17 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_1 [i_0]))))))) * ((+(min((((/* implicit */unsigned long long int) var_10)), (arr_0 [12U] [i_0])))))));
        var_18 = ((/* implicit */unsigned int) min((min((var_9), (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */unsigned int) -1714333549))))))), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((2147483647) / (((/* implicit */int) (signed char)-32)))) & (-1714333539)))) ? (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(signed char)2]))) : (arr_0 [i_0 - 1] [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65527)))));
    }
}
