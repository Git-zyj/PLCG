/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24915
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) & (((/* implicit */int) (unsigned char)73)))) | (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? ((~(((/* implicit */int) arr_2 [i_0] [i_0])))) : (((/* implicit */int) var_17)))))))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) && (((/* implicit */_Bool) 859582506U))))) - (((/* implicit */int) max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_7))))))))));
    }
    var_22 = ((/* implicit */unsigned char) var_11);
    var_23 = (+(((/* implicit */int) var_8)));
}
