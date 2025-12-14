/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243901
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
    var_14 = ((unsigned long long int) max((((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))), (min((var_8), (((/* implicit */unsigned long long int) -384120678))))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_7))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [(signed char)9] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_4 [i_0 + 1]), (arr_4 [i_0 - 2])))) ? ((+(min((var_8), (((/* implicit */unsigned long long int) var_2)))))) : (((/* implicit */unsigned long long int) arr_3 [3]))));
                    arr_7 [7ULL] = ((/* implicit */signed char) min(((-(((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])))), ((-(((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1]))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 4; i_4 < 7; i_4 += 3) 
            {
                {
                    arr_13 [i_0] [i_3] [i_3] [(_Bool)1] = ((/* implicit */signed char) ((long long int) (~(((((-384120678) + (2147483647))) >> (((((/* implicit */int) arr_11 [i_0] [i_3] [(short)4])) - (59))))))));
                    arr_14 [i_0] [i_0 + 1] [(signed char)4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0 + 1] [i_0 + 1])) ? ((~(((/* implicit */int) (signed char)-83)))) : (((/* implicit */int) arr_2 [i_4 + 2] [i_0 - 2]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned long long int) 2298128385U))))) ? (((((/* implicit */_Bool) (unsigned char)109)) ? (arr_12 [i_0] [i_0] [(unsigned char)6]) : (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) arr_8 [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7354990371342970819LL)) ? (4190882133U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-77))))))));
                    arr_15 [i_3] [i_3] = ((/* implicit */unsigned long long int) max((((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) >= (7354990371342970818LL))) ? (((/* implicit */int) arr_4 [i_0 + 1])) : (min((arr_8 [i_3]), (arr_0 [i_0] [i_4 - 1]))))), ((-(max((384120678), (((/* implicit */int) arr_1 [i_3] [i_0]))))))));
                    arr_16 [i_3] [i_3] [i_0] [i_3] = ((/* implicit */_Bool) (signed char)111);
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (4294967276U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64)))));
        arr_20 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_5])) || (((/* implicit */_Bool) arr_17 [i_5]))));
    }
    for (int i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_7 = 2; i_7 < 11; i_7 += 3) 
        {
            for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
            {
                {
                    arr_32 [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((int) arr_18 [i_7] [i_8]));
                    /* LoopSeq 3 */
                    for (signed char i_9 = 3; i_9 < 10; i_9 += 2) /* same iter space */
                    {
                        arr_36 [i_6] [(short)10] [i_9] [(short)10] = ((/* implicit */signed char) ((-8) != (((/* implicit */int) (unsigned char)253))));
                        arr_37 [i_6] [i_7] [i_9] [i_7] = ((/* implicit */signed char) arr_24 [i_6]);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_10 = 1; i_10 < 9; i_10 += 2) 
                        {
                            arr_40 [8ULL] [i_9] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((unsigned long long int) -1296308830)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_7 - 1] [i_9 - 1])))))));
                            arr_41 [i_9] = ((signed char) max((((unsigned int) arr_26 [i_6])), (min((1U), (arr_24 [i_7])))));
                        }
                        for (signed char i_11 = 3; i_11 < 9; i_11 += 1) 
                        {
                            arr_44 [i_9] [i_7] [11] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) (~(arr_43 [i_9])))))))) ^ (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (arr_29 [i_7] [i_7] [i_7]))) ? (((/* implicit */unsigned long long int) 6664995844957318205LL)) : (arr_31 [i_7 + 1] [i_7 - 2] [i_7 - 2] [10LL])))));
                            arr_45 [i_6] [i_7] [i_6] [i_9 + 1] [i_9] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)42))));
                            arr_46 [i_11] [i_7] [i_8] [i_8] [i_9] [i_7] [9ULL] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) arr_21 [i_7 + 1] [i_9 - 3])) - (((/* implicit */int) arr_21 [i_7 - 2] [i_9 - 2])))));
                        }
                        for (unsigned long long int i_12 = 3; i_12 < 10; i_12 += 4) 
                        {
                            arr_49 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_26 [(unsigned char)10]), (var_0))))) | (-1385198689472539510LL)))) - (min((((/* implicit */unsigned long long int) (signed char)15)), (max((((/* implicit */unsigned long long int) (short)24971)), (arr_31 [i_6] [i_6] [i_8] [i_9])))))));
                            arr_50 [i_6] [i_7 + 1] [i_7 + 1] [i_9] [(signed char)0] [i_9] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_33 [i_7 + 1] [11LL] [i_9 - 2] [i_12 - 3])) ? (arr_28 [i_12 - 3] [i_12 - 1] [i_12 - 3]) : (arr_28 [i_12 - 2] [i_12] [i_12]))));
                            arr_51 [i_8] [i_8] [(short)7] [i_8] [i_8] [i_9] [i_8] = min((((/* implicit */unsigned long long int) min((((int) 10121974)), (((((/* implicit */_Bool) 15U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)2227))))))), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)27146))))), (((((/* implicit */_Bool) var_5)) ? (arr_48 [(signed char)11] [i_8] [(short)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)109))))))));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_13 = 3; i_13 < 10; i_13 += 2) /* same iter space */
                    {
                        arr_54 [i_6] [i_7] [i_8] [i_13] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned char)129)) << (((((/* implicit */int) arr_34 [i_6] [8U])) - (131)))))));
                        arr_55 [i_7] [7ULL] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19114))) : (0ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_13])) && (((/* implicit */_Bool) 384120674))))) : ((-(((/* implicit */int) (unsigned char)146))))));
                    }
                    for (signed char i_14 = 3; i_14 < 10; i_14 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_15 = 3; i_15 < 10; i_15 += 3) 
                        {
                            arr_61 [i_6] [i_7] [i_15] [i_14] = ((/* implicit */long long int) var_6);
                            arr_62 [i_15] = ((/* implicit */unsigned char) arr_59 [i_6] [i_7]);
                            arr_63 [i_15] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_13)) ? (arr_48 [i_7 + 1] [i_14 - 1] [i_15 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_6] [i_7 + 1] [i_15 - 3] [i_7 + 1] [i_15 - 2]))))), (((((((/* implicit */_Bool) (signed char)78)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21201))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_5)))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 3) 
                        {
                            arr_68 [i_14] [i_14] [i_14] [i_14] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) var_9);
                            arr_69 [i_8] [i_16] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (arr_24 [i_14]))) ? (((((/* implicit */_Bool) -775401750284690532LL)) ? (4742815570417714810ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19100))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 523472796U)) && (((/* implicit */_Bool) arr_34 [i_6] [2U]))))))));
                        }
                        arr_70 [i_14] [i_14] [i_8] = ((/* implicit */short) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 3552511696U))));
                        arr_71 [(short)9] [1ULL] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (arr_66 [i_14 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -1398456198))))));
                        arr_72 [0U] [(signed char)7] = ((/* implicit */short) ((signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_17 [i_6]))))) + (((((/* implicit */int) (signed char)26)) >> (((((/* implicit */int) (short)6435)) - (6435))))))));
                    }
                    /* LoopSeq 4 */
                    for (unsigned int i_17 = 0; i_17 < 12; i_17 += 3) 
                    {
                        arr_76 [i_6] [i_6] [i_7] [i_8] [i_8] [11LL] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(-1385198689472539510LL)))), (((12847864155002924762ULL) / (((/* implicit */unsigned long long int) 1385198689472539483LL))))));
                        arr_77 [i_6] [i_6] [i_7 - 2] [i_8] [(signed char)6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)2280))) : (1385198689472539510LL)))) ? (((((/* implicit */_Bool) ((unsigned char) -1385198689472539491LL))) ? (((((/* implicit */_Bool) (signed char)106)) ? (11415267077410761065ULL) : (((/* implicit */unsigned long long int) 523472799U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-19335)) - (((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121)))));
                        arr_78 [i_6] [i_7] [3LL] [i_6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) max((arr_48 [i_6] [(signed char)5] [i_6]), (((/* implicit */unsigned long long int) var_4)))))) ? (-2363681644964163354LL) : (((/* implicit */long long int) ((/* implicit */int) ((max((6283921463407717707ULL), (((/* implicit */unsigned long long int) (short)-2228)))) > (((((/* implicit */_Bool) arr_39 [i_17] [i_17] [2LL] [i_6] [2LL] [i_7] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (17097226709322814567ULL)))))))));
                    }
                    /* vectorizable */
                    for (short i_18 = 0; i_18 < 12; i_18 += 4) 
                    {
                        arr_82 [5U] [i_7] [9U] [(unsigned char)6] = ((/* implicit */short) ((((/* implicit */int) (signed char)83)) == (((((var_12) + (2147483647))) << (((((((/* implicit */int) (signed char)-83)) + (97))) - (14)))))));
                        arr_83 [i_6] [i_7 - 1] = ((/* implicit */long long int) (signed char)64);
                        arr_84 [i_8] [i_7] [i_8] [i_18] [i_18] [(unsigned char)8] = ((/* implicit */short) arr_30 [i_7] [i_7]);
                        arr_85 [i_8] [1U] = ((/* implicit */short) ((arr_31 [i_7] [i_7] [i_7] [i_7 - 2]) != (arr_31 [i_7] [i_7] [i_7] [i_7 + 1])));
                        arr_86 [(unsigned char)5] [i_8] [i_6] [6ULL] [i_6] [i_6] = ((/* implicit */unsigned char) var_12);
                    }
                    /* vectorizable */
                    for (signed char i_19 = 2; i_19 < 9; i_19 += 1) 
                    {
                        arr_91 [i_6] [i_6] [i_19] [i_6] = 4041142968324620538ULL;
                        arr_92 [i_19] = ((/* implicit */int) arr_33 [i_6] [i_7] [i_8] [(signed char)7]);
                        arr_93 [i_6] [i_6] [i_19] [i_8] [i_8] [i_19] = ((/* implicit */unsigned long long int) var_9);
                        arr_94 [i_19] [i_7 - 2] [i_8] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)41)) ? (arr_74 [i_6] [i_7] [(unsigned char)0] [(signed char)1] [(unsigned char)5] [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)108)))))) ? (arr_48 [i_7 - 2] [i_8] [i_19 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17022)))));
                        arr_95 [i_19] [i_7 - 1] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(1385198689472539490LL)))) <= (arr_30 [i_7 + 1] [i_19 - 2])));
                    }
                    for (short i_20 = 0; i_20 < 12; i_20 += 1) 
                    {
                        arr_99 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) 15316355363774601471ULL);
                        arr_100 [i_6] [8ULL] [(signed char)0] [i_8] [i_20] = ((/* implicit */signed char) max((((unsigned int) arr_60 [i_20] [i_7 - 1] [i_20] [i_20] [10] [i_8] [i_20])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((/* implicit */int) (signed char)58)) : ((-(((/* implicit */int) var_9)))))))));
                        arr_101 [i_8] = ((/* implicit */unsigned long long int) arr_79 [i_6] [i_7] [i_7 - 2] [i_8] [i_20]);
                        arr_102 [i_20] [6] [i_6] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) ? (arr_29 [i_6] [i_8] [i_20]) : (arr_29 [11ULL] [i_7 - 2] [i_20]))) + (arr_29 [i_7] [i_6] [i_7 + 1])));
                        arr_103 [i_6] [(signed char)2] [i_6] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)131))) : (8292195022975696313ULL)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))) : (arr_56 [(signed char)2] [(signed char)3] [i_7] [i_7] [i_6])));
                    }
                    arr_104 [i_6] [i_7 - 1] [i_8] = ((/* implicit */long long int) ((signed char) (-(((/* implicit */int) arr_33 [i_7 - 1] [i_7 - 1] [i_8] [i_7 - 2])))));
                }
            } 
        } 
        arr_105 [i_6] = ((/* implicit */unsigned char) (_Bool)1);
    }
}
