/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217916
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
    var_15 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)920))))) < (((/* implicit */unsigned int) var_1)))))) > (min((((/* implicit */unsigned long long int) var_0)), (((unsigned long long int) var_1)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 -= ((/* implicit */unsigned int) ((var_4) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_1])), (arr_3 [i_1])))) ? (((/* implicit */int) ((signed char) arr_3 [i_0]))) : (((int) arr_5 [8] [i_0]))))) : (max((((/* implicit */long long int) arr_5 [(unsigned char)2] [(unsigned char)2])), (((6427112730458539716LL) >> (((arr_3 [i_0]) + (5234914690780485630LL)))))))));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((5867265915544239236LL), (((/* implicit */long long int) arr_2 [i_0]))))) ? (((/* implicit */int) var_0)) : (arr_0 [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) ((((/* implicit */long long int) 922202283U)) >= (arr_4 [i_0] [i_0 - 1])))) : (-1431741132)))) : (max((((((/* implicit */_Bool) 1897365241U)) ? (arr_4 [i_0 - 1] [i_0]) : (((/* implicit */long long int) arr_2 [i_0])))), (((/* implicit */long long int) max((arr_5 [i_0] [i_0]), (2397602052U))))))));
            }
        } 
    } 
}
