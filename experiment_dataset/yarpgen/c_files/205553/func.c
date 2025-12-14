/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205553
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = var_6;
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_12 = ((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_4] [i_1] [i_2] [i_1] [i_0] [i_0] [i_0])) ^ (((/* implicit */int) (unsigned short)40869))));
                            var_13 *= ((/* implicit */unsigned char) max((((/* implicit */int) (signed char)-103)), (((((/* implicit */_Bool) arr_12 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1])) ? (((/* implicit */int) (short)5988)) : (((/* implicit */int) var_5))))));
                            arr_13 [i_0] [i_3] [i_2] [i_0] [i_0] = max((((/* implicit */unsigned int) min((arr_0 [i_0] [i_4]), (arr_12 [i_4 - 1] [i_4] [i_4] [i_4] [i_4 - 1] [i_1] [i_1])))), (0U));
                        }
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            arr_16 [i_0] [i_1] = ((arr_10 [(signed char)8] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-78))));
                            arr_17 [i_0] [i_1] [i_0] [i_3] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) -977681364)) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) (unsigned char)87))));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 2; i_6 < 12; i_6 += 3) 
                        {
                            var_14 *= ((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0] [i_1] [i_3] [0] [i_6 - 1] [i_0]))));
                            arr_20 [i_0] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */short) arr_10 [i_0] [i_0]);
                            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) var_5))));
                        }
                        var_16 = ((/* implicit */signed char) arr_2 [i_3] [i_2] [i_1]);
                        arr_21 [i_0] = ((/* implicit */unsigned short) ((unsigned int) ((var_0) >> (((/* implicit */int) ((_Bool) 2139714260U))))));
                        arr_22 [i_2] [i_0] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-6004))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((unsigned int) min((((arr_24 [i_0] [i_0] [i_0] [i_7]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6004))))), (((/* implicit */unsigned long long int) arr_18 [i_2] [i_2]))))))));
                            var_18 ^= ((/* implicit */int) ((unsigned int) (!(((/* implicit */_Bool) var_4)))));
                            arr_28 [i_0] [i_8] [i_7] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) (unsigned char)27);
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((short) -977681364)))));
                            arr_32 [i_0] = ((/* implicit */_Bool) (-(((long long int) ((((/* implicit */int) arr_26 [i_0])) + (((/* implicit */int) var_8)))))));
                        }
                        arr_33 [i_7] [i_0] [i_1] = ((/* implicit */unsigned short) var_10);
                    }
                    var_20 = ((/* implicit */_Bool) arr_30 [i_1]);
                    arr_34 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))), ((~(3065058430U)))));
                }
            } 
        } 
    } 
    var_21 = max((var_6), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_9)))))))));
}
