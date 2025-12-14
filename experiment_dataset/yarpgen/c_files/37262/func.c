/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37262
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
    var_13 -= ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) max((((/* implicit */int) var_8)), (((var_7) >> (((9223372036854775807LL) - (9223372036854775779LL)))))))) : (var_12));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((long long int) (((-(((/* implicit */int) var_10)))) * ((-(((/* implicit */int) var_1))))))))));
                var_15 *= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_5 [i_1 + 2])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3072)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) ((((/* implicit */int) var_0)) << (((((((/* implicit */_Bool) 9223372036854775788LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (((((/* implicit */_Bool) (signed char)48)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (short)-32765))))))) - (32748LL)))));
    var_17 = ((/* implicit */unsigned char) ((_Bool) 9223372036854775779LL));
}
