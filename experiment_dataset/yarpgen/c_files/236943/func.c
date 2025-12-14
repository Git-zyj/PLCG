/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236943
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */int) max((var_16), (min((max((((/* implicit */int) arr_2 [i_0 - 1])), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_1 + 1] [i_0] [i_0])))))), ((-(((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1]))))))));
                var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */short) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)45))) : (var_4)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (int i_3 = 3; i_3 < 9; i_3 += 1) 
                    {
                        {
                            var_18 ^= ((/* implicit */_Bool) var_9);
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_6 [(short)1] [i_2] [i_1 - 1]))));
                            var_20 ^= ((/* implicit */short) (~((+(((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_2]))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_9 [i_1] [i_1] [i_1 + 1] [i_0] [i_0 - 1] [2U])))) : (min((var_6), (((/* implicit */long long int) arr_3 [i_0] [7] [i_1 + 1]))))))), (max((((/* implicit */unsigned long long int) 4294967271U)), (var_4)))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(max((var_8), (((/* implicit */unsigned long long int) (unsigned char)127))))))) ? (var_11) : (((((/* implicit */_Bool) (-(var_2)))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) min((var_5), (var_5)))))))));
}
