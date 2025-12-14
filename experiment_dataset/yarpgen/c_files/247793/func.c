/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247793
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [(unsigned short)9])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_5))))))) ? ((~(((((/* implicit */_Bool) -1100277443)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (1762903953335186025ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(_Bool)1] [i_1])))));
                var_20 &= ((/* implicit */unsigned long long int) arr_3 [i_0] [2ULL]);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_16)), (16683840120374365591ULL)))) ? (((((/* implicit */_Bool) var_15)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_18) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32768))))))))));
}
