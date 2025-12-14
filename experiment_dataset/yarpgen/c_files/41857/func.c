/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41857
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                var_12 &= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) var_10)) ? (var_11) : (var_4))));
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 15; i_3 += 3) 
                {
                    for (unsigned int i_4 = 1; i_4 < 12; i_4 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */short) ((_Bool) ((int) (unsigned char)233)));
                            var_14 = ((/* implicit */unsigned int) ((long long int) (((_Bool)0) ? (((/* implicit */int) arr_10 [i_4 + 1] [i_3 - 1] [i_2] [i_1] [i_0])) : (((/* implicit */int) var_9)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 1; i_5 < 15; i_5 += 4) 
                {
                    for (unsigned short i_6 = 1; i_6 < 14; i_6 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_12 [i_0])) : (((/* implicit */int) var_9))))))));
                            arr_19 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_7))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) 3235369395706138828ULL)))) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_1] [7] [i_2] [i_1] [i_6]))) : (var_11)))));
                            var_16 ^= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (short)-8552)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)108)))));
                        }
                    } 
                } 
            }
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */int) ((unsigned char) (unsigned char)41))) : (((((/* implicit */_Bool) var_11)) ? (2097151) : (((/* implicit */int) var_0))))));
            arr_20 [i_0] = ((long long int) ((unsigned char) arr_17 [i_1 - 1] [i_1] [i_0] [i_1 + 3] [i_0] [i_0] [i_0]));
        }
        var_18 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((long long int) arr_15 [i_0]))) ? (((/* implicit */int) ((unsigned short) arr_15 [i_0]))) : (((/* implicit */int) min((((/* implicit */short) arr_12 [i_0])), (arr_15 [i_0])))))), (max((((/* implicit */int) max(((unsigned char)223), ((unsigned char)28)))), (((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) arr_6 [i_0] [(signed char)8] [i_0] [i_0])) : (((/* implicit */int) (signed char)19))))))));
        var_19 = ((/* implicit */short) ((long long int) max((min((arr_9 [i_0] [i_0] [(unsigned char)6] [i_0]), (((/* implicit */int) (unsigned char)169)))), (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_12 [i_0])))))));
        var_20 += ((/* implicit */_Bool) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)32756)) ? (((/* implicit */int) (short)8340)) : (var_3)))), (max((var_11), (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [(unsigned short)12])))))), (((/* implicit */long long int) max((max((arr_14 [i_0]), (((/* implicit */int) var_1)))), (((/* implicit */int) ((signed char) arr_15 [i_0]))))))));
        var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((min((((/* implicit */int) (unsigned short)11075)), (var_10))), (((/* implicit */int) ((short) var_3)))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)150)), (arr_18 [i_0] [i_0] [(signed char)12] [i_0] [i_0])))), (((((/* implicit */_Bool) (unsigned char)87)) ? (arr_2 [i_0] [i_0] [15LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
    }
    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 15; i_8 += 1) 
        {
            for (unsigned short i_9 = 2; i_9 < 15; i_9 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((var_10), (var_7)))), (max((((/* implicit */unsigned int) var_1)), (var_8)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_12 [8LL]))) ? (((/* implicit */int) max((arr_15 [i_7]), (((/* implicit */short) (unsigned char)150))))) : (((/* implicit */int) min(((unsigned short)34426), (((/* implicit */unsigned short) (short)-32758)))))))) : (max((max((((/* implicit */long long int) -1870407740)), (arr_26 [(short)10] [i_8] [(short)10]))), (((/* implicit */long long int) max((arr_9 [i_7] [i_8 - 2] [i_7] [i_9]), (((/* implicit */int) var_5)))))))));
                    var_23 = ((/* implicit */int) min((((long long int) max((-756634159), (((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((-2221598120595872099LL), (((/* implicit */long long int) 4049916940U))))) ? (((/* implicit */int) max((arr_17 [i_7] [i_7] [(unsigned short)11] [i_7] [i_7] [(_Bool)1] [(_Bool)1]), (((/* implicit */unsigned char) arr_10 [i_7] [i_8 - 2] [i_8 - 2] [i_9] [i_9]))))) : (((/* implicit */int) min((var_5), (((/* implicit */signed char) (_Bool)1))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        for (int i_11 = 0; i_11 < 16; i_11 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) max((var_24), (min((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) 23)), (3459057871U)))) ? (max((((/* implicit */int) (short)(-32767 - 1))), (arr_9 [i_9] [6] [i_7] [i_9]))) : (((/* implicit */int) max((((/* implicit */short) arr_12 [i_9])), (arr_15 [i_7]))))))), (((long long int) ((((/* implicit */_Bool) 2147483647)) ? (arr_2 [i_8 + 1] [i_8 + 1] [i_10]) : (((/* implicit */unsigned long long int) var_10)))))))));
                                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 6565332781300689753ULL))) ? (((((/* implicit */_Bool) -6202119191681494786LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)88))) : (-2221598120595872099LL))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)7170), (((/* implicit */unsigned short) (unsigned char)228))))))))) ? (13LL) : (((/* implicit */long long int) min((((/* implicit */int) min(((unsigned short)11260), (((/* implicit */unsigned short) (signed char)101))))), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)162)) : (((/* implicit */int) (unsigned char)171)))))))));
                                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) max((max((var_6), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) ((short) arr_27 [(_Bool)1] [i_10] [i_9] [i_10])))))) ? (((long long int) max((((/* implicit */int) arr_6 [i_11] [i_8] [i_9] [i_10])), (arr_9 [i_11] [i_10] [i_9 - 2] [i_11])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) arr_15 [i_11]))))) ? (((/* implicit */unsigned int) ((int) arr_8 [i_7] [i_7] [i_7]))) : (((unsigned int) var_7)))))));
                                var_27 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_7])) ? (((/* implicit */int) arr_13 [i_10])) : (((/* implicit */int) (unsigned char)169))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_17 [i_7] [i_7] [i_8] [i_8] [i_9] [(short)4] [i_11]), (((/* implicit */unsigned char) arr_30 [i_7] [i_8])))))) : (max((arr_21 [i_7]), (((/* implicit */unsigned long long int) var_3)))))));
                                var_28 = ((/* implicit */long long int) max(((short)24888), (((/* implicit */short) (unsigned char)136))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_29 &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((((/* implicit */int) arr_6 [(_Bool)1] [i_7] [i_7] [(_Bool)1])), (var_7)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -6202119191681494760LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_15 [i_7]))))) : (((long long int) arr_7 [i_7] [i_7] [(short)9] [i_7])))), (((long long int) ((((/* implicit */_Bool) arr_0 [i_7])) ? (var_2) : (((/* implicit */int) (unsigned short)55309)))))));
    }
    for (int i_12 = 3; i_12 < 9; i_12 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 8; i_13 += 3) 
        {
            for (unsigned short i_14 = 3; i_14 < 9; i_14 += 2) 
            {
                {
                    var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)88)), (max((((/* implicit */long long int) (unsigned char)149)), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2221598120595872103LL))))))))));
                    /* LoopNest 2 */
                    for (long long int i_15 = 0; i_15 < 10; i_15 += 2) 
                    {
                        for (signed char i_16 = 2; i_16 < 7; i_16 += 4) 
                        {
                            {
                                arr_45 [i_12] [i_13] [i_15] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((_Bool) max((arr_14 [i_13]), (((/* implicit */int) (unsigned short)33287)))))), (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)169)), (-1495612662)))) ? (((/* implicit */long long int) max((1801419782), (((/* implicit */int) arr_38 [i_15]))))) : (min((((/* implicit */long long int) (unsigned short)12651)), (6202119191681494786LL)))))));
                                var_31 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)67))) : (393990602925669552LL)))), (max((((/* implicit */unsigned long long int) arr_38 [i_14 - 1])), (var_6))))), (((((/* implicit */_Bool) min((-1), (var_2)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 511)), (arr_42 [i_12] [i_14 - 3] [i_14 - 3] [i_14 - 3])))) : (((unsigned long long int) var_0))))));
                                var_32 &= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_43 [i_12] [i_12 - 2])), (arr_21 [i_12])))) ? (max((((/* implicit */long long int) arr_10 [i_12 - 3] [i_13] [i_14 - 2] [i_15] [i_16])), (var_11))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_34 [i_15] [i_16])))))), (((/* implicit */long long int) min((min((arr_15 [i_14 - 2]), (((/* implicit */short) arr_6 [i_16] [i_14 - 1] [i_15] [i_16])))), (((/* implicit */short) ((signed char) arr_8 [i_12 - 3] [i_16] [i_14]))))))));
                                var_33 -= ((/* implicit */long long int) max((((/* implicit */int) ((_Bool) max((-6519104049936944556LL), (6202119191681494808LL))))), (max((max((((/* implicit */int) (unsigned short)60526)), (arr_9 [i_12] [i_16] [12U] [i_16]))), (max((((/* implicit */int) arr_38 [i_12])), (var_3)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_34 = ((/* implicit */short) max((min((min((var_11), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) ((short) arr_43 [i_12 - 3] [i_12 - 2]))))), (((/* implicit */long long int) max((((int) var_7)), (((/* implicit */int) ((signed char) (short)-24871))))))));
        /* LoopSeq 3 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
        {
            var_35 = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) ((int) (unsigned short)42388))), (max((((/* implicit */long long int) (signed char)-54)), (4161583378028708793LL))))), (((/* implicit */long long int) min((max((((/* implicit */int) (unsigned char)85)), (1388394050))), (max((var_2), (((/* implicit */int) arr_15 [i_12 - 3])))))))));
            var_36 = ((unsigned char) ((((/* implicit */_Bool) max((arr_16 [i_12] [i_12] [i_17] [i_17] [i_17]), (((/* implicit */unsigned short) arr_8 [i_12] [i_17] [i_17]))))) ? (((/* implicit */long long int) max((var_8), (((/* implicit */unsigned int) (unsigned char)169))))) : (max((((/* implicit */long long int) var_3)), (-6202119191681494786LL)))));
            arr_49 [i_12 - 1] = ((/* implicit */long long int) max((((int) min(((unsigned short)55312), (((/* implicit */unsigned short) (unsigned char)92))))), (((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) max(((unsigned char)0), ((unsigned char)124)))))))));
            var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 332232477368661661LL)) ? (((/* implicit */int) (signed char)72)) : (((/* implicit */int) (_Bool)1))));
            arr_50 [i_12 - 1] [i_17] = ((/* implicit */_Bool) max(((short)-32763), (((/* implicit */short) (unsigned char)32))));
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
        {
            var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0)))) ? (((/* implicit */int) min(((unsigned short)25139), (((/* implicit */unsigned short) var_9))))) : (((/* implicit */int) max((arr_36 [i_18]), (((/* implicit */unsigned short) (signed char)91)))))))), (((unsigned long long int) min(((unsigned short)13189), (arr_16 [(unsigned short)13] [i_12] [i_12] [i_12] [1LL])))))))));
            arr_55 [i_18] [i_18] [i_18] = ((/* implicit */short) max((max((((/* implicit */int) (_Bool)1)), (-1988506156))), (max((((((/* implicit */_Bool) arr_29 [i_12] [i_12])) ? (arr_51 [i_12 + 1] [(short)4]) : (((/* implicit */int) arr_46 [i_18] [i_18])))), (max((((/* implicit */int) arr_1 [i_18] [i_12])), (var_7)))))));
            arr_56 [i_18] = ((/* implicit */_Bool) ((unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (-6202119191681494792LL) : (((/* implicit */long long int) var_8))))));
            var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) ((unsigned char) max((min((((/* implicit */unsigned int) var_5)), (var_8))), (((/* implicit */unsigned int) ((unsigned char) -1575702203480444355LL)))))))));
        }
        for (int i_19 = 0; i_19 < 10; i_19 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_20 = 1; i_20 < 9; i_20 += 2) 
            {
                arr_61 [i_12] [7] [i_19] [i_20] = ((/* implicit */short) max((max((min((-4161583378028708780LL), (var_4))), (((/* implicit */long long int) max((arr_30 [i_12 - 1] [i_12 - 1]), ((signed char)16)))))), (((/* implicit */long long int) max((max((((/* implicit */int) arr_32 [10LL] [10LL])), (arr_51 [1] [i_20]))), (max((((/* implicit */int) var_0)), (262142))))))));
                /* LoopNest 2 */
                for (int i_21 = 3; i_21 < 8; i_21 += 3) 
                {
                    for (unsigned short i_22 = 0; i_22 < 10; i_22 += 1) 
                    {
                        {
                            arr_69 [i_12 - 1] [i_19] [i_12] [i_22] [i_12] [i_20 + 1] = ((/* implicit */_Bool) min((((unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_22] [i_19])) ? (-25LL) : (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_21])))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((short) (_Bool)1))), (min((((/* implicit */long long int) arr_64 [i_12])), (-25LL))))))));
                            var_40 |= ((/* implicit */signed char) ((unsigned long long int) ((long long int) max((((/* implicit */unsigned int) arr_12 [i_12])), (arr_11 [i_12] [i_19] [i_20] [11LL])))));
                            var_41 &= ((/* implicit */int) max((((/* implicit */long long int) max((((/* implicit */int) ((signed char) 4161583378028708793LL))), (((arr_10 [(unsigned char)7] [14LL] [14LL] [i_21 + 1] [i_21 + 1]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-121))))))), (((((/* implicit */_Bool) max((arr_43 [i_12 - 2] [i_12 - 2]), (((/* implicit */long long int) (short)-22251))))) ? (((long long int) var_0)) : (max((arr_26 [i_19] [(_Bool)1] [i_22]), (((/* implicit */long long int) arr_38 [i_20]))))))));
                            var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((unsigned char) (unsigned short)0))), (max((((/* implicit */unsigned short) var_5)), (arr_36 [i_12])))))), (min((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_10 [i_22] [i_12] [i_20] [i_19] [i_12])), (arr_7 [i_12] [i_19] [i_21 - 1] [i_21 - 1])))), (((((/* implicit */_Bool) arr_59 [i_12])) ? (((/* implicit */unsigned long long int) -1388394054)) : (0ULL))))))))));
                            var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) max((max((max((arr_60 [i_19] [i_20 - 1] [i_20 - 1]), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) max((var_1), (((/* implicit */unsigned short) arr_1 [i_12] [i_12]))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_9)), ((unsigned char)30)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)0), ((_Bool)0))))))))))));
                        }
                    } 
                } 
                var_44 ^= ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) 3840)) ? (var_2) : (var_7))), (((/* implicit */int) ((signed char) var_5))))), (((((/* implicit */_Bool) min((((/* implicit */int) arr_25 [i_19])), (var_7)))) ? (min((-1356439303), (((/* implicit */int) (unsigned short)27552)))) : (max((((/* implicit */int) var_1)), (var_7)))))));
            }
            var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) min((min((max((((/* implicit */long long int) arr_16 [i_12] [i_12] [i_12] [i_12] [i_19])), (var_4))), (((/* implicit */long long int) min((var_0), (arr_13 [i_12])))))), (((/* implicit */long long int) max((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)16)))), (max((var_3), (((/* implicit */int) var_0))))))))))));
            var_46 &= ((((/* implicit */_Bool) min((((/* implicit */int) max((((/* implicit */short) (unsigned char)53)), (arr_41 [i_19] [i_12 - 2] [i_12 - 2] [i_12 - 2])))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)32767)) : (var_2)))))) ? (((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) -1471012136))))) ? (max((-1150797603), (-1263048918))) : (((/* implicit */int) max((((/* implicit */short) (signed char)-92)), (arr_15 [i_12])))))) : (max((((/* implicit */int) min((arr_65 [i_19] [i_19] [i_19] [i_19]), (((/* implicit */unsigned short) arr_25 [i_19]))))), (((int) 4095)))));
        }
        var_47 -= ((unsigned char) max((max((((/* implicit */long long int) arr_32 [8] [i_12])), (-3011346740189574188LL))), (max((((/* implicit */long long int) var_5)), (9223372036854775807LL)))));
    }
    for (int i_23 = 3; i_23 < 9; i_23 += 3) /* same iter space */
    {
        var_48 = ((/* implicit */unsigned short) max((var_48), (((/* implicit */unsigned short) ((_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)17824))))), (max((var_6), (((/* implicit */unsigned long long int) var_11))))))))));
        var_49 = ((/* implicit */unsigned short) ((unsigned char) ((_Bool) ((signed char) arr_59 [i_23 - 1]))));
        arr_73 [i_23] [i_23] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) 6U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -7964836183814183509LL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55141)))))) : (((((/* implicit */_Bool) 4294967295U)) ? (3LL) : (3883966716559015115LL))))));
    }
    var_50 = max((((((/* implicit */_Bool) max((-3883966716559015116LL), (((/* implicit */long long int) var_2))))) ? (((((/* implicit */_Bool) 761169893U)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (3594715246362494069LL))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)40), (((/* implicit */unsigned char) (_Bool)1)))))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_2)) : (var_8))), (((/* implicit */unsigned int) max((var_3), (((/* implicit */int) (signed char)66)))))))));
}
