/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213110
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
    var_20 |= ((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_11)))))), (var_7)));
    var_21 = ((/* implicit */unsigned int) ((short) (+((-(((/* implicit */int) var_17)))))));
    var_22 = ((/* implicit */long long int) (~((+(((/* implicit */int) var_17))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_1]))))) ? ((-(arr_0 [i_1 + 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1 - 1])) ? (((/* implicit */int) arr_3 [i_1] [i_1 + 2])) : (((/* implicit */int) arr_3 [i_1] [i_1 + 3])))))));
                arr_4 [i_1] = (!((!(((/* implicit */_Bool) var_10)))));
                var_24 *= ((/* implicit */unsigned int) (+((~(((((/* implicit */_Bool) arr_3 [16LL] [16LL])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)63))))))));
            }
        } 
    } 
}
