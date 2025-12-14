/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36257
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) ((arr_0 [7ULL]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) >= (((/* implicit */int) var_1)))))) : (max((3210277416305840842ULL), (15236466657403710773ULL))))));
        var_12 ^= ((/* implicit */long long int) var_0);
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        {
                            arr_18 [1] [1] [(short)14] [i_4] [i_4] &= ((/* implicit */signed char) var_8);
                            arr_19 [12U] [i_2] = ((/* implicit */_Bool) (-(arr_11 [i_3] [i_1] [i_5] [i_4 + 1])));
                            arr_20 [i_5] [i_2] = ((/* implicit */unsigned char) (~(arr_15 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])));
                            arr_21 [(unsigned short)15] [i_2] [1ULL] [(unsigned short)10] [1ULL] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                            var_13 = ((/* implicit */short) ((unsigned long long int) arr_10 [i_2]));
                        }
                    } 
                } 
            } 
            arr_22 [i_1] [i_1] [i_2] &= ((/* implicit */signed char) ((((var_0) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)1539)))) % (((/* implicit */int) arr_10 [i_1]))));
            /* LoopSeq 2 */
            for (signed char i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
            {
                var_14 = ((/* implicit */signed char) ((((-978254579980308684LL) + (9223372036854775807LL))) << (((3210277416305840842ULL) - (3210277416305840842ULL)))));
                var_15 |= ((/* implicit */short) ((((/* implicit */_Bool) 3210277416305840868ULL)) ? (2120797128711787677ULL) : (((/* implicit */unsigned long long int) -1132090810022788214LL))));
            }
            for (signed char i_7 = 0; i_7 < 25; i_7 += 4) /* same iter space */
            {
                /* LoopSeq 3 */
                for (int i_8 = 1; i_8 < 23; i_8 += 4) 
                {
                    arr_32 [i_1] [2LL] [i_8] [i_1] [i_8] [i_1] = ((/* implicit */unsigned int) ((long long int) (-(528243779))));
                    var_16 = ((/* implicit */long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) arr_31 [(_Bool)1] [i_8 + 1] [(_Bool)1] [i_8] [i_8 + 2] [i_8 + 2]))));
                    var_17 |= ((/* implicit */int) var_4);
                    var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [2] [(signed char)12])) ? (((/* implicit */unsigned long long int) -7879536770753520277LL)) : (var_6))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [20LL] [i_8] [20LL] [i_8])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_30 [0LL] [i_2] [i_7] [i_8 - 1])))))));
                    arr_33 [i_8] [i_2] [i_2] [i_2] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) var_4))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (var_10))) : (((/* implicit */int) ((signed char) var_1)))));
                }
                for (unsigned char i_9 = 0; i_9 < 25; i_9 += 2) 
                {
                    var_19 = ((/* implicit */long long int) var_8);
                    /* LoopSeq 1 */
                    for (signed char i_10 = 0; i_10 < 25; i_10 += 2) 
                    {
                        var_20 ^= ((/* implicit */unsigned long long int) (-(var_10)));
                        var_21 = ((/* implicit */long long int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))) + (17701742375738586421ULL))));
                        arr_39 [i_7] = ((/* implicit */int) var_11);
                    }
                }
                for (unsigned short i_11 = 0; i_11 < 25; i_11 += 2) 
                {
                    var_22 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_8 [(short)24] [(short)1] [(signed char)12])) ? (1878669689) : (((/* implicit */int) var_4)))));
                    var_23 = ((/* implicit */long long int) var_11);
                }
                var_24 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) | (((/* implicit */int) (signed char)-24))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (var_6)))));
                var_25 = ((/* implicit */unsigned short) ((_Bool) arr_14 [i_1] [i_1]));
                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) 3210277416305840875ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))))));
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 25; i_12 += 3) 
                {
                    for (unsigned short i_13 = 0; i_13 < 25; i_13 += 4) 
                    {
                        {
                            var_27 ^= ((/* implicit */signed char) (+(((/* implicit */int) var_8))));
                            arr_48 [(unsigned short)12] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1))));
                            var_28 = ((/* implicit */short) ((var_6) << (((/* implicit */int) var_2))));
                            var_29 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_1] [i_1] [i_12]))));
                        }
                    } 
                } 
            }
            var_30 ^= ((/* implicit */unsigned char) 3210277416305840842ULL);
            var_31 |= ((/* implicit */short) arr_8 [i_1] [(signed char)12] [i_2]);
        }
        for (int i_14 = 3; i_14 < 24; i_14 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_15 = 0; i_15 < 25; i_15 += 4) 
            {
                var_32 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) -1878669684))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (2120797128711787677ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) arr_30 [i_1] [(unsigned short)3] [i_14] [i_15]))))))));
                var_33 = ((/* implicit */long long int) ((((/* implicit */int) arr_35 [i_14 + 1])) * (((/* implicit */int) arr_51 [i_14 - 1]))));
            }
            for (signed char i_16 = 0; i_16 < 25; i_16 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_17 = 0; i_17 < 25; i_17 += 2) 
                {
                    for (signed char i_18 = 0; i_18 < 25; i_18 += 2) 
                    {
                        {
                            arr_61 [23ULL] = ((/* implicit */unsigned char) max((((/* implicit */int) min((((/* implicit */unsigned short) ((unsigned char) arr_27 [i_17] [i_16] [i_1]))), (arr_59 [i_1] [i_18] [i_16] [(unsigned char)0] [(signed char)3])))), (-128804671)));
                            var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-1959242465), (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) (+(((int) var_4))))) : (arr_12 [i_1] [i_14 - 3] [i_14 - 3] [i_14 - 3] [(short)7] [(short)7]))))));
                            arr_62 [i_1] [i_14] [i_16] [i_17] = ((/* implicit */short) (((-(((/* implicit */int) var_8)))) / (((-528243777) & (((/* implicit */int) var_11))))));
                        }
                    } 
                } 
                var_35 = ((/* implicit */unsigned long long int) ((short) (short)-1));
            }
            var_36 = ((/* implicit */short) var_2);
            arr_63 [i_14] = min((((/* implicit */long long int) arr_52 [5ULL])), (arr_12 [i_14 - 1] [i_14] [i_14] [i_14] [i_14] [i_14]));
            /* LoopNest 3 */
            for (long long int i_19 = 0; i_19 < 25; i_19 += 4) 
            {
                for (short i_20 = 0; i_20 < 25; i_20 += 4) 
                {
                    for (short i_21 = 1; i_21 < 22; i_21 += 3) 
                    {
                        {
                            arr_74 [i_20] [i_14] [i_1] [(short)24] [i_21 + 3] &= ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_66 [i_21 + 2] [i_21 + 3] [i_14 + 1] [i_1]))));
                            arr_75 [i_21] [i_14] [(unsigned short)24] [2LL] [i_14] [(signed char)16] &= ((/* implicit */unsigned short) ((((((/* implicit */int) var_1)) != ((-(((/* implicit */int) (short)-1540)))))) ? (arr_56 [i_20] [i_14] [i_1] [(signed char)18] [i_21]) : (((/* implicit */long long int) min((((/* implicit */int) ((unsigned char) 2715071743U))), ((+(((/* implicit */int) var_2)))))))));
                            var_37 = ((/* implicit */unsigned short) ((var_6) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)7)) ? (((/* implicit */int) (short)-1540)) : (((/* implicit */int) (signed char)-1)))))));
                            var_38 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_19] [i_20])) ? (((/* implicit */int) (signed char)-62)) : (((/* implicit */int) (short)17919))))) ? (((((/* implicit */_Bool) 2715071756U)) ? (((3210277416305840851ULL) >> (((/* implicit */int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)185)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43552)))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_22 = 0; i_22 < 25; i_22 += 2) 
        {
            var_39 = ((/* implicit */_Bool) (~(var_6)));
            arr_78 [24ULL] = ((/* implicit */_Bool) (-(((long long int) arr_5 [i_22] [i_1]))));
            /* LoopSeq 4 */
            for (short i_23 = 0; i_23 < 25; i_23 += 2) 
            {
                var_40 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_23] [i_22] [i_1])) && (((/* implicit */_Bool) var_3))))) + (((/* implicit */int) var_8))));
                arr_82 [i_1] [i_22] [i_23] = ((/* implicit */unsigned long long int) -515521724);
                arr_83 [i_1] [i_22] [i_23] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))));
                /* LoopSeq 1 */
                for (unsigned char i_24 = 0; i_24 < 25; i_24 += 4) 
                {
                    var_41 = ((/* implicit */short) min(((((+(((/* implicit */int) var_9)))) >= ((-(((/* implicit */int) var_9)))))), (((-515521726) > (((/* implicit */int) min((arr_9 [i_1] [i_1] [(signed char)9] [i_1]), ((short)3))))))));
                    arr_88 [i_24] [i_24] &= ((/* implicit */signed char) var_8);
                    /* LoopSeq 1 */
                    for (unsigned char i_25 = 0; i_25 < 25; i_25 += 4) 
                    {
                        var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) / (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (unsigned short)46713)) ^ (((/* implicit */int) arr_40 [i_22] [i_22] [i_22] [(_Bool)1] [i_22] [i_23])))) : (((/* implicit */int) ((signed char) (_Bool)1)))));
                        arr_91 [(short)2] [i_22] [i_22] = ((/* implicit */unsigned long long int) ((int) (-(15236466657403710765ULL))));
                    }
                    var_43 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_47 [3] [i_22] [i_23] [i_24])) && (((/* implicit */_Bool) arr_54 [i_1] [(unsigned char)12] [21LL] [i_24]))));
                }
                var_44 = ((/* implicit */short) ((((/* implicit */_Bool) arr_68 [i_23] [i_22] [(unsigned short)23] [i_22])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_68 [i_23] [i_23] [i_22] [i_1])))) : (((/* implicit */int) max((((/* implicit */signed char) var_5)), (var_9))))));
            }
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                arr_94 [(signed char)7] [(signed char)3] [(unsigned char)24] [i_26] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_90 [i_1] [i_22] [i_22] [(_Bool)1] [i_26])), ((-((-(5553268439773937195ULL)))))));
                var_45 -= ((/* implicit */_Bool) arr_56 [i_26] [i_22] [(_Bool)1] [i_1] [i_1]);
            }
            for (short i_27 = 1; i_27 < 23; i_27 += 2) 
            {
                var_46 ^= (-(((/* implicit */int) var_3)));
                /* LoopSeq 1 */
                for (short i_28 = 0; i_28 < 25; i_28 += 4) 
                {
                    arr_101 [4LL] [4LL] [i_28] = (_Bool)1;
                    arr_102 [(unsigned char)3] [i_1] [(short)1] [(short)1] [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_87 [i_27 + 1])) ? (((/* implicit */int) arr_87 [i_27 + 2])) : (((/* implicit */int) arr_87 [i_27 + 1]))))));
                    var_47 = ((/* implicit */signed char) (+(((/* implicit */int) var_7))));
                }
                var_48 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((6339932447312210246LL), (((/* implicit */long long int) arr_46 [i_1] [i_1] [i_1] [(unsigned short)13]))))) ? (((((/* implicit */_Bool) -1040907805)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((arr_98 [i_1] [i_1] [i_1]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))) << (((((/* implicit */int) min((((unsigned short) var_10)), (arr_30 [i_1] [(signed char)10] [i_1] [i_27])))) - (28314)))));
            }
            for (unsigned long long int i_29 = 0; i_29 < 25; i_29 += 2) 
            {
                var_49 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) max((var_8), (var_4)))))));
                var_50 &= ((/* implicit */long long int) min((1040907800), (((/* implicit */int) (signed char)-1))));
                var_51 ^= ((/* implicit */unsigned char) (+((-((-(((/* implicit */int) (short)-31771))))))));
                var_52 = ((/* implicit */unsigned short) max((var_52), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_54 [i_29] [i_22] [i_22] [i_1]) >> (((var_10) + (21049585)))))) ? ((-(((/* implicit */int) var_8)))) : (((((((/* implicit */int) arr_99 [i_29] [i_29] [(short)23] [i_22] [i_1])) != (((/* implicit */int) var_2)))) ? (arr_100 [i_1] [12]) : (((((/* implicit */int) var_4)) & (var_10))))))))));
            }
        }
        var_53 = ((/* implicit */short) min((var_53), (((/* implicit */short) ((var_6) >> (((((/* implicit */int) var_11)) - (3597))))))));
        arr_106 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-31771)))))));
    }
    for (unsigned long long int i_30 = 0; i_30 < 25; i_30 += 4) /* same iter space */
    {
        var_54 *= ((/* implicit */long long int) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)25)) ? (9613685840353552809ULL) : (((/* implicit */unsigned long long int) var_10)))))) * (((((((/* implicit */_Bool) (unsigned short)18822)) ? (((/* implicit */int) (_Bool)0)) : (-1040907806))) >> (((((/* implicit */int) arr_46 [i_30] [i_30] [i_30] [i_30])) + (126)))))));
        var_55 ^= ((/* implicit */short) (unsigned char)179);
        var_56 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_90 [i_30] [(short)3] [(signed char)7] [i_30] [i_30]))));
        var_57 = ((/* implicit */int) min((var_57), (((/* implicit */int) ((arr_4 [i_30] [i_30]) & (((/* implicit */unsigned long long int) ((long long int) arr_41 [i_30] [i_30] [i_30]))))))));
    }
    var_58 = ((/* implicit */unsigned int) -108079042);
}
