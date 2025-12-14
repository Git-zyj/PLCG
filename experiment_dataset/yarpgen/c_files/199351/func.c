/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199351
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
    var_18 ^= ((/* implicit */unsigned int) min(((((~(var_17))) << (((((/* implicit */int) var_4)) + (17308))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) var_1))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_19 = -1LL;
                            arr_12 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */short) (unsigned char)4)), (arr_11 [i_3 + 1])));
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((var_17) + (((/* implicit */unsigned long long int) min((((32768U) << (((((/* implicit */int) (unsigned char)238)) - (235))))), (((/* implicit */unsigned int) min(((short)18902), (((/* implicit */short) (unsigned char)4)))))))))))));
                            arr_13 [i_0] [i_0] = (+(((arr_8 [i_3 - 2]) & (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0] [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
