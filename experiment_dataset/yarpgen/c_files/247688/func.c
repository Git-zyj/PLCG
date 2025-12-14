/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247688
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
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */int) (((~(((/* implicit */int) (unsigned char)15)))) <= ((+(((/* implicit */int) (unsigned char)255))))))) >> (((min((var_14), (((/* implicit */long long int) ((1100122555U) - (((/* implicit */unsigned int) 170772341))))))) + (3438680460297067294LL))))))));
    var_16 = ((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 21; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(var_4))))));
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -520344180063174007LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)231))) : (1100122561U)));
                                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) max((((/* implicit */unsigned char) ((arr_9 [(signed char)19] [i_2] [i_2 + 1] [i_2 - 1]) > (((/* implicit */int) (short)23156))))), (var_1))))));
                                arr_14 [i_0] [i_1] [i_0] [i_3] [23U] = ((/* implicit */signed char) (((~(max((((/* implicit */unsigned int) arr_2 [i_4])), (0U))))) >= (var_3)));
                            }
                        } 
                    } 
                    var_20 ^= ((/* implicit */unsigned short) arr_13 [i_0] [i_1] [i_1] [i_1] [i_2 - 1]);
                    arr_15 [i_2] [i_1 + 1] [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) var_11)), (((arr_12 [i_1 + 1] [i_2 - 1]) / (arr_12 [i_1 - 1] [i_2 - 1])))));
                }
            } 
        } 
    } 
}
