/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35169
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) - (((/* implicit */int) arr_1 [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((var_6) / (arr_0 [i_0] [i_0])));
    }
    for (unsigned char i_1 = 1; i_1 < 16; i_1 += 2) 
    {
        var_12 = ((/* implicit */unsigned char) min(((~(((((/* implicit */_Bool) (unsigned short)16842)) ? (((/* implicit */int) (unsigned short)56365)) : (-1579498376))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1 - 1])) && (((/* implicit */_Bool) arr_6 [i_1])))))));
        arr_7 [i_1] = ((((/* implicit */int) arr_5 [i_1] [i_1 - 1])) << (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_1 - 1]))))) || (((/* implicit */_Bool) ((int) (unsigned char)141)))))));
        var_13 = ((/* implicit */unsigned char) (~((~(arr_6 [i_1 + 2])))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 2; i_2 < 10; i_2 += 1) 
    {
        var_14 ^= arr_0 [i_2 + 1] [i_2 + 1];
        /* LoopSeq 1 */
        for (int i_3 = 2; i_3 < 8; i_3 += 3) 
        {
            /* LoopSeq 3 */
            for (int i_4 = 1; i_4 < 11; i_4 += 3) 
            {
                var_15 = ((/* implicit */unsigned short) -809897441);
                arr_18 [i_2] [i_2] [i_4 + 1] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) var_11))));
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_11 [i_4 - 1] [i_4 - 1]))));
            }
            for (unsigned char i_5 = 3; i_5 < 11; i_5 += 2) 
            {
                arr_22 [i_3] = ((/* implicit */unsigned short) (-(((int) 14336))));
                var_17 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_3]))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)7339)) : (((/* implicit */int) (unsigned short)16862)))) : (((/* implicit */int) arr_1 [i_2])));
                arr_23 [i_2 - 2] [i_2 - 2] = ((unsigned short) (-(((/* implicit */int) (unsigned char)255))));
                /* LoopSeq 4 */
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
                {
                    var_18 ^= (+(((/* implicit */int) ((unsigned char) 1048448))));
                    var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_0))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_4)) ? (arr_6 [i_2]) : (((/* implicit */int) (unsigned short)7339))))));
                }
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
                {
                    arr_28 [i_2] [i_2] &= ((((/* implicit */_Bool) (unsigned short)58404)) ? (-1042072018) : (1239962680));
                    arr_29 [i_2 - 2] [i_2 - 2] [i_3] [i_3] [i_7] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_5 [i_2 + 2] [i_2 + 2]))))) ? (((/* implicit */int) arr_1 [i_5 - 2])) : (((/* implicit */int) arr_12 [i_3 + 1] [i_2 - 1])));
                    arr_30 [i_7] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) -2147483631);
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 1; i_8 < 9; i_8 += 4) 
                    {
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_32 [i_8] [i_8 + 3] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 + 2] [(unsigned char)10])))))));
                        arr_35 [10] [10] [10] [10] [i_2 + 1] = arr_31 [i_5] [i_5] [i_5] [4] [i_5];
                        arr_36 [i_2] [i_2] [i_5] [i_5] [i_5] = ((/* implicit */int) var_2);
                        arr_37 [i_2] [i_7] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) 881250174);
                    }
                }
                for (int i_9 = 0; i_9 < 12; i_9 += 2) 
                {
                    /* LoopSeq 3 */
                    for (int i_10 = 2; i_10 < 11; i_10 += 1) /* same iter space */
                    {
                        arr_45 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [(unsigned char)5] |= arr_24 [i_2 - 2] [i_2 + 2] [i_2 + 1] [i_3 + 1] [i_3 + 2] [i_5 - 3];
                        arr_46 [i_2] [i_2] [i_2] [i_2] [i_10 + 1] [10] = ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_2 + 2] [i_3] [i_3 + 1] [i_9])) && (((/* implicit */_Bool) (unsigned short)9177))));
                        arr_47 [i_2] [i_3 + 2] [11] [i_9] [i_9] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 568458172))));
                    }
                    for (int i_11 = 2; i_11 < 11; i_11 += 1) /* same iter space */
                    {
                        var_21 &= ((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2]);
                        var_22 |= ((/* implicit */unsigned char) (!(((-1) >= (((/* implicit */int) var_3))))));
                        arr_50 [i_11] [i_11] = arr_20 [i_11];
                        var_23 = ((/* implicit */int) var_2);
                    }
                    for (int i_12 = 2; i_12 < 11; i_12 += 1) /* same iter space */
                    {
                        arr_53 [i_2] [i_2] = (+(((/* implicit */int) arr_20 [i_5 - 3])));
                        arr_54 [i_2 + 1] [i_3 + 3] [i_2 + 1] [i_2 + 1] [i_12] &= var_9;
                        var_24 += ((/* implicit */unsigned char) (-2147483647 - 1));
                    }
                    var_25 |= (-(var_0));
                    arr_55 [i_2] [i_2] [i_2 - 1] [i_2 + 1] &= ((/* implicit */unsigned char) ((arr_38 [9] [9] [i_5 - 2]) != ((+(177082641)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        var_26 &= ((/* implicit */int) (!(((/* implicit */_Bool) -43803071))));
                        var_27 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_5 [i_5 - 1] [12]))));
                        arr_59 [i_3] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)52395)) / (-21))) != (((/* implicit */int) arr_5 [i_2 + 2] [i_5 - 1]))));
                        arr_60 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned char) var_10);
                    }
                    var_28 = ((/* implicit */int) arr_57 [i_2 + 2] [i_2 - 2]);
                }
                for (unsigned short i_14 = 2; i_14 < 10; i_14 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_15 = 1; i_15 < 9; i_15 += 1) 
                    {
                        var_29 |= ((/* implicit */int) arr_63 [i_2] [i_2] [i_2] [i_14 - 2] [i_15 + 2]);
                        var_30 |= ((/* implicit */unsigned short) (-(arr_65 [i_14 - 2] [i_14 - 2] [i_14 + 1] [i_14 - 2] [i_14 - 2])));
                    }
                    var_31 = (unsigned short)52395;
                    /* LoopSeq 2 */
                    for (int i_16 = 3; i_16 < 10; i_16 += 4) 
                    {
                        arr_70 [i_2] [i_2] [i_3 + 2] [i_5 - 1] [i_14] [i_5 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_44 [i_2] [i_2] [i_2 + 1] [i_16 + 2] [i_2 + 1])) ? (((/* implicit */int) arr_20 [i_14 - 2])) : (var_8)));
                        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) var_2))));
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1257667032)) ? (29) : (((/* implicit */int) (unsigned char)255))))) ? ((-(arr_32 [i_2] [i_2] [i_2] [i_2] [i_16 - 2] [i_2 - 2] [i_2]))) : (arr_56 [i_2] [i_2] [i_2] [i_2] [i_16 - 3])));
                        var_34 = ((/* implicit */int) min((var_34), ((+(((/* implicit */int) arr_44 [i_2] [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 2]))))));
                    }
                    for (int i_17 = 1; i_17 < 10; i_17 += 1) 
                    {
                        arr_73 [8] &= ((((/* implicit */_Bool) -15)) ? (arr_6 [i_14 - 1]) : (arr_67 [i_2 - 1] [i_5 - 1] [i_3 + 3] [i_3 + 3] [i_14 - 1] [i_3 + 2] [(unsigned char)4]));
                        arr_74 [i_17] [i_5 - 2] [i_17] [i_5 - 2] [i_17] [i_17] = ((arr_56 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1]) % (arr_71 [i_17] [(unsigned short)6] [i_2] [i_3 - 1] [i_2] [i_17]));
                        var_35 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_57 [i_5] [i_17 + 2])))) ? (arr_34 [i_2] [i_2] [i_2] [i_2] [i_2 - 2] [i_2 - 1] [i_2 - 2]) : ((+(var_0)))));
                    }
                    arr_75 [i_2 + 1] [i_2 + 1] = ((/* implicit */unsigned char) arr_24 [i_14] [i_14] [i_14] [i_14 - 2] [i_14 + 1] [i_14 + 1]);
                }
                var_36 = (~(((/* implicit */int) arr_26 [i_5] [i_5] [i_2 + 2] [i_3 - 2] [i_2 + 2] [i_5 - 1])));
            }
            for (int i_18 = 0; i_18 < 12; i_18 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_19 = 0; i_19 < 12; i_19 += 4) 
                {
                    for (int i_20 = 0; i_20 < 12; i_20 += 4) 
                    {
                        {
                            arr_84 [i_2] [i_2] [i_2] &= ((((/* implicit */_Bool) var_0)) ? (var_9) : (((int) arr_8 [i_20])));
                            var_37 = ((((/* implicit */_Bool) arr_64 [i_2] [i_3 + 4] [i_3 + 4] [i_3 + 4] [i_3 + 4])) ? (arr_64 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 2]) : (860660732));
                        }
                    } 
                } 
                arr_85 [i_2] [i_2] [(unsigned short)5] [(unsigned short)5] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)7318)) * (((/* implicit */int) (unsigned short)19866))));
                var_38 += ((/* implicit */unsigned short) arr_83 [i_2 + 2] [i_3 - 1] [i_3 + 1]);
                var_39 |= arr_25 [i_2] [i_2 + 1] [i_2] [i_2 + 2];
            }
            var_40 &= (-(var_6));
        }
        var_41 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) ? (-2147483633) : (((/* implicit */int) arr_49 [i_2] [i_2] [i_2] [i_2] [i_2])))) | (arr_14 [i_2 + 1])));
    }
    for (unsigned short i_21 = 0; i_21 < 24; i_21 += 4) 
    {
        arr_88 [i_21] = max((var_6), (((((/* implicit */_Bool) arr_86 [i_21])) ? (arr_86 [i_21]) : (((((/* implicit */_Bool) arr_86 [i_21])) ? (((/* implicit */int) (unsigned short)56389)) : (var_7))))));
        var_42 = arr_87 [i_21] [i_21];
    }
    /* LoopSeq 3 */
    for (unsigned char i_22 = 0; i_22 < 10; i_22 += 4) 
    {
        var_43 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_22] [i_22])) ? (((/* implicit */int) arr_58 [i_22] [i_22])) : (((/* implicit */int) arr_58 [i_22] [i_22]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_58 [i_22] [i_22]))))) : (var_9)));
        arr_91 [i_22] = (-(-1989534450));
        /* LoopSeq 2 */
        for (unsigned short i_23 = 3; i_23 < 9; i_23 += 1) 
        {
            arr_94 [i_22] = ((/* implicit */int) (unsigned short)55552);
            arr_95 [i_22] [i_23] [i_22] &= (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_43 [i_23] [i_23] [i_23 - 3] [i_23 - 3] [i_23 - 3] [i_23])) : (arr_69 [i_23 - 1] [i_23 - 1] [i_22]))));
            var_44 += min((((((/* implicit */_Bool) ((int) (unsigned char)12))) ? (min((((/* implicit */int) arr_21 [8] [8] [8])), (var_0))) : (arr_38 [(unsigned char)4] [(unsigned char)4] [i_23 - 2]))), (((/* implicit */int) (unsigned short)7330)));
        }
        for (int i_24 = 0; i_24 < 10; i_24 += 4) 
        {
            var_45 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 161223323)) ? (((/* implicit */int) var_3)) : (arr_64 [i_22] [i_24] [i_24] [i_24] [i_22])))) ? (((((/* implicit */_Bool) min((var_6), (((/* implicit */int) arr_44 [i_22] [i_22] [(unsigned char)5] [(unsigned char)5] [i_22]))))) ? (arr_71 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24]) : (var_10))) : (((((/* implicit */_Bool) arr_5 [i_22] [i_22])) ? (arr_89 [i_22] [i_22]) : (((/* implicit */int) (unsigned short)10))))));
            arr_98 [i_22] [3] = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_4) == (var_8)))) / (((((/* implicit */_Bool) arr_79 [i_22] [i_22] [(unsigned char)0] [i_22] [i_22] [i_22])) ? (arr_79 [i_24] [i_24] [4] [i_24] [i_24] [4]) : (((/* implicit */int) arr_27 [i_24] [i_24] [i_24]))))));
            var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) min((((((/* implicit */int) arr_26 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22])) <= ((~(((/* implicit */int) var_5)))))), (((3145728) < (arr_14 [i_22]))))))));
        }
    }
    for (unsigned short i_25 = 0; i_25 < 18; i_25 += 3) 
    {
        arr_103 [i_25] = (+(((/* implicit */int) ((((/* implicit */int) ((arr_100 [2] [7]) != (arr_101 [i_25])))) != (((int) arr_87 [21] [21]))))));
        arr_104 [i_25] [i_25] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)17)) << (((-43803076) + (43803079)))))) ? (((var_7) / (arr_86 [i_25]))) : ((+(((/* implicit */int) (unsigned short)7360)))))), ((((~(((/* implicit */int) (unsigned short)56352)))) & (((((/* implicit */_Bool) 297690835)) ? (((/* implicit */int) (unsigned short)16861)) : (940752082)))))));
        var_47 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_6 [i_25]) - (arr_102 [12])))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 993926423)))))))) ? (((/* implicit */int) arr_99 [i_25])) : (var_10));
        arr_105 [i_25] = ((/* implicit */int) (((-(((((/* implicit */int) (unsigned char)255)) + (var_9))))) < (((/* implicit */int) max(((unsigned short)56367), ((unsigned short)16840))))));
    }
    for (unsigned char i_26 = 1; i_26 < 11; i_26 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_27 = 0; i_27 < 13; i_27 += 2) 
        {
            for (int i_28 = 0; i_28 < 13; i_28 += 2) 
            {
                {
                    var_48 ^= ((/* implicit */unsigned char) ((max((arr_86 [i_26 + 2]), (arr_113 [i_26 - 1] [i_26 + 2]))) / (((((/* implicit */int) (unsigned short)54614)) / (((/* implicit */int) arr_112 [i_26] [i_26 + 1] [i_26]))))));
                    var_49 = arr_110 [i_26];
                }
            } 
        } 
        arr_115 [i_26 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_26] [i_26])) ? (((/* implicit */int) arr_4 [i_26])) : (arr_113 [i_26 - 1] [i_26 - 1]))))) : ((((~(((/* implicit */int) var_3)))) ^ (max((13), (-1627560033)))))));
        arr_116 [i_26] [i_26] = (-((+(((/* implicit */int) arr_108 [i_26 + 1] [i_26 + 1] [i_26 + 1])))));
        arr_117 [i_26] [i_26] = var_11;
    }
    var_50 = ((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */int) (unsigned short)48698)));
}
