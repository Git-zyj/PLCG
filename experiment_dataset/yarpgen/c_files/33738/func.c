/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33738
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
    var_11 = ((/* implicit */signed char) (+((~(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)37571))) & (var_4)))))));
    var_12 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (signed char)-72)), (var_4)));
    var_13 = ((/* implicit */_Bool) min((var_8), (((/* implicit */short) var_6))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-3))))) ? (((((/* implicit */_Bool) -791268712)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)206)))));
        arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_0)) % (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
        var_14 = ((/* implicit */signed char) var_0);
    }
    for (unsigned int i_1 = 4; i_1 < 22; i_1 += 3) 
    {
        var_15 = ((/* implicit */signed char) var_3);
        var_16 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3)) ? (-4884819249238272067LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1]))) : (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((signed char) (~(11ULL)))))));
        var_17 = var_3;
    }
}
