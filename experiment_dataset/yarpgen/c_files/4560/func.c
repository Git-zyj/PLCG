/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4560
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
    var_13 = ((/* implicit */unsigned short) min((((/* implicit */int) var_10)), (((((/* implicit */int) (unsigned short)48859)) << ((((-(((/* implicit */int) var_7)))) + (160)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) var_7);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0 + 1]))))) ? (((/* implicit */int) (!(arr_2 [(short)14])))) : (((((/* implicit */_Bool) (unsigned char)208)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_12))))));
        var_15 -= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_2 [(_Bool)1])), (((((/* implicit */int) arr_1 [10U])) & (((/* implicit */int) (unsigned char)0))))))) ? (((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) var_9))))) > (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)225))) ^ (-2267213696719763846LL)))))) : (((((/* implicit */int) ((unsigned char) var_2))) - (((/* implicit */int) ((var_6) && (((/* implicit */_Bool) arr_0 [(signed char)6])))))))));
    }
}
