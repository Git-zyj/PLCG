/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244837
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
    var_20 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)89))));
    var_21 |= ((/* implicit */unsigned short) var_19);
    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((min((((/* implicit */long long int) -290742427)), (var_19))) & (((/* implicit */long long int) var_17)))))));
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_19)))) ? (max((max((((/* implicit */long long int) var_12)), (5833275260276654470LL))), (((/* implicit */long long int) ((var_15) << (((((/* implicit */int) (short)25863)) - (25861)))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_12)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)15086))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_24 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_0 - 3] [i_0]))));
        var_25 |= ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) <= (((/* implicit */int) arr_1 [i_0 + 1] [i_0]))));
    }
    for (short i_1 = 3; i_1 < 18; i_1 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) max((((/* implicit */int) (unsigned short)44449)), ((-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-75))))))))))));
        var_27 ^= ((/* implicit */long long int) var_10);
    }
}
