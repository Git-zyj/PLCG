/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21475
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
    var_15 = ((/* implicit */short) var_7);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_13 [6] [i_2] [i_3] [i_4] = ((/* implicit */short) ((signed char) max((((/* implicit */long long int) arr_5 [i_0] [i_1])), (arr_6 [i_0] [(unsigned char)10]))));
                                var_16 = max((((/* implicit */unsigned int) (unsigned char)126)), (22U));
                                var_17 |= ((/* implicit */unsigned int) (~(min(((-(745203723))), (((((/* implicit */_Bool) arr_3 [i_1] [(signed char)1])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) var_9))))))));
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) max((((unsigned char) arr_2 [i_0] [7U])), (((/* implicit */unsigned char) arr_2 [i_0] [i_3])))))));
                            }
                        } 
                    } 
                    var_19 *= ((/* implicit */_Bool) 910364889);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_12))));
    var_21 = ((/* implicit */long long int) var_5);
    var_22 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) (~(((/* implicit */int) (short)17307))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
}
