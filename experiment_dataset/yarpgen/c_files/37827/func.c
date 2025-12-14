/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37827
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 8; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) (short)-15);
                            arr_10 [(signed char)2] [(unsigned short)7] [i_2] [(short)4] = var_8;
                            arr_11 [i_3] [i_2] [i_2] [i_0] = ((/* implicit */long long int) (short)-14);
                            arr_12 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) 9223372036854775807LL);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 9; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        {
                            var_16 |= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))));
                            var_17 = ((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_2) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) (short)15))))), (((((/* implicit */_Bool) -1)) ? (-9223372036854775794LL) : (((/* implicit */long long int) 1915422152U))))))));
                            var_18 &= ((/* implicit */int) max((9223372036854775807LL), (((/* implicit */long long int) (short)-12))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    for (int i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) max((((/* implicit */long long int) (short)-12)), (((((/* implicit */_Bool) ((unsigned long long int) arr_22 [i_0] [i_1] [8U] [i_7]))) ? (((/* implicit */long long int) min((((/* implicit */int) var_5)), (var_3)))) : (arr_14 [i_0] [i_1] [8ULL] [i_7]))))))));
                            var_20 = var_13;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 11; i_8 += 1) 
                {
                    for (signed char i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */short) arr_20 [i_0] [i_0] [i_0] [0LL]);
                            arr_30 [i_0] [i_8] [i_8] [6ULL] = ((/* implicit */signed char) arr_5 [i_0] [i_0]);
                            var_22 = ((/* implicit */unsigned int) (short)2);
                            arr_31 [6ULL] [i_8] = ((/* implicit */signed char) ((short) 1915422124U));
                            var_23 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) var_0)), (6298988578692029968ULL))) >> (((((/* implicit */int) (unsigned char)126)) - (121)))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        for (short i_12 = 0; i_12 < 11; i_12 += 1) 
                        {
                            {
                                arr_39 [i_11] [i_1] [3U] [i_11] [i_12] = ((/* implicit */signed char) var_8);
                                var_24 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49116))) >= (1073741823U))));
                                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_12] [0] [i_0]))))) >= (((/* implicit */int) ((((/* implicit */int) arr_35 [6U] [i_10] [i_11])) <= (((/* implicit */int) arr_35 [(signed char)1] [i_10] [i_1])))))));
                                arr_40 [i_0] [i_1] [i_11] [i_10] [(short)1] [(short)7] [0U] = ((/* implicit */signed char) max((((((((/* implicit */_Bool) arr_25 [i_0])) ? (((/* implicit */int) arr_0 [i_12])) : (375404659))) | (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)13)), ((unsigned char)114)))))), (var_10)));
                                arr_41 [i_0] [i_11] [(unsigned char)2] [8ULL] [i_11] [i_11] [i_12] = ((/* implicit */unsigned int) ((17780499178691220092ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 174822444U))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 3) 
    {
        for (int i_14 = 0; i_14 < 18; i_14 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (unsigned int i_16 = 1; i_16 < 15; i_16 += 3) 
                    {
                        {
                            var_26 = ((signed char) ((_Bool) var_5));
                            arr_53 [(signed char)17] [i_15] [i_15] = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))), (var_3)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 0; i_17 < 18; i_17 += 4) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)129)) | (((((/* implicit */_Bool) 3156013532U)) ? (((/* implicit */int) arr_54 [(short)17] [i_14] [i_17] [i_18])) : (((/* implicit */int) (short)-1))))));
                            var_28 = ((/* implicit */unsigned short) arr_43 [i_13]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_19 = 0; i_19 < 18; i_19 += 3) 
                {
                    for (long long int i_20 = 1; i_20 < 17; i_20 += 1) 
                    {
                        for (unsigned long long int i_21 = 2; i_21 < 16; i_21 += 3) 
                        {
                            {
                                var_29 *= ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-82)), ((unsigned short)42407)))), (((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */int) var_14)) : (0))))))));
                                arr_71 [(short)13] [17U] [i_19] [i_20] [i_21 - 2] [i_13] [i_19] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) min((var_6), ((short)26176))))) | (((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_20 - 1] [i_20 + 1] [1ULL]))) : (var_11)))));
                                arr_72 [4LL] [i_14] [i_14] [i_19] [i_14] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_20 + 1] [i_21 + 2] [i_21 - 1] [i_21])) ? (arr_57 [(unsigned short)8] [i_20 - 1] [i_20 + 1] [i_21 - 2] [i_21]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_20 - 1] [i_21 + 2] [i_21 + 2] [(unsigned short)12]))))))));
                                arr_73 [i_13] [i_13] [i_14] [(unsigned short)4] [i_19] [(signed char)1] [i_19] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */long long int) var_6)), (8916486495574757163LL))) < (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_19] [i_19] [14] [i_20 + 1] [7ULL] [i_21]))))))) == (-8916486495574757176LL)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_22 = 2; i_22 < 9; i_22 += 2) 
    {
        for (short i_23 = 2; i_23 < 11; i_23 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_24 = 0; i_24 < 12; i_24 += 4) 
                {
                    for (unsigned long long int i_25 = 0; i_25 < 12; i_25 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */signed char) (short)-4138);
                            var_31 = ((/* implicit */short) (+(arr_57 [(short)7] [i_23] [i_24] [5LL] [i_25])));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_26 = 0; i_26 < 12; i_26 += 2) 
                {
                    for (unsigned char i_27 = 1; i_27 < 10; i_27 += 4) 
                    {
                        for (unsigned char i_28 = 0; i_28 < 12; i_28 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */_Bool) ((unsigned long long int) (_Bool)1));
                                arr_92 [i_27] [(signed char)11] [i_26] [i_27 - 1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (short)-32758)) - (((/* implicit */int) ((((/* implicit */unsigned long long int) 1684923540)) < (0ULL))))))), (arr_52 [i_22] [i_23] [i_23 + 1] [i_27])));
                                var_33 -= ((/* implicit */signed char) 8916486495574757167LL);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_29 = 0; i_29 < 12; i_29 += 1) 
                {
                    for (signed char i_30 = 0; i_30 < 12; i_30 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-75)) ? (9223372036854775807LL) : (((/* implicit */long long int) 2379545144U))))) ? (((/* implicit */unsigned long long int) 1915422162U)) : (max((((/* implicit */unsigned long long int) 0U)), (6513580300392596514ULL))))));
                            var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) (+(((/* implicit */int) var_4)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_31 = 0; i_31 < 12; i_31 += 4) 
                {
                    for (short i_32 = 0; i_32 < 12; i_32 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */int) 1073741823U);
                            var_37 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((-(((/* implicit */int) (short)25473)))) & (((/* implicit */int) (short)0)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
