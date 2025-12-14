/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227083
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        var_12 = arr_2 [i_0 - 1];
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((long long int) var_7));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (!(((/* implicit */_Bool) var_0)))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 2; i_2 < 13; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                {
                    var_14 = ((/* implicit */_Bool) arr_0 [i_1]);
                    arr_13 [i_1] = var_0;
                    var_15 -= ((/* implicit */int) ((unsigned char) max(((+(((/* implicit */int) (short)16)))), (var_9))));
                }
            } 
        } 
        var_16 = ((/* implicit */short) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_6))));
        arr_14 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (-3599857921285096083LL)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)151)) : (arr_9 [i_1] [i_1]))) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_8 [i_1])))))))) : (arr_1 [i_1] [i_1])));
    }
    for (short i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        var_17 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) arr_16 [i_4])) : (((/* implicit */int) arr_16 [i_4]))))) ? (((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */int) (short)32003)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23417))) >= (6481618863707601385ULL))))));
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 23; i_6 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        arr_27 [i_4] [i_5] [i_6] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(-2683015283305009623LL)))) & (max((arr_18 [i_4]), (((/* implicit */unsigned long long int) var_8)))))))));
                        var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                        var_19 = ((/* implicit */unsigned int) arr_21 [i_4] [i_5] [i_6]);
                        var_20 -= ((/* implicit */short) max((min((((/* implicit */long long int) var_0)), (2683015283305009622LL))), (arr_15 [i_4])));
                        var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_25 [i_7] [i_6] [i_5] [i_4] [i_4])) == (((((/* implicit */_Bool) var_6)) ? (arr_20 [i_6] [i_5]) : (((/* implicit */int) (short)0)))))))) & (max((max((((/* implicit */unsigned long long int) var_0)), (arr_18 [i_4]))), (((/* implicit */unsigned long long int) (+(2683015283305009648LL))))))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_5))));
                        var_23 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_9 = 3; i_9 < 20; i_9 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) -4669720964697550300LL);
                            var_25 = ((/* implicit */unsigned short) var_6);
                            var_26 = ((/* implicit */long long int) (-(((/* implicit */int) var_7))));
                        }
                        var_27 = ((/* implicit */unsigned char) var_8);
                        arr_32 [i_4] [i_5] [i_8] [i_8] = ((/* implicit */long long int) arr_18 [i_4]);
                    }
                    for (long long int i_10 = 4; i_10 < 22; i_10 += 4) 
                    {
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_19 [i_10 - 2]), (arr_19 [i_10 - 3])))) ? (arr_19 [i_10 - 3]) : (arr_19 [i_10 - 4])));
                        arr_35 [i_10] [i_6] [i_5] [i_4] &= ((/* implicit */unsigned long long int) max((min(((((_Bool)1) ? (((/* implicit */int) (unsigned short)2590)) : (((/* implicit */int) var_8)))), ((~(((/* implicit */int) arr_33 [i_4] [i_10])))))), (((/* implicit */int) ((((/* implicit */_Bool) -624247334432251709LL)) || (((/* implicit */_Bool) 4669720964697550320LL)))))));
                        var_29 = ((/* implicit */unsigned long long int) var_4);
                        var_30 = ((/* implicit */unsigned long long int) var_3);
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_24 [i_10 - 2]), (((/* implicit */unsigned long long int) arr_25 [i_10 - 3] [i_10] [i_10 - 1] [i_10 - 2] [i_10 - 2]))))) ? (max((((/* implicit */long long int) (unsigned char)121)), (4669720964697550300LL))) : (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) arr_26 [i_4] [i_5])))))))));
                    }
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_6])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : ((-(((/* implicit */int) arr_33 [i_4] [i_5]))))));
                    var_33 = ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_6)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */unsigned long long int) arr_29 [i_6])) + (((((/* implicit */unsigned long long int) -3928802754504371735LL)) & (arr_24 [i_4]))))));
                    arr_36 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) var_3);
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned long long int) ((_Bool) var_9));
    }
    var_35 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)31551)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)24666)))), (((/* implicit */int) ((((/* implicit */_Bool) max((9040942691324040326LL), (((/* implicit */long long int) -1842746825))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))))))));
    var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((/* implicit */int) (unsigned short)0)) : ((-(((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 4 */
    for (short i_11 = 0; i_11 < 21; i_11 += 1) 
    {
        arr_39 [i_11] = ((/* implicit */unsigned short) var_3);
        arr_40 [i_11] [i_11] = arr_3 [i_11];
        arr_41 [i_11] = ((/* implicit */unsigned long long int) min((arr_31 [6]), (((/* implicit */short) (!(((/* implicit */_Bool) arr_31 [(short)16])))))));
        arr_42 [i_11] = ((/* implicit */unsigned short) arr_15 [i_11]);
    }
    for (int i_12 = 0; i_12 < 21; i_12 += 2) 
    {
        var_37 = ((/* implicit */unsigned short) var_10);
        var_38 = arr_37 [i_12] [i_12];
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 21; i_13 += 2) 
        {
            for (short i_14 = 1; i_14 < 20; i_14 += 2) 
            {
                {
                    arr_52 [i_12] [i_13] [i_14] = ((/* implicit */unsigned long long int) arr_28 [i_13] [i_13] [i_13]);
                    /* LoopSeq 1 */
                    for (signed char i_15 = 0; i_15 < 21; i_15 += 1) 
                    {
                        var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) (((-(((/* implicit */int) arr_26 [i_13] [i_14])))) * (((/* implicit */int) var_1)))))));
                        var_40 = ((/* implicit */unsigned int) var_11);
                        var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-2)) ? (((/* implicit */int) var_2)) : ((((+(1030300297))) + (((/* implicit */int) arr_25 [i_15] [i_14] [i_14] [i_13] [i_12]))))));
                        arr_55 [i_12] [i_13] [i_13] [i_13] [i_14] [i_15] = ((/* implicit */long long int) max((((/* implicit */unsigned char) var_4)), (var_10)));
                    }
                }
            } 
        } 
        var_42 = ((/* implicit */int) ((unsigned long long int) 3923628308U));
    }
    /* vectorizable */
    for (unsigned int i_16 = 0; i_16 < 16; i_16 += 1) 
    {
        arr_58 [8] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_16])) ? (((/* implicit */int) arr_21 [i_16] [i_16] [i_16])) : (((/* implicit */int) arr_31 [(short)6]))));
        /* LoopNest 2 */
        for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 2) 
        {
            for (unsigned int i_18 = 0; i_18 < 16; i_18 += 3) 
            {
                {
                    var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) -1201063229)) >= (18446744073709551595ULL)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
                    var_44 = ((/* implicit */unsigned long long int) ((7272827298472140895LL) + (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                    var_45 = ((/* implicit */long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) ((signed char) var_7)))));
                    var_46 = ((/* implicit */unsigned char) (short)-24944);
                    var_47 = ((/* implicit */short) arr_20 [i_18] [i_16]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_19 = 2; i_19 < 14; i_19 += 2) 
        {
            for (short i_20 = 2; i_20 < 14; i_20 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_21 = 0; i_21 < 16; i_21 += 3) 
                    {
                        for (unsigned short i_22 = 1; i_22 < 14; i_22 += 2) 
                        {
                            {
                                var_48 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-17181)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(arr_66 [i_16] [i_20] [i_19] [i_16]))))));
                                var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_59 [i_22] [i_20] [i_19])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)0)))))))));
                                arr_74 [i_16] = ((short) arr_65 [i_16] [i_19]);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_23 = 0; i_23 < 16; i_23 += 2) 
                    {
                        arr_77 [i_23] [i_16] [i_16] [i_16] = ((/* implicit */unsigned long long int) var_5);
                        var_50 *= ((/* implicit */_Bool) arr_18 [i_19]);
                        var_51 = ((/* implicit */short) (+(((/* implicit */int) var_7))));
                        var_52 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)0))));
                        var_53 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)2))));
                    }
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        var_54 = ((/* implicit */short) ((arr_79 [i_16]) & (arr_79 [i_16])));
                        var_55 = ((/* implicit */_Bool) ((((/* implicit */int) var_11)) | (((/* implicit */int) arr_25 [i_16] [i_19 - 2] [i_20 + 1] [i_24] [i_16]))));
                        var_56 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)10478)) == (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                        var_57 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) arr_25 [i_16] [i_16] [i_16] [i_16] [i_16])) == (((/* implicit */int) var_2)))))));
                    }
                }
            } 
        } 
    }
    for (short i_25 = 0; i_25 < 14; i_25 += 3) 
    {
        arr_84 [i_25] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_61 [0] [i_25] [0]), (arr_61 [8ULL] [i_25] [i_25])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65507))))) : (281117192)));
        var_58 = ((/* implicit */short) var_3);
    }
    var_59 = ((/* implicit */long long int) var_2);
}
