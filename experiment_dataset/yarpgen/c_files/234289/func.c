/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234289
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_16))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((var_3) > (((/* implicit */int) var_9)))))) <= (((((((var_16) | (((/* implicit */long long int) var_4)))) + (9223372036854775807LL))) << (((var_3) - (1804076826)))))));
        var_19 |= ((/* implicit */_Bool) var_7);
        var_20 = ((/* implicit */unsigned short) var_15);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) ((((var_4) >= (((((/* implicit */int) var_11)) + (((/* implicit */int) var_5)))))) && (((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_8))))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */int) var_5)) << (((((((var_8) + (2147483647))) >> (((var_15) + (1141137875))))) - (55449256)))));
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) var_2))));
    }
}
