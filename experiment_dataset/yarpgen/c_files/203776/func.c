/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203776
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
                {
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_14))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        for (signed char i_4 = 3; i_4 < 8; i_4 += 1) 
                        {
                            {
                                var_20 &= ((/* implicit */_Bool) ((short) min((((/* implicit */int) (unsigned char)44)), (max((-1202012676), (((/* implicit */int) (unsigned char)0)))))));
                                var_21 += ((/* implicit */unsigned int) min(((-(((/* implicit */int) (unsigned short)1)))), (((/* implicit */int) (unsigned char)25))));
                                arr_12 [i_0] [i_1] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((arr_11 [i_0] [i_0] [(unsigned char)6] [i_0] [(unsigned char)6] [i_0] [i_0]), (((/* implicit */short) (_Bool)1))))) ? ((+(((/* implicit */int) (unsigned char)24)))) : (((/* implicit */int) arr_10 [i_3 + 1] [i_4 + 3] [(unsigned short)8] [i_4 + 3] [i_4 + 4] [i_4 - 3]))))));
                                var_22 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned short)65535)), ((+(2783737515U)))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_0] |= ((/* implicit */int) (unsigned short)65535);
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 3; i_5 < 10; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) min(((-(arr_14 [i_5 - 3] [i_5 + 2] [i_5 - 2] [i_5 + 1]))), ((~(var_7))))))));
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */short) min((((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [(unsigned char)4] [i_6] [i_6] [i_6] [i_6] [i_6])))), (((((/* implicit */_Bool) arr_4 [i_5])) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) var_4))))))), (min(((~(4190457270U))), (((/* implicit */unsigned int) min((arr_7 [i_0] [i_6] [i_0] [i_5]), (((/* implicit */unsigned short) var_5)))))))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_1] [i_2] [i_2] &= ((/* implicit */long long int) 291106771);
                }
                for (signed char i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
                {
                    var_24 += ((/* implicit */short) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535)));
                    var_25 = ((/* implicit */_Bool) var_8);
                }
                arr_24 [i_0] = ((/* implicit */signed char) max(((-(((/* implicit */int) arr_19 [i_0] [i_1] [i_0] [i_1] [i_1])))), (((/* implicit */int) min((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) var_5)))))));
            }
        } 
    } 
    var_26 -= ((/* implicit */short) var_9);
}
