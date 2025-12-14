/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5090
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
    var_17 = var_2;
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))));
    var_19 = ((/* implicit */int) (((!(((/* implicit */_Bool) ((long long int) var_2))))) ? (max((var_16), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) || (((/* implicit */_Bool) max((-780782208), (var_5))))))))));
    var_20 = min((((((/* implicit */_Bool) (short)24157)) ? (var_16) : (((((/* implicit */_Bool) var_13)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))), (((/* implicit */unsigned long long int) var_3)));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_21 |= ((/* implicit */unsigned short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24160)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)24157)))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_1 [i_0])), ((unsigned short)27051)))) ? (min((((/* implicit */long long int) arr_0 [i_0])), (-9114160843538426250LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
        var_22 = ((/* implicit */unsigned short) min((((((/* implicit */int) var_9)) - (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (-(((int) var_16))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            var_23 &= ((((/* implicit */_Bool) arr_4 [(unsigned char)11])) ? (17671138589255074856ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1]))));
            /* LoopSeq 4 */
            for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [11] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_9 [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_9 [10] [i_2] [(unsigned short)6] [i_3]))));
                arr_11 [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        {
                            arr_16 [i_4] [i_4] [i_4] [i_2] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) var_16))));
                            var_25 = (-(((/* implicit */int) var_3)));
                        }
                    } 
                } 
            }
            for (unsigned short i_6 = 2; i_6 < 23; i_6 += 4) /* same iter space */
            {
                var_26 = ((((/* implicit */_Bool) (~(var_2)))) ? (((((/* implicit */_Bool) arr_14 [i_6] [i_6 - 2] [i_2] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41495))) : (var_14))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))));
                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_6])) ? (((/* implicit */unsigned long long int) var_5)) : (var_14)));
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    var_28 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_12))));
                    var_29 = ((/* implicit */signed char) max((var_29), (var_7)));
                    var_30 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_16)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) > (((/* implicit */unsigned long long int) arr_19 [1LL] [1LL] [1LL] [i_6 - 1]))));
                }
                /* LoopSeq 4 */
                for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    var_31 &= ((/* implicit */short) ((unsigned short) (-(((/* implicit */int) arr_12 [i_8])))));
                    /* LoopSeq 3 */
                    for (unsigned char i_9 = 2; i_9 < 22; i_9 += 4) 
                    {
                        var_32 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_6 - 2] [(unsigned short)11] [i_9 + 2] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_6 + 1] [i_6 + 2] [i_9 + 3] [i_9] [i_9 - 2] [i_1] [i_1]))) : (arr_19 [i_6 - 2] [i_8] [i_9 - 1] [i_9 - 2])));
                        arr_29 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) arr_19 [16] [11] [i_6 + 2] [i_6 - 1]);
                        var_33 += ((/* implicit */unsigned long long int) var_8);
                    }
                    for (unsigned short i_10 = 1; i_10 < 22; i_10 += 4) 
                    {
                        var_34 |= (((+(((/* implicit */int) var_10)))) * ((+(((/* implicit */int) var_3)))));
                        var_35 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_6 + 1])) && (((/* implicit */_Bool) var_15)))) || (((/* implicit */_Bool) arr_5 [i_6 - 1]))));
                        var_36 = ((/* implicit */long long int) arr_21 [i_2] [i_2] [i_2] [i_2] [i_2]);
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)140)) + (((/* implicit */int) var_4))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_10] [15] [i_8] [i_6] [i_2] [i_1]))))) : (((/* implicit */int) (unsigned char)206))));
                    }
                    for (signed char i_11 = 2; i_11 < 22; i_11 += 1) 
                    {
                        var_38 ^= ((/* implicit */unsigned char) ((12230642827909757399ULL) | (arr_34 [i_1] [i_6 - 2] [i_8] [i_8] [i_1])));
                        var_39 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3)));
                        var_40 |= ((/* implicit */unsigned char) ((unsigned short) arr_15 [i_11 + 2] [i_11] [(unsigned short)19] [i_11 + 1] [i_11 + 2]));
                        var_41 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) (unsigned char)52)))));
                    }
                }
                for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 2) 
                {
                    arr_39 [i_2] [i_6 + 2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_10))))) > (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) (unsigned char)205)))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_13 = 1; i_13 < 22; i_13 += 2) 
                    {
                        var_42 = ((/* implicit */int) ((short) arr_37 [i_6 + 1]));
                        var_43 ^= ((signed char) ((63) >> (((arr_36 [i_1] [i_12] [i_6]) - (1733210418)))));
                        var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_4))));
                    }
                    for (unsigned char i_14 = 0; i_14 < 25; i_14 += 1) 
                    {
                        var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_14] [i_12] [i_6] [i_1])) ? (((/* implicit */int) arr_9 [i_1] [i_2] [i_6 - 1] [i_12])) : (((/* implicit */int) var_6))));
                        var_46 -= ((/* implicit */unsigned char) arr_13 [i_6] [i_6]);
                        var_47 = ((/* implicit */signed char) arr_8 [i_6 + 1] [i_6 + 2] [(unsigned short)10]);
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 4) 
                    {
                        var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) arr_14 [i_1] [24] [i_12] [i_12] [i_12])) - (((/* implicit */int) var_10)))) : (((/* implicit */int) var_9)))))));
                        var_49 = ((/* implicit */unsigned short) ((unsigned char) var_1));
                        var_50 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-4198)) ? (var_5) : (((/* implicit */int) var_9))));
                    }
                    for (unsigned char i_16 = 0; i_16 < 25; i_16 += 1) 
                    {
                        var_51 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_6 + 1] [i_6 - 2] [i_6 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_47 [i_6 - 1] [i_2] [i_2]))));
                        var_52 = ((((/* implicit */int) arr_6 [i_6 + 2] [i_6 + 2] [i_16])) ^ (((/* implicit */int) arr_6 [i_6 - 1] [i_6 - 1] [i_6 - 1])));
                    }
                    var_53 -= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((unsigned short) var_14)))));
                    var_54 = ((/* implicit */unsigned char) min((var_54), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_6 - 2] [i_6 - 2] [16ULL])) ? (arr_31 [i_6 + 2] [i_6 + 2] [i_6]) : (arr_31 [i_6 - 2] [(unsigned short)0] [(unsigned short)0]))))));
                }
                for (unsigned char i_17 = 0; i_17 < 25; i_17 += 3) 
                {
                    var_55 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_10))));
                    var_56 = ((/* implicit */unsigned short) ((unsigned char) var_3));
                    var_57 = ((/* implicit */unsigned char) max((var_57), (((/* implicit */unsigned char) ((arr_36 [i_6 - 2] [i_6 - 2] [i_6]) <= (arr_36 [i_6 + 1] [i_6] [i_17]))))));
                    var_58 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_1] [22LL] [i_1])) && (((/* implicit */_Bool) arr_25 [i_1] [i_17] [i_6 + 2] [i_17] [i_2]))));
                }
                for (signed char i_18 = 1; i_18 < 23; i_18 += 2) 
                {
                    var_59 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [(unsigned char)10] [i_18] [i_6] [i_6 - 2] [i_6] [i_2] [i_1]))));
                    var_60 &= ((/* implicit */signed char) ((arr_19 [i_18] [i_6 + 1] [(unsigned char)14] [i_2]) + (arr_19 [i_18] [i_6 + 1] [i_6 - 1] [i_6 - 1])));
                    var_61 = ((/* implicit */unsigned short) ((int) arr_53 [i_2] [i_18]));
                    /* LoopSeq 1 */
                    for (signed char i_19 = 0; i_19 < 25; i_19 += 4) 
                    {
                        var_62 = ((/* implicit */int) (unsigned char)82);
                        var_63 = ((/* implicit */unsigned char) 1738910412);
                        var_64 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_25 [i_18] [i_18 - 1] [i_18] [i_18 + 1] [i_18 - 1])) + (591242571288467328ULL)));
                        var_65 = ((/* implicit */long long int) var_2);
                    }
                    var_66 = ((/* implicit */short) (+((+(((/* implicit */int) var_3))))));
                }
                var_67 = ((/* implicit */int) var_10);
            }
            for (unsigned short i_20 = 2; i_20 < 23; i_20 += 4) /* same iter space */
            {
                var_68 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (arr_19 [i_20 - 2] [i_20 - 2] [i_20] [3ULL]) : (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_20 - 2] [i_20 - 2] [i_20] [i_20] [i_20 - 2])))));
                var_69 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) (unsigned char)126))))));
            }
            for (unsigned short i_21 = 0; i_21 < 25; i_21 += 4) 
            {
                var_70 &= ((/* implicit */unsigned long long int) -1);
                var_71 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)50151)) ? (var_2) : (5397170265765287284ULL)));
                var_72 = ((/* implicit */short) (~(arr_19 [i_2] [i_2] [i_2] [i_1])));
                var_73 &= ((/* implicit */signed char) (!(((((/* implicit */int) var_4)) >= (((/* implicit */int) var_10))))));
            }
            var_74 = ((/* implicit */int) 3022543267572535491LL);
        }
        for (short i_22 = 0; i_22 < 25; i_22 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_23 = 0; i_23 < 25; i_23 += 4) 
            {
                var_75 = ((/* implicit */int) max((var_75), (((max((((/* implicit */int) arr_33 [i_22] [(short)14] [(unsigned char)20] [i_22] [i_1] [(unsigned char)20] [i_22])), ((+(((/* implicit */int) arr_20 [i_1] [i_1] [i_23] [i_1] [i_23] [i_23])))))) - ((+(((/* implicit */int) var_8))))))));
                /* LoopNest 2 */
                for (unsigned char i_24 = 0; i_24 < 25; i_24 += 2) 
                {
                    for (unsigned long long int i_25 = 2; i_25 < 24; i_25 += 3) 
                    {
                        {
                            arr_72 [i_25] [9] [9] [i_23] [i_25] [i_24] [9] = var_1;
                            var_76 = 45;
                            var_77 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) ((unsigned char) (short)4208))) ? (var_5) : (((/* implicit */int) (unsigned char)222)))) + (2147483647))) >> (((arr_52 [i_1] [i_22] [i_22] [i_24] [i_22] [i_22]) - (8657182408084920432ULL)))));
                            arr_73 [i_1] [i_1] [i_22] [(unsigned char)8] [i_24] [i_1] [i_25] = ((/* implicit */unsigned long long int) var_9);
                        }
                    } 
                } 
                var_78 = arr_31 [19ULL] [19ULL] [19ULL];
                arr_74 [i_22] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (signed char)62))))));
            }
            var_79 |= ((/* implicit */unsigned char) min((arr_30 [(unsigned short)6] [(unsigned short)6] [i_1] [i_22] [i_22] [i_22]), (((/* implicit */unsigned long long int) arr_69 [i_1] [i_1] [i_22] [i_22]))));
            var_80 = ((/* implicit */unsigned char) min((min((min((((/* implicit */unsigned long long int) var_6)), (arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [i_22]))), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)17)), (((((/* implicit */int) arr_13 [i_22] [i_22])) % (((/* implicit */int) var_3)))))))));
            var_81 += ((/* implicit */int) var_6);
            var_82 = ((/* implicit */short) min((max((((/* implicit */unsigned char) var_7)), (arr_45 [i_22] [i_22] [i_22] [(unsigned char)24] [i_22]))), (((/* implicit */unsigned char) ((((/* implicit */int) var_11)) < (((/* implicit */int) arr_10 [i_1] [i_22])))))));
        }
        /* vectorizable */
        for (short i_26 = 0; i_26 < 25; i_26 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_27 = 0; i_27 < 25; i_27 += 4) 
            {
                var_83 = ((/* implicit */long long int) (+(var_2)));
                var_84 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_62 [i_1] [i_1] [i_27])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_14))));
                var_85 = ((/* implicit */unsigned char) arr_48 [i_1] [i_1] [i_1] [i_1] [i_1]);
            }
            var_86 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_26] [i_26] [i_26]))));
        }
        var_87 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_69 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_69 [i_1] [i_1] [i_1] [i_1]))))) ? (arr_8 [i_1] [i_1] [i_1]) : (((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (arr_36 [(unsigned char)21] [i_1] [i_1]))) != ((+(arr_65 [i_1]))))))));
    }
    for (signed char i_28 = 2; i_28 < 16; i_28 += 3) 
    {
        var_88 = ((/* implicit */unsigned long long int) (-2147483647 - 1));
        /* LoopNest 2 */
        for (short i_29 = 0; i_29 < 17; i_29 += 1) 
        {
            for (unsigned char i_30 = 3; i_30 < 15; i_30 += 4) 
            {
                {
                    arr_86 [i_28] [i_29] [i_29] [i_29] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_30 + 2])) : (((/* implicit */int) arr_5 [i_30 - 2]))))) ? (((/* implicit */unsigned long long int) (+(min((arr_75 [i_29]), (((/* implicit */long long int) var_6))))))) : (arr_63 [i_28 - 2] [i_28 - 2])));
                    /* LoopSeq 4 */
                    for (int i_31 = 0; i_31 < 17; i_31 += 1) 
                    {
                        var_89 = ((/* implicit */int) min((min((arr_56 [i_28 + 1] [i_28 + 1] [i_28] [i_31]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))))), (((/* implicit */unsigned long long int) arr_28 [i_29] [i_28] [i_30 - 3] [i_30 - 3] [i_29] [i_28] [i_28]))));
                        arr_89 [i_28] [i_30] [(unsigned char)15] [i_28] = ((/* implicit */unsigned long long int) min(((+(var_5))), (((/* implicit */int) var_7))));
                        var_90 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_45 [i_28] [4] [(unsigned char)11] [i_28 + 1] [i_30 + 1])) : (((/* implicit */int) var_3)))), (((/* implicit */int) ((unsigned short) arr_82 [i_28])))));
                        var_91 = ((/* implicit */unsigned char) max((min((arr_51 [i_28] [i_28 - 1] [i_28 - 2] [i_28] [i_28 + 1] [i_28 - 1]), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_51 [i_28] [i_28 - 1] [i_28 - 2] [i_28 + 1] [i_28] [i_28])))))));
                    }
                    for (short i_32 = 2; i_32 < 15; i_32 += 2) 
                    {
                        var_92 -= ((/* implicit */unsigned long long int) var_10);
                        arr_92 [i_28 + 1] [i_29] [i_28] [(signed char)15] [i_32] [(unsigned short)8] = ((/* implicit */unsigned char) ((long long int) var_12));
                    }
                    /* vectorizable */
                    for (short i_33 = 0; i_33 < 17; i_33 += 3) /* same iter space */
                    {
                        var_93 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_69 [i_28] [i_28] [(unsigned char)20] [i_30 - 1]))));
                        var_94 = ((/* implicit */signed char) (~(arr_7 [i_30 - 1] [i_29] [i_28 - 1])));
                    }
                    for (short i_34 = 0; i_34 < 17; i_34 += 3) /* same iter space */
                    {
                        arr_98 [10ULL] [(unsigned short)2] &= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) arr_79 [(signed char)2])) != (((/* implicit */int) var_1))))), (6436961407974439707LL)))) ? (((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) arr_41 [i_30] [i_30 - 2] [i_30] [i_30] [i_30 - 2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_90 [(unsigned char)14]))))))) : ((~(((/* implicit */int) ((unsigned char) var_1)))))));
                        arr_99 [i_28 - 2] [i_28] [i_28 - 2] [i_29] [i_30] [i_28 - 2] = (+(arr_88 [i_28 - 1] [15] [i_28] [i_28]));
                        var_95 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_78 [i_28] [i_28] [i_30]))) ^ ((+(((long long int) arr_58 [i_34] [(signed char)21]))))));
                    }
                }
            } 
        } 
        var_96 = ((/* implicit */short) ((((/* implicit */int) arr_18 [i_28] [i_28 - 2] [i_28] [i_28 + 1])) != (max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_9 [i_28 - 1] [i_28] [i_28] [i_28 - 2]))))))));
    }
}
