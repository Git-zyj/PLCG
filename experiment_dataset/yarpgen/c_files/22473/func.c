/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22473
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                for (unsigned char i_3 = 1; i_3 < 8; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */signed char) ((unsigned int) (_Bool)1));
                        arr_15 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) ((59746494) >= (1073741822)))) : (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        } 
        arr_16 [i_0] = ((/* implicit */_Bool) -1073741828);
        var_12 = ((/* implicit */short) 8407020196212778976LL);
    }
    for (short i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        arr_19 [i_4] = ((/* implicit */unsigned short) (unsigned char)254);
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_6 = 3; i_6 < 6; i_6 += 1) 
            {
                for (short i_7 = 2; i_7 < 8; i_7 += 1) 
                {
                    {
                        var_13 = ((/* implicit */short) arr_23 [i_7] [i_5]);
                        arr_29 [i_7] [i_6] [i_6] [i_4] = ((/* implicit */unsigned char) 1835008U);
                        arr_30 [i_6] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_4] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (arr_9 [i_7 - 2] [i_4])))) < (1405134151579883583LL)))), (((((/* implicit */_Bool) ((unsigned int) arr_23 [i_7] [i_6]))) ? (((/* implicit */int) ((((/* implicit */_Bool) -1405134151579883602LL)) || (((/* implicit */_Bool) (signed char)-58))))) : (((/* implicit */int) ((((/* implicit */int) var_2)) >= (arr_1 [i_4]))))))));
                        var_14 = ((/* implicit */short) (signed char)32);
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_27 [i_6 - 1] [i_6 + 4] [i_7 + 2] [i_7 - 1] [i_7 - 2]), (arr_27 [i_6 + 4] [i_6 + 1] [i_7 + 2] [i_7 + 1] [i_7 - 1])))) - (((((/* implicit */_Bool) arr_3 [i_7 - 2] [i_7] [i_6 - 3])) ? (((/* implicit */int) arr_6 [i_6 - 1] [i_7 - 1] [i_7])) : (((/* implicit */int) (unsigned char)123))))));
                    }
                } 
            } 
            var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_4 [i_4] [i_5] [i_4])) ? (var_4) : (((/* implicit */int) (unsigned char)255)))) >= (((/* implicit */int) ((_Bool) ((-8407020196212778966LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)111)))))))));
            arr_31 [i_4] [(_Bool)0] [i_4] = ((/* implicit */int) max((((unsigned int) arr_10 [i_4])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_5])) || (((/* implicit */_Bool) arr_13 [i_5] [i_4])))))));
            var_17 = ((/* implicit */short) ((max((((/* implicit */int) ((1405134151579883577LL) >= (1405134151579883577LL)))), (((((/* implicit */int) var_7)) % (arr_7 [i_4] [i_4] [i_4]))))) < (((((_Bool) arr_24 [i_4])) ? (((((/* implicit */int) arr_25 [i_5] [i_5] [i_5] [i_5])) << (((/* implicit */int) (short)0)))) : (((/* implicit */int) ((((/* implicit */long long int) 4293132291U)) >= (-1405134151579883577LL))))))));
            /* LoopSeq 1 */
            for (unsigned char i_8 = 1; i_8 < 9; i_8 += 1) 
            {
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5211)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))));
                arr_36 [i_4] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8407020196212778951LL)) ? (1835015U) : (1073741696U)))) ? (((/* implicit */int) arr_22 [i_8] [i_5] [i_4])) : (((/* implicit */int) max((arr_25 [i_4] [i_5] [i_5] [i_4]), (var_8))))))) ? (((/* implicit */long long int) ((((((/* implicit */int) arr_25 [i_4] [i_4] [i_4] [7ULL])) & (((/* implicit */int) arr_34 [i_4] [i_5] [i_8])))) >> (((((((/* implicit */int) var_5)) | (((/* implicit */int) var_6)))) - (23526)))))) : (min((((arr_35 [i_8]) & (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) arr_17 [i_8 + 1]))))));
                arr_37 [i_4] [i_4] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)48))) - (-8407020196212778985LL)))) ? (-1405134151579883589LL) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_1)))))))));
            }
        }
    }
    for (unsigned long long int i_9 = 1; i_9 < 21; i_9 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_10 = 0; i_10 < 23; i_10 += 2) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_11 = 4; i_11 < 22; i_11 += 1) 
            {
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_42 [i_11] [16] [i_11 + 1] [(unsigned short)14])) && (((/* implicit */_Bool) arr_42 [21U] [20] [i_11 - 3] [i_9 + 2])))))));
                var_20 = ((/* implicit */signed char) ((((/* implicit */int) arr_41 [i_11 - 4] [i_9 + 1])) >= (((/* implicit */int) arr_38 [i_9 + 1] [i_9 - 1]))));
                var_21 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)120)) == (((/* implicit */int) var_5))))) << (((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) (unsigned short)3468)))))));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                arr_46 [i_9] [13] [i_12] [i_10] = ((/* implicit */unsigned int) (_Bool)0);
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_40 [i_9 + 2] [i_9 + 1]))) / (((((/* implicit */_Bool) arr_44 [i_12])) ? (-8407020196212778977LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))))));
                arr_47 [i_9] [i_9] [i_9] = arr_43 [i_9 + 1] [i_10] [i_12] [i_10];
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 1; i_13 < 21; i_13 += 1) 
                {
                    for (signed char i_14 = 0; i_14 < 23; i_14 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) -1405134151579883589LL)) ? (((/* implicit */long long int) arr_55 [i_14] [i_10] [i_9])) : (5098342493535057443LL)));
                            arr_56 [20] [i_13] [i_13] [i_10] [i_9] = ((/* implicit */unsigned short) var_5);
                            var_24 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_49 [i_12] [i_12] [i_13] [i_13 + 1])) || (((/* implicit */_Bool) 8407020196212778978LL))));
                        }
                    } 
                } 
            }
            for (unsigned short i_15 = 4; i_15 < 20; i_15 += 1) /* same iter space */
            {
                var_25 = ((arr_55 [i_15 - 3] [i_10] [i_9]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32704))));
                /* LoopNest 2 */
                for (unsigned char i_16 = 0; i_16 < 23; i_16 += 1) 
                {
                    for (int i_17 = 0; i_17 < 23; i_17 += 1) 
                    {
                        {
                            arr_65 [i_9] [i_9 + 2] [i_10] [(unsigned char)3] [i_16] [i_17] [(unsigned char)10] = ((/* implicit */int) ((((/* implicit */int) arr_50 [i_17] [i_10] [i_15] [i_10] [i_10] [i_9 + 1])) == (((((/* implicit */int) (short)0)) << (((/* implicit */int) (_Bool)1))))));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_50 [i_15 + 2] [i_15] [14ULL] [i_15 - 4] [i_9 + 1] [i_9 + 1])) == (((/* implicit */int) var_2))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_18 = 0; i_18 < 23; i_18 += 1) 
                {
                    for (unsigned char i_19 = 0; i_19 < 23; i_19 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */signed char) (short)-1);
                            var_28 = ((/* implicit */int) ((arr_51 [12U] [12U] [i_10] [i_18]) < (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                            var_29 = ((/* implicit */signed char) ((((/* implicit */int) arr_67 [(_Bool)1])) == (((/* implicit */int) arr_67 [i_9]))));
                        }
                    } 
                } 
                arr_72 [i_9] [i_10] [i_15] [6U] = ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)217))) < (8407020196212778984LL)));
            }
            for (unsigned short i_20 = 4; i_20 < 20; i_20 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    var_30 = ((/* implicit */int) min((var_30), (((arr_76 [i_20 + 1] [i_20] [i_9 + 2] [i_20 - 1] [i_9 + 2]) | (arr_64 [i_20 - 4] [i_9 - 1] [i_20] [i_9] [0])))));
                    arr_79 [i_9 - 1] [i_9 - 1] [(unsigned short)9] [i_20] = ((_Bool) 8407020196212778992LL);
                    arr_80 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */unsigned int) ((signed char) arr_51 [i_9 + 1] [i_20] [i_20] [i_9 + 1]));
                    arr_81 [i_21] [i_21] [i_20] [i_20] [i_10] [i_9] = ((short) arr_70 [i_9 - 1] [i_9 - 1] [(short)5] [i_20 + 1] [i_10]);
                    var_31 = ((2097088U) >> (((arr_55 [i_9] [i_10] [i_21]) - (470458739U))));
                }
                for (long long int i_22 = 0; i_22 < 23; i_22 += 2) 
                {
                    arr_85 [i_9] [i_10] [i_20] [i_20] = ((((/* implicit */_Bool) arr_40 [(short)21] [i_9 + 2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (4223268946804646318ULL) : (((/* implicit */unsigned long long int) -6483795812028049884LL))))));
                    var_32 = ((/* implicit */unsigned char) ((var_7) ? (((/* implicit */int) arr_71 [i_9 + 2] [(short)7] [i_20 + 3])) : (((/* implicit */int) arr_71 [i_9 - 1] [i_10] [i_20 + 2]))));
                }
                /* LoopNest 2 */
                for (unsigned short i_23 = 2; i_23 < 22; i_23 += 1) 
                {
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-29513))) == (2156550607U))) ? (arr_52 [i_23] [i_23 + 1] [i_23 - 1] [i_20] [i_23 - 1] [i_23 - 1]) : (((/* implicit */int) ((((/* implicit */int) var_1)) >= (-1589746245))))));
                            var_34 = ((/* implicit */short) ((((/* implicit */int) arr_77 [i_20] [i_23] [i_23 + 1] [15LL] [i_23] [i_23])) - (((/* implicit */int) (short)-1804))));
                            var_35 = (i_20 % 2 == 0) ? (((/* implicit */signed char) ((((((/* implicit */_Bool) (short)11101)) || (((/* implicit */_Bool) -1405134151579883595LL)))) ? (((var_4) % (((/* implicit */int) arr_91 [i_24] [i_23 + 1] [i_20] [i_20] [i_20] [i_10] [i_9])))) : (((((/* implicit */int) (unsigned char)38)) + (((/* implicit */int) (short)-31202))))))) : (((/* implicit */signed char) ((((((/* implicit */_Bool) (short)11101)) || (((/* implicit */_Bool) -1405134151579883595LL)))) ? (((var_4) * (((/* implicit */int) arr_91 [i_24] [i_23 + 1] [i_20] [i_20] [i_20] [i_10] [i_9])))) : (((((/* implicit */int) (unsigned char)38)) + (((/* implicit */int) (short)-31202)))))));
                        }
                    } 
                } 
            }
            arr_94 [i_9] [i_9] = ((((/* implicit */_Bool) arr_61 [i_10] [i_10] [i_9 + 1] [i_9 + 1] [i_9])) ? (((/* implicit */int) arr_61 [i_9] [i_10] [i_9 - 1] [i_10] [i_9 + 1])) : (((/* implicit */int) arr_61 [i_9 - 1] [i_9 - 1] [i_10] [i_10] [i_10])));
        }
        for (long long int i_25 = 2; i_25 < 19; i_25 += 1) 
        {
            var_36 = ((((((((/* implicit */_Bool) arr_66 [(unsigned char)3] [i_25 + 2] [0LL] [i_25])) ? (((/* implicit */long long int) arr_64 [i_9] [i_9] [16] [i_25] [(signed char)12])) : (arr_63 [i_9] [i_9] [5] [i_9] [i_25] [i_25] [i_25 + 1]))) % (((/* implicit */long long int) ((/* implicit */int) max(((signed char)-48), (arr_62 [i_9 + 2] [i_9 + 2] [(signed char)21] [i_25]))))))) == (((((/* implicit */long long int) ((/* implicit */int) arr_87 [i_25] [i_25 - 1] [14LL] [i_25]))) / (-8407020196212778985LL))));
            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((-8407020196212778993LL), (((/* implicit */long long int) (short)1804))))) ? (((/* implicit */int) (short)1967)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((-8407020196212778999LL) == (((/* implicit */long long int) ((/* implicit */int) var_7))))))) >= (((((/* implicit */_Bool) var_2)) ? (arr_63 [i_9] [i_9] [i_9] [i_9] [i_25 + 1] [i_25] [i_25]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)66))))))))));
            var_38 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)58))) >= (-4LL))))) < (min((-428578031336649786LL), (((/* implicit */long long int) (signed char)22))))))) % (((/* implicit */int) (signed char)73))));
        }
        for (unsigned char i_26 = 1; i_26 < 21; i_26 += 1) 
        {
            arr_100 [i_9 + 2] [i_26] = ((/* implicit */signed char) (short)21104);
            arr_101 [i_9] [i_9] [i_26] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (-1340345499) : (((/* implicit */int) (_Bool)1))));
        }
        var_39 -= ((/* implicit */short) var_8);
        /* LoopSeq 2 */
        for (unsigned int i_27 = 0; i_27 < 23; i_27 += 1) 
        {
            var_40 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_71 [i_9 - 1] [i_9 + 2] [i_9 - 1])) ? (((/* implicit */int) arr_71 [i_9 + 1] [i_9 + 2] [i_9 + 2])) : (((/* implicit */int) arr_71 [i_9 + 1] [i_9 + 1] [i_9 + 1])))));
            var_41 = ((/* implicit */int) var_5);
            var_42 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((short) (short)-21119))) ? (((/* implicit */long long int) ((int) (unsigned char)212))) : (arr_63 [i_9] [i_9 - 1] [i_9] [i_9] [i_9 + 1] [i_9 + 1] [i_9]))) == (((/* implicit */long long int) ((arr_54 [i_9] [i_9 - 1] [i_9] [15U] [i_9] [i_9] [i_9 + 1]) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (unsigned short)44808)))))));
        }
        for (short i_28 = 0; i_28 < 23; i_28 += 2) 
        {
            arr_107 [i_28] [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)65513)) ? (2785229140338495404LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20715))))) % (((/* implicit */long long int) ((/* implicit */int) var_8)))));
            arr_108 [i_9] [i_28] [i_9] = ((/* implicit */unsigned int) -1LL);
        }
    }
    var_43 = ((/* implicit */int) var_5);
    var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) var_8))));
}
