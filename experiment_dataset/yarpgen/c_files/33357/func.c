/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33357
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_1 [i_0]) / (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) < (var_12))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_15))) | (201326592U)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 10; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_12 [i_4] [i_0] [i_4] [i_4] [i_4] [i_0] [i_4 + 1])))) ? (((/* implicit */int) arr_4 [i_1])) : ((+(((/* implicit */int) var_0))))));
                                var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((1144334127U), (((/* implicit */unsigned int) var_0)))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_6 [i_0] [i_1] [i_2] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9060)))))))) ? (((((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_1] [i_0])) ? (var_10) : (((/* implicit */int) arr_2 [i_4])))) / ((+(((/* implicit */int) arr_11 [i_4] [i_3] [i_3] [i_2] [i_1] [i_0])))))) : (((/* implicit */int) var_8))));
                                arr_13 [i_4] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) (-(4294967295U))));
                                var_22 ^= arr_10 [i_3 - 3] [i_4] [i_0] [i_4 - 2] [i_4];
                                var_23 = ((/* implicit */short) (unsigned char)242);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 3; i_5 < 12; i_5 += 2) 
    {
        for (short i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            {
                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) (+(((unsigned long long int) var_12))))) ? (((int) arr_14 [i_5 + 1])) : ((+(var_14))))))));
                var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) var_3)) + (4294967295U))) - (((/* implicit */unsigned int) ((arr_17 [i_5] [4] [i_6]) / (((/* implicit */int) var_1)))))))) ? (((((/* implicit */_Bool) 1914423694)) ? (max((-1914423695), (((/* implicit */int) (unsigned short)40198)))) : (((/* implicit */int) (unsigned char)73)))) : (((((/* implicit */_Bool) ((unsigned short) arr_14 [i_5]))) ? ((-(arr_18 [i_5] [4ULL]))) : (((((/* implicit */_Bool) -2109492648)) ? (((/* implicit */int) arr_14 [i_5])) : (((/* implicit */int) arr_15 [i_6]))))))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 2; i_7 < 11; i_7 += 2) 
                {
                    for (int i_8 = 2; i_8 < 12; i_8 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)63)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -1914423695)) ? (max((var_7), (var_14))) : (((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) 1914423695)))))))))))));
                            var_27 = ((/* implicit */unsigned long long int) 620432369U);
                        }
                    } 
                } 
                var_28 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_19 [i_5 - 3] [i_6] [i_5] [i_6])) / (((/* implicit */int) arr_19 [i_5 - 2] [i_6] [i_6] [i_5])))) > (((var_10) << (((var_7) - (1828710936)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_9 = 4; i_9 < 15; i_9 += 2) 
    {
        for (signed char i_10 = 0; i_10 < 16; i_10 += 3) 
        {
            for (unsigned char i_11 = 2; i_11 < 13; i_11 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 15; i_12 += 2) 
                    {
                        for (int i_13 = 3; i_13 < 15; i_13 += 2) 
                        {
                            {
                                var_29 = (unsigned char)183;
                                arr_41 [i_13] [i_10] [i_11] [i_12] [i_13] [i_13] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)206)) != (1914423695))))) | (((((/* implicit */_Bool) var_1)) ? (arr_28 [i_12 - 1]) : (((/* implicit */unsigned int) var_14))))));
                                var_30 ^= ((/* implicit */int) ((((((/* implicit */_Bool) arr_32 [i_12 + 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_9] [i_10] [i_11])) || (((/* implicit */_Bool) (unsigned char)214))))) : (((/* implicit */int) (unsigned char)109)))) < (((/* implicit */int) (unsigned char)0))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 16; i_14 += 3) 
                    {
                        for (short i_15 = 0; i_15 < 16; i_15 += 2) 
                        {
                            {
                                arr_48 [i_9] [i_10] = ((/* implicit */unsigned char) (~((-(arr_32 [i_9 - 2])))));
                                var_31 = ((/* implicit */unsigned long long int) ((0ULL) >= (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_42 [i_15] [i_14] [i_11] [i_10] [i_9]))), (max((arr_32 [i_14]), (arr_42 [i_9] [i_10] [i_11] [i_14] [i_15]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_16 = 3; i_16 < 9; i_16 += 1) 
    {
        for (unsigned short i_17 = 2; i_17 < 7; i_17 += 2) 
        {
            {
                var_32 ^= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_16])) ? (1160334994U) : (((/* implicit */unsigned int) var_16))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)9060))))))), ((!(((/* implicit */_Bool) arr_10 [i_17] [i_17] [i_17] [i_16] [i_16]))))));
                var_33 ^= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((65536U) >> (((((/* implicit */int) (unsigned char)233)) - (228)))))), (min((((/* implicit */unsigned long long int) arr_3 [i_16] [i_17 + 1] [i_17])), (var_4)))));
                /* LoopNest 2 */
                for (int i_18 = 1; i_18 < 10; i_18 += 3) 
                {
                    for (unsigned char i_19 = 1; i_19 < 9; i_19 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) min((max((min((arr_26 [i_16]), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) + (((/* implicit */int) arr_0 [i_16] [i_17]))))))), (((/* implicit */unsigned int) ((int) var_14))))))));
                            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_16] [i_17]))) + (arr_44 [i_16] [i_17] [i_16 - 1] [i_17 + 1] [i_18] [i_19 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56476))) : (((unsigned long long int) var_2)))))));
                            arr_58 [i_16] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((3291539227082572257ULL) / (((/* implicit */unsigned long long int) var_16))))) ? (((/* implicit */int) arr_20 [i_16 - 1])) : (max((var_7), (((/* implicit */int) (unsigned char)142))))))) : (arr_7 [i_16] [i_17] [i_19])));
                        }
                    } 
                } 
                var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) -106001365))));
            }
        } 
    } 
}
