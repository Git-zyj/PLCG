/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205889
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (signed char i_2 = 4; i_2 < 8; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_2] [i_3] = ((/* implicit */_Bool) arr_13 [i_1] [i_0] [i_4] [i_4] [i_4]);
                                arr_17 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((91682626), (((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) arr_6 [i_2]))))))) ? (((/* implicit */int) (short)-14396)) : (((/* implicit */int) arr_4 [i_1] [i_2] [i_3 - 4]))));
                                arr_18 [i_0] [i_0] [i_0] [(signed char)9] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) min((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_2] [i_4])))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_14 [i_0] [i_1] [i_1] [i_3 - 1] [i_4])), (arr_6 [i_0])))))))));
                                var_17 = ((/* implicit */int) arr_15 [i_0] [i_0] [0U] [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */short) 1743755568785994063ULL);
                }
                /* vectorizable */
                for (signed char i_5 = 1; i_5 < 11; i_5 += 1) 
                {
                    var_19 ^= ((/* implicit */short) (signed char)87);
                    arr_21 [i_5] [1ULL] [i_1] [i_1] &= ((/* implicit */int) ((878272146670471442LL) >> (((1221848361U) - (1221848305U)))));
                }
                for (signed char i_6 = 1; i_6 < 11; i_6 += 4) 
                {
                    arr_25 [i_6 - 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((-(var_13))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_6] [(signed char)10])))))) ? (((((/* implicit */_Bool) ((int) var_10))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : (min((((/* implicit */unsigned int) arr_3 [i_6 - 1])), (1330106491U))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)127)))))));
                    /* LoopSeq 2 */
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
                    {
                        var_20 ^= max((1743755568785994063ULL), (((/* implicit */unsigned long long int) ((6759302344687369217LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-121)))))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_5 [i_6 - 1] [i_6 - 1]), (((/* implicit */unsigned char) (signed char)4)))))) != ((~(var_13)))));
                    }
                    for (long long int i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
                    {
                        var_22 *= ((/* implicit */unsigned long long int) max((((/* implicit */int) min((arr_3 [i_6 + 1]), (arr_3 [i_0])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [(unsigned short)0])) ? (((/* implicit */unsigned int) var_14)) : (2964860805U)))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_12 [i_8] [i_8] [i_6 - 1]))))));
                        arr_30 [i_0] [(signed char)6] [i_8] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121))) : (((unsigned int) 1221848357U))));
                        arr_31 [(unsigned short)10] [i_6] [i_1] [i_0] = ((/* implicit */unsigned short) arr_23 [i_1] [i_6] [i_8]);
                    }
                }
                for (long long int i_9 = 0; i_9 < 12; i_9 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        for (unsigned short i_11 = 1; i_11 < 11; i_11 += 4) 
                        {
                            {
                                arr_40 [i_9] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((unsigned short) arr_29 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]));
                                var_23 = ((/* implicit */unsigned char) max((((unsigned int) arr_36 [i_9] [i_9] [i_9] [i_9] [i_9] [i_11 + 1])), (((/* implicit */unsigned int) ((signed char) min((arr_36 [i_11] [(signed char)1] [i_9] [i_9] [i_1] [(signed char)7]), (((/* implicit */unsigned long long int) var_9))))))));
                            }
                        } 
                    } 
                    arr_41 [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_37 [i_0] [i_0] [i_1] [i_9] [i_9]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [(signed char)7] [8ULL] [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_13 [9] [i_1] [i_1] [i_9] [i_9])) : (((/* implicit */int) arr_13 [8U] [i_0] [(signed char)3] [(signed char)3] [i_9]))))) : (10U)));
                }
                arr_42 [i_0] [i_1] = ((/* implicit */unsigned int) max((arr_9 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) ((_Bool) arr_9 [i_0] [i_1] [i_1] [i_1])))));
                var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((1743755568785994063ULL), (arr_23 [i_0] [i_0] [(unsigned char)6])))) ? (((var_6) * (((/* implicit */unsigned int) arr_27 [i_0] [i_0] [i_0] [(signed char)0] [i_1] [i_1])))) : (((((/* implicit */_Bool) arr_34 [i_1] [i_1] [i_0])) ? (arr_32 [i_1] [i_1] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(signed char)11] [i_0] [i_1] [i_1])))))))) ? (min((((/* implicit */long long int) 10U)), (5144968151401654380LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1]))));
                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) arr_13 [i_1] [i_0] [i_0] [i_0] [i_0]))));
            }
        } 
    } 
    var_26 = ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (18446744073709551615ULL)))))));
}
