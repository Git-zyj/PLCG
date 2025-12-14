/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34904
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(arr_1 [i_0 - 1])))), (min((arr_0 [i_0] [i_0]), (var_0)))))) % (((var_5) / (((/* implicit */unsigned long long int) ((((var_11) + (9223372036854775807LL))) >> (((arr_1 [i_0]) - (3140995008U))))))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                var_13 *= ((/* implicit */short) max((min((var_0), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_1 [i_0 + 1]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    /* LoopSeq 3 */
                    for (short i_4 = 2; i_4 < 9; i_4 += 1) 
                    {
                        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [(unsigned char)3] [i_4]))) : ((~(var_11)))));
                        arr_13 [i_0] [i_1] [i_1] [3ULL] [i_0] [i_1] = ((/* implicit */int) var_11);
                        var_15 *= ((/* implicit */unsigned short) var_4);
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [(signed char)4] [i_4] [i_4] [i_4] [4LL])) ? (((/* implicit */long long int) arr_12 [i_4] [i_4] [i_4 + 1] [i_4] [i_4])) : (var_0)));
                    }
                    for (int i_5 = 2; i_5 < 7; i_5 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned short) arr_5 [i_0]);
                        arr_16 [i_5] [i_0] [i_5] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_10))));
                    }
                    for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        arr_20 [i_3] [i_0] [i_1] = var_8;
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0])))) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3 + 1] [i_0 + 1] [i_0 - 1]))))))));
                        var_19 = ((/* implicit */signed char) (-(arr_11 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_9))));
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((unsigned int) 15091975109274562256ULL)) << (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0])) && (((/* implicit */_Bool) arr_2 [(unsigned short)5] [i_1] [(unsigned short)5]))))))))));
                    }
                    var_22 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1] [i_3 + 1] [2LL])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [2U]))));
                    arr_21 [(unsigned short)3] [1LL] [i_2] [i_0] = ((/* implicit */long long int) 15091975109274562256ULL);
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((unsigned char) arr_8 [(signed char)2] [(unsigned short)4])))));
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (+(((/* implicit */int) arr_9 [i_0] [i_0 + 1])))))));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0] [i_3 + 1] [i_0] [i_3])) || (((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0] [i_3 + 1] [i_0 + 1] [i_7]))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_8 [i_0] [i_0]))))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 3) /* same iter space */
                    {
                        var_27 *= ((/* implicit */unsigned int) ((((((/* implicit */int) var_10)) <= (((/* implicit */int) arr_3 [i_0] [i_2] [i_2])))) ? (var_11) : (((/* implicit */long long int) arr_15 [(unsigned short)0] [i_0] [i_0 - 1] [i_0 - 1]))));
                        var_28 *= (+(arr_11 [4] [4] [i_0 - 1] [i_0 - 1] [i_2] [i_2] [i_2]));
                        var_29 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)57838))));
                        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (arr_11 [0LL] [4] [4] [i_0] [i_0 + 1] [i_2] [0LL]) : (var_9))))));
                    }
                }
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 1; i_9 < 8; i_9 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_10 = 0; i_10 < 10; i_10 += 3) /* same iter space */
                {
                    arr_34 [7LL] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) ((/* implicit */int) (short)30647))) / (min((arr_28 [8LL] [i_0 - 1] [i_0] [i_1] [i_9] [1LL] [(unsigned short)4]), (((/* implicit */unsigned int) var_4))))))));
                    var_31 |= ((((/* implicit */_Bool) ((arr_28 [i_0] [i_1] [i_0] [6] [i_0] [i_9 + 1] [i_9]) * (((unsigned int) var_7))))) ? (max((((/* implicit */long long int) var_7)), (arr_14 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [(unsigned short)4]))) : (((/* implicit */long long int) (+((-(((/* implicit */int) arr_33 [i_0] [i_1] [i_1] [i_9] [0LL] [i_10]))))))));
                }
                /* vectorizable */
                for (unsigned short i_11 = 0; i_11 < 10; i_11 += 3) /* same iter space */
                {
                    var_32 = ((/* implicit */unsigned int) arr_2 [1LL] [i_0] [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */int) var_7)) << (((((arr_11 [(_Bool)1] [(_Bool)1] [i_9] [i_0 - 1] [(_Bool)1] [i_9 - 1] [(_Bool)1]) + (4362768549974499838LL))) - (16LL))))))));
                        var_34 = ((/* implicit */short) (+(((((/* implicit */long long int) ((/* implicit */int) var_8))) & (arr_11 [i_0] [i_1] [i_1] [i_0] [(unsigned short)2] [i_0] [(short)0])))));
                        arr_41 [i_0] [i_0] [i_0] [4LL] [4LL] [i_1] [1LL] = ((/* implicit */unsigned short) ((var_11) > (((/* implicit */long long int) ((/* implicit */int) (signed char)99)))));
                    }
                }
                for (unsigned short i_13 = 0; i_13 < 10; i_13 += 3) /* same iter space */
                {
                    var_35 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_9 + 2] [i_9 - 1] [i_9] [i_9]))) - (arr_22 [i_0] [i_1] [i_0] [(signed char)2] [i_0]))))));
                    var_36 |= ((/* implicit */short) ((((long long int) (~(((/* implicit */int) (unsigned short)5277))))) <= (((/* implicit */long long int) ((/* implicit */int) max((arr_31 [i_0 + 1] [(short)3]), (arr_31 [i_0 - 1] [i_1])))))));
                    var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((signed char) var_6)))));
                }
                var_38 = ((/* implicit */long long int) (((~(((/* implicit */int) ((var_11) >= (((/* implicit */long long int) arr_15 [i_0] [i_1] [i_1] [i_0]))))))) - ((+(((/* implicit */int) var_6))))));
                var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_9] [i_9 + 2] [(unsigned char)8] [i_9] [i_9] [2LL])) >> (((((/* implicit */int) var_7)) - (55281)))))) > (min((((/* implicit */long long int) (-(((/* implicit */int) var_3))))), (((((/* implicit */_Bool) arr_8 [(short)4] [6])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_0))))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_14 = 1; i_14 < 8; i_14 += 2) 
                {
                    var_40 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_1] [i_1] [i_9 - 1])) ? (arr_11 [4LL] [i_9] [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 + 2]) : (arr_11 [2U] [2U] [i_14 - 1] [i_14] [(unsigned short)2] [i_14 + 2] [i_14])));
                    /* LoopSeq 3 */
                    for (long long int i_15 = 0; i_15 < 10; i_15 += 3) 
                    {
                        var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [2U] [i_14 + 2] [i_9 + 1] [i_9 + 1] [i_15] [i_14])) ? (((/* implicit */int) arr_27 [i_14 - 1] [i_14 + 2] [i_0] [7LL] [7LL] [5LL])) : (((/* implicit */int) arr_32 [i_9 + 1] [i_9 + 1] [(unsigned short)7]))));
                        var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_14 [4LL] [i_15] [i_14] [i_9 + 2] [i_0] [i_0] [4LL])) ? (arr_38 [(short)8]) : (((/* implicit */long long int) arr_26 [i_1] [i_1] [i_1] [i_1] [i_1]))))))));
                    }
                    for (short i_16 = 0; i_16 < 10; i_16 += 3) 
                    {
                        var_43 = ((/* implicit */signed char) ((((/* implicit */int) arr_25 [i_9 - 1] [i_14 - 1] [i_14] [i_14] [i_14 - 1])) & (((/* implicit */int) arr_10 [i_0] [i_14] [i_9] [i_1] [i_1] [i_0]))));
                        var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_10))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_26 [(short)8] [i_9 + 1] [8LL] [i_14] [i_14 - 1]))))));
                        arr_53 [i_0] [i_14] [9ULL] [i_0] [i_0] = ((/* implicit */unsigned int) ((int) arr_5 [i_0]));
                    }
                    for (unsigned int i_17 = 3; i_17 < 7; i_17 += 3) 
                    {
                        var_45 = ((((/* implicit */int) arr_49 [i_9 + 2] [i_9 + 2] [i_17 - 3] [i_17 - 3] [i_17])) * (((/* implicit */int) arr_49 [i_9 + 1] [i_17] [i_17 - 1] [(signed char)5] [i_9 + 1])));
                        var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_17] [i_17 - 1] [i_17] [i_14 - 1])) ? (((((/* implicit */_Bool) arr_38 [(_Bool)0])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_17] [i_14 - 1] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [(unsigned char)2] [(unsigned char)2])))));
                        var_47 = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_1] [i_17])) && (((/* implicit */_Bool) arr_9 [7LL] [i_1]))));
                        var_48 *= ((/* implicit */short) var_1);
                    }
                    var_49 *= ((/* implicit */short) ((unsigned long long int) (!(arr_49 [i_0] [i_1] [i_1] [i_14 - 1] [i_14]))));
                }
                for (unsigned char i_18 = 0; i_18 < 10; i_18 += 2) 
                {
                    arr_59 [i_0] [i_1] [4LL] [i_18] [i_0] [0ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (var_9)));
                    arr_60 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_1))) ? (((((/* implicit */int) arr_56 [i_0] [i_0 + 1] [i_1] [i_1] [i_9] [i_18])) - (((/* implicit */int) arr_56 [i_0] [i_1] [i_1] [i_18] [i_18] [i_1])))) : (((/* implicit */int) min((arr_56 [i_0] [i_1] [4U] [(unsigned short)2] [(unsigned short)4] [i_18]), (arr_56 [i_0] [i_1] [i_0] [i_1] [i_9] [i_1]))))));
                    arr_61 [i_0] [i_0 - 1] [i_1] [i_9] [i_0] [8ULL] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))) & (((((/* implicit */_Bool) arr_2 [i_1] [i_1] [6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_1] [i_9]))) : (var_5))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned short) var_4)), (var_8))))))));
                    arr_62 [i_18] [i_9] [i_9] [(signed char)6] [i_18] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [(unsigned char)6] [i_1] [i_9] [i_18] [4])) ? (((int) ((((/* implicit */_Bool) 17592051826688LL)) ? (15091975109274562256ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-71)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_0))) == (((/* implicit */long long int) arr_12 [i_0] [i_1] [i_9] [i_1] [i_1])))))));
                    var_50 = ((/* implicit */long long int) min((var_50), (((/* implicit */long long int) var_2))));
                }
                var_51 = ((/* implicit */unsigned short) var_9);
            }
            var_52 = ((/* implicit */_Bool) min((var_52), (((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_1] [8LL] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_26 [(unsigned short)2] [i_1] [i_1] [i_1] [i_1])))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_28 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_0])))))) | (((((/* implicit */_Bool) min((var_6), (((/* implicit */short) var_10))))) ? (((/* implicit */long long int) -982705407)) : (max((var_9), (((/* implicit */long long int) var_4)))))))))));
            /* LoopSeq 2 */
            for (short i_19 = 0; i_19 < 10; i_19 += 3) 
            {
                arr_65 [i_0] [i_0] [i_0] = ((((((/* implicit */int) var_2)) | (((/* implicit */int) max((var_8), (var_7)))))) != (((/* implicit */int) ((((/* implicit */long long int) arr_12 [i_19] [i_19] [i_19] [5] [i_19])) != ((+(3871625396752052773LL)))))));
                var_53 = ((/* implicit */signed char) min((var_53), (((/* implicit */signed char) var_7))));
            }
            for (long long int i_20 = 0; i_20 < 10; i_20 += 2) 
            {
                var_54 = ((/* implicit */unsigned short) min((var_54), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_15 [i_20] [i_1] [i_1] [i_1]) : (((/* implicit */int) var_2))))) + (min((((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_20] [i_1] [i_1] [i_20])), (var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
                var_55 = ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_25 [i_0] [i_1] [i_1] [9U] [i_1])) : (((/* implicit */int) var_8))))), (((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) ? (max((((/* implicit */long long int) var_6)), (max((arr_64 [i_0] [i_1] [i_0]), (arr_14 [i_0 + 1] [i_0] [i_0 + 1] [(unsigned short)1] [i_1] [(unsigned short)0] [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */int) var_2)) - (((/* implicit */int) arr_35 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0]))))));
                var_56 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [i_0 + 1] [i_0]) / (var_9)))) ? (((((/* implicit */_Bool) arr_6 [i_20] [i_20] [i_0 + 1] [i_0])) ? (arr_0 [i_0 + 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) arr_36 [i_20] [i_0] [(short)5] [i_0] [(unsigned char)8])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_36 [i_20] [i_0] [i_20] [i_0] [i_0])))));
                arr_68 [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) != (((/* implicit */int) ((signed char) arr_47 [i_0 + 1] [i_0 + 1] [i_1] [i_1] [i_20] [i_0] [i_20])))));
            }
        }
        for (unsigned int i_21 = 1; i_21 < 7; i_21 += 1) 
        {
            var_57 |= ((/* implicit */unsigned int) ((var_9) >= (min((((((/* implicit */long long int) arr_26 [(short)7] [i_21] [i_0] [i_0] [i_0])) & (arr_0 [6U] [i_21]))), (var_9)))));
            var_58 = ((/* implicit */unsigned short) min((var_58), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_40 [i_0] [i_21] [i_21] [i_21] [i_0])))) ? (((/* implicit */long long int) (+(((/* implicit */int) (!(var_10))))))) : (((arr_30 [i_21 + 1] [3U] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) var_7))))))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_22 = 1; i_22 < 9; i_22 += 3) /* same iter space */
    {
        var_59 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_22 - 1])) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) var_3))))));
        arr_74 [i_22] |= ((/* implicit */_Bool) arr_64 [i_22] [i_22] [i_22]);
    }
    var_60 = ((/* implicit */unsigned char) var_6);
}
