/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199783
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
    var_17 = ((/* implicit */unsigned short) ((_Bool) (short)-14353));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            {
                var_18 *= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) >= (3761102601U)));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_10 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 533864686U)) && (((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_2 - 1] [i_2 + 1])) || (((/* implicit */_Bool) arr_4 [i_1 - 4] [i_2 + 1] [i_2 - 1]))))));
                            arr_11 [i_0] [i_2] [i_2] = ((/* implicit */short) var_10);
                            var_19 = 533864686U;
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_4 = 1; i_4 < 8; i_4 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 9; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) arr_5 [i_0] [i_0] [i_0]);
                                arr_18 [i_0] [i_0] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)40813)) ? (((/* implicit */int) (unsigned short)65308)) : (-702700954))) << (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)142))) != (var_10))))));
                                arr_19 [i_6] [i_5] [i_4] [i_5] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_5 - 1])) & (((/* implicit */int) arr_0 [i_6 + 1]))));
                                var_21 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_6 - 2] [i_6] [i_6 - 1] [i_6] [i_6] [i_0]))) & (arr_17 [i_6 + 1] [i_6] [i_6] [i_6] [i_6])));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1 + 1])) | (((/* implicit */int) arr_5 [i_4 + 3] [i_1 - 4] [i_1 - 3]))));
                }
                for (unsigned char i_7 = 3; i_7 < 10; i_7 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 1; i_8 < 10; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 3; i_9 < 11; i_9 += 2) 
                        {
                            {
                                arr_29 [i_7] = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)184))) - (arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
                                arr_30 [i_1] [i_7] [i_8] [i_9] = ((/* implicit */unsigned int) arr_3 [i_1 - 1]);
                                arr_31 [i_0] = ((/* implicit */long long int) (unsigned char)113);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 2; i_10 < 11; i_10 += 2) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 12; i_11 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) arr_7 [i_1 - 1] [i_10 - 2] [i_11])))));
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((3761102609U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)77))))) + (((unsigned int) 533864694U))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)184)) * (((((/* implicit */int) arr_6 [i_0] [i_1 - 4] [i_7] [i_11])) * (((/* implicit */int) arr_23 [i_0] [i_0]))))))) : (3402342237U)));
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_14 [i_0] [i_0] [i_10 - 1] [i_7 + 1] [i_1 + 1] [i_11]) ? (arr_12 [i_0] [i_1] [i_10 - 1]) : (((/* implicit */int) (unsigned char)69))))) ? (min((arr_12 [i_0] [i_1] [i_10 + 1]), (((/* implicit */int) arr_14 [i_0] [i_0] [i_10 + 1] [i_7 - 3] [i_1 - 1] [i_11])))) : ((-(arr_12 [i_7] [i_1] [i_10 - 2])))));
                                var_26 = ((/* implicit */signed char) (_Bool)0);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 4; i_12 < 10; i_12 += 3) 
                    {
                        for (int i_13 = 2; i_13 < 10; i_13 += 1) 
                        {
                            {
                                var_27 -= ((/* implicit */short) arr_9 [i_13] [i_12 - 4] [i_7] [i_1] [i_1] [i_0]);
                                arr_43 [i_7] [i_1 - 1] [i_7] [i_12] [i_13] [i_0] [i_7] = ((/* implicit */unsigned long long int) ((((arr_12 [i_13 - 1] [i_13 - 1] [i_7 - 1]) | (max((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1])), (1601218629))))) & (((((/* implicit */int) var_14)) ^ (((/* implicit */int) (short)-15317))))));
                                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (2776700717U)))) + (((/* implicit */int) max((arr_24 [i_13 + 1] [i_13 + 1] [i_13] [i_13 + 1] [i_13]), (arr_24 [i_13 + 1] [i_13 + 1] [i_13] [i_13] [i_13])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 4; i_14 < 8; i_14 += 4) 
                    {
                        for (int i_15 = 2; i_15 < 10; i_15 += 2) 
                        {
                            {
                                arr_49 [i_15] [i_14] [i_0] [i_1] [i_0] = ((/* implicit */signed char) arr_35 [i_14] [i_0]);
                                arr_50 [i_1] [i_1 - 3] [i_1 - 3] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((max(((-(((/* implicit */int) (short)-15317)))), (((/* implicit */int) var_8)))) < (((/* implicit */int) (short)-22642))));
                                var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (signed char)-46))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_16 = 2; i_16 < 11; i_16 += 4) 
                {
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_25 [i_0] [i_0] [i_16])), (3761102610U)))) / (min(((~(var_4))), (((/* implicit */long long int) max(((unsigned char)89), ((unsigned char)69))))))));
                    arr_55 [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_46 [i_0] [i_1] [i_16] [i_0] [i_0] [i_1]))));
                }
                /* LoopNest 3 */
                for (int i_17 = 3; i_17 < 10; i_17 += 2) 
                {
                    for (unsigned short i_18 = 0; i_18 < 12; i_18 += 3) 
                    {
                        for (int i_19 = 0; i_19 < 12; i_19 += 2) 
                        {
                            {
                                arr_62 [i_0] [i_17] [i_17] [i_17] [i_18] = ((/* implicit */unsigned long long int) var_13);
                                var_31 = ((/* implicit */unsigned char) arr_17 [i_0] [i_1] [i_17] [i_18] [i_17]);
                                arr_63 [i_19] [i_17] [i_17] [i_17] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1601218644)) || (((/* implicit */_Bool) ((var_13) - (533864686U))))));
                                arr_64 [i_0] [i_17] [i_18] [i_19] = ((/* implicit */unsigned long long int) (unsigned char)111);
                                var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_17] [i_18] [i_17] [i_0] [i_0] [i_17])) * ((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_14 [i_18] [i_18] [i_19] [i_18] [i_18] [i_17])) : (((/* implicit */int) var_2))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_33 &= ((/* implicit */unsigned int) ((_Bool) (((+(((/* implicit */int) var_2)))) | (((/* implicit */int) var_1)))));
}
