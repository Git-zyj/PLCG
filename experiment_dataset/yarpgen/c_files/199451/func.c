/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199451
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
    var_14 = ((/* implicit */short) (+(((((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))))) & (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)0)))))));
        var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_0 [i_0])))) - (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_0 [i_0])))));
        var_17 = ((/* implicit */long long int) arr_1 [(_Bool)1] [i_0]);
        var_18 = ((/* implicit */unsigned int) (~((+(arr_0 [i_0])))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) arr_4 [i_1]);
        /* LoopNest 2 */
        for (unsigned short i_2 = 3; i_2 < 15; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) arr_3 [(_Bool)1]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1250093648)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_2] [i_3] [i_4]))))))));
                        /* LoopSeq 2 */
                        for (signed char i_5 = 4; i_5 < 15; i_5 += 4) 
                        {
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((_Bool) var_6)))));
                            arr_15 [i_1] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */long long int) ((arr_2 [i_3]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_4] [i_4]))));
                            var_23 *= ((/* implicit */unsigned int) 2750822787809941927LL);
                        }
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_10 [i_4] [i_4])))) >= (7U)));
                            arr_20 [i_1] [0ULL] [i_1] [16U] [i_6] &= ((/* implicit */short) ((_Bool) arr_7 [i_3]));
                        }
                        var_25 += ((/* implicit */signed char) (!(arr_13 [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 3] [i_2])));
                    }
                    for (unsigned int i_7 = 2; i_7 < 13; i_7 += 4) 
                    {
                        var_26 = ((/* implicit */short) arr_11 [i_7] [i_7] [(signed char)15] [(_Bool)0]);
                        var_27 = ((/* implicit */short) ((_Bool) var_13));
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)4095)))))))));
                    }
                    /* LoopSeq 4 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (short i_9 = 0; i_9 < 17; i_9 += 4) 
                        {
                            var_29 = ((/* implicit */short) ((unsigned short) arr_2 [i_1]));
                            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (short)0)) <= (((/* implicit */int) arr_22 [i_1] [11U]))))))))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_30 [i_10] [i_2] [i_2] [i_8] = (signed char)-70;
                            var_31 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) arr_8 [i_3] [i_2 - 1] [i_1] [i_1])) ? (arr_8 [(signed char)13] [i_2 - 1] [i_2] [(unsigned char)12]) : (arr_8 [i_2] [i_2 - 2] [(_Bool)1] [i_1])))));
                            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) var_12)))))) ? ((+((+(((/* implicit */int) arr_5 [i_1])))))) : (((/* implicit */int) (short)-1))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 2) 
                        {
                            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) min((((/* implicit */int) var_11)), ((+(((/* implicit */int) arr_31 [i_1] [i_2 - 3] [(signed char)14] [i_2 + 2] [i_2 - 3])))))))));
                            var_34 *= (!(((/* implicit */_Bool) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_5 [i_1]))))));
                            var_35 = ((/* implicit */signed char) (_Bool)0);
                            var_36 = (!(((/* implicit */_Bool) (signed char)47)));
                            var_37 = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) arr_28 [i_3] [(signed char)2] [i_3] [i_2 + 2] [i_3])))));
                        }
                        arr_33 [(signed char)2] [i_3] [i_8] = ((/* implicit */long long int) max((((/* implicit */int) (unsigned char)11)), (min((((/* implicit */int) arr_11 [i_8] [i_3] [i_2 + 2] [16U])), ((~(((/* implicit */int) (unsigned char)108))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_12 = 0; i_12 < 17; i_12 += 1) 
                        {
                            var_38 *= ((/* implicit */unsigned long long int) (-(65535U)));
                            var_39 ^= ((/* implicit */short) max((min((arr_26 [i_2 + 1] [i_2] [i_2 - 1] [i_2 - 1] [i_2]), (arr_26 [i_2 + 1] [i_2] [i_2 + 2] [i_2 + 1] [i_2]))), ((~(arr_26 [i_2 + 2] [i_2] [i_2 + 2] [i_2 - 3] [i_2])))));
                            var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_12] [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2] [i_12])) | (((/* implicit */int) arr_16 [i_12] [i_2] [i_2 - 3] [i_2 - 1] [i_1] [i_12]))))) ? (-1107207206369790871LL) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_1] [i_2] [i_3] [9ULL] [(signed char)10])))));
                        }
                        var_41 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_1] [i_1] [(signed char)7] [i_2] [i_3] [i_8]))))), (((unsigned long long int) (!(((/* implicit */_Bool) var_6)))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_13 = 1; i_13 < 15; i_13 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_42 = arr_6 [i_1];
                            arr_41 [i_14] [i_14] [i_13] [i_1] [i_3] [i_2] [i_1] = ((/* implicit */signed char) (short)-211);
                            var_43 = ((/* implicit */short) arr_29 [i_1] [9U] [i_1] [i_1] [i_1]);
                            arr_42 [i_13] [i_13 + 1] = arr_8 [i_1] [i_1] [i_1] [i_1];
                            var_44 -= ((/* implicit */unsigned int) (_Bool)1);
                        }
                        var_45 = ((/* implicit */unsigned short) (-(-8336763212747347575LL)));
                        var_46 = ((/* implicit */short) min((var_46), (((/* implicit */short) (+(((/* implicit */int) (short)-5322)))))));
                    }
                    for (unsigned int i_15 = 0; i_15 < 17; i_15 += 1) 
                    {
                        var_47 = ((/* implicit */_Bool) min((var_47), (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_2 - 2])) / ((~(((/* implicit */int) arr_13 [(signed char)4] [(signed char)4] [i_2 - 1] [i_2] [i_2])))))))));
                        var_48 += ((/* implicit */long long int) (_Bool)1);
                    }
                    /* vectorizable */
                    for (short i_16 = 0; i_16 < 17; i_16 += 4) 
                    {
                        var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_16] [(short)6] [i_3] [i_3] [i_2 + 2] [i_3])) > ((~(((/* implicit */int) (short)4728)))))))));
                        var_50 = ((/* implicit */signed char) arr_37 [i_1] [i_1] [i_1] [i_1]);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 4) 
                        {
                            var_51 = ((/* implicit */_Bool) arr_39 [i_3]);
                            var_52 = ((/* implicit */_Bool) max((var_52), (((/* implicit */_Bool) arr_32 [i_1] [i_1] [i_3] [i_16] [i_1]))));
                            arr_51 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((_Bool) ((signed char) arr_9 [i_17] [i_3] [i_1])));
                        }
                        for (short i_18 = 0; i_18 < 17; i_18 += 4) 
                        {
                            var_53 += ((/* implicit */short) (_Bool)1);
                            var_54 = (!(((/* implicit */_Bool) arr_32 [i_1] [i_1] [i_3] [i_16] [i_18])));
                            arr_54 [i_1] [14ULL] [(short)1] [(unsigned char)0] [i_1] [2ULL] [i_1] = ((/* implicit */_Bool) arr_31 [i_2 - 3] [i_2 - 2] [i_2 - 3] [i_2 - 2] [i_2]);
                        }
                    }
                    /* LoopNest 2 */
                    for (long long int i_19 = 0; i_19 < 17; i_19 += 2) 
                    {
                        for (long long int i_20 = 0; i_20 < 17; i_20 += 4) 
                        {
                            {
                                var_55 = ((/* implicit */unsigned int) min((var_55), (arr_58 [i_1] [i_2] [(unsigned char)6] [(_Bool)1] [(unsigned char)2])));
                                var_56 *= ((/* implicit */unsigned long long int) ((short) max((arr_13 [13U] [13U] [i_2 - 2] [i_2 - 1] [i_2 - 1]), (var_2))));
                                var_57 = ((/* implicit */unsigned long long int) -1107207206369790871LL);
                                var_58 *= ((/* implicit */unsigned int) arr_18 [i_1] [i_20] [i_20] [i_19] [i_20]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_21 = 0; i_21 < 17; i_21 += 4) 
                    {
                        for (unsigned int i_22 = 2; i_22 < 16; i_22 += 4) 
                        {
                            {
                                var_59 = ((/* implicit */unsigned long long int) max((var_59), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? ((+(866729675U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)29138)) ? (((/* implicit */int) arr_40 [i_21] [i_21] [i_21] [(unsigned short)13] [i_3] [i_2] [14LL])) : (((/* implicit */int) arr_64 [i_21] [i_2] [i_1])))))))))));
                                arr_66 [i_1] = ((/* implicit */long long int) var_4);
                                var_60 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_2 - 2] [i_2])) ? (arr_25 [i_2 - 2] [i_2] [i_2 - 3] [i_2 - 3] [i_2 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_61 = ((/* implicit */short) min((var_61), (((/* implicit */short) arr_49 [i_1] [9] [i_1] [8LL] [i_1] [i_1]))));
        arr_67 [i_1] = ((/* implicit */short) min((((/* implicit */unsigned int) ((int) arr_56 [7U] [i_1] [i_1] [i_1]))), (((((/* implicit */_Bool) arr_64 [i_1] [i_1] [i_1])) ? (arr_26 [i_1] [(_Bool)1] [i_1] [i_1] [i_1]) : (((((/* implicit */_Bool) (signed char)-1)) ? (arr_21 [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-77)))))))));
    }
}
