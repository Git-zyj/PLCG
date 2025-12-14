/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206295
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (((-(((arr_4 [i_2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)0)))))))));
                                var_19 += ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_2] [i_5] [i_0] = var_12;
                                arr_20 [(short)7] [(short)7] [i_2] [(short)7] [i_6] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)228))));
                                var_20 ^= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) max((var_9), ((short)-5377))))))));
                            }
                        } 
                    } 
                    arr_21 [i_1] [i_1 - 1] [i_1] [i_1] = ((/* implicit */long long int) (~(min((((/* implicit */unsigned int) ((var_12) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))), (var_13)))));
                }
                /* vectorizable */
                for (long long int i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_27 [i_0] [(signed char)3] [(unsigned char)7] [i_0] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6))));
                        arr_28 [i_0] [(unsigned char)17] [i_0] [i_0] [i_7] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 1 */
                        for (int i_9 = 0; i_9 < 23; i_9 += 2) 
                        {
                            var_21 -= arr_30 [i_0] [i_1] [(signed char)4] [i_8] [i_9];
                            arr_33 [i_0] [i_1] [i_7] [i_8] [i_1] [i_9] = arr_32 [i_0] [i_1] [(short)20] [i_1] [i_1] [i_8] [i_9];
                            arr_34 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((_Bool) arr_24 [i_0] [i_1] [i_8] [i_9]));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((arr_10 [i_7] [i_7] [i_7] [i_7]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-37))) : (var_11))))));
                        }
                    }
                    for (long long int i_10 = 1; i_10 < 22; i_10 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (short i_11 = 2; i_11 < 19; i_11 += 3) 
                        {
                            arr_40 [i_0] [(unsigned char)0] [(signed char)4] [i_10] [i_10] = ((/* implicit */signed char) ((-7197883521017103184LL) & ((~(var_0)))));
                            var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_12))));
                        }
                        for (unsigned int i_12 = 3; i_12 < 21; i_12 += 1) 
                        {
                            var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(508772486U)))) ? (((/* implicit */int) arr_1 [i_1 - 1] [(signed char)9])) : (((/* implicit */int) ((_Bool) 14U)))));
                            arr_43 [i_0] [i_0] [i_0] [i_10] [i_0] = ((/* implicit */short) var_12);
                        }
                        for (signed char i_13 = 0; i_13 < 23; i_13 += 1) 
                        {
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (unsigned short)16320))));
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_7] [13LL] [i_10 - 1] [22U] [i_13] [15U])) + (((/* implicit */int) arr_42 [(short)8] [(short)8] [i_10 - 1] [i_13] [i_13])))))));
                            arr_48 [i_13] [i_10] [i_0] [i_7] [i_0] [i_10] [i_0] = ((/* implicit */unsigned char) (+(2549266621U)));
                        }
                        for (unsigned char i_14 = 0; i_14 < 23; i_14 += 4) 
                        {
                            arr_51 [i_0] [i_10] [i_14] = ((/* implicit */_Bool) (~(var_17)));
                            arr_52 [(signed char)9] [(unsigned char)13] [i_10] [(unsigned char)1] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_3)))) ? (((/* implicit */int) arr_25 [(short)6] [i_1 - 2] [(short)6] [(short)6])) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [(signed char)21] [i_0] [i_0]))));
                        }
                        arr_53 [i_10] [i_1 - 3] [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_1 - 1] [i_7] [i_7] [i_10 + 1] [i_10])))))));
                        arr_54 [i_10] [(unsigned char)14] [i_10] = ((/* implicit */signed char) var_0);
                    }
                    for (unsigned char i_15 = 0; i_15 < 23; i_15 += 3) 
                    {
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_2)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) : ((~(var_17))))))));
                        var_28 += ((/* implicit */long long int) (-(((/* implicit */int) arr_31 [i_0] [i_1 - 1] [i_0] [i_0] [i_0]))));
                        var_29 += ((/* implicit */_Bool) var_3);
                        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)205)))))));
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_14)))))));
                    }
                    /* LoopSeq 2 */
                    for (int i_16 = 0; i_16 < 23; i_16 += 2) 
                    {
                        arr_60 [i_1] [i_1] [i_7] [i_1] = ((/* implicit */_Bool) (~(67108863ULL)));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_17 = 0; i_17 < 23; i_17 += 1) 
                        {
                            arr_64 [i_17] [(signed char)10] [i_7] [i_0] [i_0] = ((/* implicit */signed char) (short)-6149);
                            var_32 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)110))));
                            arr_65 [i_0] [i_0] [i_7] [i_0] [i_17] = ((/* implicit */signed char) (+(3030970450393475502LL)));
                            var_33 -= ((/* implicit */unsigned int) var_7);
                        }
                        for (short i_18 = 0; i_18 < 23; i_18 += 2) 
                        {
                            arr_68 [(short)22] [i_1] [i_7] [i_16] [(signed char)14] = ((/* implicit */short) ((unsigned char) arr_58 [i_0] [i_1] [i_1] [i_7] [i_1] [i_18]));
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) -9223372036854775803LL)) / (255ULL)));
                            var_35 ^= ((/* implicit */unsigned short) (+(var_11)));
                            arr_69 [i_0] [i_1] [i_7] [i_18] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_0] [i_1 - 2] [i_0] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_23 [i_1] [i_1 - 2] [i_1] [i_1 + 1]))));
                        }
                    }
                    for (signed char i_19 = 0; i_19 < 23; i_19 += 4) 
                    {
                        var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) (+(var_3))))));
                        arr_73 [i_0] [i_1] [i_7] [i_1] &= ((/* implicit */signed char) ((unsigned short) arr_58 [i_1] [i_1] [i_1] [i_1] [i_1 - 1] [i_1 - 1]));
                        arr_74 [i_0] &= ((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0] [i_1 - 2] [i_7] [i_19]))));
                    }
                }
                for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_21 = 0; i_21 < 23; i_21 += 1) 
                    {
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            {
                                var_37 ^= ((/* implicit */unsigned int) max((((/* implicit */short) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)222)))), ((short)19170)));
                                var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0)))))));
                            }
                        } 
                    } 
                    var_39 *= ((/* implicit */signed char) ((long long int) (signed char)-1));
                }
                var_40 = ((/* implicit */signed char) var_6);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_23 = 0; i_23 < 14; i_23 += 1) 
    {
        arr_83 [i_23] [i_23] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (short)19617)) ? (((/* implicit */int) (short)15371)) : (((/* implicit */int) (short)-26073))))));
        arr_84 [i_23] [i_23] = ((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned short)0)))), ((~((~(((/* implicit */int) var_6))))))));
    }
}
