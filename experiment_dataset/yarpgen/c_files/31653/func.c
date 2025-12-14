/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31653
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) max((((/* implicit */long long int) 33546240U)), (-5341729692877450349LL)));
        arr_2 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0])))))));
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */long long int) (~(max((((/* implicit */unsigned int) var_0)), (arr_3 [i_1])))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_13 = max((max((((/* implicit */int) arr_9 [i_3] [i_3])), ((+(var_2))))), (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned short) arr_9 [i_3] [i_1])))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) (((+(((((/* implicit */_Bool) 4265171709177345375ULL)) ? (var_1) : (((/* implicit */unsigned long long int) var_8)))))) <= (((/* implicit */unsigned long long int) ((1545530165U) - (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                                arr_18 [i_5] [i_4] [i_3] [i_2] [i_1] = ((/* implicit */_Bool) (unsigned char)68);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        arr_23 [i_1] [i_2] [i_6] [(unsigned short)0] = ((/* implicit */unsigned long long int) ((unsigned int) var_10));
                        var_15 = ((/* implicit */_Bool) arr_22 [i_1] [i_6] [i_3] [i_6] [(unsigned short)0] [i_3]);
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        arr_27 [i_7] [i_2] [i_3] = ((/* implicit */unsigned long long int) (unsigned char)199);
                        var_16 = ((/* implicit */unsigned int) arr_24 [i_1]);
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) -5341729692877450331LL)) ? (((/* implicit */int) (unsigned char)132)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_16 [i_1] [i_2] [i_1] [i_2] [i_1]))));
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_31 [i_1] [i_2] [i_3] [i_8] = ((/* implicit */_Bool) ((var_10) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)4064)) ^ (((/* implicit */int) (short)0)))))));
                        arr_32 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (signed char)0);
                        arr_33 [i_1] [i_1] [i_3] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)154)))))) : (((((/* implicit */_Bool) arr_6 [(unsigned short)4] [(unsigned short)4] [(unsigned short)4])) ? (var_1) : (((/* implicit */unsigned long long int) arr_11 [10] [i_2] [i_2] [i_8] [i_2]))))));
                    }
                }
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (_Bool)0)), (var_3)));
}
