/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23061
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
    var_19 = ((/* implicit */unsigned char) var_9);
    var_20 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_4)), (var_7))))) : (arr_0 [i_1])))), ((-(((((/* implicit */_Bool) var_18)) ? (arr_3 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_13 [i_1] [i_3 + 1])) ? (arr_3 [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_7)))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [(short)2] [(short)2] [11]))))))))));
                                var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((var_1) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61286))))))));
                                var_24 = ((/* implicit */long long int) (((-(arr_3 [i_3] [i_3]))) + (((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned int) (short)-26974)), (arr_7 [i_3] [i_3] [i_3] [i_3 - 1] [10])))))));
                                var_25 = ((/* implicit */unsigned char) var_2);
                                var_26 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_5 [i_1])))) || (((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) var_1))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
