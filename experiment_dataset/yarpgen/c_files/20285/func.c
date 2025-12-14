/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20285
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
        for (signed char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)14))) <= (2975617096U))), (((((/* implicit */_Bool) 2975617113U)) || (((/* implicit */_Bool) var_6))))))), (((arr_4 [i_0] [i_1 - 1] [i_0]) >> (((arr_4 [i_0] [i_1 + 2] [i_1]) - (1722783766)))))));
                arr_7 [i_0] = ((/* implicit */unsigned char) (((+(arr_2 [i_0]))) <= (((min((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (arr_2 [i_0]))) & (((/* implicit */unsigned int) ((int) var_5)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 3; i_2 < 11; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            {
                var_14 *= ((/* implicit */_Bool) (((+(max((1319350200U), (((/* implicit */unsigned int) 1698339060)))))) << (((max((((((/* implicit */_Bool) arr_0 [i_2])) ? (1319350200U) : (1319350200U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_3])) >= (((/* implicit */int) var_2))))))) - (1319350184U)))));
                arr_13 [i_2 - 2] [i_2] = arr_12 [i_2 - 3];
                var_15 = ((/* implicit */unsigned char) min((1319350213U), (2975617082U)));
                var_16 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(1319350200U)))) ? (arr_11 [i_3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (2975617096U) : (arr_12 [i_3]))))))) ? (((/* implicit */long long int) ((/* implicit */int) (((((_Bool)1) ? (((/* implicit */unsigned long long int) var_7)) : (4152369306866684385ULL))) < (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_12)), (var_4)))))))) : ((+(max((((/* implicit */long long int) var_12)), (var_3))))));
            }
        } 
    } 
}
