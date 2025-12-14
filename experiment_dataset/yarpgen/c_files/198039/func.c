/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198039
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
    for (long long int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned short) ((unsigned int) (unsigned char)128));
                /* LoopNest 2 */
                for (long long int i_2 = 4; i_2 < 10; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_13 += ((/* implicit */long long int) ((signed char) ((((/* implicit */int) (unsigned short)55819)) / (((/* implicit */int) (unsigned short)55817)))));
                            var_14 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */long long int) max(((+(((/* implicit */int) arr_1 [i_0 - 2] [i_0])))), (((/* implicit */int) ((unsigned char) var_1)))))) : ((+(((var_6) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35786)))))))));
                            /* LoopSeq 4 */
                            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
                            {
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_4 + 1]))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_4 + 1] [i_0] [i_2] [i_0] [i_1])) || (((/* implicit */_Bool) min((arr_15 [i_0 - 1] [i_0] [i_1] [i_2 + 1] [i_3] [i_4] [i_4 + 1]), (((/* implicit */unsigned short) arr_10 [i_4] [i_3] [7LL] [i_1] [i_0 + 1]))))))))));
                                var_16 = ((/* implicit */signed char) arr_2 [i_0]);
                            }
                            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
                            {
                                var_17 ^= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_5 + 1] [i_0]))) >= (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_7)) : (arr_7 [i_3] [i_2 - 4] [i_1] [i_0])))))), (((((/* implicit */_Bool) arr_15 [i_0 - 3] [i_0 + 1] [i_0 - 1] [i_0] [(unsigned char)3] [i_2 - 3] [i_5 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0 + 1] [i_0 + 1] [i_2] [i_2] [i_2] [i_2 - 2] [i_5 + 1]))) : (17591917608960LL)))));
                                var_18 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_10 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1])) ? (((/* implicit */int) (unsigned short)55821)) : (((/* implicit */int) arr_10 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]))))));
                                var_19 = (~(((/* implicit */int) var_1)));
                            }
                            /* vectorizable */
                            for (long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                            {
                                arr_23 [i_6] [i_0] [7LL] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */short) -5752769343759610428LL);
                                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (-5254839466082205271LL) : (-17591917608965LL)))))));
                            }
                            for (unsigned short i_7 = 1; i_7 < 9; i_7 += 4) 
                            {
                                var_21 = ((/* implicit */long long int) var_3);
                                var_22 += ((/* implicit */int) min(((!((!(((/* implicit */_Bool) arr_21 [(_Bool)1] [(_Bool)1] [i_7] [i_3] [i_7 - 1])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1048576)) ? (-8074402294106674374LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) && (((/* implicit */_Bool) max(((unsigned short)19178), (((/* implicit */unsigned short) arr_16 [i_3] [i_3] [i_2])))))))));
                                arr_26 [i_0 - 2] [i_0] [i_2 + 1] [i_3] [i_7] = ((/* implicit */unsigned short) ((int) ((unsigned char) (_Bool)0)));
                            }
                            /* LoopSeq 1 */
                            for (long long int i_8 = 2; i_8 < 9; i_8 += 4) 
                            {
                                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) max((((/* implicit */long long int) min((var_11), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)6144)))))))), (min((var_6), (arr_19 [i_0]))))))));
                                arr_29 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */long long int) arr_7 [i_1] [i_2] [i_3] [i_8]);
                            }
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (unsigned short)45810)) ? (7505334918952193443LL) : (((/* implicit */long long int) 8128)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)37385)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_8 [i_3]))))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_9 = 0; i_9 < 11; i_9 += 4) /* same iter space */
                {
                    var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (unsigned char)8)) ? (7505334918952193443LL) : (var_7))) : (((/* implicit */long long int) 1595611189U))));
                    arr_32 [i_9] |= ((/* implicit */unsigned short) ((unsigned char) arr_2 [i_9]));
                }
                for (unsigned char i_10 = 0; i_10 < 11; i_10 += 4) /* same iter space */
                {
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)48))) - (5752769343759610444LL)));
                    /* LoopNest 2 */
                    for (short i_11 = 1; i_11 < 10; i_11 += 4) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 11; i_12 += 4) 
                        {
                            {
                                arr_43 [i_0] [i_1] [i_0] [i_10] [i_11] [i_11] [(unsigned char)6] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)87))));
                                arr_44 [(unsigned short)4] [(unsigned short)6] [i_0] = ((/* implicit */long long int) (unsigned short)65437);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((var_7) - (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_10]))))), (((/* implicit */long long int) arr_27 [i_10] [i_10] [i_10] [i_1] [i_10] [i_0 - 3]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) (unsigned char)148))))) ? (((/* implicit */int) max((var_0), (var_3)))) : (((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))))))) : (var_6))))));
                    var_28 = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)69)) | (((/* implicit */int) min(((unsigned short)14883), (var_8)))))) & (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) var_2)) ^ (((/* implicit */int) (unsigned short)50653))))))));
                }
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned char) 524280);
    /* LoopSeq 4 */
    for (long long int i_13 = 0; i_13 < 19; i_13 += 4) 
    {
        var_30 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_3))))) : (((((/* implicit */int) arr_45 [i_13])) / (((/* implicit */int) arr_47 [i_13])))))) >= (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-8))))) >= (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (arr_46 [i_13]))))))));
        arr_48 [i_13] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_46 [i_13]), (var_8)))) ? (((((/* implicit */_Bool) (unsigned short)62596)) ? (((/* implicit */int) var_9)) : (8388352))) : (((/* implicit */int) (unsigned short)34345))))) ? (var_5) : (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) | (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min((var_11), (((/* implicit */unsigned short) var_2))))))));
        var_31 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_46 [i_13]), (var_11))))) >= (((((/* implicit */_Bool) var_9)) ? (-5662056552912547093LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) >> (((var_7) + (8544314106723816339LL)))));
    }
    for (unsigned int i_14 = 2; i_14 < 17; i_14 += 4) 
    {
        arr_51 [i_14 - 2] = ((/* implicit */short) arr_50 [i_14 - 2] [i_14]);
        arr_52 [i_14 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_50 [i_14] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_49 [i_14 + 1] [i_14])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) : (((min((((/* implicit */unsigned long long int) 3390066224170538647LL)), (9958618081651741537ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_49 [i_14 - 2] [i_14]), (arr_49 [i_14] [i_14 + 1])))))))));
        arr_53 [11LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((var_5) | (((/* implicit */int) (unsigned short)14903))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_11)))))) : (-389227119)));
    }
    for (unsigned char i_15 = 1; i_15 < 11; i_15 += 2) 
    {
        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_46 [i_15 - 1]), (((/* implicit */unsigned short) (signed char)-10))))) ? (((/* implicit */long long int) (+(arr_55 [i_15 + 2] [i_15 + 1])))) : (((long long int) min((var_7), (((/* implicit */long long int) arr_47 [(signed char)9])))))));
        /* LoopNest 3 */
        for (unsigned short i_16 = 0; i_16 < 13; i_16 += 4) 
        {
            for (unsigned short i_17 = 0; i_17 < 13; i_17 += 3) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 3) 
                {
                    {
                        arr_65 [i_17] [i_18] [i_17] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_57 [i_18] [i_16] [i_15 + 2])) : ((-(((((/* implicit */_Bool) arr_45 [i_16])) ? (((/* implicit */int) arr_62 [i_18] [i_18] [i_18])) : (arr_55 [i_15] [i_15])))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_19 = 3; i_19 < 11; i_19 += 4) 
                        {
                            arr_70 [i_15] [i_16] [5LL] [i_18] [i_19 + 1] = ((/* implicit */unsigned long long int) var_7);
                            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) arr_64 [i_15] [i_16] [i_17] [i_18] [i_19])) : (((/* implicit */int) var_4)))) / (((/* implicit */int) min((var_1), (((/* implicit */unsigned char) arr_63 [i_15] [i_16] [i_16] [i_18] [i_19])))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_67 [i_19 + 1] [i_19 - 1] [i_19] [i_19] [i_19] [i_19 - 2] [i_19 + 2])) ? (((/* implicit */int) (unsigned char)0)) : (((((/* implicit */int) (unsigned short)34345)) / (389227112)))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_63 [(_Bool)1] [i_19 - 2] [i_15 + 2] [i_15] [i_15]))) * (max((((/* implicit */long long int) arr_56 [4] [i_18])), (var_7)))))));
                        }
                        var_34 = max((((/* implicit */long long int) ((unsigned char) (((_Bool)1) ? (-1217898680) : (-1378023083))))), (((((/* implicit */_Bool) arr_45 [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_57 [i_18] [i_17] [i_16]), (((/* implicit */unsigned short) arr_60 [i_15] [i_17])))))) : (-5752769343759610445LL))));
                        var_35 = (+(((/* implicit */int) arr_46 [i_15 + 1])));
                    }
                } 
            } 
        } 
        var_36 = ((unsigned char) max((((/* implicit */int) arr_46 [i_15 + 2])), (arr_69 [i_15] [i_15 + 1] [i_15] [i_15 + 2] [i_15] [i_15 - 1] [(unsigned short)10])));
        var_37 = ((((/* implicit */_Bool) max((var_9), (var_9)))) ? (((/* implicit */int) min((arr_50 [i_15 + 2] [i_15 + 2]), (arr_50 [i_15 + 2] [i_15 + 2])))) : (((/* implicit */int) arr_50 [i_15 - 1] [i_15 - 1])));
        var_38 = (unsigned short)50653;
    }
    for (unsigned char i_20 = 1; i_20 < 24; i_20 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
        {
            for (int i_22 = 0; i_22 < 25; i_22 += 4) 
            {
                {
                    var_39 -= ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1217898691)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_72 [i_20])))) ? (((((/* implicit */_Bool) (unsigned short)18837)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (unsigned short)65376)))) : (((arr_71 [i_22]) + (((/* implicit */int) (unsigned short)61951))))))), (var_6)));
                    var_40 -= ((/* implicit */unsigned short) (unsigned char)244);
                    /* LoopNest 2 */
                    for (unsigned char i_23 = 0; i_23 < 25; i_23 += 2) 
                    {
                        for (unsigned short i_24 = 2; i_24 < 24; i_24 += 2) 
                        {
                            {
                                var_41 = ((/* implicit */unsigned char) ((int) ((max((4611686018427387888LL), (((/* implicit */long long int) var_1)))) + (((/* implicit */long long int) (+(((/* implicit */int) arr_79 [15ULL] [i_20 - 1] [(unsigned char)7] [i_20] [i_20]))))))));
                                arr_84 [i_20] [i_20] = ((/* implicit */signed char) var_6);
                                arr_85 [i_20] [i_20] [i_22] = ((/* implicit */long long int) var_11);
                                arr_86 [i_20] [12LL] [i_22] [i_20] = ((/* implicit */unsigned short) (-(min((((/* implicit */int) var_2)), (1378023082)))));
                            }
                        } 
                    } 
                    var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) ((_Bool) min((((/* implicit */int) var_11)), (((((/* implicit */_Bool) 17112760320ULL)) ? (((/* implicit */int) (unsigned short)14716)) : (((/* implicit */int) var_4))))))))));
                    arr_87 [i_20] [i_21 - 1] [i_20] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_2)), (((unsigned long long int) ((((/* implicit */_Bool) arr_81 [i_21 - 1] [i_21 - 1] [i_20] [i_20])) ? (arr_71 [i_21]) : (arr_81 [i_20] [i_21 - 1] [i_22] [i_22]))))));
                }
            } 
        } 
        var_43 = ((/* implicit */unsigned long long int) (unsigned short)50653);
    }
}
