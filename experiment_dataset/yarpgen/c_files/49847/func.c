/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49847
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
    var_20 = ((/* implicit */unsigned int) ((short) ((((var_6) + (2147483647))) << (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) != (882825863U)))))));
    var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (signed char)21)), (var_7)));
    var_22 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((unsigned char) (_Bool)1))), (var_18)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) arr_6 [i_1]);
                var_24 = ((/* implicit */unsigned int) max((var_24), (var_19)));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) min((((/* implicit */unsigned int) (_Bool)1)), (((((var_19) | (var_2))) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                            arr_13 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)12191)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (0LL))), (((/* implicit */long long int) (short)0))))) ^ (((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_0 + 1] [i_0] [i_0 + 1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_0)))));
                            var_26 = ((/* implicit */int) max((((/* implicit */long long int) arr_5 [i_1] [(unsigned short)8] [i_2])), ((-(arr_4 [i_0 - 2])))));
                            arr_14 [i_3 - 1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (signed char)94);
                        }
                    } 
                } 
            }
        } 
    } 
}
