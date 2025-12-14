/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202743
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        arr_12 [i_0] [i_1] [(_Bool)1] [i_3] [i_0] [i_4] = ((/* implicit */short) var_7);
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((unsigned long long int) ((unsigned long long int) var_13)))));
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_10)))))));
                    }
                    for (unsigned int i_5 = 1; i_5 < 10; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (-(arr_5 [i_5 - 1] [6ULL]))))));
                        var_21 = ((unsigned int) arr_10 [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]);
                    }
                    for (unsigned long long int i_6 = 1; i_6 < 10; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((unsigned char) arr_9 [i_1 + 1] [i_1 + 1] [i_1] [i_6 - 1] [i_6 - 1]))));
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned char)89)))) == ((~(((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))))))));
                        arr_17 [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -8913990590279244823LL)) ? (((/* implicit */int) (unsigned short)18686)) : (-1)));
                    }
                    arr_18 [i_3] [i_2] [i_1] [(_Bool)1] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)46849)))))));
                }
                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) var_8))))))));
                arr_19 [10ULL] [i_1 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) arr_8 [6LL] [7ULL] [3ULL] [7ULL] [5ULL] [i_1 + 1])) : (((/* implicit */int) var_14))));
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    /* LoopSeq 2 */
                    for (short i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_1 [i_1 + 1]))));
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((unsigned short) arr_22 [i_0] [i_1] [i_0] [i_8])))));
                        var_27 = ((/* implicit */unsigned int) var_5);
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_30 [i_0] [i_0] [i_1] [i_1] [5ULL] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((long long int) arr_0 [i_0] [i_1 + 1]));
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [9ULL] [i_2] [i_1]))))))))));
                    }
                    var_29 = ((/* implicit */_Bool) ((unsigned char) arr_26 [i_0] [i_1 + 1] [i_1 - 1] [i_0] [i_1 + 1] [4U] [4ULL]));
                }
            }
            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((arr_25 [i_1] [(unsigned short)7] [i_1 + 1]) >> (((((/* implicit */int) var_2)) - (154))))))));
        }
        for (int i_10 = 0; i_10 < 11; i_10 += 2) 
        {
            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((short) var_5)))));
            /* LoopSeq 2 */
            for (short i_11 = 0; i_11 < 11; i_11 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 2; i_12 < 10; i_12 += 4) 
                {
                    var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_12 - 2] [i_12] [i_12 - 2] [2LL] [i_12 - 2] [i_12 + 1])))));
                    /* LoopSeq 2 */
                    for (short i_13 = 0; i_13 < 11; i_13 += 3) /* same iter space */
                    {
                        var_33 = (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) != (var_13)))));
                        var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((unsigned int) ((_Bool) var_4))))));
                        arr_42 [(short)8] [(short)8] [(short)8] = ((/* implicit */_Bool) ((unsigned short) (_Bool)1));
                    }
                    for (short i_14 = 0; i_14 < 11; i_14 += 3) /* same iter space */
                    {
                        arr_45 [i_0] [i_14] = ((/* implicit */unsigned char) arr_6 [i_10] [i_11] [i_11] [i_12 - 2]);
                        arr_46 [i_0] [i_10] [i_10] [(signed char)5] [i_14] = (~(((((/* implicit */_Bool) arr_34 [i_12] [i_12] [i_12])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))));
                    }
                }
                /* LoopSeq 2 */
                for (long long int i_15 = 0; i_15 < 11; i_15 += 4) 
                {
                    var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) (_Bool)0))));
                    var_36 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_9)))) ? (((arr_3 [i_11] [i_10]) ? (((/* implicit */int) arr_24 [0ULL] [(_Bool)1])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_15 [(_Bool)1] [i_0] [i_10] [9U] [i_15] [i_15]))));
                    var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((unsigned long long int) ((unsigned short) arr_4 [0U] [i_0] [i_0]))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_16 = 2; i_16 < 9; i_16 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_3))));
                        var_39 = ((/* implicit */unsigned short) ((int) 8308662326666232889LL));
                        var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) arr_49 [i_0] [i_10] [i_10] [i_11] [i_15] [i_16]))));
                        arr_55 [i_0] [(signed char)2] [0] [i_0] [(short)6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_0] [i_10] [i_11] [i_16 + 1] [i_16 + 2] [(_Bool)1])) && (((/* implicit */_Bool) var_15))));
                        var_41 = ((/* implicit */unsigned long long int) min((var_41), (((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_17 = 0; i_17 < 11; i_17 += 4) 
                    {
                        arr_58 [i_0] [i_0] [i_10] [i_11] [i_15] [i_17] = ((/* implicit */unsigned short) arr_54 [i_17] [i_17] [5ULL] [5ULL] [(short)9] [(short)9] [0LL]);
                        arr_59 [i_0] [i_0] [i_11] [i_15] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_52 [i_15] [i_11] [i_10] [i_0])) ? ((-(((/* implicit */int) var_2)))) : (((((/* implicit */int) (_Bool)1)) << (((18121944967854980776ULL) - (18121944967854980775ULL)))))));
                        arr_60 [i_17] [i_10] [i_0] = ((/* implicit */int) var_8);
                    }
                    for (unsigned short i_18 = 0; i_18 < 11; i_18 += 4) 
                    {
                        var_42 = ((/* implicit */_Bool) var_9);
                        var_43 = ((/* implicit */long long int) 6ULL);
                    }
                }
                for (unsigned short i_19 = 0; i_19 < 11; i_19 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_11)))))));
                        arr_68 [i_11] [i_0] [(unsigned char)6] = ((/* implicit */short) 18446744073709551615ULL);
                        var_45 = ((/* implicit */short) (~(10458243565620384013ULL)));
                    }
                    var_46 = ((/* implicit */unsigned long long int) max((var_46), (var_0)));
                }
                var_47 = ((/* implicit */unsigned long long int) max((var_47), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_32 [i_11])))))));
                /* LoopSeq 1 */
                for (short i_21 = 0; i_21 < 11; i_21 += 4) 
                {
                    /* LoopSeq 2 */
                    for (short i_22 = 2; i_22 < 7; i_22 += 2) 
                    {
                        arr_75 [(short)5] [i_22] [5ULL] [i_10] [i_10] [i_0] = var_10;
                        var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_57 [i_0] [i_0] [i_11] [i_21] [i_11]))))) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) (unsigned char)255))))));
                        var_49 = ((/* implicit */unsigned long long int) max((var_49), (((/* implicit */unsigned long long int) (unsigned short)0))));
                    }
                    for (short i_23 = 0; i_23 < 11; i_23 += 3) 
                    {
                        arr_78 [4U] [i_10] [(_Bool)0] [(_Bool)0] [i_11] [i_21] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_23] [i_21] [i_11] [i_10])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)0))));
                        var_50 = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (var_0)))));
                        var_51 = ((/* implicit */unsigned short) max((var_51), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_76 [(short)2] [i_10] [i_11] [i_21] [i_21] [1U])))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_24 = 0; i_24 < 11; i_24 += 4) /* same iter space */
                    {
                        arr_82 [i_10] = ((/* implicit */unsigned char) var_8);
                        var_52 = ((/* implicit */unsigned int) max((var_52), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) << (((((/* implicit */int) (unsigned short)18687)) - (18674))))))));
                    }
                    for (unsigned char i_25 = 0; i_25 < 11; i_25 += 4) /* same iter space */
                    {
                        var_53 = ((/* implicit */_Bool) max((var_53), (((/* implicit */_Bool) var_9))));
                        var_54 = ((/* implicit */unsigned long long int) min((var_54), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3698187501U)) ? (((/* implicit */int) arr_37 [i_0] [i_10] [i_0] [0] [i_25] [i_0])) : (((/* implicit */int) arr_10 [i_0] [(short)8] [i_11] [i_21] [i_25] [i_11])))))));
                    }
                    arr_85 [i_0] [i_0] [i_10] [(_Bool)0] [i_21] = arr_76 [i_0] [i_0] [i_10] [i_11] [i_11] [i_21];
                }
            }
            for (unsigned long long int i_26 = 0; i_26 < 11; i_26 += 4) 
            {
                /* LoopSeq 2 */
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    var_55 = ((/* implicit */unsigned long long int) max((var_55), (((/* implicit */unsigned long long int) var_1))));
                    /* LoopSeq 4 */
                    for (unsigned char i_28 = 1; i_28 < 9; i_28 += 4) 
                    {
                        var_56 = ((/* implicit */unsigned short) min((var_56), (((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [(_Bool)1]))) < (11834633466826938538ULL))) && (((/* implicit */_Bool) ((unsigned char) (unsigned char)90))))))));
                        var_57 = ((/* implicit */unsigned long long int) arr_89 [0] [i_27]);
                    }
                    for (unsigned short i_29 = 0; i_29 < 11; i_29 += 1) 
                    {
                        var_58 = ((/* implicit */short) (!(arr_43 [i_0] [i_10] [i_26] [i_27] [i_29])));
                        var_59 = ((/* implicit */unsigned long long int) (unsigned char)191);
                        arr_95 [i_0] [i_10] [i_10] [0] [i_10] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 3786323811U)))))));
                    }
                    for (unsigned short i_30 = 0; i_30 < 11; i_30 += 1) /* same iter space */
                    {
                        arr_99 [i_0] = ((/* implicit */unsigned char) ((7311447097198409592LL) ^ (((/* implicit */long long int) ((unsigned int) 15902468160526858696ULL)))));
                        var_60 = ((/* implicit */int) max((var_60), (((/* implicit */int) ((unsigned long long int) arr_35 [i_27] [i_26] [i_0])))));
                    }
                    for (unsigned short i_31 = 0; i_31 < 11; i_31 += 1) /* same iter space */
                    {
                        var_61 = ((/* implicit */long long int) min((var_61), (((/* implicit */long long int) var_1))));
                        var_62 = ((/* implicit */unsigned short) (short)31386);
                    }
                    var_63 = ((/* implicit */unsigned long long int) max((var_63), (var_16)));
                    var_64 = ((/* implicit */_Bool) min((var_64), (((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_4))) * (((/* implicit */int) ((((/* implicit */int) (short)29086)) < (((/* implicit */int) var_3))))))))));
                }
                for (short i_32 = 0; i_32 < 11; i_32 += 2) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_33 = 0; i_33 < 0; i_33 += 1) 
                    {
                        arr_107 [i_0] [i_0] [7ULL] [i_32] = var_9;
                        var_65 = ((/* implicit */short) ((signed char) arr_47 [i_0] [i_10] [i_26] [2U]));
                        var_66 = ((/* implicit */unsigned long long int) max((var_66), (((((/* implicit */_Bool) 2294455424U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_33 + 1] [i_33 + 1] [i_33 + 1] [i_33 + 1] [i_33 + 1] [i_33 + 1]))) : ((-(var_6)))))));
                        arr_108 [i_0] [i_0] [i_0] [5LL] = ((/* implicit */int) ((arr_91 [i_33 + 1] [i_33 + 1] [i_33 + 1] [i_33 + 1] [i_33 + 1]) - (arr_91 [i_33 + 1] [i_33 + 1] [i_33 + 1] [i_33 + 1] [i_33 + 1])));
                    }
                    for (unsigned long long int i_34 = 0; i_34 < 11; i_34 += 2) 
                    {
                        arr_111 [i_26] [i_10] [i_0] = ((((((/* implicit */_Bool) 9132940337648932127ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)6)))) >> (((((/* implicit */int) ((short) 7311447097198409592LL))) - (30556))));
                        arr_112 [(signed char)2] [(short)5] [3U] [i_32] [(signed char)2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) (unsigned short)3169)))));
                        arr_113 [i_0] [i_10] [i_26] [i_32] [i_34] = ((/* implicit */short) (+(((/* implicit */int) arr_28 [4LL] [i_34]))));
                        arr_114 [(unsigned char)7] [i_0] [(unsigned char)7] [(short)4] [i_26] = ((/* implicit */_Bool) arr_70 [i_0] [i_26] [i_10] [i_32]);
                    }
                    for (short i_35 = 0; i_35 < 11; i_35 += 3) 
                    {
                        arr_117 [i_0] [i_26] [9LL] [i_35] = ((/* implicit */long long int) 422212465065984ULL);
                        var_67 = ((/* implicit */_Bool) min((var_67), (((/* implicit */_Bool) ((long long int) arr_88 [i_0] [i_10] [i_26])))));
                        var_68 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_101 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                    }
                    var_69 = ((/* implicit */unsigned long long int) max((var_69), (((/* implicit */unsigned long long int) ((signed char) ((unsigned long long int) (_Bool)1))))));
                }
                arr_118 [i_26] = ((/* implicit */unsigned short) var_10);
                var_70 = ((/* implicit */unsigned int) max((var_70), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [(short)9] [(short)10] [9U])) ? (((/* implicit */int) (unsigned char)137)) : (((/* implicit */int) var_14))))))))));
            }
            var_71 = (_Bool)1;
            arr_119 [i_10] [i_10] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_10] [(short)8])) || (((/* implicit */_Bool) var_6))));
        }
        var_72 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    }
    for (int i_36 = 0; i_36 < 11; i_36 += 1) /* same iter space */
    {
        var_73 = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */unsigned long long int) -2989852899911074091LL)) > (10294760288100489571ULL)))) != (((/* implicit */int) min((arr_35 [i_36] [i_36] [i_36]), (((/* implicit */short) arr_94 [i_36] [i_36] [i_36] [i_36] [i_36] [i_36] [i_36]))))))) ? (arr_40 [i_36] [i_36] [(_Bool)1] [(unsigned short)1] [(_Bool)1] [i_36]) : (((/* implicit */long long int) (-(-1619445900))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_37 = 0; i_37 < 11; i_37 += 4) 
        {
            var_74 = ((/* implicit */unsigned char) min((var_74), (((/* implicit */unsigned char) min(((-(((/* implicit */int) var_11)))), (((((/* implicit */int) arr_70 [i_36] [i_37] [i_36] [i_37])) * (((/* implicit */int) arr_70 [i_36] [i_36] [i_37] [i_37])))))))));
            var_75 = ((/* implicit */_Bool) min((var_75), (((((unsigned long long int) ((var_16) % (var_6)))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [i_36] [i_36] [i_36] [(unsigned char)10])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))) : (arr_52 [(signed char)4] [(signed char)4] [i_36] [i_37]))))))));
        }
        var_76 = ((/* implicit */unsigned char) (-(18446744073709551610ULL)));
    }
    var_77 = ((/* implicit */unsigned int) max((var_77), (((/* implicit */unsigned int) var_2))));
}
