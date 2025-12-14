/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23542
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
    var_13 = ((/* implicit */long long int) var_5);
    var_14 = ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */long long int) var_11)), (var_3))));
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) var_7))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                var_16 = ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))))), (arr_0 [i_1] [i_1]))) & ((+(1468900717U)))));
                var_17 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (+(576460752303423487LL)))))) + (4565403730926173532ULL)));
            }
            for (signed char i_3 = 2; i_3 < 12; i_3 += 3) 
            {
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    arr_15 [i_0] [i_0] [i_1] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */short) arr_7 [i_1])), (arr_10 [i_0] [i_4] [i_4] [i_4])))), (((((/* implicit */_Bool) arr_3 [1LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (6716276133817332160LL)))))) ? (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])) : (max((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_3] [i_3])), ((-(var_1)))))));
                    var_18 = ((/* implicit */short) min((((arr_6 [i_1] [i_1] [i_3 - 2] [i_3 - 2]) & (arr_6 [i_1] [i_1] [i_1] [i_1]))), (((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_0] [i_3])) ? (arr_6 [i_1] [i_3] [i_3] [i_1]) : (arr_6 [i_1] [i_0] [i_4] [i_4])))));
                    var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_0 [i_0] [i_3]))));
                }
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1] [i_1])) ? (((arr_4 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)12)))))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65513)))))));
                arr_16 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (-((((!(((/* implicit */_Bool) arr_5 [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_3 - 1] [i_3 + 1] [i_3]))) : (((unsigned int) arr_3 [i_1]))))));
                /* LoopSeq 4 */
                for (short i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (min(((-(((/* implicit */int) arr_7 [i_1])))), (((/* implicit */int) arr_7 [i_1])))) : (((/* implicit */int) arr_3 [i_1]))));
                    var_22 = ((/* implicit */unsigned int) (signed char)125);
                    var_23 = ((/* implicit */_Bool) (~(max((((var_5) ^ (arr_8 [i_1]))), (((/* implicit */unsigned int) var_9))))));
                    var_24 = ((/* implicit */unsigned long long int) arr_7 [i_1]);
                    arr_20 [i_1] [i_1] [i_1] = arr_9 [i_1] [i_1] [i_5];
                }
                for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    arr_24 [i_6] [i_3 - 1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) arr_19 [i_1] [(unsigned char)8] [i_3] [i_3]);
                    arr_25 [i_0] [i_0] [i_1] [i_1] [i_3] [(signed char)9] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_18 [i_0] [i_1] [i_0] [i_0] [i_3] [i_0])))) : (arr_0 [i_6] [i_1]))));
                    arr_26 [i_0] [i_3] [i_0] |= ((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_0]);
                    var_25 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_3 - 2] [i_6])) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_6] [i_3 - 2])) || (((/* implicit */_Bool) var_11))))))) >= (((/* implicit */int) ((short) arr_22 [i_1] [i_1] [i_1])))));
                }
                /* vectorizable */
                for (signed char i_7 = 1; i_7 < 11; i_7 += 3) 
                {
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_3 + 1] [i_1] [i_7 + 2])) & (((/* implicit */int) arr_22 [i_3 + 1] [i_1] [i_7 + 2]))));
                    arr_31 [i_1] [i_1] = ((/* implicit */short) ((unsigned long long int) arr_23 [i_3] [i_1] [i_7 + 1] [i_7 + 1] [(short)1]));
                    /* LoopSeq 3 */
                    for (short i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        var_27 = ((/* implicit */signed char) arr_13 [i_1] [i_3 - 1]);
                        arr_35 [i_1] = ((/* implicit */signed char) ((_Bool) arr_21 [i_0] [i_7 + 2] [i_3] [i_3 + 1]));
                        var_28 = ((/* implicit */long long int) max((var_28), ((+(((((/* implicit */long long int) arr_6 [i_0] [i_1] [i_1] [(_Bool)1])) & (var_0)))))));
                    }
                    for (short i_9 = 0; i_9 < 13; i_9 += 3) 
                    {
                        var_29 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (short)-41))));
                        var_30 = ((/* implicit */_Bool) (+((~(((/* implicit */int) var_10))))));
                        arr_40 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_3 + 1] [i_7 + 1] [i_7 - 1])) >= (((/* implicit */int) arr_22 [i_3 + 1] [i_7 + 1] [i_7 - 1]))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        var_31 = ((/* implicit */_Bool) arr_21 [i_0] [i_0] [6] [i_7]);
                        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) var_3))) ? (((/* implicit */int) arr_18 [i_0] [i_1] [i_10] [i_7 + 2] [i_7 + 2] [i_10])) : (((/* implicit */int) ((((/* implicit */int) arr_39 [i_0] [i_0])) != (((/* implicit */int) arr_21 [i_0] [i_1] [i_3] [i_3])))))));
                    }
                    var_33 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_21 [i_3] [i_1] [i_1] [i_7 + 2])) ? (arr_28 [i_0] [i_0] [i_3 - 1] [0ULL]) : (((/* implicit */unsigned int) arr_6 [i_1] [i_1] [i_3] [i_3])))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_3 - 1] [i_1] [i_1] [i_3 + 1] [i_1])))));
                }
                for (signed char i_11 = 3; i_11 < 9; i_11 += 3) 
                {
                    var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((unsigned short) arr_1 [i_0])))));
                    arr_45 [i_11 + 4] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) max((arr_30 [i_3] [i_3]), (arr_30 [i_0] [i_1])));
                    var_35 |= ((/* implicit */unsigned short) arr_30 [i_0] [i_11 - 3]);
                }
            }
            /* vectorizable */
            for (unsigned short i_12 = 0; i_12 < 13; i_12 += 3) 
            {
                arr_48 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))));
                var_36 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_8 [i_1]))) && (((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_0] [i_1] [i_12] [i_12] [i_12]))));
            }
            for (short i_13 = 0; i_13 < 13; i_13 += 2) 
            {
                var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned int) ((var_0) + (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_0] [i_0] [i_1] [i_0] [i_0]))))))), (var_3))))));
                arr_53 [(signed char)9] [i_13] [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((short)-2), (((/* implicit */short) min((arr_1 [i_13]), (((/* implicit */signed char) arr_14 [i_0] [i_1] [i_1] [i_1]))))))))));
            }
            var_38 += ((/* implicit */unsigned char) var_7);
            var_39 = ((/* implicit */unsigned short) arr_22 [i_0] [i_1] [i_1]);
        }
        for (signed char i_14 = 0; i_14 < 13; i_14 += 1) /* same iter space */
        {
            var_40 = ((((/* implicit */_Bool) (~(var_3)))) ? ((+(((/* implicit */int) arr_47 [i_0])))) : (((/* implicit */int) min((((/* implicit */short) arr_47 [i_14])), (arr_51 [i_0] [i_14])))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_15 = 1; i_15 < 10; i_15 += 2) 
            {
                arr_58 [i_14] [i_14] [i_14] = ((/* implicit */long long int) (~((-(((/* implicit */int) arr_57 [i_14]))))));
                arr_59 [i_0] [11LL] [i_0] [i_14] = ((/* implicit */signed char) var_4);
            }
        }
        for (unsigned int i_16 = 0; i_16 < 13; i_16 += 3) 
        {
            var_41 = arr_29 [2LL];
            var_42 = min((((signed char) ((short) var_2))), (min((min((arr_32 [i_0] [i_16] [i_0] [i_16] [i_0] [i_0] [i_0]), (var_2))), (((signed char) var_0)))));
            var_43 = ((/* implicit */unsigned char) ((((((arr_33 [i_0] [i_16] [i_16] [i_16] [i_16]) == (((/* implicit */long long int) arr_6 [i_16] [i_16] [i_0] [i_0])))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_49 [i_0]))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [(short)3] [i_16]))) : (arr_33 [i_16] [i_16] [9] [i_16] [i_0]))))) * ((-(min((arr_27 [i_16]), (((/* implicit */long long int) arr_46 [i_0] [i_16] [i_16] [i_16]))))))));
        }
        for (unsigned long long int i_17 = 0; i_17 < 13; i_17 += 3) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_18 = 0; i_18 < 13; i_18 += 3) 
            {
                var_44 = ((/* implicit */unsigned int) max((var_44), (((/* implicit */unsigned int) (unsigned char)45))));
                arr_69 [i_17] [i_17] [i_18] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) var_10)), (((((/* implicit */int) var_4)) << (((/* implicit */int) arr_62 [i_18]))))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_19 [i_18] [i_18] [i_17] [i_17])) : (((/* implicit */int) arr_19 [i_18] [i_17] [i_18] [i_18])))) : (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)12))))));
                var_45 ^= ((/* implicit */_Bool) max((((min((((/* implicit */unsigned int) arr_19 [i_0] [i_0] [i_0] [i_0])), (arr_0 [(signed char)11] [(signed char)11]))) + (((/* implicit */unsigned int) (~(((/* implicit */int) arr_30 [i_17] [i_17]))))))), (arr_56 [i_18] [i_17] [i_0] [i_0])));
                arr_70 [i_0] [i_0] [i_18] [i_18] = ((/* implicit */short) arr_44 [i_0] [i_0] [5LL] [i_0]);
            }
            for (long long int i_19 = 0; i_19 < 13; i_19 += 3) 
            {
                var_46 &= ((/* implicit */unsigned short) arr_47 [i_17]);
                var_47 = ((/* implicit */unsigned int) arr_42 [(_Bool)0] [i_17] [i_19] [i_19] [i_19]);
                var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)0)))))));
            }
            /* vectorizable */
            for (signed char i_20 = 3; i_20 < 12; i_20 += 3) 
            {
                var_49 = ((/* implicit */unsigned long long int) arr_56 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_20 - 2]);
                var_50 = ((/* implicit */short) max((var_50), (((/* implicit */short) ((((/* implicit */int) arr_73 [i_0] [i_0] [i_0])) != ((+(((/* implicit */int) var_2)))))))));
                var_51 = ((/* implicit */unsigned short) arr_66 [i_20 - 3] [i_20 - 3] [i_20 - 1] [i_20 - 3]);
            }
            for (unsigned char i_21 = 3; i_21 < 9; i_21 += 3) 
            {
                var_52 = ((signed char) ((arr_61 [i_21] [i_21 - 3]) ? ((-(var_3))) : (((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_17] [i_0] [i_21]))) / (var_3)))));
                var_53 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) max((arr_27 [i_21 + 3]), (((/* implicit */long long int) var_2))))))));
                var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */long long int) ((short) arr_41 [i_21 + 2] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (max((((/* implicit */long long int) (short)-5382)), (arr_27 [i_17]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_21]))))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((/* implicit */int) max((arr_49 [i_21]), (((/* implicit */signed char) arr_62 [i_0]))))))))));
                var_55 *= ((((/* implicit */_Bool) 1190545233269369515LL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (short)-24221)));
            }
            var_56 = ((/* implicit */_Bool) max((var_56), (arr_62 [i_0])));
            var_57 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_72 [i_17] [i_17] [i_17]))) : (arr_60 [i_0] [i_0])))) ? (((/* implicit */int) arr_23 [i_17] [i_0] [(unsigned char)0] [i_0] [i_0])) : (((/* implicit */int) arr_73 [i_0] [i_0] [i_0]))))) ? (max((min((4095U), (3592723447U))), (((/* implicit */unsigned int) arr_71 [i_0] [i_0] [i_17] [i_17])))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_66 [i_0] [i_0] [i_0] [i_17]))) & (((/* implicit */int) arr_66 [i_0] [i_0] [i_0] [i_17]))))));
        }
        var_58 = ((unsigned int) (signed char)0);
        var_59 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-39))));
        var_60 = ((/* implicit */short) var_1);
    }
    for (unsigned int i_22 = 2; i_22 < 18; i_22 += 1) 
    {
        var_61 -= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_82 [i_22])) ? (arr_82 [i_22 + 1]) : (arr_82 [i_22])))) ? (((((/* implicit */_Bool) arr_80 [i_22 + 1] [i_22 + 1])) ? (((/* implicit */int) arr_80 [i_22] [i_22])) : (arr_82 [i_22 + 1]))) : (arr_81 [i_22 - 2] [i_22 - 2]))));
        var_62 = ((/* implicit */int) min((var_62), ((~(((((/* implicit */_Bool) max((arr_82 [i_22]), (arr_81 [i_22 - 2] [i_22 - 2])))) ? (min((125829120), (((/* implicit */int) arr_80 [i_22 + 1] [i_22 - 1])))) : (min((arr_82 [i_22]), (((/* implicit */int) arr_80 [0ULL] [0ULL]))))))))));
        var_63 = ((/* implicit */short) max((var_63), (((/* implicit */short) arr_82 [i_22]))));
    }
    var_64 = ((/* implicit */short) (+(var_0)));
}
