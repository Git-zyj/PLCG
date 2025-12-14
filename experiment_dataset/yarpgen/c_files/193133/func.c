/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193133
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
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) max((var_16), (min((((((((/* implicit */_Bool) var_9)) ? (arr_7 [i_3] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) % (((/* implicit */long long int) ((arr_5 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))) : (arr_0 [i_1])))))), (((/* implicit */long long int) ((_Bool) (signed char)0)))))));
                            arr_11 [(_Bool)0] [i_0] [i_2] = ((/* implicit */_Bool) var_2);
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] = ((((/* implicit */_Bool) ((var_9) - (((/* implicit */unsigned long long int) var_14))))) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
                var_17 = ((/* implicit */signed char) max((((/* implicit */int) var_2)), ((+(((/* implicit */int) ((_Bool) arr_1 [i_0])))))));
                var_18 = ((/* implicit */int) max((var_18), (((int) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_2)))))));
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_9) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)44692)) * (((/* implicit */int) (signed char)0)))))))) ? (min((((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_0] [i_0])) ? (var_6) : (arr_1 [i_1]))), (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_7)))))))));
            }
        } 
    } 
    var_20 &= ((/* implicit */_Bool) var_8);
    var_21 = ((min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_2)), (var_8)))), (((((/* implicit */_Bool) var_15)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) >= (((/* implicit */unsigned long long int) var_11)));
    var_22 = ((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1651483778U)) ? (((/* implicit */int) var_7)) : (var_1)))) : (((((/* implicit */long long int) ((/* implicit */int) var_8))) | (var_6)))))));
}
