/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204599
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
    var_20 = (unsigned char)74;
    var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3))))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(((((/* implicit */int) arr_1 [(signed char)19])) + (((/* implicit */int) arr_1 [i_0]))))))), (max((var_4), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (var_16))))))));
        var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_0])), (14686926065385333660ULL))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((unsigned char) max((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)-3534)) : (((/* implicit */int) (unsigned short)2)))))));
    }
    for (short i_1 = 2; i_1 < 19; i_1 += 4) 
    {
        var_23 = ((/* implicit */_Bool) var_2);
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                {
                    var_24 -= ((/* implicit */_Bool) (-(max((((/* implicit */int) arr_5 [i_3] [i_3])), (var_11)))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        for (short i_5 = 1; i_5 < 18; i_5 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) arr_4 [i_1 + 2]);
                                var_26 ^= ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))), (2090315525)));
                                var_27 = ((/* implicit */short) var_13);
                                var_28 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65519)) ? (((/* implicit */int) (unsigned short)65532)) : (((/* implicit */int) (unsigned short)15))))), ((~(max((((/* implicit */unsigned long long int) -17179869184LL)), (arr_16 [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_1 + 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_29 &= ((/* implicit */signed char) arr_9 [i_1] [i_1] [i_1 + 1] [(unsigned char)6]);
        arr_17 [i_1] [i_1 + 1] = ((/* implicit */unsigned long long int) (unsigned char)47);
        var_30 = ((/* implicit */long long int) var_8);
    }
    var_31 = ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) min((((/* implicit */short) var_6)), (var_3)))))));
}
