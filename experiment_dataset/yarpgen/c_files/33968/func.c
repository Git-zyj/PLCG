/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33968
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
    var_13 = ((/* implicit */long long int) min(((~(((/* implicit */int) ((var_11) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))), (((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_10 [i_0] [i_2] [i_3] [i_3] |= ((/* implicit */unsigned long long int) min(((((_Bool)1) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4 - 1]))) : (var_8))))), (((/* implicit */unsigned int) ((int) -7067554712258268759LL)))));
                                arr_11 [i_3] [i_1] &= ((/* implicit */unsigned long long int) arr_3 [i_4]);
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_1] [3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_7))))) & (((unsigned int) arr_9 [i_2] [i_1] [i_1] [i_2] [i_0] [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            {
                                arr_18 [2] [i_1] [i_1] [i_1] [i_1] [i_5] [11U] = ((/* implicit */unsigned int) ((arr_5 [i_5] [i_6]) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1553970953865823336LL)) ? (-2147483637) : (((/* implicit */int) arr_2 [i_0])))))));
                                arr_19 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((short) (_Bool)1))) >> (((var_8) - (2878891517U)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        for (int i_8 = 2; i_8 < 10; i_8 += 1) 
                        {
                            {
                                arr_25 [i_0] [i_0] [i_1] [(signed char)11] [i_0] = ((/* implicit */int) 31U);
                                arr_26 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = max((min(((_Bool)1), ((_Bool)1))), (arr_22 [i_8] [i_7] [i_7] [i_2] [i_1] [i_0]));
                                var_14 = ((/* implicit */_Bool) 3590957901U);
                                arr_27 [i_0] [9LL] [i_1] [i_2] [i_1] [i_1] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [(unsigned short)6] [i_1] [i_8 - 2]))) : (var_2)))) ? (((/* implicit */int) min(((short)28), (((/* implicit */short) arr_14 [i_8 - 2] [i_8 - 2] [(unsigned char)11] [i_8 + 1] [i_8 + 1]))))) : ((((_Bool)1) ? (((/* implicit */int) arr_13 [i_8 - 2] [i_1])) : (((/* implicit */int) (signed char)8))))));
                                arr_28 [i_0] [(short)6] [i_0] [i_0] [i_0] |= ((/* implicit */short) min((3429952541U), (((/* implicit */unsigned int) (short)-7542))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
