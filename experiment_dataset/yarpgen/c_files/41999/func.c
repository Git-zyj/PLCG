/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41999
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
    var_20 += ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) ((unsigned long long int) (~(((((-1084200622) + (2147483647))) >> (((((/* implicit */int) var_14)) - (29950))))))));
                            var_22 = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) arr_4 [i_2 - 1] [i_2 - 1] [i_3 - 1]))), (((int) ((var_16) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-30134))))))));
                            /* LoopSeq 3 */
                            for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                            {
                                arr_17 [i_0] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */int) (unsigned short)65024)) ^ (((/* implicit */int) var_9))))));
                                var_23 = min((((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) (short)-14485)) - (var_10))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [(_Bool)1] [i_4])) : (((/* implicit */int) var_17))))) ? (max((var_7), (((/* implicit */unsigned int) (unsigned char)206)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_1]) != (((/* implicit */long long int) ((/* implicit */int) (short)3166))))))))));
                                var_24 += ((/* implicit */short) arr_3 [i_0] [i_0]);
                            }
                            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
                            {
                                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) max((((/* implicit */int) arr_15 [i_0] [i_0] [6ULL] [i_2 - 1] [i_3] [i_5])), (((int) ((((/* implicit */_Bool) arr_4 [i_1] [i_2] [i_1])) ? (((/* implicit */int) arr_16 [i_2] [i_1])) : (((/* implicit */int) var_3))))))))));
                                var_26 += ((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_2 - 1] [i_3 + 1] [1])) != (((/* implicit */int) (unsigned short)49136))))), (max((arr_10 [i_2 - 1] [i_2 - 1] [i_2 - 1] [2U] [15LL]), (arr_10 [i_0] [1LL] [6LL] [i_0] [i_5])))));
                            }
                            for (int i_6 = 0; i_6 < 18; i_6 += 2) 
                            {
                                var_27 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)0)))) - (((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_0] [i_2])), (var_18)))))))));
                                var_28 += ((/* implicit */signed char) var_6);
                                var_29 = ((/* implicit */short) (-(max((((((/* implicit */int) (unsigned short)44860)) >> (((/* implicit */int) arr_6 [i_0] [i_3] [i_1] [i_3 + 1])))), (((1911252355) >> (((-8585460322489362128LL) + (8585460322489362129LL)))))))));
                                arr_23 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3] [i_6] = ((/* implicit */unsigned short) (((-(((/* implicit */int) ((unsigned short) (short)30133))))) != (((((/* implicit */_Bool) (-(arr_21 [i_0] [i_0] [i_2] [i_2] [3LL])))) ? (((((/* implicit */int) (unsigned short)18017)) >> (((arr_21 [i_0] [i_1] [15U] [i_0] [i_6]) - (1783411531U))))) : (((10) ^ (((/* implicit */int) (short)14490))))))));
                            }
                        }
                    } 
                } 
                arr_24 [i_0] [(unsigned short)5] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) min(((unsigned char)215), (((/* implicit */unsigned char) var_16))))) : (((/* implicit */int) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) <= (((/* implicit */int) (unsigned short)28333))))))), (((((/* implicit */int) ((2432572275U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_1])))))) + (((/* implicit */int) min((((/* implicit */unsigned short) arr_19 [i_0])), (arr_2 [i_0] [i_0]))))))));
                var_30 = ((/* implicit */short) ((((/* implicit */int) arr_3 [(_Bool)1] [i_1])) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_0])))))));
            }
        } 
    } 
}
