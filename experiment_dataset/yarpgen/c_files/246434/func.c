/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246434
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_13 = (+(((/* implicit */int) (signed char)-66)));
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0] [i_0]));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((-3050973292816557044LL) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
    }
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) (signed char)61)) - (((((/* implicit */int) (signed char)66)) + (((/* implicit */int) (_Bool)1))))))));
    var_15 = ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) (short)-1)) ? (72057319160020992LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
}
