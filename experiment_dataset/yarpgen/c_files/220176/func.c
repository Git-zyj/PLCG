/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220176
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
    var_13 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (((+(((/* implicit */int) (signed char)15)))) + (((/* implicit */int) ((signed char) var_8)))))), (var_8)));
    var_14 ^= ((/* implicit */int) ((((((/* implicit */int) (signed char)120)) / (((/* implicit */int) var_3)))) >= (((/* implicit */int) var_0))));
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_8))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_16 *= ((/* implicit */unsigned int) ((var_6) ? ((~(((/* implicit */int) (unsigned char)219)))) : (((/* implicit */int) (unsigned char)36))));
                    arr_9 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */int) ((4586075930307752545LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_0))));
                                arr_14 [i_0] [i_2] [i_1] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */long long int) var_6);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) min((((/* implicit */long long int) var_6)), (max((var_9), (((/* implicit */long long int) var_6))))));
}
