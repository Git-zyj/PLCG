/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20765
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
    var_15 = ((/* implicit */signed char) min(((((!(((/* implicit */_Bool) (unsigned char)231)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) var_13)))), (((/* implicit */int) ((unsigned char) (-(var_1)))))));
    var_16 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */short) var_12))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
        {
            arr_5 [(unsigned short)7] [(unsigned char)3] = ((/* implicit */int) ((arr_2 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) ((short) arr_2 [i_0]))))));
            /* LoopSeq 3 */
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                arr_9 [(short)5] [13U] [i_2] [(short)1] = ((/* implicit */short) arr_6 [i_2] [i_0]);
                arr_10 [(unsigned char)5] [i_2] [9LL] [(_Bool)1] = ((/* implicit */int) min((min((min((arr_1 [(unsigned short)1]), (16878348969058099511ULL))), (((/* implicit */unsigned long long int) arr_2 [5U])))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)-22006)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)212))) : (arr_4 [7LL]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16384)))))))))));
                var_17 = ((/* implicit */short) min((((/* implicit */unsigned long long int) 989443430U)), (1568395104651452104ULL)));
            }
            for (unsigned short i_3 = 2; i_3 < 15; i_3 += 3) 
            {
                var_18 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_3 - 2] [i_3] [i_3 - 1] [(short)14])) + (((/* implicit */int) arr_13 [i_3 + 1] [i_3] [i_3 + 1] [15U]))))), (arr_2 [0ULL])));
                /* LoopNest 2 */
                for (unsigned short i_4 = 1; i_4 < 15; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) var_2);
                            arr_20 [(unsigned short)10] [2U] [i_3] [(short)2] [6ULL] = ((/* implicit */unsigned long long int) min((arr_8 [(short)13] [i_4 - 1] [i_3 - 1] [4LL]), (((/* implicit */unsigned int) arr_12 [(short)12] [12LL]))));
                        }
                    } 
                } 
            }
            for (int i_6 = 3; i_6 < 14; i_6 += 1) 
            {
                arr_23 [(short)15] [(unsigned char)15] [(short)13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)59900)) || (((/* implicit */_Bool) arr_6 [i_0] [i_0]))));
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    for (signed char i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        {
                            arr_30 [(short)2] [(unsigned short)14] [10U] [(short)4] [(_Bool)1] [(unsigned short)15] [(_Bool)1] = ((/* implicit */unsigned long long int) (-(989443430U)));
                            var_20 = ((/* implicit */unsigned char) ((((16878348969058099540ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) ? (max((((((/* implicit */int) var_11)) >> (((3305523876U) - (3305523876U))))), (var_1))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (272334883U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (((/* implicit */int) min((((/* implicit */short) arr_11 [0ULL] [i_0] [(signed char)10] [(_Bool)1])), (var_11)))) : (((/* implicit */int) (short)22005))))));
                            arr_31 [7] [12LL] [(_Bool)1] [6LL] [6ULL] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_6 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 989443441U)) || (((/* implicit */_Bool) (-(((/* implicit */int) (short)706))))))))) : (-501994794551179317LL)));
                        }
                    } 
                } 
            }
            var_21 = ((/* implicit */_Bool) 989443430U);
            var_22 = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) var_10)), (min((((/* implicit */unsigned int) (short)-14724)), (361918249U))))), (989443430U)));
            arr_32 [14ULL] = ((/* implicit */signed char) ((arr_8 [i_0] [(unsigned short)6] [i_1] [i_0]) ^ (arr_8 [(unsigned char)6] [i_0] [i_0] [i_0])));
        }
        for (long long int i_9 = 0; i_9 < 16; i_9 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)251), (((/* implicit */unsigned char) (signed char)-85)))))) % (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_33 [8])), (arr_0 [12ULL])))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)4)), (-1554740978)))) : (((((/* implicit */_Bool) 1129850883U)) ? (((/* implicit */unsigned int) arr_25 [12LL] [12LL] [(short)11] [(unsigned char)12] [(signed char)10] [(signed char)6])) : (4022632413U)))))));
            var_24 = ((/* implicit */long long int) (short)-26607);
        }
        /* vectorizable */
        for (short i_10 = 1; i_10 < 15; i_10 += 1) 
        {
            var_25 = ((/* implicit */unsigned short) 272334864U);
            /* LoopNest 2 */
            for (int i_11 = 2; i_11 < 14; i_11 += 4) 
            {
                for (signed char i_12 = 0; i_12 < 16; i_12 += 4) 
                {
                    {
                        arr_42 [(short)5] [(_Bool)1] [8LL] [(signed char)11] [14ULL] [2LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */long long int) arr_17 [(unsigned char)1] [(unsigned short)1] [(_Bool)1] [(short)4])) ^ (0LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)216)))));
                        arr_43 [(unsigned char)3] = ((/* implicit */unsigned int) var_7);
                        arr_44 [(short)12] [5LL] [(unsigned short)12] [4LL] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_34 [(unsigned short)0] [(unsigned char)9]))) ? (((/* implicit */long long int) (-(1554740976)))) : (arr_2 [i_11 - 1])));
                        var_26 = ((/* implicit */unsigned char) (short)32742);
                    }
                } 
            } 
            arr_45 [(_Bool)1] [8ULL] = ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) arr_25 [(unsigned char)13] [4] [8LL] [(unsigned char)8] [(short)2] [(signed char)13])))));
            arr_46 [10ULL] [1U] [(signed char)13] = ((/* implicit */short) ((((/* implicit */int) arr_13 [i_10 + 1] [i_0] [i_10 - 1] [(signed char)8])) != (((/* implicit */int) (_Bool)1))));
        }
        var_27 = ((/* implicit */_Bool) max((max((arr_17 [(unsigned char)4] [14U] [(unsigned char)15] [12LL]), (((/* implicit */unsigned int) ((16878348969058099502ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231)))))))), (((((/* implicit */_Bool) arr_15 [(unsigned short)15] [14ULL] [i_0])) ? (((434009098U) << (((((/* implicit */int) (signed char)36)) - (31))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 72347773U)) || (((/* implicit */_Bool) 3305523865U))))))))));
    }
    for (signed char i_13 = 0; i_13 < 21; i_13 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_14 = 0; i_14 < 21; i_14 += 2) 
        {
            for (signed char i_15 = 0; i_15 < 21; i_15 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_16 = 1; i_16 < 17; i_16 += 3) 
                    {
                        arr_56 [12U] [(unsigned short)15] [5] [(signed char)10] [18LL] = ((/* implicit */short) ((_Bool) max(((-(((/* implicit */int) (unsigned char)194)))), (((/* implicit */int) (unsigned char)29)))));
                        arr_57 [(short)14] = ((/* implicit */short) min((((/* implicit */unsigned long long int) 989443410U)), (max((((/* implicit */unsigned long long int) min((arr_49 [(unsigned char)19] [(unsigned short)2]), ((unsigned char)162)))), (min((var_14), (((/* implicit */unsigned long long int) arr_51 [(unsigned short)9] [16U] [(short)7]))))))));
                        var_28 = var_9;
                        arr_58 [12LL] [19ULL] [(short)0] = ((/* implicit */int) ((max(((-(16878348969058099511ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) arr_47 [4LL])), (var_7)))))) - (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) arr_54 [(short)18] [4U] [(unsigned char)9] [(_Bool)1] [(signed char)9])) << (((arr_48 [(unsigned short)5]) - (1203190818U)))))))));
                    }
                    for (unsigned short i_17 = 0; i_17 < 21; i_17 += 4) 
                    {
                        arr_61 [(_Bool)1] [(unsigned short)4] [(short)16] [(signed char)8] [(signed char)7] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ ((-(arr_48 [0LL]))))), (min((max((4022632431U), (((/* implicit */unsigned int) arr_51 [14] [16] [(unsigned char)5])))), (((/* implicit */unsigned int) arr_55 [(unsigned char)1] [12ULL] [i_15] [i_15]))))));
                        var_29 = ((/* implicit */long long int) min((3170365921U), (((/* implicit */unsigned int) arr_54 [(unsigned char)5] [(_Bool)1] [4LL] [3LL] [(unsigned char)5]))));
                        arr_62 [(signed char)5] [2U] [(unsigned char)18] [18LL] [(unsigned char)18] = ((/* implicit */long long int) ((max((((/* implicit */unsigned int) arr_52 [i_13])), (4294967292U))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_54 [(short)8] [16U] [(_Bool)1] [(short)19] [6ULL])))))))))));
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_19 = 0; i_19 < 21; i_19 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned int) (unsigned char)251);
                            arr_68 [i_19] = ((/* implicit */short) var_12);
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)251))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 15328603150741070549ULL)))) : (var_9)));
                        }
                        /* vectorizable */
                        for (unsigned char i_20 = 0; i_20 < 21; i_20 += 3) 
                        {
                            arr_73 [19LL] [5ULL] [(short)13] [9U] = ((/* implicit */unsigned int) (unsigned char)116);
                            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_52 [i_14])) ? (272334882U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)40)))));
                        }
                        var_33 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((short) max(((short)-11499), (((/* implicit */short) (_Bool)1))))))));
                        var_34 = ((/* implicit */long long int) (unsigned char)40);
                        arr_74 [(signed char)16] = (unsigned char)41;
                    }
                    /* LoopNest 2 */
                    for (short i_21 = 0; i_21 < 21; i_21 += 3) 
                    {
                        for (long long int i_22 = 3; i_22 < 19; i_22 += 4) 
                        {
                            {
                                var_35 = ((((/* implicit */int) ((short) arr_52 [i_22 - 2]))) << (((((/* implicit */_Bool) var_0)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_22 - 1]))))));
                                arr_79 [(unsigned char)20] [(unsigned char)18] [2LL] [2U] [3LL] [(short)16] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)41))))) && (((/* implicit */_Bool) (unsigned char)121)))) ? (((/* implicit */unsigned long long int) max((var_5), (max((((/* implicit */unsigned int) arr_69 [(_Bool)1] [9U] [4] [13] [19U])), (arr_48 [15U])))))) : (arr_70 [(unsigned char)19] [(_Bool)1] [4ULL] [19U] [(short)8])));
                                var_36 = ((/* implicit */short) arr_71 [(_Bool)1] [(short)10] [4LL]);
                                arr_80 [19U] [(unsigned char)20] [8] = ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-11499))) != (3794864515U)))), (575897802350002176ULL))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_81 [1U] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-11505))));
        /* LoopSeq 3 */
        for (int i_23 = 1; i_23 < 18; i_23 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_24 = 0; i_24 < 21; i_24 += 2) 
            {
                arr_88 [4ULL] [1U] [(unsigned short)19] [(_Bool)1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-15)) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) arr_55 [i_23 + 1] [18] [7] [(_Bool)1]))))), (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_54 [(short)1] [13U] [17] [18] [(short)12]))))), (max((559165470841805651ULL), (((/* implicit */unsigned long long int) (short)7910))))))));
                /* LoopNest 2 */
                for (signed char i_25 = 4; i_25 < 17; i_25 += 2) 
                {
                    for (unsigned char i_26 = 2; i_26 < 19; i_26 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */short) (-((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-30399)) : (((/* implicit */int) arr_64 [(unsigned short)20] [16ULL] [(short)3] [4ULL]))))))));
                            var_38 = (((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((min((((17887578602867745965ULL) << (((((/* implicit */int) var_2)) - (149))))), (((/* implicit */unsigned long long int) (unsigned char)121)))) - (112ULL))));
                        }
                    } 
                } 
            }
            var_39 = ((/* implicit */unsigned short) max((4393160681254719663ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)95)) << (((var_3) - (10064331729853964999ULL))))))));
        }
        for (int i_27 = 1; i_27 < 18; i_27 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_28 = 2; i_28 < 19; i_28 += 3) 
            {
                for (short i_29 = 0; i_29 < 21; i_29 += 3) 
                {
                    {
                        var_40 = ((/* implicit */unsigned short) min((((arr_95 [i_28 - 1]) ? (arr_94 [3] [(_Bool)1] [(short)10]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_51 [11LL] [i_27 + 2] [(unsigned char)4])))))));
                        var_41 = ((/* implicit */long long int) arr_51 [i_27 + 2] [6ULL] [17ULL]);
                        var_42 = ((/* implicit */signed char) arr_78 [(unsigned char)14] [(unsigned short)10] [8ULL] [(signed char)14] [(short)0] [6U]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
            {
                for (_Bool i_31 = 1; i_31 < 1; i_31 += 1) 
                {
                    {
                        var_43 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_85 [i_27 - 1] [(unsigned short)5] [(_Bool)1] [i_31 - 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_54 [(_Bool)1] [3LL] [i_27 + 2] [(unsigned short)10] [16U])))), (max((((/* implicit */int) arr_52 [(unsigned short)10])), (((((/* implicit */int) arr_64 [10LL] [(signed char)11] [(_Bool)1] [11ULL])) | (arr_93 [17U])))))));
                        var_44 = ((/* implicit */long long int) ((559165470841805651ULL) | (10038090653575082307ULL)));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_32 = 1; i_32 < 18; i_32 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned short i_33 = 3; i_33 < 17; i_33 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_34 = 0; i_34 < 21; i_34 += 3) 
                {
                    for (unsigned long long int i_35 = 0; i_35 < 21; i_35 += 3) 
                    {
                        {
                            var_45 = ((/* implicit */signed char) ((((arr_69 [17LL] [19LL] [(short)8] [i_32 - 1] [i_33 - 1]) + (2147483647))) << (((((/* implicit */int) (short)14)) - (14)))));
                            var_46 = ((/* implicit */unsigned long long int) 604604208668967626LL);
                        }
                    } 
                } 
                var_47 = ((/* implicit */signed char) (unsigned char)239);
                arr_117 [i_33] [(short)10] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) -1611695546499096758LL)) ? (4022632404U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)11)))))));
            }
            for (short i_36 = 1; i_36 < 20; i_36 += 1) 
            {
                var_48 = ((/* implicit */_Bool) var_2);
                var_49 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_55 [(unsigned char)19] [i_32 + 1] [20LL] [12U]))));
                arr_120 [13LL] [20ULL] = ((/* implicit */short) ((((/* implicit */_Bool) arr_51 [i_32 + 2] [i_32 - 1] [i_32 + 3])) ? (var_3) : (((/* implicit */unsigned long long int) var_4))));
            }
            for (short i_37 = 4; i_37 < 20; i_37 += 4) 
            {
                arr_124 [(unsigned char)15] [(signed char)15] [17U] [(short)19] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_122 [6LL] [(short)2] [(unsigned char)10])) ? (17887578602867745949ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) != (((((/* implicit */_Bool) 2912143894722578763LL)) ? (14860412975626407282ULL) : (((/* implicit */unsigned long long int) arr_86 [(unsigned short)5] [(unsigned short)17] [(unsigned short)12] [5U]))))));
                var_50 = ((/* implicit */_Bool) ((short) arr_102 [10LL] [(unsigned char)6] [(short)9]));
            }
            arr_125 [6ULL] [5U] = (short)18091;
        }
    }
}
