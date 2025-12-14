/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202747
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
    for (signed char i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_14 += ((/* implicit */int) min((((/* implicit */unsigned char) min(((_Bool)0), (arr_6 [i_0] [i_1] [i_2] [i_3] [i_2])))), ((unsigned char)3)));
                                arr_13 [i_4] [i_3] [i_3 - 3] [(_Bool)1] [i_3 - 2] = ((/* implicit */unsigned char) min((max((((/* implicit */int) arr_11 [i_4])), (((((/* implicit */_Bool) arr_2 [15] [i_1] [i_2])) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3] [10LL])))))), (((/* implicit */int) arr_2 [(signed char)3] [1] [19U]))));
                                arr_14 [i_4] [(_Bool)1] [i_4] [(signed char)19] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)42)))) - (min((((/* implicit */int) (short)32152)), (arr_3 [i_2] [i_2] [i_2])))))), (max((-7901090581911968101LL), (((/* implicit */long long int) arr_6 [i_4] [i_4] [i_4] [i_4] [i_4 + 1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 23; i_5 += 3) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_22 [i_5] = ((/* implicit */signed char) min((min((arr_7 [i_0] [5ULL] [i_0] [i_5]), (min((12439193144671970529ULL), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_1 + 1] [i_2] [i_5] [i_0])))))), (((/* implicit */unsigned long long int) (short)-26834))));
                                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (_Bool)1))));
                                arr_23 [i_5] = (_Bool)1;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            for (unsigned int i_9 = 1; i_9 < 24; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        for (long long int i_11 = 1; i_11 < 24; i_11 += 1) 
                        {
                            {
                                arr_35 [i_7] [i_9] [i_10] [i_10] [i_10] [2LL] = ((/* implicit */short) arr_24 [i_9 + 1]);
                                var_16 = ((unsigned char) min((((/* implicit */int) ((signed char) arr_28 [i_8] [9U] [i_10] [i_11 + 1]))), (arr_28 [i_7] [(signed char)15] [20U] [i_11])));
                                arr_36 [i_10] [i_10] [8] [i_9 - 1] [i_9] [i_8] [i_10] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */int) (short)-26831)) : (((/* implicit */int) arr_11 [i_10])))), (((/* implicit */int) arr_29 [i_10] [i_10] [i_11 - 1] [i_11]))))) ? (min((((((/* implicit */unsigned long long int) 0U)) - (4097576839525324995ULL))), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) max((max((arr_9 [i_7] [i_8] [i_9] [12U] [i_11 + 1]), (((/* implicit */unsigned int) arr_16 [i_7] [i_7] [i_10] [i_8])))), (((arr_12 [i_11] [i_11] [i_11 - 1]) - (((/* implicit */unsigned int) arr_30 [i_10] [22] [(unsigned char)6] [i_8] [i_8] [i_10]))))))));
                                var_17 = ((/* implicit */short) arr_6 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_10] [(unsigned char)16]);
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) max((((unsigned int) arr_5 [i_11 + 1] [i_9 - 1] [21U] [i_9 - 1])), (((/* implicit */unsigned int) max((((int) arr_27 [i_7] [i_7] [i_9])), (((/* implicit */int) (unsigned char)123))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_12 = 1; i_12 < 21; i_12 += 2) 
                    {
                        for (unsigned int i_13 = 4; i_13 < 22; i_13 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (short)-26821))) || (((/* implicit */_Bool) min((((/* implicit */int) arr_4 [i_9 + 1] [0] [i_9 - 1])), (-1)))))))));
                                var_20 |= ((short) ((((/* implicit */_Bool) arr_2 [i_7] [i_8] [i_9 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_7] [i_7] [i_9 - 1]))));
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_34 [i_8] [24] [i_9] [i_12 + 4] [i_12] [i_13] [i_7])) - (((/* implicit */int) arr_32 [i_13 + 1] [i_13 - 2] [(unsigned char)23] [i_9] [(unsigned char)23] [1U] [(signed char)10]))))) ? (14349167234184226595ULL) : (((/* implicit */unsigned long long int) min((arr_12 [(short)22] [i_8] [7LL]), (((/* implicit */unsigned int) arr_0 [7LL]))))))), (((/* implicit */unsigned long long int) min((arr_15 [i_7] [i_7] [i_7] [8U] [(signed char)13] [i_7]), (arr_25 [i_9])))))))));
                                arr_42 [i_13] [i_7] = ((/* implicit */unsigned char) ((signed char) arr_1 [(signed char)21]));
                                arr_43 [4LL] [i_8] [(_Bool)1] [4] [i_13 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_39 [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_32 [0ULL] [i_13] [(_Bool)1] [i_13] [i_13 + 1] [i_8] [i_8])) * (((/* implicit */int) arr_32 [i_13] [i_13] [13U] [i_13] [i_13 - 4] [(_Bool)0] [15]))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_41 [17ULL])) ? (3664129434967930558ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_13 + 2] [5U] [i_9])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        for (unsigned int i_15 = 3; i_15 < 24; i_15 += 3) 
                        {
                            {
                                arr_49 [i_15] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_15 + 1] [8U] [i_14 - 1] [i_9] [i_8] [i_8] [8U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_7]))) : (((arr_18 [i_7] [i_15] [i_7] [i_7] [i_7] [i_7]) - (((/* implicit */unsigned int) 3))))))), (min((arr_7 [i_9 - 1] [i_9 + 1] [i_9 + 1] [i_14 - 1]), (((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1))))))));
                                arr_50 [9U] [i_8] [8LL] [i_14] [i_15] = ((/* implicit */long long int) max((((/* implicit */unsigned char) ((_Bool) max((12ULL), (((/* implicit */unsigned long long int) arr_25 [i_7])))))), (min((arr_34 [i_15] [i_15 - 3] [i_15 + 1] [i_15 - 1] [i_15 - 2] [i_15] [19ULL]), (arr_34 [18LL] [i_15] [i_15 - 3] [i_15 - 3] [i_15] [i_15] [i_15 - 3])))));
                                arr_51 [i_9] [i_15] [i_9] [i_9 + 1] [i_9 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_40 [i_15])) / (((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_7]))) | (-4073717801446705080LL)))))) ? (min((((((/* implicit */_Bool) 2693640150U)) ? (((/* implicit */int) (short)64)) : (((/* implicit */int) arr_27 [i_7] [i_7] [17])))), (arr_17 [i_9 + 1] [i_14 - 1] [i_15 - 1] [i_14] [i_15]))) : (((/* implicit */int) ((unsigned char) (signed char)-38)))));
                                arr_52 [i_7] [i_8] [i_7] [i_15] [i_15 - 3] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4097576839525325020ULL)) ? (arr_30 [i_7] [(short)19] [i_9] [i_9] [i_14 - 1] [i_15]) : (((/* implicit */int) arr_27 [i_14] [i_14] [i_14]))))), (((unsigned int) arr_28 [i_7] [i_7] [i_9] [i_14])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4097576839525325013ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                                arr_53 [i_15] = ((/* implicit */unsigned char) arr_45 [i_9 + 1] [i_14 - 1] [i_14] [i_15 + 1] [i_14]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_16 = 4; i_16 < 24; i_16 += 2) 
                    {
                        for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                        {
                            {
                                arr_62 [i_7] [i_8] [i_9] [i_7] [i_17 + 1] = ((/* implicit */unsigned char) min((((arr_12 [i_7] [i_16 - 3] [i_17]) / (arr_40 [(unsigned char)24]))), (((arr_45 [i_17 + 1] [i_16] [i_9] [i_8] [i_7]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_8] [i_8] [i_9])))))));
                                var_22 = ((/* implicit */long long int) arr_59 [i_7] [i_8] [(_Bool)1] [(unsigned char)13] [(unsigned char)13] [i_17] [5ULL]);
                                arr_63 [i_7] [i_17 + 1] [i_8] [i_16] [i_17] = ((/* implicit */_Bool) ((int) arr_20 [i_7] [i_16] [i_8] [i_9 - 1] [i_16] [20]));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_18 = 0; i_18 < 10; i_18 += 3) 
    {
        for (short i_19 = 4; i_19 < 7; i_19 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_20 = 3; i_20 < 7; i_20 += 2) 
                {
                    for (int i_21 = 0; i_21 < 10; i_21 += 3) 
                    {
                        for (unsigned char i_22 = 0; i_22 < 10; i_22 += 1) 
                        {
                            {
                                arr_76 [i_20] [i_20] [i_20] [i_21] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((min((arr_24 [i_18]), (arr_38 [i_22] [i_21] [i_21] [(_Bool)1] [i_19 + 2] [(_Bool)1]))) ? (((/* implicit */unsigned long long int) arr_28 [i_22] [i_19 + 1] [i_20] [i_19 + 1])) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_7 [i_21] [i_21] [i_20] [i_21])))))) ? (min((((4294967295U) / (((/* implicit */unsigned int) arr_30 [i_18] [i_18] [i_18] [i_18] [24U] [6ULL])))), (((/* implicit */unsigned int) ((unsigned char) arr_37 [i_20] [(_Bool)1] [i_20 + 3] [i_20] [(short)1]))))) : (arr_74 [i_18] [i_18])));
                                arr_77 [i_18] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (short)28257)), (((((/* implicit */_Bool) max((arr_64 [i_21] [(_Bool)1]), (((/* implicit */short) arr_29 [(_Bool)1] [i_20] [i_21] [i_21]))))) ? (arr_73 [i_18] [i_18]) : (((/* implicit */long long int) ((/* implicit */int) max((arr_37 [i_18] [i_19] [i_18] [i_21] [i_22]), (((/* implicit */short) (signed char)-73))))))))));
                                var_23 = ((/* implicit */int) arr_34 [i_20] [2] [i_20 - 2] [i_20 + 1] [i_19 + 2] [2] [12LL]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (short i_23 = 1; i_23 < 9; i_23 += 4) 
                {
                    for (long long int i_24 = 0; i_24 < 10; i_24 += 2) 
                    {
                        for (unsigned int i_25 = 1; i_25 < 7; i_25 += 3) 
                        {
                            {
                                var_24 += ((/* implicit */signed char) arr_78 [i_18] [i_18] [(unsigned char)4]);
                                var_25 = ((/* implicit */_Bool) arr_61 [i_18] [i_24]);
                                arr_85 [i_18] [i_18] [i_23 - 1] [6U] [i_25] [i_24] = max((((/* implicit */unsigned long long int) (_Bool)1)), (max((((/* implicit */unsigned long long int) arr_82 [(_Bool)1] [(_Bool)1] [i_23 + 1] [2U] [i_25])), (arr_78 [i_24] [6U] [i_23 + 1]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_26 = 2; i_26 < 8; i_26 += 1) 
                {
                    for (unsigned int i_27 = 0; i_27 < 10; i_27 += 3) 
                    {
                        {
                            var_26 = 8613942932844911602LL;
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) min((min((14349167234184226566ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14349167234184226583ULL))))))));
                            var_28 -= ((/* implicit */unsigned char) ((short) min(((short)26819), (((/* implicit */short) (_Bool)1)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_28 = 0; i_28 < 10; i_28 += 1) 
                {
                    for (long long int i_29 = 0; i_29 < 10; i_29 += 1) 
                    {
                        {
                            arr_98 [i_18] [i_19] [i_28] [i_29] |= ((/* implicit */unsigned char) ((unsigned int) max((((/* implicit */unsigned int) max((((/* implicit */short) (_Bool)1)), ((short)10524)))), (((((/* implicit */_Bool) (unsigned char)220)) ? (arr_74 [i_18] [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_18] [i_19 + 3] [(short)22] [i_29]))))))));
                            var_29 = ((/* implicit */short) 1601327144U);
                            var_30 += ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_20 [i_19 - 1] [20LL] [i_28] [i_29] [i_29] [4LL])))) == (((((/* implicit */_Bool) arr_88 [i_19 - 4] [i_18] [i_28])) ? (arr_88 [i_19 - 4] [i_19] [i_28]) : (((/* implicit */long long int) arr_20 [i_19 - 4] [(_Bool)1] [i_28] [(_Bool)1] [(unsigned char)8] [i_18]))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_30 = 0; i_30 < 10; i_30 += 1) 
                {
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        for (_Bool i_32 = 1; i_32 < 1; i_32 += 1) 
                        {
                            {
                                var_31 = (unsigned char)64;
                                var_32 = ((/* implicit */long long int) 760841772U);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
