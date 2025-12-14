/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231940
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
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    var_14 = max((((((int) 851005253)) << (((/* implicit */int) (_Bool)1)))), (((int) max((arr_1 [i_0 - 1]), ((_Bool)1)))));
                    arr_7 [i_2] [i_1] [i_0] = ((/* implicit */int) max((((unsigned long long int) arr_4 [i_0] [i_1] [i_1])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_6 [i_2]))) ? (((/* implicit */int) ((_Bool) arr_6 [i_0 + 1]))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-46)) || (arr_1 [i_0])))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (arr_6 [i_3])))) ? (((/* implicit */int) max(((unsigned char)180), ((unsigned char)40)))) : (((/* implicit */int) ((((unsigned long long int) (_Bool)1)) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)175))))))));
        var_15 = ((/* implicit */long long int) ((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) (_Bool)1)) : (((((int) arr_2 [i_3] [i_3])) | (((/* implicit */int) ((_Bool) arr_4 [i_3] [11U] [(short)9])))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_4 = 4; i_4 < 11; i_4 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                for (unsigned char i_6 = 2; i_6 < 11; i_6 += 3) 
                {
                    {
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_3] [i_6])) ? (((long long int) arr_0 [i_6])) : (((/* implicit */long long int) arr_4 [i_6] [i_4] [i_3]))));
                        var_17 = ((/* implicit */long long int) arr_6 [6ULL]);
                        var_18 = ((/* implicit */long long int) ((_Bool) arr_9 [i_3] [i_3]));
                        var_19 = ((/* implicit */unsigned short) ((unsigned long long int) (-(((/* implicit */int) (unsigned short)40051)))));
                    }
                } 
            } 
            arr_19 [i_3] [i_3] [i_4 - 2] = ((/* implicit */unsigned long long int) ((signed char) (unsigned char)44));
        }
        for (short i_7 = 4; i_7 < 11; i_7 += 3) /* same iter space */
        {
            arr_22 [i_3] [i_7 - 4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_5 [i_3] [i_7] [i_3])), (((unsigned short) arr_5 [(_Bool)1] [i_7] [i_7]))))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)-46)) / (1827903954)))) : (((long long int) ((((/* implicit */_Bool) 2191561105U)) ? (((/* implicit */int) arr_21 [i_7])) : (((/* implicit */int) arr_1 [i_3])))))));
            var_20 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((short) max((((/* implicit */int) (_Bool)0)), (-163923538))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(unsigned short)8])) ? (arr_8 [i_3] [i_3]) : (((/* implicit */int) arr_1 [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_7 - 2]))) : (max((((/* implicit */unsigned long long int) arr_3 [i_3] [i_3] [i_3])), (14755981665396737581ULL)))))));
            var_21 = ((/* implicit */short) ((((/* implicit */int) max((((unsigned short) arr_14 [i_3] [i_7])), (((/* implicit */unsigned short) ((unsigned char) arr_13 [i_3])))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_3])) ? (-1197952990) : (arr_14 [i_7] [11])))))))));
        }
        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            /* LoopSeq 4 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)33901))));
                var_23 = ((/* implicit */signed char) (~(max((max((3690762408312814009ULL), (((/* implicit */unsigned long long int) arr_2 [i_9] [i_8])))), (((/* implicit */unsigned long long int) max((arr_0 [i_3]), ((unsigned char)217))))))));
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (int i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned int) arr_15 [i_3] [(unsigned char)1] [i_9] [(unsigned char)1])) < (arr_2 [i_3] [i_3]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 6075758990209625949ULL)) ? (((/* implicit */unsigned long long int) 1872644701U)) : (arr_30 [i_3] [i_3])))) ? (((((/* implicit */_Bool) (unsigned short)47019)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (8213767107079183358ULL))) : (((unsigned long long int) arr_29 [i_3] [i_10] [i_10] [i_10] [i_3]))))));
                            arr_35 [i_8] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_8 [i_3] [i_9])), (((long long int) arr_27 [i_3] [i_8] [i_10] [i_11]))));
                            var_25 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_3] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) arr_28 [i_8] [i_8] [i_3])) : (((/* implicit */int) (unsigned char)184)))), ((-((+(((/* implicit */int) arr_0 [i_8]))))))));
                        }
                    } 
                } 
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
            {
                arr_38 [i_3] [i_3] [i_3] [i_12] = ((/* implicit */long long int) ((int) ((short) ((unsigned long long int) arr_30 [i_3] [i_3]))));
                /* LoopNest 2 */
                for (long long int i_13 = 1; i_13 < 11; i_13 += 3) 
                {
                    for (unsigned short i_14 = 0; i_14 < 12; i_14 += 3) 
                    {
                        {
                            arr_43 [i_3] [i_13 + 1] [(signed char)3] [i_8] [i_8] [i_3] [i_3] = ((/* implicit */unsigned long long int) (short)-31603);
                            var_26 = ((/* implicit */short) max((max((max((arr_37 [i_3] [i_8] [i_3]), (((/* implicit */unsigned long long int) arr_3 [i_3] [i_12] [i_3])))), (((/* implicit */unsigned long long int) max((arr_29 [i_3] [i_13] [i_12] [i_8] [i_3]), (arr_0 [i_3])))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((-862071128), (((/* implicit */int) arr_29 [i_3] [i_3] [i_3] [i_3] [i_3]))))), (max((arr_11 [i_3] [i_3]), (((/* implicit */long long int) arr_34 [i_13 - 1] [i_13 - 1] [i_12] [i_3] [i_3])))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_15 = 1; i_15 < 8; i_15 += 3) 
                {
                    var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_24 [i_3] [i_3] [i_3]))) ? (((/* implicit */int) arr_20 [i_3] [i_12] [i_3])) : (((/* implicit */int) ((_Bool) (_Bool)1))))))));
                    var_28 = ((/* implicit */long long int) max((max(((~(arr_13 [i_3]))), (((/* implicit */unsigned long long int) max(((unsigned char)212), (((/* implicit */unsigned char) arr_28 [i_3] [(signed char)11] [(signed char)0]))))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (((long long int) arr_11 [i_3] [i_8])))))));
                    arr_47 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_27 [i_15 + 2] [i_8] [i_12] [i_15]);
                }
                for (signed char i_16 = 0; i_16 < 12; i_16 += 3) 
                {
                    arr_51 [i_3] [i_8] [i_8] [i_3] = ((/* implicit */_Bool) arr_46 [i_3] [i_3] [i_3] [i_3] [i_3]);
                    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_3] [i_3] [i_3] [i_3] [i_3])) ? (((((/* implicit */_Bool) arr_39 [i_3] [i_8] [i_12] [i_3])) ? (arr_49 [i_8] [(signed char)10]) : (((/* implicit */int) (short)29770)))) : (((/* implicit */int) ((_Bool) arr_2 [i_3] [i_8])))))) ? (arr_46 [i_3] [i_3] [(signed char)8] [i_16] [i_16]) : (max((((((/* implicit */int) arr_36 [8])) - (((/* implicit */int) (signed char)-64)))), (((/* implicit */int) ((unsigned char) arr_45 [i_3] [i_8] [i_12] [i_8]))))))))));
                    var_30 = ((/* implicit */int) (!((!(((/* implicit */_Bool) max((-1987230665), (1577759598))))))));
                }
                var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) ((unsigned char) (short)-23016)))) ? (((/* implicit */int) ((signed char) (short)-9125))) : (max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)72))) >= (arr_37 [i_12] [i_8] [i_3])))), (((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) arr_41 [i_12] [10] [10] [i_12] [i_3] [i_8]))))))));
                var_32 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_10 [i_8])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_3] [i_3])) ? (-1987230646) : (((/* implicit */int) arr_16 [i_3] [i_3] [i_3] [i_3]))))) : (13266600549903385375ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_3] [i_3])) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (arr_13 [i_3])))))))));
            }
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
            {
                arr_55 [i_3] [i_3] [i_17] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_20 [i_3] [i_8] [i_3]) ? (((/* implicit */int) arr_20 [i_3] [i_8] [i_3])) : (((/* implicit */int) arr_31 [i_3] [i_8]))))) ? (((/* implicit */unsigned long long int) ((int) 13961635722114243629ULL))) : (((unsigned long long int) (unsigned char)241))));
                var_33 = ((/* implicit */unsigned int) max((max((((short) arr_5 [3] [i_8] [i_17])), (((short) arr_28 [i_3] [i_8] [i_17])))), (((/* implicit */short) ((unsigned char) arr_49 [i_3] [i_3])))));
                var_34 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_40 [i_17] [i_8] [11] [i_3])) ? (5180143523806166240ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_3]))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)117))) : ((((_Bool)1) ? (10586889189247908112ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35471)))))))));
                var_35 = ((/* implicit */long long int) arr_2 [i_8] [i_8]);
            }
            for (unsigned char i_18 = 0; i_18 < 12; i_18 += 3) 
            {
                var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_3] [i_8] [i_8])) ? (-4283263214293310374LL) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_26 [i_18] [i_3] [(_Bool)1] [i_3])), ((unsigned char)160))))))))));
                arr_59 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_4 [i_3] [i_18] [i_18])))) ? (((unsigned long long int) max((((/* implicit */unsigned long long int) arr_28 [i_3] [i_3] [i_18])), (6179107863784461436ULL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(404008421)))) & (((long long int) arr_52 [i_3] [i_8] [(unsigned char)6])))))));
                var_37 = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((arr_3 [i_3] [i_3] [i_3]), (arr_0 [i_3])))) ? ((-(arr_33 [(signed char)6] [i_8] [(signed char)6] [i_3] [i_8]))) : (max((arr_25 [i_3] [i_3]), (((/* implicit */int) arr_3 [i_3] [i_3] [i_18])))))), (((/* implicit */int) arr_41 [i_18] [i_18] [i_8] [i_8] [i_8] [i_3]))));
                var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)49468)) ? (((/* implicit */unsigned long long int) arr_46 [i_3] [i_8] [(short)6] [i_18] [i_8])) : (max((((/* implicit */unsigned long long int) arr_6 [i_3])), (arr_42 [(short)2] [i_18] [i_8] [i_8] [2ULL] [(short)2]))))), (((/* implicit */unsigned long long int) ((int) arr_1 [i_8]))))))));
            }
            var_39 = max((((/* implicit */unsigned long long int) max(((short)30077), ((short)18152)))), (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)63909)), (825480534)))) ? (arr_13 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)13702))))))));
        }
        /* LoopNest 2 */
        for (signed char i_19 = 3; i_19 < 9; i_19 += 3) 
        {
            for (signed char i_20 = 0; i_20 < 12; i_20 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_21 = 0; i_21 < 12; i_21 += 3) 
                    {
                        for (signed char i_22 = 0; i_22 < 12; i_22 += 3) 
                        {
                            {
                                var_40 = max((((long long int) 739044200U)), (((/* implicit */long long int) ((short) ((((/* implicit */int) (short)-5138)) & (((/* implicit */int) (signed char)-72)))))));
                                var_41 = ((/* implicit */unsigned int) max((max((-825480539), (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (signed char)69))))))), (((/* implicit */int) (signed char)69))));
                                arr_72 [(short)6] [i_19] [i_20] [i_3] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_19] [i_21] [i_21]))) - (arr_61 [i_3] [1ULL] [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_3] [i_3] [9ULL]))) : (((long long int) ((unsigned int) arr_54 [i_19])))));
                                arr_73 [i_3] [(unsigned short)8] [1] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) max((arr_9 [i_19] [(short)3]), (arr_44 [i_3] [(short)9] [i_20] [(short)9]))))) ? ((~(arr_69 [i_3] [i_19 - 3] [i_19 - 3] [i_19 + 3] [i_3]))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_42 [i_19 - 2] [i_19] [i_19 - 1] [i_19 - 3] [i_19 - 1] [i_3])))));
                            }
                        } 
                    } 
                    var_42 = ((/* implicit */unsigned int) max((((/* implicit */int) (signed char)85)), ((+(((/* implicit */int) arr_3 [i_3] [i_19] [i_20]))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_23 = 3; i_23 < 19; i_23 += 3) 
    {
        var_43 = ((/* implicit */short) ((long long int) ((short) ((unsigned char) arr_76 [i_23] [i_23]))));
        var_44 = arr_77 [i_23];
        /* LoopNest 3 */
        for (short i_24 = 1; i_24 < 22; i_24 += 3) 
        {
            for (signed char i_25 = 2; i_25 < 20; i_25 += 3) 
            {
                for (short i_26 = 0; i_26 < 23; i_26 += 3) 
                {
                    {
                        var_45 = ((/* implicit */_Bool) arr_86 [i_23] [(short)17]);
                        arr_87 [i_23] [i_24] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_79 [i_25 - 1])) ? (((/* implicit */int) arr_79 [i_25 - 1])) : (((/* implicit */int) arr_79 [i_25 + 1])))));
                        var_46 = ((/* implicit */unsigned char) max((((unsigned long long int) (!(((/* implicit */_Bool) (short)30074))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) 1822748215))) ? (max((((/* implicit */int) arr_79 [i_23])), (1531530093))) : ((-(arr_82 [i_23] [i_23] [i_23]))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            for (unsigned short i_28 = 0; i_28 < 23; i_28 += 3) 
            {
                for (unsigned short i_29 = 1; i_29 < 22; i_29 += 3) 
                {
                    {
                        var_47 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) arr_76 [i_23] [i_27])) : (arr_81 [3LL] [i_27] [(signed char)0] [i_29])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-122)) ? (arr_78 [8ULL] [i_28]) : (((/* implicit */int) arr_77 [(short)9]))))) : (((unsigned long long int) -5558224581868708107LL)))));
                        arr_97 [i_23 + 3] [i_27] [i_27] [(_Bool)1] [i_28] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_92 [i_28])), (((((/* implicit */_Bool) arr_95 [i_28])) ? (arr_84 [i_23 + 1] [i_27] [i_28]) : (((/* implicit */int) arr_85 [i_23] [i_28]))))))) & (max((arr_91 [i_23] [i_27] [i_23]), (((unsigned long long int) -1531530098))))));
                        var_48 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((int) ((arr_75 [i_23]) >= (arr_83 [i_23] [i_23] [i_23] [(unsigned short)18]))))), (max((((/* implicit */unsigned long long int) ((int) (short)18146))), (((unsigned long long int) arr_82 [i_27] [i_28] [i_29]))))));
                    }
                } 
            } 
        } 
    }
}
