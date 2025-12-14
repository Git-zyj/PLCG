/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197567
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
    for (signed char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_17 -= ((/* implicit */long long int) ((3217472323U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
        var_18 ^= ((/* implicit */unsigned char) (_Bool)1);
        arr_2 [i_0] [i_0] &= ((/* implicit */short) ((long long int) ((((/* implicit */int) (unsigned char)255)) ^ (-20))));
    }
    var_19 -= ((/* implicit */_Bool) ((((/* implicit */int) var_14)) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)121)))))))));
}
