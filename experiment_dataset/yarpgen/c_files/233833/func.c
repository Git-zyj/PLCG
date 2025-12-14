/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233833
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (unsigned short)18517)) && (((/* implicit */_Bool) (signed char)-124)));
                var_15 = ((/* implicit */short) max((((/* implicit */long long int) ((short) 21U))), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)123))))), (arr_3 [i_1])))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) (((_Bool)1) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) >> (((4294967275U) - (4294967249U)))))), (((((/* implicit */_Bool) var_9)) ? (9865127826493678668ULL) : (8414835643847476098ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((var_11) * (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_9), (var_6))))))))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) 4622366861269729249LL))) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_8)))) : (((/* implicit */int) min(((short)20164), (((/* implicit */short) (signed char)124)))))))) ^ (min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18ULL)))))));
}
