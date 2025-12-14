/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47867
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
    var_17 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(3468374977U)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 4; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_18 += ((/* implicit */int) var_9);
                                var_19 &= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1] [(short)0])) || (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]))))), (arr_4 [i_0] [i_0] [i_0])));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))) + ((-(arr_3 [(short)8] [i_1 - 1] [6])))));
                var_20 -= ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [(_Bool)1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned short) ((18446744073709551597ULL) >> (2)));
                var_22 = (_Bool)1;
                arr_20 [(short)8] [i_6] [i_6] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(var_6)))))))));
                /* LoopSeq 1 */
                for (unsigned int i_7 = 1; i_7 < 13; i_7 += 1) 
                {
                    arr_24 [(_Bool)1] [i_7] [i_7] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_6] [(short)3] [i_7 + 2])) ? (((/* implicit */long long int) var_5)) : (((((var_14) + (9223372036854775807LL))) >> (((var_6) - (1329693244U)))))))) && (((/* implicit */_Bool) (-(1189853325218869653LL))))));
                    arr_25 [i_7] [i_6] [13LL] = ((/* implicit */int) -1189853325218869627LL);
                    /* LoopSeq 2 */
                    for (short i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 2; i_9 < 15; i_9 += 2) 
                        {
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (((~(arr_1 [i_5]))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1189853325218869654LL)) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) (unsigned char)225))))))))));
                            arr_32 [i_5] [i_7] [(_Bool)1] = ((/* implicit */signed char) (((~(var_4))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))));
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((arr_11 [i_9] [i_8] [i_7] [i_5] [i_5]) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2899267895U)))))))) > (((/* implicit */unsigned int) (~(2145962)))))))));
                            arr_33 [8U] [i_7] [i_8] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2899267889U)) || (((/* implicit */_Bool) -1189853325218869654LL))));
                        }
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (~(var_2))))));
                        arr_34 [(unsigned short)0] [12U] [i_6] [i_5] = ((/* implicit */unsigned char) arr_11 [i_5] [i_6] [i_6] [i_6] [13]);
                        arr_35 [6U] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) (signed char)-25))) - (var_8)))))) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) != ((~(((/* implicit */int) (signed char)4))))))))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        arr_38 [i_7] = (((+(((((/* implicit */_Bool) 2145935)) ? (((/* implicit */long long int) arr_4 [i_6] [i_7 + 3] [i_10])) : (6001788349433134288LL))))) <= (((((/* implicit */long long int) (~(var_6)))) / (((2348875951419707299LL) << (((arr_1 [i_6]) - (5433812697816663754ULL))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_11 = 1; i_11 < 15; i_11 += 1) 
                        {
                            arr_42 [12U] [12U] [i_6] [i_7 + 3] [i_10] [(_Bool)1] &= ((/* implicit */_Bool) var_6);
                            var_26 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_22 [i_7 + 3] [i_7 - 1] [i_7 + 1]) ? (((/* implicit */int) arr_22 [i_7 + 3] [i_7 - 1] [i_7 + 1])) : (((/* implicit */int) (signed char)-11))))) ? (((((/* implicit */_Bool) 347524266)) ? (((/* implicit */int) (unsigned short)60060)) : (((/* implicit */int) (signed char)24)))) : (((arr_22 [i_7 + 3] [i_7 - 1] [i_7 + 1]) ? (((/* implicit */int) arr_22 [i_7 + 3] [i_7 - 1] [i_7 + 1])) : (((/* implicit */int) arr_22 [i_7 + 3] [i_7 - 1] [i_7 + 1]))))));
                            var_27 += ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_10]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23560))) ^ (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)-15)))))))));
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) 6654252746817424410LL)) ? ((-(var_15))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_19 [i_5] [i_5]))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) arr_11 [i_11] [i_6] [i_7] [i_6] [(short)22])) : (var_16))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-32759)) : (((/* implicit */int) var_12)))))))))))));
                        }
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((signed char) ((((((/* implicit */int) (unsigned char)3)) >> (((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */int) ((signed char) arr_40 [i_10] [i_10] [i_7] [i_6] [(_Bool)1] [i_5] [i_5]))) + (147)))))))));
                    }
                }
                var_30 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [12] [i_6] [i_6] [i_6] [i_6] [i_6]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)30339))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_12 = 3; i_12 < 20; i_12 += 1) 
    {
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            {
                var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) arr_6 [i_12] [i_13]))));
                arr_47 [i_12] [i_13] = ((/* implicit */short) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) arr_2 [i_12] [i_13])))))), (min((((/* implicit */unsigned short) (!(var_3)))), ((unsigned short)41988)))));
                var_32 = ((/* implicit */unsigned char) var_5);
            }
        } 
    } 
}
