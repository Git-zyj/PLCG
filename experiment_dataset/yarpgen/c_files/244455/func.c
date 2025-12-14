/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244455
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
    var_11 = ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) var_8))))), (var_10))));
    var_12 = var_0;
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        var_13 ^= ((/* implicit */short) arr_0 [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */short) max(((+(((/* implicit */int) min(((unsigned char)175), (((/* implicit */unsigned char) arr_1 [i_0]))))))), ((~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)27041)) || (arr_0 [i_0]))))))));
    }
    var_14 += ((/* implicit */signed char) -31375657);
    var_15 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) var_2)))), (((/* implicit */int) ((31375650) < (((/* implicit */int) (_Bool)1)))))));
}
