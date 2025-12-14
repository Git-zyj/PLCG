/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30250
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
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) -8767948191108764853LL)) ? (-8767948191108764866LL) : (((/* implicit */long long int) 1646528141))))) ? (8767948191108764852LL) : (((/* implicit */long long int) arr_1 [i_0] [(unsigned short)11])))), (((/* implicit */long long int) var_6))));
                arr_6 [i_1] [i_1] = ((/* implicit */short) ((max((((/* implicit */unsigned int) arr_3 [i_0 - 2] [i_1])), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-28))) + (var_0))))) >> (((((((/* implicit */_Bool) var_9)) ? (((12123264689114943647ULL) - (((/* implicit */unsigned long long int) -8406282925025414260LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)-28)), (arr_0 [i_1] [(unsigned char)8]))))))) - (2082803540430806287ULL)))));
                var_16 *= max((((/* implicit */long long int) max(((-(((/* implicit */int) arr_3 [(unsigned char)8] [i_0])))), (((int) (signed char)28))))), ((+(((long long int) (_Bool)1)))));
            }
        } 
    } 
    var_17 *= ((/* implicit */_Bool) var_14);
}
