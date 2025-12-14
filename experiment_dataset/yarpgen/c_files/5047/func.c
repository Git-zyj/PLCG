/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5047
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
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)44))))) >> ((((-(var_11))) - (14720740030975528856ULL)))));
                var_21 = (_Bool)0;
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (min((((((/* implicit */_Bool) var_14)) ? (arr_4 [i_3] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_13))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_3] [i_3]))))))) : (min((((/* implicit */long long int) ((((/* implicit */int) (signed char)84)) & (((/* implicit */int) (_Bool)1))))), ((((_Bool)1) ? (-2574555803816892636LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))))));
                var_23 = ((/* implicit */int) ((((((((arr_0 [i_2] [15ULL]) - (var_8))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) var_0)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) - (373940733708579267LL))))) ^ (((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned short) (signed char)-84))))) ? (((arr_0 [i_3] [i_2]) ^ (var_8))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
            }
        } 
    } 
}
