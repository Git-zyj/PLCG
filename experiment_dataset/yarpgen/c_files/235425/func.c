/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235425
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
    var_15 ^= ((/* implicit */int) ((signed char) (short)(-32767 - 1)));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) 1716194881);
                            var_17 = ((/* implicit */unsigned long long int) ((int) 1U));
                            var_18 = ((/* implicit */int) ((var_12) << (((/* implicit */int) ((((unsigned long long int) var_4)) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1] [i_1]))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_4 = 3; i_4 < 18; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_5 = 3; i_5 < 18; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((16U) + (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_16 [i_5 - 3] [i_5] [i_5] [i_5 - 3] [i_5 - 3] [i_5 - 3] [i_5 - 2]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((-391300651) + (((/* implicit */int) var_3)))) <= ((+(((/* implicit */int) var_4)))))))) : ((+(((unsigned int) 1449269666))))));
                                arr_18 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] = ((unsigned long long int) ((arr_13 [i_6] [i_6] [i_5 - 2] [17U] [i_5 - 1] [i_0 - 1]) | (arr_13 [i_6] [i_6] [i_6] [i_5] [i_1] [i_0 + 1])));
                            }
                        } 
                    } 
                    arr_19 [i_0 + 1] [i_0 + 1] [(short)2] [i_4] &= ((/* implicit */unsigned char) ((arr_7 [i_0 + 1] [i_0] [i_0 + 1] [(unsigned char)16] [i_4]) * (((/* implicit */unsigned long long int) -2051395237))));
                }
                for (unsigned long long int i_7 = 1; i_7 < 17; i_7 += 4) 
                {
                    var_20 = ((/* implicit */unsigned long long int) max((max(((~(((/* implicit */int) (signed char)-1)))), (((/* implicit */int) ((short) var_3))))), (((((/* implicit */int) ((signed char) 2051395233))) & (((/* implicit */int) ((signed char) arr_4 [i_0 - 1] [i_0])))))));
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (short)-10067))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) min((min((((((/* implicit */unsigned int) 2051395221)) & (var_6))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)200)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) ? (391300657) : (((/* implicit */int) var_9)))) << (((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_0)))))))))))));
}
