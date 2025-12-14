/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223337
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
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_20 &= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_21 = ((/* implicit */unsigned short) arr_0 [i_0 - 1]);
        arr_2 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)128))));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_15)) : (var_7)))))) ? (((((/* implicit */_Bool) (~(var_7)))) ? (((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_18)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) arr_0 [i_1])))))) : ((+(((/* implicit */int) arr_4 [i_1]))))));
        arr_6 [i_1] [14LL] |= ((/* implicit */unsigned short) arr_4 [i_1]);
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_0 [i_1])), (var_1)))), (((unsigned int) arr_4 [i_1]))));
    }
    var_23 = ((long long int) var_3);
    var_24 = ((/* implicit */_Bool) min((var_13), (((/* implicit */long long int) var_16))));
}
