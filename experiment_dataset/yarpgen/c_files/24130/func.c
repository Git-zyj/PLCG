/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24130
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
    var_13 = ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] = ((/* implicit */unsigned short) 7675325112835639558LL);
                                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) var_0))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            {
                                arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)25854))));
                                var_15 = ((/* implicit */signed char) max((max((((/* implicit */long long int) max((arr_9 [i_0] [i_0] [i_1]), (((/* implicit */unsigned short) (short)-2174))))), (-7675325112835639558LL))), (((/* implicit */long long int) arr_17 [i_1]))));
                                arr_21 [i_0] [i_1] [i_0] [i_6] [i_6] &= ((/* implicit */int) ((min((((/* implicit */long long int) -659266213)), (var_12))) <= (var_12)));
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((7675325112835639570LL), (((/* implicit */long long int) (short)129))))) ? (((/* implicit */int) arr_1 [i_2])) : (max((min((((/* implicit */int) (unsigned short)504)), (659266203))), (((/* implicit */int) (unsigned char)14))))));
                    arr_23 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_2)), (-7675325112835639536LL)));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_2))));
    var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-30)))), (((/* implicit */int) (unsigned short)9742)))) : (((/* implicit */int) var_4))));
}
