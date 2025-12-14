/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216045
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
    var_20 = ((/* implicit */long long int) max((var_20), (var_14)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_0])) / (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (max((((((/* implicit */_Bool) 2147483643)) ? (((/* implicit */int) arr_1 [i_0])) : (2147483643))), (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) (unsigned char)30))))))) : (((/* implicit */int) arr_3 [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [(unsigned short)3] [(signed char)2] [i_0] [(unsigned short)3] = ((/* implicit */short) ((var_16) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_1] [i_1 - 2] [i_3 - 1])) >= (((/* implicit */int) arr_2 [i_0] [i_3 - 1])))))) : ((+(((((/* implicit */long long int) 2147483643)) ^ (9223372036854775807LL)))))));
                                var_22 = max(((~(((/* implicit */int) arr_4 [i_0] [i_0])))), (((/* implicit */int) (signed char)-51)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) var_16);
}
