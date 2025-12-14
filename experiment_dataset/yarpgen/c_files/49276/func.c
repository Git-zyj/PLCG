/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49276
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
    var_12 = ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
    var_13 = ((int) min((((/* implicit */long long int) max((var_4), (var_4)))), (max((((/* implicit */long long int) var_3)), (var_0)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (~(var_0)))) ? (((((/* implicit */_Bool) -1LL)) ? (9LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)172))))) : (((/* implicit */long long int) ((arr_3 [i_0] [i_0]) ? (((/* implicit */int) (signed char)-59)) : (((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) ((arr_6 [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [(short)7])))))))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) -558319588375162597LL);
            }
        } 
    } 
    var_15 |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) -1200145046427701952LL)), (max((((/* implicit */unsigned long long int) var_4)), (max((((/* implicit */unsigned long long int) 15LL)), (1233149160896062606ULL)))))));
    var_16 = ((/* implicit */int) var_1);
}
