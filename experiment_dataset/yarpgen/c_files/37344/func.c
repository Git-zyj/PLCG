/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37344
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (+(175951953U)))) ? (var_8) : (max((((/* implicit */unsigned int) min((var_6), (var_6)))), (((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7314))) : (var_1)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) arr_2 [i_1] [i_0] [i_0]);
                arr_4 [1U] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_1 [i_0]))))) ? (((unsigned long long int) (unsigned char)152)) : (max((arr_0 [i_1]), (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
                arr_5 [i_1] [(short)5] [i_0] = ((/* implicit */unsigned long long int) ((var_8) > (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37206))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (1151657258U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */short) (((!(((/* implicit */_Bool) max((arr_10 [i_2]), (arr_0 [i_0])))))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_3 - 1] [6])) ? (arr_11 [9LL] [i_3 + 1] [i_2]) : (arr_11 [i_0] [i_3 - 1] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0])))));
                            var_16 = ((/* implicit */unsigned long long int) (+(((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) ((2220864929342285189LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249))))))) : (var_7)))));
                            var_17 = max((max((max((-4403557911961131728LL), (((/* implicit */long long int) (short)7659)))), (((/* implicit */long long int) (!(arr_7 [2LL] [2LL] [i_2] [i_2])))))), (((/* implicit */long long int) arr_8 [i_0] [i_1] [i_3])));
                            var_18 = ((/* implicit */long long int) arr_6 [i_0]);
                            arr_12 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */short) min(((-(((/* implicit */int) (unsigned short)63424)))), (min((((/* implicit */int) var_10)), ((~(((/* implicit */int) (short)26163))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
