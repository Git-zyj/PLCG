/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239161
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) 143210234)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (-143210235) : (((/* implicit */int) (unsigned char)0))))) < (var_1))))) : (var_14)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((_Bool) arr_1 [i_0 - 1]));
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((arr_1 [i_0 - 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_18 = ((/* implicit */long long int) arr_5 [i_1]);
        arr_6 [i_1] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) ((_Bool) (signed char)51)))))));
    }
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        var_19 = ((/* implicit */_Bool) -143210235);
        var_20 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [(_Bool)1])) : (((/* implicit */int) var_6)))) < (((((/* implicit */_Bool) -143210235)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))))) ? ((~((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_7 [i_2] [i_2]))))) : (((/* implicit */long long int) -143210234))));
    }
}
