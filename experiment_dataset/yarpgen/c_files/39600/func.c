/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39600
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_16 = var_4;
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_17 |= ((/* implicit */short) max(((+(max((((/* implicit */unsigned int) var_11)), (var_7))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7)))))));
                            var_18 = max((min((arr_9 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]), (arr_9 [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 2]))), (max((((/* implicit */int) var_4)), (arr_9 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]))));
                            var_19 = ((/* implicit */unsigned int) ((var_15) == (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (+(var_7))))))));
                            var_20 = ((/* implicit */unsigned int) (unsigned char)1);
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) (~((~(var_8)))));
            }
        } 
    } 
    var_22 |= ((/* implicit */unsigned char) ((((unsigned int) var_13)) << (((((/* implicit */int) var_9)) - (72)))));
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (1154486725U) : (var_13)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) -34291416)) ? (((/* implicit */int) (short)7876)) : (((/* implicit */int) (short)7884))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((long long int) var_13))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
    var_24 = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned short) (short)-7854)));
    var_25 = ((/* implicit */unsigned char) var_1);
}
