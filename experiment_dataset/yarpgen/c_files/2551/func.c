/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2551
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
    for (signed char i_0 = 3; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) min((var_4), (var_4)))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_11))))) : (((/* implicit */int) var_14)))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) max((var_11), (((/* implicit */unsigned short) var_3))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_14))))));
                                arr_14 [(unsigned short)0] [i_1] [i_1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((max((((var_9) / (((/* implicit */long long int) ((/* implicit */int) var_14))))), (((/* implicit */long long int) var_6)))) / (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))))));
                                var_18 = ((/* implicit */short) (+(((/* implicit */int) min((var_11), (((/* implicit */unsigned short) var_5)))))));
                                arr_15 [i_0] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * (var_12)))) / (((unsigned long long int) var_3)))));
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) var_7)), (var_0)))) > ((~(((/* implicit */int) var_3))))))), (var_8))))));
                            }
                        } 
                    } 
                } 
                var_20 |= ((/* implicit */int) max((min((min((var_4), (((/* implicit */unsigned int) var_13)))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_1)))))));
            }
        } 
    } 
    var_21 = var_2;
}
