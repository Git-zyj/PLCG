/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191762
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
    for (signed char i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_18 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) <= (4342797797521571546LL)))) % (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (((/* implicit */int) arr_2 [i_0] [4U])))))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) 9223372036854775807LL);
                                arr_10 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_1 [i_4 + 2]);
                                arr_11 [i_4] [i_1 + 1] [i_2] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_1 [i_0]) : (((/* implicit */int) var_10)))) + (2147483647))) << (((((min((arr_1 [i_4 + 3]), (arr_1 [i_0 - 2]))) + (158987328))) - (4)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(max((var_13), (((/* implicit */unsigned int) var_9))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((max((var_15), (((/* implicit */long long int) var_16)))) << (((((((/* implicit */int) (unsigned short)42808)) + (((/* implicit */int) (signed char)-6)))) - (42802)))))));
}
