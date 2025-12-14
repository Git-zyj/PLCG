/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42936
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
    var_15 = ((/* implicit */long long int) var_4);
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((var_8) % (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))))))));
    var_17 = var_1;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 2; i_2 < 8; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_12 [i_4] [i_3] [(unsigned char)2] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) 3949828828U)))) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_1 [i_1]))));
                                var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) (short)-18350)), ((unsigned short)49043)))) >> (((((/* implicit */int) var_14)) / (((/* implicit */int) var_0)))))))));
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)16493))))))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (unsigned char)209)) >> (((((/* implicit */int) arr_5 [i_2] [i_2] [i_2 + 3] [(unsigned short)1])) - (41)))))));
                    var_21 = ((/* implicit */unsigned short) arr_0 [i_0]);
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                var_22 &= ((/* implicit */short) min((min((max((var_9), (2605485665U))), ((-(1689481630U))))), (((/* implicit */unsigned int) max((((/* implicit */short) arr_15 [i_2 + 2] [(_Bool)1] [i_2 + 3] [i_1] [i_1])), ((short)-17519))))));
                                arr_19 [(_Bool)1] [9] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
                                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (-(max((((/* implicit */unsigned int) arr_6 [i_2 + 3] [i_2 + 3] [i_2] [i_2])), (1040091071U))))))));
                                arr_20 [i_0] [i_0] = ((/* implicit */long long int) 18446744073709551615ULL);
                            }
                        } 
                    } 
                }
                for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    arr_24 [i_7] [i_0] [i_0] [i_0] = ((/* implicit */int) ((signed char) (unsigned char)31));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 3; i_8 < 8; i_8 += 2) 
                    {
                        for (short i_9 = 2; i_9 < 10; i_9 += 2) 
                        {
                            {
                                arr_31 [i_0] [i_8] [i_8] [i_0] = ((/* implicit */short) arr_22 [i_9 - 1]);
                                var_24 = ((/* implicit */short) 4154076334U);
                                var_25 += ((/* implicit */unsigned int) -972557210);
                                arr_32 [i_8] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_8)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (short)28891))))) ? (((/* implicit */int) arr_30 [i_9] [i_8] [i_9] [i_9 - 1] [i_9] [i_9 + 1])) : (arr_21 [(unsigned short)9] [i_1] [i_1] [i_1])))));
                            }
                        } 
                    } 
                    var_26 -= ((var_12) >> (((268435455U) - (268435430U))));
                    arr_33 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) (short)-1));
                }
                var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((signed char) min((min((((/* implicit */unsigned long long int) arr_30 [i_0] [i_1] [i_0] [i_0] [i_0] [(signed char)2])), (var_13))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) ^ (arr_3 [i_0] [i_0]))))))))));
            }
        } 
    } 
}
