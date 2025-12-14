/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47399
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
    var_19 = ((/* implicit */_Bool) var_9);
    var_20 = ((/* implicit */long long int) ((var_15) + (((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) var_12)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */long long int) arr_1 [(signed char)9])) + (((((/* implicit */_Bool) (unsigned short)16033)) ? (((/* implicit */long long int) arr_1 [i_0 + 2])) : (var_10)))))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [(signed char)17]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 2]))) : (arr_1 [i_0 - 1])));
        var_23 &= ((/* implicit */long long int) arr_0 [i_0 - 2]);
        arr_2 [i_0 - 3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 + 1])) % (((/* implicit */int) arr_0 [i_0 - 2]))));
        var_24 = ((/* implicit */unsigned int) ((signed char) (unsigned short)60304));
    }
    var_25 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_12)) ? (((3ULL) | (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
}
