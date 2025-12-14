/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49328
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? ((~(((/* implicit */int) arr_2 [i_0])))) : (arr_0 [i_1]))))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    var_16 = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_4 [i_0] [(unsigned char)8] [i_0] [i_0])) & (((/* implicit */int) arr_1 [(short)8])))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [2] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0]))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 3; i_4 < 9; i_4 += 2) 
                        {
                            var_17 = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_4 + 1] [6]))))), ((~(((/* implicit */int) arr_7 [(_Bool)1] [i_0] [i_4 - 1] [(unsigned short)1]))))));
                            var_18 = ((/* implicit */short) var_8);
                            var_19 = ((/* implicit */short) min((var_19), (arr_8 [i_0] [i_1] [7U] [7U] [i_4 - 1])));
                            var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1] [i_0] [i_0] [i_4 - 1] [(_Bool)1])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_4 - 1] [i_4])) : (((/* implicit */int) arr_8 [2LL] [2LL] [8LL] [i_4 - 1] [(signed char)3]))))), (var_3)));
                            var_21 = (+((~(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3] [(_Bool)1] [i_3])))));
                        }
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (min((max((((/* implicit */long long int) arr_1 [3ULL])), (arr_3 [i_0] [i_0] [i_0]))), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) & (((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_3] [5ULL] [(unsigned char)8])))))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_8 [(signed char)8] [i_0] [i_1] [(signed char)7] [i_5])), (arr_12 [i_1] [i_1] [i_2] [i_1] [(unsigned char)3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_2] [7LL])) * (((/* implicit */int) arr_10 [(unsigned char)8] [i_1] [i_2] [i_2] [(unsigned char)8] [i_2] [4LL]))))) : ((~(var_6)))))) ? (arr_0 [i_0]) : (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_5] [i_5])) ? (arr_12 [(unsigned short)7] [(short)1] [i_2] [i_5] [i_2]) : (arr_12 [(unsigned short)9] [i_1] [i_1] [(unsigned char)1] [i_1]))))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
                        {
                            var_24 -= ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_8 [i_0] [i_1] [(unsigned short)8] [i_5] [i_6])))), (((/* implicit */int) arr_6 [i_0] [i_5] [5ULL] [(unsigned short)8] [i_6] [i_1]))));
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) arr_12 [i_0] [i_1] [6] [i_5] [i_6]))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) /* same iter space */
                        {
                            var_26 -= ((/* implicit */int) ((((((/* implicit */_Bool) ((((((/* implicit */int) arr_9 [9U] [(short)7] [i_2] [i_5] [i_5] [i_7])) + (2147483647))) << (((((/* implicit */int) arr_5 [(unsigned short)6] [8ULL])) - (1)))))) ? (((/* implicit */int) ((var_3) >= (((/* implicit */unsigned int) arr_0 [(signed char)5]))))) : ((~(((/* implicit */int) arr_5 [i_0] [i_7])))))) == (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_2] [(signed char)5] [i_0] [(short)6] [i_2])) || (((/* implicit */_Bool) arr_15 [(_Bool)1] [i_1] [6LL] [i_7] [i_7] [i_0] [i_0])))))));
                            var_27 = ((/* implicit */signed char) arr_0 [i_7]);
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_1])) * (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_1 [i_0]))))))))));
                            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((var_0) - (((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_0] [i_1] [(unsigned char)1] [i_5] [i_5] [i_7] [i_0])) + (((/* implicit */int) var_11)))))))))))));
                            var_30 = ((/* implicit */_Bool) ((((((((/* implicit */int) arr_7 [2LL] [(signed char)5] [i_2] [i_2])) + (2147483647))) << (((arr_17 [i_7] [i_5]) - (2532183718U))))) & (arr_0 [i_0])));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
                        {
                            var_31 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (arr_0 [i_0]) : (((/* implicit */int) arr_5 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [(short)9] [i_0] [i_0] [i_0] [7LL])))))) : (((((/* implicit */_Bool) arr_3 [i_5] [(short)2] [i_0])) ? (arr_17 [(signed char)2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0])))))));
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_5] [i_8])) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_6)) ? (arr_12 [i_0] [(unsigned short)4] [i_2] [i_0] [8LL]) : (arr_14 [4LL] [i_1] [i_2] [i_5] [6ULL]))))) : (((((/* implicit */_Bool) arr_13 [(short)8] [i_0] [(short)8] [i_0] [(short)8] [i_0] [i_0])) ? (((((((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_5] [i_8] [i_0] [i_5])) + (2147483647))) >> (((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1]) - (18418276326058167871ULL))))) : (((/* implicit */int) arr_5 [i_2] [i_5]))))));
                            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) arr_12 [(unsigned char)3] [(signed char)7] [i_2] [6LL] [(signed char)5]))));
                            var_34 = ((/* implicit */short) ((max((arr_18 [i_8] [i_1] [i_8] [i_5] [(short)9] [i_8]), (arr_18 [(short)7] [(unsigned char)7] [i_2] [5LL] [i_8] [i_5]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_18 [i_1] [i_1] [5U] [5U] [i_1] [i_1]) >= (((/* implicit */unsigned long long int) arr_0 [i_8]))))))));
                            var_35 = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_2] [(unsigned char)0] [i_8]);
                        }
                    }
                }
                for (unsigned int i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    var_36 = ((/* implicit */unsigned short) ((long long int) ((((arr_14 [i_0] [(short)4] [i_0] [i_0] [i_0]) + (2147483647))) << (((((/* implicit */int) var_10)) - (59))))));
                    /* LoopSeq 3 */
                    for (long long int i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [(unsigned short)4] [i_9] [i_10])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_10] [i_10]))))))))));
                        var_38 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_5) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [(unsigned char)0] [i_1]))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_3 [i_10] [i_10] [i_10]))))))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_39 -= ((/* implicit */_Bool) var_11);
                        /* LoopSeq 3 */
                        for (unsigned char i_12 = 1; i_12 < 9; i_12 += 2) 
                        {
                            var_40 = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_16 [(short)0] [(short)4] [(signed char)5] [i_0] [i_9] [i_12 + 1] [i_12 + 1])) / (((/* implicit */int) arr_16 [i_11] [i_11] [i_12] [i_12] [i_12 - 1] [i_12 + 1] [i_12 + 1])))), (((/* implicit */int) ((((/* implicit */int) arr_16 [i_1] [i_1] [i_11] [i_1] [i_11] [i_12 + 1] [i_12])) > (((/* implicit */int) arr_16 [i_12] [i_12] [(unsigned char)1] [i_12] [i_12 + 1] [i_12 + 1] [i_12 - 1])))))));
                            var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) arr_14 [i_12 + 1] [i_12 - 1] [i_12 + 1] [i_12 + 1] [(unsigned short)2]))));
                            var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 1])) ? (arr_29 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_23 [i_0] [i_1] [i_9] [i_11] [7LL]))))))) ? (((((/* implicit */_Bool) arr_0 [i_12 + 1])) ? (((/* implicit */int) arr_28 [i_0] [1LL] [i_9] [i_12 + 1])) : (((/* implicit */int) arr_28 [i_0] [i_0] [i_11] [i_12 - 1])))) : (((/* implicit */int) ((((/* implicit */int) arr_9 [i_12 + 1] [i_12] [i_12] [i_12 - 1] [i_12 - 1] [i_12 - 1])) >= (((/* implicit */int) var_9))))))))));
                        }
                        for (signed char i_13 = 0; i_13 < 10; i_13 += 2) 
                        {
                            var_43 = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [(unsigned char)2] [i_1] [(unsigned char)6] [i_13])) & (((((((/* implicit */int) arr_26 [i_0] [i_1])) + (2147483647))) << (((((((/* implicit */int) arr_26 [i_0] [i_13])) + (99))) - (14)))))));
                            var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [(short)4])) ? (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12)))))) : (((/* implicit */int) var_5))));
                        }
                        for (short i_14 = 0; i_14 < 10; i_14 += 1) 
                        {
                            var_45 = (+(max((((/* implicit */long long int) var_8)), (arr_29 [i_0] [i_9]))));
                            var_46 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_9] [i_11] [i_14])) || (((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_9] [i_11] [0U])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_1] [i_9] [i_11] [(short)5] [(_Bool)1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)54)))))));
                            var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_9] [i_11] [i_9] [i_9] [i_14])) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [i_0] [i_14] [i_0] [i_0])) : (((/* implicit */int) arr_16 [1LL] [i_1] [i_9] [i_9] [i_1] [i_9] [i_1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [(unsigned short)0] [i_1] [(unsigned short)0] [(unsigned short)0] [i_14] [(unsigned short)0] [i_1]))) + (arr_21 [i_0] [i_0] [i_9])))) ? (((/* implicit */int) arr_10 [(signed char)5] [i_1] [i_1] [(signed char)9] [(signed char)6] [(signed char)5] [(signed char)9])) : (((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_9] [9LL])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12)))))) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_9] [i_9] [i_11] [i_14]))));
                        }
                        var_48 = ((/* implicit */unsigned short) var_5);
                        var_49 = ((/* implicit */short) max((var_49), (((/* implicit */short) arr_10 [i_0] [i_1] [i_9] [i_1] [i_0] [i_9] [i_0]))));
                        var_50 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_18 [i_0] [i_0] [(short)4] [i_1] [i_9] [i_11])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [(short)1] [i_0] [7LL] [i_1] [(unsigned short)0] [6ULL])) ? (((/* implicit */int) arr_25 [i_0] [i_9])) : (((/* implicit */int) arr_19 [i_9]))))) : (((long long int) var_14))));
                    }
                    for (signed char i_15 = 1; i_15 < 6; i_15 += 3) 
                    {
                        var_51 = ((/* implicit */short) max((var_51), (((/* implicit */short) var_12))));
                        var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_25 [i_0] [i_15 + 2]), (arr_25 [i_0] [i_15 + 2])))) ? (((/* implicit */int) ((((/* implicit */int) arr_25 [i_0] [i_15 + 3])) >= (((/* implicit */int) arr_25 [i_0] [i_15 + 1]))))) : (((((/* implicit */int) var_2)) & (((/* implicit */int) arr_25 [i_0] [i_15 + 1]))))));
                        var_53 -= ((/* implicit */signed char) ((arr_31 [(_Bool)1] [i_1] [2] [2] [2] [i_1] [i_1]) >> (((var_3) - (2231463670U)))));
                        var_54 -= ((/* implicit */short) arr_36 [0ULL] [0ULL] [i_9] [i_15] [i_0] [i_1] [(short)3]);
                    }
                    var_55 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_1] [i_1] [i_9] [i_9] [i_9])) ? (((/* implicit */long long int) arr_12 [3LL] [i_1] [i_1] [i_1] [5ULL])) : (arr_32 [i_1] [i_0] [i_1] [i_1] [2ULL] [i_9])))) ? (arr_18 [i_0] [(signed char)8] [(unsigned char)1] [i_1] [(short)2] [i_9]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [6LL] [(_Bool)1] [i_1] [i_1] [i_1] [i_0] [(short)6])) | (arr_12 [(_Bool)1] [i_1] [1] [i_1] [i_1]))))));
                }
                for (short i_16 = 0; i_16 < 10; i_16 += 3) 
                {
                    var_56 = ((/* implicit */unsigned long long int) arr_23 [i_0] [i_0] [(short)3] [i_0] [i_1]);
                    var_57 = ((/* implicit */short) min((arr_32 [i_16] [i_1] [(short)7] [(short)4] [i_1] [i_16]), (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_0] [i_1] [(signed char)4] [(unsigned short)8] [6LL] [i_16])))))));
                }
                var_58 = ((int) -3145755371618773181LL);
                var_59 -= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((long long int) arr_35 [i_1]))))) ? (var_13) : (((/* implicit */long long int) (+(((/* implicit */int) var_2)))))));
            }
        } 
    } 
    var_60 -= ((/* implicit */_Bool) var_6);
    var_61 -= ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 2 */
    for (unsigned int i_17 = 0; i_17 < 22; i_17 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_18 = 0; i_18 < 22; i_18 += 2) 
        {
            var_62 = ((/* implicit */unsigned char) arr_48 [i_17] [i_17] [i_18]);
            var_63 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_45 [i_18] [16LL])) ? (((/* implicit */int) arr_45 [i_17] [i_18])) : (((/* implicit */int) arr_48 [i_17] [i_17] [i_17])))), (((((/* implicit */int) arr_48 [i_18] [i_18] [(signed char)20])) & (((/* implicit */int) arr_48 [i_17] [i_18] [i_17]))))));
            var_64 = ((/* implicit */unsigned long long int) arr_47 [(unsigned short)12] [i_18]);
            /* LoopNest 3 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (unsigned char i_20 = 1; i_20 < 21; i_20 += 2) 
                {
                    for (int i_21 = 0; i_21 < 22; i_21 += 4) 
                    {
                        {
                            var_65 = ((/* implicit */int) ((unsigned long long int) min((arr_50 [i_17] [i_17] [i_20 - 1]), (((/* implicit */long long int) var_5)))));
                            var_66 -= ((/* implicit */short) (~(arr_54 [i_20 - 1] [12U] [i_20 + 1] [i_20] [i_21] [i_20] [(short)10])));
                        }
                    } 
                } 
            } 
        }
        var_67 = ((((/* implicit */_Bool) ((var_0) << (((((((/* implicit */int) arr_45 [i_17] [i_17])) ^ (((/* implicit */int) arr_47 [i_17] [i_17])))) - (51189)))))) ? (((/* implicit */int) max((arr_49 [i_17]), (arr_46 [i_17] [i_17] [i_17])))) : ((~(((/* implicit */int) arr_51 [i_17] [(unsigned char)15] [i_17] [i_17])))));
        var_68 = ((/* implicit */signed char) max((arr_44 [(signed char)5] [i_17]), (((/* implicit */unsigned long long int) ((arr_50 [i_17] [i_17] [i_17]) << (((arr_50 [i_17] [i_17] [i_17]) - (4425638721268268333LL))))))));
    }
    for (unsigned long long int i_22 = 0; i_22 < 22; i_22 += 2) 
    {
        var_69 = ((/* implicit */long long int) max((var_69), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_56 [(unsigned short)6] [i_22])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) max((arr_57 [i_22] [i_22]), (arr_57 [i_22] [i_22])))))))));
        var_70 = min((((((/* implicit */int) arr_46 [(unsigned short)10] [(unsigned short)10] [i_22])) + (((/* implicit */int) arr_46 [i_22] [i_22] [(unsigned char)6])))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_55 [i_22] [(short)17]), (((/* implicit */unsigned short) arr_46 [i_22] [(unsigned short)3] [(unsigned char)1])))))) == (var_6)))));
        var_71 = ((/* implicit */unsigned char) arr_47 [i_22] [(unsigned char)3]);
        var_72 -= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((arr_50 [i_22] [i_22] [i_22]) + (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_22] [i_22])))))) ? ((+(((/* implicit */int) arr_49 [i_22])))) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((signed char) arr_47 [i_22] [i_22])))));
    }
}
