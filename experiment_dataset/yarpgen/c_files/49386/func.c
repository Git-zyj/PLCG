/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49386
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((short) var_7))))))));
                    var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) (-(((((/* implicit */long long int) ((/* implicit */int) (signed char)36))) / (1913945757775753120LL))))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (short)5405))) || (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-23)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_3 = 1; i_3 < 20; i_3 += 2) 
    {
        var_12 = ((/* implicit */int) ((unsigned short) arr_11 [i_3 - 1]));
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            for (long long int i_5 = 4; i_5 < 18; i_5 += 1) 
            {
                for (long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    {
                        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((-1913945757775753120LL) < (3680163603591095259LL))))));
                        var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_17 [i_3]))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 21; i_7 += 3) 
    {
        var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3468))) : (5273375967859000318ULL)))) ? (((/* implicit */int) arr_15 [i_7] [i_7])) : (((/* implicit */int) arr_21 [i_7]))));
        arr_25 [(short)20] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(-1913945757775753120LL))))));
        arr_26 [i_7] = ((/* implicit */short) (((_Bool)1) ? (1913945757775753120LL) : (-1913945757775753120LL)));
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 1; i_8 < 9; i_8 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_9 = 0; i_9 < 10; i_9 += 3) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (signed char i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    {
                        var_16 = ((/* implicit */short) ((_Bool) (_Bool)1));
                        arr_35 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_8 - 1] [i_8] [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8 - 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (signed char i_13 = 1; i_13 < 6; i_13 += 2) 
            {
                for (unsigned short i_14 = 4; i_14 < 8; i_14 += 2) 
                {
                    {
                        var_17 = ((/* implicit */signed char) ((unsigned short) var_4));
                        var_18 = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) arr_3 [i_8])) | (((/* implicit */int) var_1)))));
                        arr_46 [i_8] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_8] [i_13 - 1])) >= (((arr_43 [i_8] [i_12] [(unsigned short)2] [i_14]) & (((/* implicit */int) var_3))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned short) (short)-17682);
    }
    for (unsigned short i_15 = 4; i_15 < 15; i_15 += 3) 
    {
        /* LoopNest 2 */
        for (int i_16 = 2; i_16 < 14; i_16 += 1) 
        {
            for (int i_17 = 0; i_17 < 16; i_17 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_18 = 1; i_18 < 12; i_18 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_19 = 0; i_19 < 16; i_19 += 1) /* same iter space */
                        {
                            arr_59 [i_15 - 4] [i_18] [i_15 - 3] [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)0))) ? (((/* implicit */int) (short)1653)) : (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (short)1592)) ^ (((/* implicit */int) var_9))))))));
                            arr_60 [i_17] [i_18 + 1] |= ((/* implicit */_Bool) 1557534256);
                            arr_61 [i_15] [i_16 - 2] [i_19] [i_18] [i_18] [i_18] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_5)) / (((/* implicit */int) var_3))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_20 = 0; i_20 < 16; i_20 += 1) /* same iter space */
                        {
                            var_20 = ((/* implicit */int) (unsigned char)57);
                            arr_65 [i_15 - 3] [i_16] [i_17] [i_17] [10LL] [4U] [i_20] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_18 + 4])) ? (((/* implicit */int) arr_21 [i_18 + 2])) : (arr_49 [i_18 - 1] [i_15 - 3])));
                            var_21 &= ((/* implicit */short) ((((((/* implicit */_Bool) var_0)) && (var_7))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_0)))))));
                        }
                        var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)65535)), (var_6)))) ? (((/* implicit */int) (short)-15532)) : (((/* implicit */int) (short)-31869)))) & (((/* implicit */int) var_0))));
                    }
                    for (unsigned long long int i_21 = 0; i_21 < 16; i_21 += 1) 
                    {
                        arr_69 [i_21] [i_15] [i_16] [i_16] [i_15] = ((/* implicit */short) (!(((((/* implicit */_Bool) (-(548464018)))) && (((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))))))));
                        var_23 = ((/* implicit */int) max((((long long int) arr_54 [i_15 - 3] [i_15 - 3] [i_15 - 1])), (((/* implicit */long long int) var_9))));
                        var_24 = ((/* implicit */int) 3201911403U);
                        var_25 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_17 [i_15 + 1])), (((int) (unsigned short)53740))));
                        arr_70 [i_15] [i_16] [i_17] [i_21] [i_21] = ((short) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_56 [i_15] [i_16] [i_17] [i_17])), ((-9223372036854775807LL - 1LL))))), (max((arr_48 [i_16 - 2]), (((/* implicit */unsigned long long int) var_0))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_22 = 0; i_22 < 16; i_22 += 1) 
                    {
                        for (unsigned char i_23 = 1; i_23 < 12; i_23 += 1) 
                        {
                            {
                                arr_76 [i_15] [i_23] [(_Bool)1] = ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) (unsigned short)28982)))));
                                var_26 = ((/* implicit */_Bool) (+(-1913945757775753121LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_27 |= ((((/* implicit */_Bool) (unsigned short)30121)) ? (((/* implicit */int) max(((unsigned short)41209), (((/* implicit */unsigned short) (signed char)-2))))) : (169370828));
        arr_77 [i_15] [i_15 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_9), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */int) arr_67 [i_15 + 1] [i_15 + 1])) : (((((/* implicit */int) arr_67 [i_15 - 4] [i_15 + 1])) / (((/* implicit */int) arr_67 [i_15 - 4] [i_15 - 2]))))));
    }
    /* LoopNest 3 */
    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
    {
        for (unsigned char i_25 = 3; i_25 < 12; i_25 += 2) 
        {
            for (int i_26 = 0; i_26 < 13; i_26 += 1) 
            {
                {
                    arr_87 [i_26] [i_25] [i_25] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max((533769425), (((/* implicit */int) (unsigned char)89))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-16))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_27 = 3; i_27 < 11; i_27 += 3) /* same iter space */
                    {
                        arr_90 [i_24] [i_25] [i_26] [i_25] = ((short) ((((/* implicit */int) (unsigned short)24333)) ^ (((/* implicit */int) (unsigned char)89))));
                        arr_91 [i_24] [i_24] [i_25] [i_24] [i_26] [i_27] = ((/* implicit */signed char) (-(((/* implicit */int) arr_16 [i_25 - 2] [i_27 - 2] [i_27 + 1] [i_27 - 2]))));
                        var_28 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_25 - 2] [i_25 - 2] [i_27 + 2])) && (((/* implicit */_Bool) arr_15 [(unsigned short)12] [i_27 - 3]))));
                    }
                    /* vectorizable */
                    for (unsigned int i_28 = 3; i_28 < 11; i_28 += 3) /* same iter space */
                    {
                        arr_94 [i_25] [i_26] [i_25] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)24327))));
                        arr_95 [i_25] [i_25] [i_26] [i_28] [i_28] = ((/* implicit */long long int) ((((/* implicit */_Bool) -548464018)) ? (arr_66 [i_25 - 3] [i_25 + 1] [i_28 - 3] [i_28 - 2]) : ((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))));
                    }
                    /* LoopNest 2 */
                    for (short i_29 = 0; i_29 < 13; i_29 += 1) 
                    {
                        for (short i_30 = 0; i_30 < 13; i_30 += 3) 
                        {
                            {
                                var_29 = ((((/* implicit */_Bool) ((((((/* implicit */int) var_5)) >> (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) var_7))))) && (((/* implicit */_Bool) var_0)));
                                arr_101 [i_24] [i_25 - 1] [i_26] [i_25] [i_30] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (-2147218632)))) : (((long long int) var_9))));
                                arr_102 [i_25] [i_30] [i_29] [i_29] [(unsigned short)9] [i_30] [i_25 + 1] = ((/* implicit */int) ((_Bool) arr_80 [i_25] [i_25 - 3] [i_25 - 3]));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
