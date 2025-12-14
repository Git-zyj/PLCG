/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34367
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [4])) << ((-(((/* implicit */int) (_Bool)0))))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 3; i_2 < 15; i_2 += 4) 
                {
                    var_14 = ((/* implicit */unsigned short) ((unsigned char) ((int) 1152921504573292544ULL)));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0] [14] = ((/* implicit */int) ((var_4) % (((((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_2]))))) << (((/* implicit */int) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) -2147483647)))))))));
                                arr_15 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (arr_13 [i_0] [i_1 - 1] [(signed char)0] [(signed char)0] [i_3] [i_1 - 1] [i_4])))) ? (((/* implicit */int) var_8)) : (-1)));
                                arr_16 [i_4] [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((17293822569136259060ULL) >= (var_0)))) >> (((arr_1 [i_1 - 1] [i_1 - 1]) + (1652490682)))))), (17293822569136259059ULL)));
                            }
                        } 
                    } 
                    var_15 &= ((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0] [i_0] [16]);
                    var_16 = ((/* implicit */unsigned short) (unsigned char)0);
                    arr_17 [i_0] [i_0] [i_0] = (-((+(((arr_10 [i_0] [i_1 + 1] [i_2 - 2] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)9))))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_5))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        var_18 = ((/* implicit */int) ((((min((17293822569136259072ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_5])))) * (((/* implicit */unsigned long long int) ((arr_10 [i_0] [i_0] [i_0] [i_0]) * (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5])))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) var_12)))) == (((/* implicit */int) var_12))))))));
                        var_19 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)0))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        var_20 = ((/* implicit */short) arr_4 [i_0] [i_0]);
                        var_21 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) var_1)) * ((+(((/* implicit */int) var_6)))))));
                    }
                    var_22 *= ((/* implicit */unsigned long long int) var_7);
                }
                for (signed char i_8 = 1; i_8 < 16; i_8 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 2) 
                        {
                            {
                                arr_35 [(unsigned short)13] [i_1] [(unsigned short)12] [i_0] [i_10] [i_0] = var_0;
                                var_23 ^= ((/* implicit */int) ((_Bool) ((((var_4) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (-6359701441598281090LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)9))))));
                                var_24 = ((/* implicit */short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (((var_4) >> (((var_2) - (9657572305708387332ULL)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 16; i_11 += 1) 
                    {
                        for (signed char i_12 = 0; i_12 < 18; i_12 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) min((((_Bool) arr_25 [i_8 - 1] [i_1 - 1] [i_11 + 1] [(unsigned char)10] [i_0] [(unsigned char)12])), (((17293822569136259072ULL) != (1152921504573292548ULL)))));
                                arr_40 [i_0] = ((/* implicit */unsigned char) ((int) ((arr_20 [(signed char)1] [i_1] [i_8] [i_12]) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)247))) >= (arr_13 [i_0] [i_1] [i_8] [(signed char)4] [(signed char)4] [i_1] [(signed char)3]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 0; i_13 < 18; i_13 += 3) 
                    {
                        arr_45 [i_0] [i_1] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [12LL] [i_0])))) * (((((/* implicit */int) arr_26 [i_0] [i_8 + 1] [i_1 - 1] [i_0])) / (((/* implicit */int) (unsigned char)253))))));
                        arr_46 [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) max(((unsigned char)113), (((/* implicit */unsigned char) arr_23 [(unsigned char)8] [3ULL] [i_8 + 2] [i_1 - 1] [i_1] [i_1]))))), (min((arr_37 [i_0]), (((/* implicit */long long int) (+(arr_3 [i_0]))))))));
                        var_26 = ((/* implicit */signed char) (((+((+(var_9))))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_1 [i_8] [i_13])))))));
                    }
                }
                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((unsigned char) (unsigned short)22710)))));
                var_28 = arr_23 [i_0] [i_0] [i_1] [i_1 - 1] [i_1] [i_1];
            }
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_14 = 0; i_14 < 10; i_14 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_15 = 1; i_15 < 6; i_15 += 2) 
        {
            for (signed char i_16 = 0; i_16 < 10; i_16 += 1) 
            {
                {
                    arr_55 [i_15] [i_15] [i_15 - 1] [i_15] = ((/* implicit */unsigned char) ((unsigned short) var_8));
                    var_29 = ((/* implicit */unsigned char) ((unsigned long long int) arr_31 [i_14] [i_15] [i_16]));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (int i_17 = 0; i_17 < 10; i_17 += 3) 
        {
            var_30 = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_2 [i_14] [i_14])) * (((((/* implicit */_Bool) (short)-3562)) ? (((/* implicit */int) (short)32765)) : (((/* implicit */int) (unsigned char)143))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_18 = 0; i_18 < 10; i_18 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_19 = 1; i_19 < 7; i_19 += 2) 
                {
                    for (unsigned long long int i_20 = 0; i_20 < 10; i_20 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) arr_3 [i_19])))));
                            arr_70 [i_14] [i_14] [i_14] [4] [i_14] [i_14] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_1 [i_18] [i_18])) & ((+((-9223372036854775807LL - 1LL))))));
                        }
                    } 
                } 
                arr_71 [i_14] [i_17] [i_18] [i_18] = ((/* implicit */signed char) ((((arr_54 [i_14] [i_14] [i_14] [i_14]) ^ (((/* implicit */int) arr_41 [i_14] [i_18])))) >> (((((arr_49 [i_18]) | (arr_49 [i_18]))) + (4869370973806099583LL)))));
            }
        }
        for (signed char i_21 = 0; i_21 < 10; i_21 += 1) 
        {
            var_32 ^= ((/* implicit */signed char) (unsigned char)62);
            /* LoopNest 2 */
            for (unsigned short i_22 = 3; i_22 < 8; i_22 += 4) 
            {
                for (long long int i_23 = 0; i_23 < 10; i_23 += 4) 
                {
                    {
                        var_33 = ((/* implicit */signed char) ((var_10) <= (((((/* implicit */_Bool) arr_69 [i_23] [i_21])) ? (var_10) : (((/* implicit */int) (unsigned char)4))))));
                        var_34 *= ((/* implicit */_Bool) (+(((/* implicit */int) var_3))));
                        var_35 = ((/* implicit */int) max((var_35), (max((max((((/* implicit */int) arr_5 [i_23] [i_23])), ((-(((/* implicit */int) arr_21 [i_14])))))), (((/* implicit */int) max((arr_18 [i_14] [i_23]), (var_6))))))));
                        var_36 ^= ((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) var_7))))) <= (arr_47 [i_22 + 2])));
                    }
                } 
            } 
        }
    }
    for (unsigned long long int i_24 = 2; i_24 < 16; i_24 += 3) 
    {
        var_37 = ((/* implicit */unsigned long long int) arr_82 [i_24 + 3]);
        arr_83 [(unsigned char)17] = ((/* implicit */short) ((((/* implicit */int) min((arr_81 [i_24 + 3]), (arr_81 [i_24 + 1])))) / (((((/* implicit */int) (unsigned char)62)) * (((/* implicit */int) (signed char)-39))))));
    }
    /* vectorizable */
    for (unsigned long long int i_25 = 0; i_25 < 16; i_25 += 3) 
    {
        var_38 *= ((/* implicit */unsigned short) arr_26 [8LL] [i_25] [i_25] [8LL]);
        /* LoopSeq 1 */
        for (long long int i_26 = 0; i_26 < 16; i_26 += 1) 
        {
            /* LoopNest 2 */
            for (int i_27 = 0; i_27 < 16; i_27 += 2) 
            {
                for (short i_28 = 0; i_28 < 16; i_28 += 3) 
                {
                    {
                        var_39 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
                        var_40 += ((/* implicit */unsigned char) arr_3 [i_27]);
                        var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (signed char)21))));
                        var_42 -= ((/* implicit */long long int) ((((/* implicit */int) arr_92 [i_27] [i_26] [i_27] [i_28])) * (((/* implicit */int) arr_92 [i_28] [i_27] [i_26] [(unsigned char)14]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_29 = 0; i_29 < 16; i_29 += 3) 
            {
                for (long long int i_30 = 2; i_30 < 13; i_30 += 2) 
                {
                    {
                        arr_99 [5] [i_26] [i_25] [5] = ((/* implicit */signed char) arr_44 [i_30] [i_26] [i_29]);
                        var_43 ^= ((/* implicit */long long int) ((8074132732125245483ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_30]))))))));
                        arr_100 [i_25] [i_25] = (-(((/* implicit */int) arr_33 [i_29] [i_26] [i_29] [i_29] [i_29] [i_30 - 1] [i_26])));
                        arr_101 [i_30] [(signed char)1] [i_25] [i_25] [11] [i_25] = ((/* implicit */int) arr_92 [i_25] [i_30 + 1] [4LL] [(signed char)4]);
                    }
                } 
            } 
            arr_102 [i_25] = ((/* implicit */unsigned short) var_0);
        }
        arr_103 [i_25] = ((/* implicit */unsigned char) (+(805306368)));
    }
    var_44 = ((/* implicit */unsigned char) ((var_13) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : ((-(var_10))))))));
    /* LoopNest 3 */
    for (signed char i_31 = 1; i_31 < 24; i_31 += 3) 
    {
        for (unsigned long long int i_32 = 0; i_32 < 25; i_32 += 2) 
        {
            for (int i_33 = 3; i_33 < 21; i_33 += 1) 
            {
                {
                    var_45 = ((/* implicit */signed char) (unsigned char)249);
                    /* LoopNest 2 */
                    for (unsigned short i_34 = 4; i_34 < 22; i_34 += 2) 
                    {
                        for (unsigned short i_35 = 0; i_35 < 25; i_35 += 4) 
                        {
                            {
                                var_46 = min((arr_118 [i_31 - 1] [i_34 - 2] [i_33 - 1] [(_Bool)1] [i_35] [i_31]), (arr_118 [i_31 + 1] [i_34 + 3] [23] [i_34] [(signed char)9] [i_31]));
                                var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_118 [i_32] [i_33 + 3] [i_33 - 2] [22] [i_31 - 1] [i_32]), (var_3)))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_116 [i_32] [i_32] [i_32] [(short)6])) : (((/* implicit */int) (unsigned short)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
