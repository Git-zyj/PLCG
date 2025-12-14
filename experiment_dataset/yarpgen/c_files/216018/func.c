/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216018
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) max((((/* implicit */int) (signed char)-67)), ((-2147483647 - 1))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) min((arr_2 [i_0]), (var_16))))) / (((/* implicit */int) max((min(((unsigned char)50), (((/* implicit */unsigned char) (_Bool)1)))), (((/* implicit */unsigned char) arr_1 [i_0] [i_0])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */short) var_19);
        var_22 -= ((/* implicit */long long int) max(((signed char)74), (arr_2 [i_1])));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1])))))) ? ((+(((/* implicit */int) min(((signed char)64), ((signed char)-67)))))) : (((/* implicit */int) min((arr_2 [i_1]), (arr_2 [i_1])))))))));
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~((-9223372036854775807LL - 1LL)))))));
    }
    var_24 &= (~((~(var_8))));
}
