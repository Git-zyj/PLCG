/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24718
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
    var_12 = ((/* implicit */signed char) (unsigned char)132);
    var_13 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((unsigned int) (short)-1)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        var_14 += ((/* implicit */short) arr_9 [i_0 - 1] [i_0 + 2]);
                        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)3)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)109))) < (669841819U))))) : (arr_6 [i_0 + 1]))))));
                        arr_11 [i_0] [i_1] [(unsigned short)10] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)218)) ? (((/* implicit */int) arr_9 [i_1 + 2] [i_1 + 2])) : (((/* implicit */int) arr_4 [i_1 - 2] [i_1]))));
                        arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */signed char) 453597551U);
                        var_16 *= ((/* implicit */unsigned int) arr_4 [i_0] [i_1]);
                    }
                    for (int i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        arr_15 [(short)14] [i_1] [(unsigned char)12] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */int) max(((unsigned short)45392), (((/* implicit */unsigned short) arr_8 [i_0] [i_0] [1] [i_0 - 1]))))), (min((((((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_2] [i_1 - 1] [(signed char)5] [i_0 - 1])) & (((/* implicit */int) arr_9 [(unsigned short)19] [i_1])))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) >= (((/* implicit */int) arr_9 [(signed char)8] [i_1])))))))));
                        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)45381)))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_5 = 2; i_5 < 19; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_18 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8747)) ? (-1242706964) : (((/* implicit */int) (unsigned char)223))))) ? (((/* implicit */int) ((((/* implicit */int) arr_17 [i_5] [i_5])) != (((/* implicit */int) (short)-25562))))) : (((((/* implicit */int) arr_17 [i_0 + 1] [i_2 + 1])) << (((/* implicit */int) (unsigned char)0)))))), (((/* implicit */int) ((unsigned short) 2423914989U))));
                                var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)50)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_23 [(short)18] [(signed char)6] [(short)18] [(signed char)14] [i_5 - 1] [(unsigned short)13] [i_0]))))) > (arr_10 [i_5 + 1] [13ULL] [i_1]))))));
                                arr_24 [i_1] [(_Bool)1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_23 [i_2] [i_1] [i_2 + 1] [i_5] [i_6] [i_2 + 1] [i_6]))))))));
                                var_20 += ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned char)143)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */int) (unsigned char)230)), (-2147483618)))))) : (arr_6 [i_0])));
                                var_21 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (short)-5174)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3788268575U)) ? (((/* implicit */int) (unsigned short)59944)) : (((/* implicit */int) (unsigned short)20144))))) : (max((2534750947004790618ULL), (((/* implicit */unsigned long long int) (unsigned short)5586)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_5] [i_5] [i_5 + 2] [i_5] [i_5 - 2] [i_5] [i_5])) & (1581835774))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 &= ((/* implicit */short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 0U)))) - ((+(18446744073709551611ULL)))))));
}
