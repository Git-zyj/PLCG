/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236315
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
    var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned char) var_11)), (var_10)));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_16 = max((((/* implicit */int) var_13)), (((((/* implicit */int) var_8)) % ((-(((/* implicit */int) (short)-27881)))))));
        arr_2 [i_0] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_3))) - (((/* implicit */unsigned long long int) arr_1 [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (-(min((max((((/* implicit */unsigned long long int) (unsigned char)247)), (var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) (unsigned char)69)))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        var_17 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_3]))))))))));
                        var_18 ^= arr_8 [i_1] [i_3] [i_2];
                        arr_13 [i_0] [i_1] [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) 908866251587589589LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))) | (((var_14) >> (((/* implicit */int) (unsigned char)25))))))));
                    }
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
                    {
                        arr_17 [i_2] [i_4] = ((/* implicit */signed char) (unsigned char)168);
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_8 [i_0] [i_0] [12LL])) ? (max((((/* implicit */unsigned long long int) (short)-27881)), (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)27899)) & (((/* implicit */int) (unsigned char)236)))))))));
                        arr_19 [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [(unsigned char)11] [i_1] [i_2] [i_4]))));
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((-908866251587589590LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)183)) - (183))))))));
                    }
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_1] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)47336))))), ((~(arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        var_21 = ((/* implicit */short) arr_0 [i_0] [i_1]);
                        arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)12))))) >= ((+(((-6870256233476838482LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252)))))))));
                    }
                    for (long long int i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
                    {
                        arr_27 [i_0] [i_1] [i_2] [i_6] = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_2] [i_6] [i_1] [i_6]))))), ((-(((/* implicit */int) arr_6 [i_0] [i_1] [i_0]))))));
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((arr_7 [i_6] [i_6] [i_6] [(unsigned short)18]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)99), (arr_25 [i_6] [i_6] [i_6] [i_6] [i_6])))) || (((/* implicit */_Bool) min((334791174U), (((/* implicit */unsigned int) (short)27882))))))))))))));
                        arr_28 [i_6] [(unsigned short)5] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)54)) ? (16777215U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned int) ((var_1) < (arr_16 [i_6] [i_6] [i_6] [i_6] [i_6]))))))) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) (unsigned char)46))));
                    }
                    arr_29 [12ULL] [i_1] = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)8701))))), (min((arr_1 [i_0]), (arr_1 [i_2])))));
                }
            } 
        } 
    }
    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
    {
        arr_32 [i_7] [(signed char)5] = var_6;
        arr_33 [i_7] = ((/* implicit */short) min((((/* implicit */int) (unsigned short)65535)), ((~(((((/* implicit */int) (short)27882)) & (((/* implicit */int) (unsigned char)236))))))));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 24; i_8 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_9 = 0; i_9 < 25; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (short i_10 = 0; i_10 < 25; i_10 += 4) 
            {
                for (unsigned short i_11 = 0; i_11 < 25; i_11 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_35 [i_10])) >> (((arr_37 [i_8 - 1]) + (151995280)))));
                        /* LoopSeq 1 */
                        for (long long int i_12 = 1; i_12 < 23; i_12 += 3) 
                        {
                            var_24 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_12 - 1] [i_11] [i_10])) ? (arr_41 [i_12 + 1] [i_12 + 2] [i_10]) : (((arr_34 [i_12 - 1]) + (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
                            var_25 = ((/* implicit */unsigned char) ((arr_41 [i_8] [i_9] [i_9]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_12 + 2] [i_11] [i_9] [i_8 + 1] [i_8 + 1])))));
                            var_26 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_9] [i_9] [i_10] [i_9] [i_9]))) > (0ULL))))));
                        }
                        var_27 = var_6;
                        /* LoopSeq 1 */
                        for (short i_13 = 2; i_13 < 23; i_13 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_8 + 1])) ? (var_14) : (arr_34 [i_8 - 1]))))));
                            arr_53 [i_8] [i_9] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (unsigned char)25))))));
                            arr_54 [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_9] [i_8] = ((/* implicit */unsigned char) (-(var_3)));
                        }
                        var_29 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (short)12399)) ? (((/* implicit */int) arr_51 [i_8] [i_8] [i_9] [i_10] [i_9] [i_11] [(unsigned char)11])) : (((/* implicit */int) var_11))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (int i_14 = 3; i_14 < 24; i_14 += 2) 
            {
                var_30 = ((/* implicit */short) (-((+(17757218249253404646ULL)))));
                var_31 = ((/* implicit */unsigned char) arr_42 [i_8 + 1] [i_9] [12ULL] [i_9]);
            }
            var_32 *= arr_55 [i_8 + 1] [20ULL];
        }
        for (signed char i_15 = 1; i_15 < 24; i_15 += 4) 
        {
            var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)90))));
            var_34 = ((/* implicit */long long int) (-((-(((/* implicit */int) var_8))))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_16 = 4; i_16 < 23; i_16 += 2) 
        {
            /* LoopNest 2 */
            for (short i_17 = 0; i_17 < 25; i_17 += 3) 
            {
                for (int i_18 = 3; i_18 < 23; i_18 += 4) 
                {
                    {
                        var_35 = ((/* implicit */int) (short)-12429);
                        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-35)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)168))))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (int i_19 = 2; i_19 < 24; i_19 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_20 = 0; i_20 < 25; i_20 += 4) 
                {
                    for (short i_21 = 0; i_21 < 25; i_21 += 4) 
                    {
                        {
                            arr_78 [i_8] [i_8] [i_19] = ((/* implicit */unsigned char) (-((-(arr_36 [i_8])))));
                            var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_36 [i_19 - 2])))))));
                        }
                    } 
                } 
                var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) (unsigned char)60))));
            }
            for (int i_22 = 0; i_22 < 25; i_22 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_23 = 0; i_23 < 25; i_23 += 1) /* same iter space */
                {
                    arr_83 [i_22] [i_23] [i_22] [i_16] [i_22] = ((/* implicit */signed char) (~(arr_34 [i_8])));
                    var_39 = ((/* implicit */unsigned char) arr_75 [i_8 - 1] [i_16] [i_16] [i_23]);
                    var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */int) (unsigned char)168)) : (((/* implicit */int) (unsigned char)137))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)244)) == (((/* implicit */int) var_8)))))) : (var_3)));
                    var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_81 [i_22] [i_16 - 4] [i_22] [i_23]))))) : (arr_41 [23] [i_16] [i_22])));
                }
                for (unsigned short i_24 = 0; i_24 < 25; i_24 += 1) /* same iter space */
                {
                    var_42 = ((((var_9) | (689525824456146987ULL))) >> ((((+(arr_69 [i_8 + 1] [i_8 + 1] [i_16] [i_24]))) + (2017242825))));
                    var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) (unsigned char)194))));
                }
                for (signed char i_25 = 0; i_25 < 25; i_25 += 2) 
                {
                    var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) 9340255207700001781ULL))) > ((+(((/* implicit */int) arr_75 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_25]))))));
                    arr_89 [i_22] [i_16] = var_9;
                    var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) (~(((unsigned int) arr_49 [22] [22] [i_16] [i_16] [i_8])))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_26 = 0; i_26 < 25; i_26 += 1) 
                    {
                        var_46 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)102))));
                        var_47 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)168))));
                        arr_92 [i_22] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (short)8865)) ? (((/* implicit */unsigned long long int) var_0)) : (2251799813685247ULL)))));
                        arr_93 [i_26] [i_25] [i_22] [i_16] [i_8] = ((/* implicit */int) (unsigned short)34083);
                    }
                }
                arr_94 [i_22] [i_16] [i_8] [i_8] = arr_51 [i_22] [i_22] [i_22] [i_16] [i_22] [(signed char)3] [i_8];
            }
        }
        arr_95 [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) var_11))));
    }
    var_48 = ((/* implicit */unsigned char) ((min((((/* implicit */int) (unsigned char)186)), ((~(((/* implicit */int) var_5)))))) + (((/* implicit */int) max((((/* implicit */unsigned short) ((short) (short)8865))), (var_5))))));
    var_49 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (short)-8701)), (var_3)));
}
