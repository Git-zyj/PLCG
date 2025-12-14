/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243760
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
    var_14 &= ((/* implicit */long long int) ((var_6) <= (((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */long long int) var_10)), (var_7))) <= (((/* implicit */long long int) ((var_8) / (((/* implicit */int) (unsigned short)63439)))))))))));
    var_15 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (short)-13019)) ? (((/* implicit */int) (short)-23273)) : (var_11))) : (((/* implicit */int) (!((_Bool)1))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)7826)) * (((/* implicit */int) (unsigned short)65526))))) : (min((4211264471747434321LL), (((/* implicit */long long int) (unsigned short)0))))))));
    var_16 = max((((/* implicit */unsigned int) (!(((((/* implicit */int) (unsigned char)148)) != (((/* implicit */int) (short)-13048))))))), (706171038U));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] [(_Bool)1] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        var_17 = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) & (((/* implicit */int) (unsigned short)36580))));
    }
}
