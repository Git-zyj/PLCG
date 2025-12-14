/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230774
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
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 12359785840201836351ULL))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 14; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_0 + 1] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */int) (short)-14373);
                            var_18 -= var_13;
                        }
                    } 
                } 
                arr_12 [i_0 + 1] [i_1] = ((/* implicit */short) ((unsigned int) (unsigned char)255));
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) min((min((((/* implicit */int) var_13)), (((((/* implicit */int) arr_6 [i_0] [i_1])) >> (((((/* implicit */int) arr_2 [i_0] [i_1] [i_1])) + (83))))))), (((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_15))))) : (((/* implicit */int) arr_4 [3ULL] [i_0 + 1] [i_0 + 1] [i_1])))))))));
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min((576441896U), (min((((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_1])), (min((((/* implicit */unsigned int) arr_2 [i_0 + 1] [i_0] [i_0 + 1])), (3561155482U))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_3);
}
