/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216481
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned char i_3 = 3; i_3 < 11; i_3 += 2) 
                    {
                        for (long long int i_4 = 4; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) ((unsigned long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)58))))), (min((1516311111U), (((/* implicit */unsigned int) (signed char)30)))))));
                                arr_11 [i_0] [i_1] [i_0] [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) ((((arr_1 [i_0]) >> (((((((/* implicit */_Bool) (signed char)42)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-29))) : (2190231069U))) - (4294967235U))))) <= (((/* implicit */unsigned long long int) max((2778656200U), (((/* implicit */unsigned int) 2113958144)))))));
                                var_19 = ((/* implicit */_Bool) (~(2190231069U)));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */signed char) ((0ULL) << (((3607675845U) - (3607675827U)))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? ((((+(var_2))) - (max((var_1), (var_8))))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) -1LL)) ? (2104736233U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)208))))), (2778656211U))))));
}
