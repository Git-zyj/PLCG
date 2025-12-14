/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239198
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
    var_10 = ((/* implicit */unsigned long long int) (((~(4068244578U))) << (((max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)9))))), (((((/* implicit */unsigned int) 2147483643)) ^ (var_2))))) - (4294967257U)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_8 [i_3] [i_2] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */long long int) 14524420190424713076ULL);
                            arr_9 [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 2])) ? (((/* implicit */unsigned int) arr_3 [i_0 - 2])) : (var_8))))));
                        }
                    } 
                } 
                var_11 += ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) -511837293)) : (1692976832U)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) - (((((/* implicit */_Bool) 1692976815U)) ? (1692976832U) : (1692976801U)))))) : ((~(max((((/* implicit */unsigned long long int) var_5)), (18446744073709551615ULL)))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) var_0);
}
