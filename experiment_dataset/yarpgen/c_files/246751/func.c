/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246751
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
    var_13 = ((/* implicit */signed char) ((2007043979140780585ULL) % (((/* implicit */unsigned long long int) 524288U))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                arr_7 [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((arr_0 [i_0]) >> (((((/* implicit */int) (unsigned short)39975)) - (39963))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 2980836071U)), (var_9))))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) ((signed char) 1071644672U))), (1071644672U)))) : (min((max((arr_1 [i_0] [(signed char)1]), (((/* implicit */long long int) arr_5 [(unsigned short)15] [(unsigned short)15] [(unsigned short)16])))), (min((((/* implicit */long long int) 3223322623U)), (arr_4 [i_0 - 1] [15U])))))));
                var_14 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0 - 1]);
                arr_8 [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))) | (min((((/* implicit */long long int) 1071644670U)), (max((arr_4 [i_0] [i_1]), (((/* implicit */long long int) (unsigned short)44111))))))));
                var_15 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0]))))) : (((/* implicit */int) (unsigned short)21425))))), (min((arr_2 [i_0 - 1] [i_1 + 2]), (((/* implicit */unsigned long long int) 3986295637U))))));
                var_16 = ((/* implicit */int) (-(max((arr_0 [i_0]), (((/* implicit */unsigned long long int) max((1071644672U), (((/* implicit */unsigned int) (unsigned short)21425)))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_3);
}
