/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192178
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
    var_19 = ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 24; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) var_13)))), (((((/* implicit */int) arr_4 [i_3] [i_3 - 1])) + (((/* implicit */int) arr_4 [i_3] [i_3 + 1]))))));
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) -2588969301228978665LL)) % (14003721543453648583ULL))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_1] [i_0] = ((int) (!(((/* implicit */_Bool) var_3))));
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((((arr_5 [i_0] [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [(signed char)22]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_7), (((/* implicit */short) var_0)))))) : (var_18))) != (max((((/* implicit */long long int) ((((/* implicit */_Bool) 1273713911)) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) (unsigned char)71))))), (min((((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
            }
        } 
    } 
    var_23 -= ((/* implicit */int) ((var_18) > (((/* implicit */long long int) ((/* implicit */int) var_9)))));
}
