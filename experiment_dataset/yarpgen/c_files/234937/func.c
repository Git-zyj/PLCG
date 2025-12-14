/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234937
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
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_11))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) / (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)161))))) & ((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-51)))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(var_8)))) == (((((/* implicit */unsigned long long int) var_2)) * (var_5))))))));
                                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */unsigned long long int) (-(var_8)))) * (var_11))) : (((/* implicit */unsigned long long int) ((var_2) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0)))))))))))));
                                var_17 = ((/* implicit */_Bool) var_8);
                                arr_14 [i_0] [i_1] [i_2 + 1] [i_1] [i_4] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_3))))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) 1221811179U)) == (3081082388756812775ULL))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */long long int) (~(((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
}
