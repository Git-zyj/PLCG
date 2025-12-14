/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23553
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1)) ? (921269061) : (-2147483645)))), (((var_8) ^ (((/* implicit */unsigned int) 1920))))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_5 [i_2] [i_2 + 1] [i_2 - 1])), (1986732799U)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255))))) : (min((((/* implicit */unsigned int) arr_5 [i_2] [i_2] [i_2 + 1])), (var_3)))));
                    var_16 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (unsigned char)238)))), (((/* implicit */int) max((arr_2 [i_2 - 1]), (arr_2 [i_2 + 2]))))));
                    var_17 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_13)), (max((((/* implicit */short) var_13)), (arr_5 [i_0] [i_1] [i_0]))))))) != (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [(signed char)17] [i_1] [i_0]))) : (9223372036854775807LL)))), (((unsigned long long int) 4135503336U))))));
                    arr_8 [i_0] [i_1] [i_2 + 2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)245))));
                }
            } 
        } 
    } 
}
