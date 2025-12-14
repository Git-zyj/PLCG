/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205461
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_10 [i_4] = ((/* implicit */unsigned int) max((((/* implicit */int) (short)-26312)), (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [(unsigned short)8] [(unsigned short)1])) ? ((-(var_7))) : (((/* implicit */int) (short)-7625))))));
                                var_15 = ((/* implicit */unsigned short) max((((var_13) >> (((arr_4 [i_4 + 3] [i_3] [i_1 + 1] [i_1 - 1]) - (1089044483820720998ULL))))), (((/* implicit */int) (short)-26312))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned char)115)))), (((/* implicit */int) arr_1 [(_Bool)1] [i_2]))))) || (((arr_4 [i_1] [i_1 - 2] [i_1] [i_1 + 2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1] [(unsigned short)8] [i_1 + 2] [i_1]))))))))));
                    var_17 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)88))) : (7635638580658910697ULL)));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */int) var_14))));
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-2260004191418655844LL), (((/* implicit */long long int) var_12))))) ? (((/* implicit */int) var_9)) : ((-(((/* implicit */int) var_8))))))), (var_1)));
}
