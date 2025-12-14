/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247229
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
    var_20 = ((/* implicit */long long int) min((var_2), (((/* implicit */int) (!(((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) var_11))))))))));
    var_21 = (~(((/* implicit */int) (unsigned char)90)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((unsigned char) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)3)) << (((((/* implicit */int) (unsigned char)233)) - (223))))))))))));
        arr_2 [i_0] [i_0 - 2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) var_11))) - (var_19))), (((/* implicit */long long int) ((arr_0 [i_0]) - (arr_0 [i_0])))))))));
    }
    for (unsigned int i_1 = 2; i_1 < 19; i_1 += 1) /* same iter space */
    {
        var_23 ^= ((/* implicit */long long int) (+(((/* implicit */int) var_8))));
        var_24 = ((/* implicit */unsigned char) 14223029487720947063ULL);
    }
}
