/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222150
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
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_5))) - ((-(var_15))))))));
    var_20 = ((/* implicit */signed char) (~(((/* implicit */int) var_11))));
    var_21 = ((/* implicit */long long int) ((var_8) - (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (-(arr_1 [i_0])))) ? (((/* implicit */int) arr_3 [i_0 + 2])) : (((((/* implicit */int) var_6)) - (((/* implicit */int) var_13)))))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_1] [i_1] [i_3] [i_4] [i_4] &= ((/* implicit */short) var_18);
                                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) arr_4 [i_1]))));
                                var_24 -= ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_7), (arr_6 [i_1] [i_1] [i_2]))))) & (arr_13 [i_0 + 2]))) - (((/* implicit */unsigned long long int) arr_9 [i_1]))));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((arr_13 [i_0 + 4]) - (arr_13 [i_0 + 2]))) - (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0 + 3] [i_1]))))))))));
            }
        } 
    } 
}
