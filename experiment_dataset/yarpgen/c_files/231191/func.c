/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231191
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
    var_12 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)5875))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] [(signed char)6] = ((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (-5LL) : (((arr_1 [i_0]) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)-27934)) : (((/* implicit */int) (_Bool)0))))))));
        arr_3 [i_0] = ((/* implicit */signed char) (!(min(((_Bool)0), ((_Bool)0)))));
    }
    for (long long int i_1 = 2; i_1 < 16; i_1 += 2) 
    {
        arr_7 [i_1 - 1] = (-((-(arr_6 [i_1 + 1]))));
        arr_8 [i_1 + 1] = ((var_6) / ((+(((arr_4 [i_1]) + (arr_6 [(_Bool)1]))))));
        arr_9 [(short)7] = arr_6 [i_1 - 1];
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_4 = 2; i_4 < 14; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        {
                            arr_21 [i_2] [i_2] [i_3] [(short)12] [i_2] [i_3] [i_3] = ((((/* implicit */_Bool) min((arr_12 [i_5]), (arr_0 [i_1 - 2])))) ? (arr_12 [i_3]) : (((min((((/* implicit */long long int) var_2)), (var_6))) & (arr_19 [i_1] [i_1] [i_1] [i_1] [i_1]))));
                            arr_22 [i_1] = min(((signed char)-87), (((/* implicit */signed char) ((_Bool) arr_1 [i_1 - 2]))));
                            arr_23 [(_Bool)1] [(_Bool)1] = max((max((max((((/* implicit */long long int) arr_5 [i_4])), (arr_4 [i_1]))), (min((arr_10 [i_1] [i_3]), (((/* implicit */long long int) (short)14085)))))), (((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */short) var_5)), (arr_20 [i_2] [i_5]))))))));
                            arr_24 [i_1] [i_2] [(_Bool)1] [i_5] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) -1897788319198486829LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)87)))), (((((/* implicit */int) (short)(-32767 - 1))) / ((-(((/* implicit */int) (short)255))))))));
                            arr_25 [i_1] [i_3] [i_4] [i_5] = arr_14 [i_1] [i_1 - 1] [1LL] [i_1];
                        }
                    } 
                } 
                arr_26 [i_1] [(_Bool)1] [i_1 - 1] [i_1 - 1] = arr_17 [i_1] [i_2] [13LL] [i_3];
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_30 [i_1] = max(((-(var_3))), (((/* implicit */long long int) ((arr_29 [i_1 + 1] [i_1 - 1] [i_1] [i_1 + 1]) ? (((/* implicit */int) arr_29 [i_1 - 1] [i_1 - 2] [i_1] [(_Bool)1])) : (((/* implicit */int) arr_29 [i_1 + 1] [i_1 - 2] [i_1] [i_1]))))));
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        arr_36 [i_1 - 2] = max((((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ (arr_12 [i_1 - 2]))), ((+(arr_12 [i_1 - 1]))));
                        arr_37 [i_1] [i_2] [i_8] [i_2] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_12 [i_2]) : (max((arr_4 [(short)5]), (((/* implicit */long long int) var_10))))))) ? (arr_10 [i_1 - 2] [i_1 - 1]) : ((-(arr_0 [i_1 + 1])))));
                    }
                    for (long long int i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        arr_41 [i_1] [i_9] [i_1] [i_1] [i_9] = ((max((((var_2) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_2] [i_6]))))), (max((arr_1 [i_1]), (((/* implicit */long long int) arr_33 [i_2] [11LL] [i_7] [i_9])))))) + (((((/* implicit */_Bool) min((1699600695402809583LL), (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_34 [(_Bool)1] [i_9] [i_6] [i_9] [i_9] [i_9]), (var_2))))) : (min((1752170229050546059LL), (((/* implicit */long long int) arr_33 [(signed char)12] [(signed char)12] [(signed char)12] [i_9])))))));
                        arr_42 [i_2] [i_2] [i_6] [i_6] [(short)6] = ((/* implicit */long long int) arr_29 [i_9] [i_6] [i_2] [i_1]);
                        arr_43 [i_1] [i_2] [i_2] [i_1] [10LL] [i_7] [i_9] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_17 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1])))) ? (((/* implicit */int) min((arr_17 [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_1 - 1]), (arr_17 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 2])))) : (((((/* implicit */_Bool) arr_17 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_17 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) arr_17 [i_1 + 1] [i_1 - 1] [i_1 - 2] [i_1 - 2]))))));
                    }
                    arr_44 [i_2] [i_6] = ((/* implicit */signed char) arr_31 [i_1 - 1] [i_2] [i_1 - 1] [i_6] [16LL] [i_7]);
                    arr_45 [i_1] [i_2] = ((/* implicit */short) max((((/* implicit */long long int) min((arr_5 [i_1 + 1]), (arr_5 [i_1 + 1])))), (max((((/* implicit */long long int) min((arr_16 [(_Bool)1] [i_2] [i_6]), (arr_29 [(short)5] [i_2] [i_1] [i_6])))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1 - 2] [(_Bool)1]))) : (arr_1 [i_1])))))));
                    arr_46 [i_1 - 1] [i_2] [i_6] [i_7] = ((/* implicit */signed char) arr_10 [(signed char)11] [i_2]);
                }
            }
            arr_47 [i_1] = var_4;
            arr_48 [i_1] = ((/* implicit */signed char) min(((-(((/* implicit */int) arr_17 [i_2] [i_1 - 1] [2LL] [(_Bool)1])))), (((/* implicit */int) (((!(((/* implicit */_Bool) (signed char)-126)))) && (arr_16 [i_1 + 1] [i_1 + 1] [i_1]))))));
            arr_49 [i_1] = ((/* implicit */long long int) ((((_Bool) arr_28 [i_1] [i_1 - 1])) || (((/* implicit */_Bool) ((arr_19 [i_1] [i_2] [i_1] [i_1 - 1] [i_1]) / (arr_14 [i_1] [i_1] [i_2] [i_1]))))));
        }
        for (long long int i_10 = 0; i_10 < 17; i_10 += 2) /* same iter space */
        {
            arr_54 [i_10] = ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) ^ (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_1] [(short)16]))) : (arr_4 [i_1 - 1]))) | (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_1] [i_1] [i_1] [i_10] [i_10]))))));
            arr_55 [i_10] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)32763))));
            arr_56 [i_1] [i_10] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_29 [i_1 - 2] [i_1 - 2] [(short)14] [i_10]) ? (((/* implicit */int) arr_32 [5LL] [i_1 - 1] [1LL] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) (short)32767)) ? (arr_50 [i_1] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_31 [i_10] [i_10] [i_10] [i_10] [6LL] [i_10])), (var_0)))))))) ? (((/* implicit */long long int) max((((/* implicit */int) arr_39 [i_1])), (((((/* implicit */int) arr_33 [i_1] [i_1 - 2] [i_10] [i_10])) ^ (((/* implicit */int) (_Bool)1))))))) : (var_11)));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_11 = 0; i_11 < 17; i_11 += 2) 
            {
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 17; i_12 += 2) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            arr_64 [i_1] [i_10] [i_1] [i_11] [i_1] [i_13] = ((/* implicit */short) arr_59 [i_10] [(_Bool)1] [i_12] [i_10]);
                            arr_65 [i_1] [i_10] [i_10] [16LL] [i_13] [i_13] [i_10] = ((/* implicit */short) ((arr_14 [i_1 - 2] [i_10] [i_12] [i_13]) ^ (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                            arr_66 [(_Bool)0] [i_10] [i_11] [i_12] [i_13] [14LL] = ((/* implicit */signed char) arr_61 [i_12] [i_1 + 1] [i_1] [i_1 - 2]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_14 = 1; i_14 < 14; i_14 += 3) 
                {
                    arr_69 [i_1] [i_14] [i_11] [i_14 + 1] = ((/* implicit */long long int) arr_29 [i_1] [i_1] [(_Bool)1] [i_14]);
                    arr_70 [i_11] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_14 + 2] [i_14 + 1])) ? (var_7) : (arr_11 [i_1 - 1] [i_14 + 2] [i_14 + 3])));
                }
                /* LoopSeq 3 */
                for (long long int i_15 = 0; i_15 < 17; i_15 += 2) 
                {
                    arr_73 [i_1 - 2] [i_1 - 2] [i_11] [i_10] = (!(((/* implicit */_Bool) ((long long int) var_6))));
                    arr_74 [i_1 - 2] [i_10] = (!((_Bool)0));
                }
                for (signed char i_16 = 0; i_16 < 17; i_16 += 3) /* same iter space */
                {
                    arr_77 [(short)8] [i_16] [i_16] [(short)8] = ((/* implicit */long long int) arr_62 [i_10] [i_16]);
                    arr_78 [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_1] [i_1 - 2] [(_Bool)1] [i_16] [(_Bool)1])) ? (((/* implicit */int) arr_16 [i_1] [i_1 - 1] [(_Bool)1])) : (((/* implicit */int) arr_32 [i_1] [i_1 - 1] [i_11] [i_1] [i_1]))));
                    arr_79 [i_11] [i_10] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1405802849704334450LL))))) * (((/* implicit */int) var_0))));
                }
                for (signed char i_17 = 0; i_17 < 17; i_17 += 3) /* same iter space */
                {
                    arr_83 [(_Bool)1] [i_10] = ((/* implicit */short) ((var_6) / (arr_12 [i_1 - 2])));
                    arr_84 [i_11] [i_17] = ((/* implicit */long long int) arr_62 [i_11] [i_1]);
                    arr_85 [(signed char)8] [i_10] [i_10] [i_11] [(_Bool)1] = ((((((/* implicit */_Bool) var_6)) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_10] [i_10])) ? (((/* implicit */int) arr_39 [i_10])) : (((/* implicit */int) arr_16 [i_1] [i_1] [(signed char)3]))))));
                    arr_86 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_72 [i_1] [i_17] [i_11] [i_10] [i_1] [i_1]))));
                    arr_87 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_11] [i_1 - 1] [i_1] [i_1 - 2] [i_1 + 1] [(_Bool)1]))) * (arr_6 [i_1])));
                }
                arr_88 [i_1 - 2] [i_10] [i_10] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((arr_13 [i_1] [i_1] [i_1]) + (8864792961424798449LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_6)));
                arr_89 [(_Bool)1] [i_10] [i_1 - 2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((20LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
            }
            arr_90 [i_1 + 1] = ((/* implicit */long long int) ((arr_58 [i_1] [i_10] [i_1 + 1]) ? (((/* implicit */int) ((arr_58 [i_1] [i_1] [i_1 + 1]) || (arr_58 [i_1] [i_10] [i_1 - 2])))) : ((+(((/* implicit */int) arr_58 [i_1 - 2] [i_10] [i_1 - 2]))))));
        }
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        arr_94 [i_18] = ((/* implicit */_Bool) -1LL);
        arr_95 [i_18] = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_53 [i_18] [i_18])), (arr_4 [(_Bool)1])));
    }
}
