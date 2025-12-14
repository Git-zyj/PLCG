/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35603
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
    for (signed char i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((_Bool) (signed char)-119)))));
        var_15 = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [5U] [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))));
        arr_3 [i_0] = ((/* implicit */signed char) (((!(arr_1 [i_0]))) ? (37238069061780692LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) 37238069061780687LL))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_17 ^= ((/* implicit */short) var_11);
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                var_18 = ((/* implicit */short) (+(((/* implicit */int) arr_10 [i_1] [i_2] [i_3]))));
                var_19 *= ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)134)) || ((_Bool)1)))), (var_4)));
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (!((_Bool)1))))));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -761048727971293176LL)) ? (((/* implicit */long long int) -1810231295)) : (761048727971293175LL)));
            }
            /* vectorizable */
            for (unsigned short i_4 = 1; i_4 < 9; i_4 += 4) 
            {
                arr_19 [i_1] [i_2] [i_2] [i_4 + 1] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_4 + 1]))));
                arr_20 [i_1] [i_2] [2LL] = ((/* implicit */unsigned int) arr_9 [i_1] [i_1]);
                var_22 = ((/* implicit */long long int) ((_Bool) arr_13 [i_4 - 1] [i_4 - 1] [i_4 - 1]));
                var_23 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
            }
            var_24 -= arr_2 [i_1];
            var_25 = ((/* implicit */unsigned short) min((max((arr_9 [i_1] [i_2]), (arr_9 [i_1] [i_2]))), (arr_9 [i_1] [(_Bool)1])));
        }
        /* vectorizable */
        for (unsigned short i_5 = 1; i_5 < 10; i_5 += 3) 
        {
            arr_25 [i_1] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_21 [i_5 + 1]))));
            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [8U] [i_5] [i_5 + 1])) || (((/* implicit */_Bool) arr_24 [i_1] [(unsigned short)3] [i_5 - 1]))));
        }
        for (unsigned long long int i_6 = 1; i_6 < 8; i_6 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                var_27 += ((/* implicit */unsigned char) ((short) 761048727971293175LL));
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_1]))))) || (((/* implicit */_Bool) arr_6 [i_6 - 1] [i_6 - 1]))));
                var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_7] [i_6] [i_7])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_7 [i_1])))))));
                var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_6 - 1] [i_6 + 2] [i_6 - 1])) ? (arr_15 [i_6 + 2] [i_6 + 2] [i_6 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_6 + 3]))))))));
                /* LoopSeq 2 */
                for (unsigned short i_8 = 2; i_8 < 9; i_8 += 4) 
                {
                    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) -37238069061780693LL))));
                    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_8 + 2] [i_6 + 2] [i_7])) ? (arr_8 [i_8 - 1] [i_6 + 3] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_6] [i_8 - 1] [i_7] [i_6 + 3])))));
                    var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) var_12))));
                    arr_34 [i_1] [i_6] [(short)2] [(short)2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2694788447U)) ? (arr_23 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_8]))))))));
                }
                for (int i_9 = 0; i_9 < 11; i_9 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        arr_39 [i_1] [i_6] [i_6] [i_9] [3LL] = ((/* implicit */_Bool) var_12);
                        var_34 = arr_17 [i_6 - 1] [i_6 - 1];
                    }
                    for (unsigned long long int i_11 = 3; i_11 < 8; i_11 += 2) 
                    {
                        var_35 = ((/* implicit */long long int) arr_38 [i_7] [i_6] [i_11] [i_11] [i_11] [i_11 - 1]);
                        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) arr_31 [i_1] [i_11 - 2] [i_7] [i_7]))));
                        arr_42 [i_6] [i_6] [i_6] [i_1] = ((/* implicit */unsigned char) arr_32 [i_6] [i_6] [i_7] [i_11]);
                    }
                    var_37 *= ((/* implicit */unsigned long long int) arr_6 [i_6 + 3] [i_6 + 1]);
                    var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_1] [i_1])) || (((/* implicit */_Bool) arr_9 [i_1] [i_6]))));
                }
            }
            /* vectorizable */
            for (unsigned short i_12 = 0; i_12 < 11; i_12 += 4) 
            {
                arr_46 [i_1] [i_6] [i_12] [i_12] = ((/* implicit */short) ((long long int) arr_4 [i_6 + 3]));
                /* LoopSeq 4 */
                for (unsigned char i_13 = 0; i_13 < 11; i_13 += 4) 
                {
                    arr_49 [4] [i_6] [i_12] = ((/* implicit */long long int) var_2);
                    var_39 = ((/* implicit */unsigned short) ((arr_17 [i_1] [i_6 - 1]) - (((/* implicit */unsigned int) var_7))));
                    arr_50 [i_6] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_40 [i_6] [i_6 - 1] [i_6 + 1]))));
                }
                for (unsigned short i_14 = 0; i_14 < 11; i_14 += 2) /* same iter space */
                {
                    var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (unsigned char)134))))) ? ((+(arr_29 [i_1] [i_6] [(unsigned char)8]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_47 [i_1] [i_1] [i_1] [(_Bool)1] [i_1] [i_6])) && (((/* implicit */_Bool) 761048727971293175LL))))))));
                    var_41 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_44 [i_1] [i_6 + 3] [i_1]))));
                    arr_53 [i_1] [i_6] [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_44 [i_6] [i_6 + 2] [i_6])) : (((/* implicit */int) arr_36 [i_1] [i_6 - 1] [i_6 + 3] [i_6]))));
                }
                for (unsigned short i_15 = 0; i_15 < 11; i_15 += 2) /* same iter space */
                {
                    var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_44 [i_6 + 3] [i_6 + 1] [i_6 + 2])))))));
                    var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) 37238069061780678LL))));
                    /* LoopSeq 2 */
                    for (unsigned int i_16 = 1; i_16 < 9; i_16 += 3) 
                    {
                        var_44 = ((/* implicit */_Bool) arr_47 [i_6] [i_16] [i_16] [i_16] [i_16 + 2] [i_6]);
                        var_45 = ((/* implicit */signed char) arr_28 [i_12] [i_16]);
                    }
                    for (unsigned int i_17 = 2; i_17 < 10; i_17 += 1) 
                    {
                        var_46 += ((signed char) arr_28 [i_6 + 2] [i_6 + 3]);
                        var_47 = ((/* implicit */long long int) max((var_47), (((/* implicit */long long int) ((((/* implicit */int) (signed char)26)) - (1924949239))))));
                        arr_62 [i_6] [i_6] [i_12] [i_17] = ((/* implicit */int) (unsigned short)65512);
                    }
                }
                for (unsigned short i_18 = 0; i_18 < 11; i_18 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_19 = 0; i_19 < 11; i_19 += 4) 
                    {
                        var_48 = ((/* implicit */unsigned long long int) max((var_48), (((/* implicit */unsigned long long int) (+(-957337175))))));
                        var_49 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_6 - 1] [i_12])) ? (-1519245670) : (var_10)));
                    }
                    var_50 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (short)-32759)) : (((/* implicit */int) (signed char)-27))));
                }
            }
            arr_68 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_54 [i_6] [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_6]) == (((/* implicit */unsigned long long int) var_0)))))) + ((+(arr_54 [i_6] [(unsigned short)7] [i_6 - 1] [i_6] [i_6] [i_6 + 1])))));
        }
        /* LoopNest 3 */
        for (unsigned int i_20 = 0; i_20 < 11; i_20 += 4) 
        {
            for (unsigned int i_21 = 1; i_21 < 7; i_21 += 4) 
            {
                for (int i_22 = 3; i_22 < 10; i_22 += 4) 
                {
                    {
                        arr_76 [i_1] [i_20] [i_1] |= ((/* implicit */int) arr_2 [i_1]);
                        /* LoopSeq 3 */
                        for (long long int i_23 = 0; i_23 < 11; i_23 += 4) /* same iter space */
                        {
                            var_51 = ((/* implicit */unsigned short) min((var_51), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) ((unsigned long long int) arr_22 [4LL]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_57 [i_23] [i_20] [i_21 + 4] [i_20] [i_1])) + (var_10)))) : (var_8))))))));
                            var_52 = ((/* implicit */int) min((var_52), (min((((((/* implicit */int) arr_59 [i_22 + 1] [i_22 - 3] [i_22 - 1] [(unsigned char)6] [i_22 - 2])) << (((((((/* implicit */int) (short)32767)) % (((/* implicit */int) (unsigned char)134)))) - (71))))), ((-(2147483634)))))));
                            arr_81 [10LL] = ((/* implicit */int) (-(((unsigned long long int) arr_35 [i_21 - 1] [i_20] [i_22 - 1] [(unsigned short)4]))));
                            var_53 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)6452)) % (((/* implicit */int) (unsigned char)17))));
                            var_54 -= ((/* implicit */_Bool) var_13);
                        }
                        for (long long int i_24 = 0; i_24 < 11; i_24 += 4) /* same iter space */
                        {
                            arr_85 [i_1] [i_20] [i_21] [i_21] [i_22] [i_24] = ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)210)) : (2147483646));
                            arr_86 [i_24] [i_20] [i_20] [i_20] [i_1] = ((/* implicit */unsigned short) (+((-9223372036854775807LL - 1LL))));
                            arr_87 [i_20] [i_21] = ((/* implicit */unsigned short) arr_58 [i_1] [i_20] [(unsigned char)5]);
                            var_55 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) 2147483647)) == (arr_23 [(unsigned char)9])))) == (var_10)));
                        }
                        for (long long int i_25 = 0; i_25 < 11; i_25 += 4) /* same iter space */
                        {
                            var_56 *= ((/* implicit */unsigned short) ((arr_83 [i_1] [i_25]) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_1] [i_1] [i_1])))))));
                            var_57 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_89 [i_21 - 1] [i_21 + 3] [i_22 - 3] [i_21 - 1])) > (((/* implicit */int) arr_89 [i_21 + 4] [i_21 - 1] [i_22 + 1] [i_22])))) ? (((/* implicit */int) arr_89 [i_21 + 1] [i_21 + 4] [i_22 + 1] [i_25])) : (((/* implicit */int) min((arr_89 [i_21 + 3] [i_21 + 2] [i_22 - 1] [i_22]), (arr_89 [i_21 - 1] [i_21 + 1] [i_22 + 1] [i_25]))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned long long int i_26 = 0; i_26 < 11; i_26 += 4) 
                        {
                            var_58 -= ((((/* implicit */int) (unsigned char)62)) - (((((/* implicit */int) arr_16 [i_21 - 1] [5U] [(signed char)7])) ^ (((/* implicit */int) arr_16 [i_21 - 1] [i_21 - 1] [i_21])))));
                            arr_94 [i_1] [7U] [i_21] [i_22] [i_26] [i_26] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_52 [i_1] [i_20] [i_20] [i_22] [i_26] [i_21])) ^ (((/* implicit */int) ((short) (short)511))))))));
                            arr_95 [i_1] [i_20] [i_21] [i_22] [i_26] [i_22] = ((/* implicit */short) min((((/* implicit */int) arr_16 [i_1] [i_22 - 3] [i_21 + 3])), (((((/* implicit */int) arr_16 [i_26] [i_22 - 3] [i_21 + 3])) / (((/* implicit */int) arr_16 [i_22] [i_22 - 3] [i_21 + 3]))))));
                        }
                        for (unsigned long long int i_27 = 0; i_27 < 11; i_27 += 3) 
                        {
                            arr_98 [i_20] [i_20] [i_21 + 4] [i_22 - 1] [i_21] = ((/* implicit */unsigned short) max(((-(2147483634))), ((((+(((/* implicit */int) arr_31 [i_1] [i_1] [i_1] [i_1])))) / ((-(713752729)))))));
                            var_59 = ((/* implicit */unsigned short) min((var_59), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) -2147483634)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)86))) : (922841888U))), (((/* implicit */unsigned int) ((unsigned char) arr_38 [i_22 - 2] [i_20] [i_20] [i_22] [i_21 + 1] [i_20]))))))));
                            arr_99 [i_1] [i_20] [i_20] [i_21] [i_22] [i_27] [i_27] = ((/* implicit */unsigned long long int) ((_Bool) ((((arr_72 [i_1] [i_20] [i_21] [i_22]) ^ (((/* implicit */long long int) arr_90 [i_1] [i_20] [i_21] [i_22] [i_27])))) >= (var_13))));
                            arr_100 [i_20] [i_20] [i_21] [10LL] [(_Bool)1] [i_27] = ((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_1]));
                        }
                        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                        {
                            var_60 -= ((/* implicit */long long int) ((unsigned int) (-(max((((/* implicit */long long int) 922841881U)), (var_4))))));
                            arr_104 [7LL] [i_20] [i_22] [7LL] [i_22] [i_28] [i_28] = ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59776))) * (25U))) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)38))));
                        }
                        var_61 = ((/* implicit */unsigned char) max((var_61), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_51 [i_1] [i_20] [i_21] [(unsigned short)6])))))));
                        var_62 -= ((/* implicit */unsigned short) ((((1099511623680LL) / (1099511625728LL))) + (((max((((/* implicit */long long int) arr_70 [i_1])), (-1099511625729LL))) - (((/* implicit */long long int) min((var_2), (((/* implicit */unsigned int) -2042997029)))))))));
                    }
                } 
            } 
        } 
        var_63 = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_71 [i_1])))) % (arr_27 [(short)0] [i_1]))), ((~(37238069061780692LL)))));
        arr_105 [i_1] = ((/* implicit */unsigned int) 713752722);
    }
    /* vectorizable */
    for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
    {
        var_64 = 922841888U;
        arr_109 [i_29] [i_29] = ((/* implicit */long long int) ((signed char) arr_1 [i_29]));
        arr_110 [i_29] = ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) var_7)))));
    }
    var_65 = ((/* implicit */signed char) var_13);
}
