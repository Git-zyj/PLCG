/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190599
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 7; i_2 += 1) 
            {
                {
                    var_19 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_0 [i_2])))) ? (((arr_0 [i_1]) ^ (arr_0 [i_0]))) : (arr_0 [i_1])));
                    var_20 *= max((((arr_4 [i_2 - 1] [i_2 - 3] [i_2 - 1]) + (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_2 + 4] [i_2 - 2] [i_2 - 3]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2 + 1] [i_2 + 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (13U)))));
                }
            } 
        } 
    } 
    var_21 = var_6;
    var_22 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) -9223372036854775806LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)103))) : (17926321768708741286ULL))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? ((~(9223372036854775805LL))) : ((~(3033123394091323907LL)))))));
    var_23 = var_11;
}
