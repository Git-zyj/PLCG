/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223430
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        var_17 = ((/* implicit */int) ((long long int) var_0));
        arr_3 [i_0] = ((/* implicit */long long int) (unsigned char)18);
    }
    for (unsigned char i_1 = 4; i_1 < 23; i_1 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) * (((/* implicit */int) arr_5 [i_1 - 4]))));
        arr_7 [i_1] [i_1 + 1] = ((/* implicit */long long int) min((arr_4 [i_1]), (((((/* implicit */_Bool) ((long long int) var_13))) ? ((~(((/* implicit */int) var_6)))) : (84459208)))));
        arr_8 [2LL] [i_1] = ((/* implicit */int) (-(max((((/* implicit */long long int) var_1)), (((4734079270500790413LL) + (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
    }
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_8) && (((/* implicit */_Bool) 9223372036854775807LL)))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (7499684939129233214LL) : (((/* implicit */long long int) var_5))));
    var_20 = var_11;
    var_21 ^= var_15;
}
