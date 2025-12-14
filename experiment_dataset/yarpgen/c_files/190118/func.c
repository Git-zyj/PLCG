/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190118
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) arr_0 [i_0]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33793))) : (11664079148649237201ULL)));
            var_22 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (11664079148649237201ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))));
            arr_8 [i_0] = ((((/* implicit */int) ((((/* implicit */_Bool) 1084785512)) && (((/* implicit */_Bool) arr_3 [i_0]))))) == (((((/* implicit */int) (signed char)127)) % (((/* implicit */int) (unsigned short)33809)))));
            var_23 = ((/* implicit */short) (-(((/* implicit */int) arr_5 [i_1] [i_0]))));
        }
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
        {
            arr_12 [i_2] = ((((/* implicit */_Bool) -2899465207225765446LL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_18) ? (arr_2 [4U] [(signed char)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27358)))))) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27356))) <= (var_3))))))));
            arr_13 [(_Bool)1] [(_Bool)1] = ((/* implicit */int) min((((((/* implicit */long long int) arr_10 [i_2])) / (((((/* implicit */_Bool) 1651622720)) ? (arr_1 [0ULL]) : (1720565344773859324LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(arr_2 [i_0] [i_2])))))))));
        }
        arr_14 [i_0] = ((/* implicit */unsigned int) 1347904721023023982LL);
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_3 = 1; i_3 < 12; i_3 += 2) 
        {
            arr_18 [i_0] = (((~(((/* implicit */int) (signed char)79)))) < (((/* implicit */int) ((arr_17 [i_0] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15)))))));
            arr_19 [i_3] [i_0] [5LL] = ((arr_10 [i_3 + 1]) / (arr_10 [i_3 + 1]));
            var_24 = ((/* implicit */signed char) (-(arr_10 [i_3 - 1])));
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 12; i_4 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)31754))))) - ((+(arr_15 [i_0] [i_4] [i_0])))));
            /* LoopSeq 2 */
            for (unsigned short i_5 = 2; i_5 < 12; i_5 += 3) /* same iter space */
            {
                var_26 = ((/* implicit */int) ((unsigned short) 4266054807890232694ULL));
                var_27 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_1 [i_5 + 1])) < (arr_23 [i_4 - 1] [i_4])));
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (short)-210)))) ? (((((/* implicit */unsigned long long int) 3673049223U)) & (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-27366)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) arr_16 [7LL] [7LL]))))))))));
                            var_29 ^= ((/* implicit */unsigned short) arr_26 [i_4] [i_4]);
                        }
                    } 
                } 
            }
            for (unsigned short i_8 = 2; i_8 < 12; i_8 += 3) /* same iter space */
            {
                arr_35 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(3673049216U)))) ? (arr_28 [i_0] [1LL] [i_8 + 1] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_4] [i_8]))) == (arr_0 [(_Bool)1])))))));
                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((0) * (((/* implicit */int) (unsigned short)3086)))) - (((/* implicit */int) ((_Bool) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                /* LoopSeq 2 */
                for (int i_9 = 0; i_9 < 13; i_9 += 4) /* same iter space */
                {
                    arr_38 [i_4 + 1] [i_8] [i_4 + 1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_9] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-1347904721023023988LL)))) ? (arr_1 [i_8 + 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 6346887354680522638LL)) ? (((/* implicit */int) arr_3 [i_4])) : (((/* implicit */int) arr_25 [11ULL] [11ULL] [i_8] [11ULL])))))));
                    var_31 = ((/* implicit */long long int) (+(((/* implicit */int) (short)24842))));
                    arr_39 [i_9] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_8] [i_8 - 1] [i_0])) ? (((((/* implicit */int) (_Bool)0)) >> (((arr_34 [9U] [9U] [9U]) - (15858764786063366682ULL))))) : (((/* implicit */int) (_Bool)0))));
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 1; i_10 < 12; i_10 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) 3673049223U)) ? (((/* implicit */unsigned int) 2147483640)) : (8U))));
                        var_33 = ((/* implicit */int) max((var_33), (((arr_36 [(_Bool)1] [i_0] [i_4] [i_4 - 1] [(unsigned short)0]) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1045538984612585581LL))))) : (-279315295)))));
                        arr_44 [i_0] [i_0] [i_0] [i_0] [(signed char)12] [(signed char)12] [i_0] = ((/* implicit */signed char) (~(arr_32 [i_0] [i_4 - 1] [i_8] [i_9] [3LL])));
                    }
                }
                for (int i_11 = 0; i_11 < 13; i_11 += 4) /* same iter space */
                {
                    var_34 ^= ((/* implicit */signed char) 17158789760586446224ULL);
                    /* LoopSeq 2 */
                    for (long long int i_12 = 3; i_12 < 12; i_12 += 2) 
                    {
                        var_35 = ((/* implicit */_Bool) var_3);
                        arr_51 [i_4] [i_4] = ((/* implicit */unsigned short) (~(arr_40 [i_4 - 1] [i_4 + 1] [i_8 - 2] [i_8 - 2] [i_8 + 1] [i_12 + 1] [i_12 - 1])));
                        arr_52 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_16 [7] [7])) <= (((/* implicit */int) var_18))))) : (((/* implicit */int) arr_6 [i_0] [i_4] [i_4]))));
                        arr_53 [i_8] [i_11] [i_8] [i_4] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)14107)) ? (1045224734958728091ULL) : (8341911963641399438ULL)));
                        var_36 = ((/* implicit */long long int) (-(((/* implicit */int) arr_7 [(_Bool)1]))));
                    }
                    for (unsigned short i_13 = 4; i_13 < 10; i_13 += 3) 
                    {
                        var_37 = ((/* implicit */unsigned short) (-(9223372036854775785LL)));
                        arr_58 [(unsigned short)6] [(unsigned short)11] [i_8] [i_8] = ((unsigned long long int) arr_26 [i_4] [i_4]);
                        arr_59 [i_0] = ((/* implicit */int) (!(arr_42 [i_8 - 2] [i_4] [i_4] [i_11])));
                        arr_60 [i_0] [i_4] [i_8] [7U] [7U] [i_8] [i_13] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-33))));
                        arr_61 [i_0] [i_0] [10U] [i_11] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((10104832110068152156ULL) + (var_17)))) ? (((/* implicit */int) (short)17546)) : (arr_37 [i_0] [(signed char)8] [(signed char)8])));
                    }
                }
                var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) (_Bool)1))));
            }
            var_39 = ((/* implicit */unsigned long long int) (-(arr_37 [i_4 - 1] [i_4 + 1] [i_4 - 1])));
        }
        for (int i_14 = 2; i_14 < 12; i_14 += 2) /* same iter space */
        {
            var_40 = ((/* implicit */_Bool) min((var_40), ((((!(((/* implicit */_Bool) arr_41 [i_14 - 2] [i_14 - 2] [i_14 - 2] [i_14 - 1] [i_14 + 1])))) || ((!(((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_14 - 2] [i_14 - 1] [i_14 - 1] [(signed char)7] [i_14]))))))));
            var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_54 [i_0] [i_0] [6LL] [i_0])), (min((min((15836377619001568699ULL), (((/* implicit */unsigned long long int) (unsigned short)7291)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 24ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-17546))) : (0LL)))))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_15 = 0; i_15 < 13; i_15 += 2) 
            {
                arr_67 [i_0] [4] [i_14 - 2] [4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) (unsigned short)35945)))));
                var_42 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_14 - 2]))) == (arr_65 [i_14 - 1] [i_14 + 1] [i_14 - 2])));
            }
            for (unsigned short i_16 = 1; i_16 < 12; i_16 += 4) 
            {
                var_43 = ((/* implicit */unsigned int) ((_Bool) 10104832110068152166ULL));
                arr_71 [i_16] = ((/* implicit */int) (-(((((/* implicit */_Bool) 1420355630)) ? (max((2818194650624879980LL), (((/* implicit */long long int) arr_47 [i_0] [i_14 - 1] [i_16])))) : (((/* implicit */long long int) (+(var_15))))))));
            }
            var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1)))))));
            arr_72 [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((1045538984612585581LL) | (-2818194650624879965LL)))), (min((arr_28 [i_0] [i_0] [i_14 - 1] [i_0]), (((/* implicit */unsigned long long int) arr_36 [i_0] [i_14] [i_14] [i_14 - 2] [i_14 - 2]))))));
        }
    }
    var_45 = ((/* implicit */long long int) var_16);
    var_46 ^= min((((/* implicit */long long int) (unsigned short)47431)), (-6420340454812720550LL));
}
