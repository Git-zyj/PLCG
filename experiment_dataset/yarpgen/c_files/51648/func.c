/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51648
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
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    var_15 = min((min((min((arr_6 [i_0 - 4]), (((/* implicit */long long int) 4294967291U)))), (((/* implicit */long long int) 4294967291U)))), (((/* implicit */long long int) (+(var_3)))));
                    var_16 = ((/* implicit */int) arr_1 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) max((var_17), ((+(min((min((var_11), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) ((unsigned char) var_4)))))))));
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_9))))), (arr_10 [i_0 - 1] [i_0] [i_0] [i_2] [i_3] [i_2])))), (((long long int) arr_12 [i_0] [i_0] [i_0] [i_1] [i_2 - 1])))))));
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_2))));
                                var_20 = min((min((((/* implicit */long long int) var_4)), (var_5))), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) 4U)) >= (var_8))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_11) != (((((/* implicit */_Bool) var_13)) ? (105043184U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))) : (((((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))) + (((((/* implicit */_Bool) var_9)) ? (var_3) : (var_3)))))));
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((short) max((var_8), (((/* implicit */unsigned long long int) 4294967294U)))))), (((unsigned int) (~(-2936865524758638376LL)))))))));
    var_23 = ((/* implicit */unsigned short) (~(min((((/* implicit */int) var_4)), ((+(((/* implicit */int) var_6))))))));
}
