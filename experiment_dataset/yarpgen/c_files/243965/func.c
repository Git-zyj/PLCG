/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243965
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_18 = var_2;
                                var_19 = ((/* implicit */_Bool) var_13);
                                var_20 = ((/* implicit */long long int) min((((/* implicit */int) var_1)), (min((((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_2))))), ((+(((/* implicit */int) var_10))))))));
                                var_21 = ((/* implicit */unsigned long long int) ((var_9) >= (min((((((/* implicit */int) (signed char)124)) & (((/* implicit */int) (short)-31962)))), (((/* implicit */int) min((var_5), (var_5))))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */short) var_12)), (var_11)))), (((var_7) & (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) || ((!(((/* implicit */_Bool) var_14)))));
                var_23 *= max((min((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)43913)), ((-2147483647 - 1))))), ((~(var_6))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_9)) - (max((var_14), (((/* implicit */long long int) var_16))))))));
                var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((min((((/* implicit */unsigned int) (unsigned char)11)), (1874561025U))), (((/* implicit */unsigned int) min((((/* implicit */int) var_16)), (var_9))))))), (min((min((var_14), (((/* implicit */long long int) var_15)))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_15)), (var_0))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)44342)));
    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) min((((/* implicit */int) var_16)), ((+(148877547))))))));
    var_27 = ((/* implicit */_Bool) min((min((min((var_17), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) min((((/* implicit */short) var_12)), (var_2)))))), (((/* implicit */long long int) min((var_9), (((/* implicit */int) var_2)))))));
}
