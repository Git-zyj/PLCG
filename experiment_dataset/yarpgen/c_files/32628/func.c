/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32628
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned int) arr_3 [16U] [i_0] [16U]);
                var_16 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((arr_4 [i_0] [2ULL] [i_1 + 2]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [19] [i_0])))))))) % (arr_0 [i_0] [(unsigned short)15])));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_6))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((8830803038684498057ULL) << (((/* implicit */int) var_3)))), (((/* implicit */unsigned long long int) ((var_13) >= (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))), (((long long int) var_13)))) : (((/* implicit */long long int) var_8))));
}
