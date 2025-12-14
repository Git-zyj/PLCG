/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5044
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
    var_15 = ((/* implicit */short) ((var_1) <= (((/* implicit */unsigned int) (-(((/* implicit */int) max((var_12), ((unsigned char)62)))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((_Bool) var_4));
        var_16 = ((/* implicit */int) 19LL);
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15))) & (var_1)))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1056857573U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)0))))), (arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) 1056857580U))));
        arr_5 [(signed char)0] = min((1056857574U), (((/* implicit */unsigned int) 1906053818)));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
    {
        arr_10 [i_1] = arr_8 [i_1];
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1056857568U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535))))) ? ((~(((/* implicit */int) (unsigned char)4)))) : (arr_0 [(_Bool)1] [i_1])));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) && (((/* implicit */_Bool) arr_1 [i_1] [i_1]))));
        arr_11 [i_1] = 4294967295U;
    }
}
