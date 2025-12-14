/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4678
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
    var_19 = ((/* implicit */unsigned long long int) var_14);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(126100789566373888LL)))) ? (((/* implicit */int) min(((signed char)91), ((signed char)-51)))) : ((~(((/* implicit */int) (unsigned char)0))))));
        var_20 |= (short)17835;
        var_21 = ((/* implicit */unsigned long long int) ((short) arr_0 [i_0] [i_0]));
        var_22 *= ((/* implicit */signed char) max((((/* implicit */long long int) (signed char)95)), ((-(arr_1 [i_0])))));
    }
    var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((9223372036854775808ULL), (((/* implicit */unsigned long long int) 7685110289189591561LL)))))));
}
