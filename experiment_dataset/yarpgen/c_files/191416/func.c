/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191416
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
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) var_3))));
    var_17 = ((/* implicit */unsigned long long int) var_15);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 355935710)) ? (((/* implicit */unsigned int) 355935710)) : (max((var_14), (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_0] [i_2] [i_0] [i_0] [i_0])) >= (((/* implicit */int) (unsigned short)18430)))))))));
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) max((((355935720) - (((/* implicit */int) arr_10 [i_4])))), (min((((355935710) ^ (((/* implicit */int) arr_1 [i_1] [i_1])))), (((((((/* implicit */int) var_2)) + (2147483647))) >> (((((/* implicit */int) var_13)) + (23253))))))))))));
                                arr_14 [i_4] [i_2] [19LL] [i_2] [i_0] = ((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) arr_5 [i_2])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) 2147483647);
                                arr_22 [i_0] [i_1] [i_2] [(short)4] [i_0] [i_6] = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_13 [i_0] [i_2] [i_0] [i_5] [i_6])) & (((/* implicit */int) (unsigned char)243)))), (((((/* implicit */_Bool) -2147483647)) ? (-2147483625) : (((/* implicit */int) ((-2147483643) >= (((/* implicit */int) arr_19 [i_0] [i_0] [i_2] [i_0])))))))));
                                arr_23 [i_0] [i_6] [i_1] [(short)20] [i_6] [i_0] [i_2] = ((/* implicit */signed char) 1866756778U);
                            }
                        } 
                    } 
                    arr_24 [i_0] [i_2] [i_2] = (!(((/* implicit */_Bool) 2147483625)));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) var_7);
    var_22 = ((/* implicit */signed char) var_9);
}
