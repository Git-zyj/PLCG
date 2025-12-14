/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219825
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
    var_14 = ((/* implicit */signed char) (+(((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_9))))));
    var_15 |= ((/* implicit */unsigned char) ((long long int) (~(((((/* implicit */long long int) ((/* implicit */int) var_10))) % (var_5))))));
    var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned char) (signed char)72)), (var_11)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_17 += ((/* implicit */long long int) (_Bool)1);
        arr_3 [(signed char)5] [i_0] = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_7)))) < (max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_1 [i_0] [(_Bool)1])) : (((/* implicit */int) arr_1 [i_0] [(signed char)6])))), (((/* implicit */int) var_1))))));
        var_18 = ((/* implicit */long long int) ((arr_1 [i_0] [i_0]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)72)) && (((/* implicit */_Bool) arr_0 [i_0])))))));
    }
    var_19 = (-9223372036854775807LL - 1LL);
}
