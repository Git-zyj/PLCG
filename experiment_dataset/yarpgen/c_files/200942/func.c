/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200942
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
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_11))));
    var_17 += ((/* implicit */unsigned int) var_3);
    var_18 = ((/* implicit */signed char) 5900781925248158246LL);
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_20 = ((/* implicit */int) var_8);
            var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1927362184U))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_2 = 2; i_2 < 19; i_2 += 2) 
        {
            arr_10 [i_0] [i_2] [i_0] = ((/* implicit */signed char) var_13);
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) != (arr_6 [i_0])))) >> (((-7299912938931898638LL) + (7299912938931898648LL)))));
            arr_11 [i_2 + 3] = ((/* implicit */long long int) 4294967295U);
        }
        /* LoopSeq 2 */
        for (unsigned int i_3 = 4; i_3 < 21; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_4 = 3; i_4 < 20; i_4 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_5 = 1; i_5 < 18; i_5 += 4) 
                {
                    var_23 = ((/* implicit */unsigned int) ((short) ((unsigned int) arr_12 [i_3])));
                    arr_22 [i_0] [i_3] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) arr_16 [14LL] [i_3]);
                    arr_23 [i_0] [i_3] [i_3] [i_3] [i_3] [i_5] = ((/* implicit */long long int) ((arr_16 [i_3 + 1] [i_3]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_5))))))));
                }
                /* LoopSeq 1 */
                for (short i_6 = 2; i_6 < 18; i_6 += 3) 
                {
                    var_24 &= ((/* implicit */signed char) ((arr_26 [i_3 - 2] [i_4 - 3]) << (((((/* implicit */int) (signed char)127)) - (113)))));
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_3 - 1] [i_4 - 2])) ? (arr_17 [i_3] [i_6 + 4] [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3 - 2] [i_4 - 3]))))))));
                    var_26 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_0 [i_6])) : (((/* implicit */int) var_8))))));
                    /* LoopSeq 3 */
                    for (short i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 495659080U)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) var_8)))))));
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_5) | (arr_19 [i_0] [i_3] [14LL] [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-7301))) : (8796092989440LL))))));
                        var_29 = ((/* implicit */short) ((((((/* implicit */int) (short)18383)) * (((/* implicit */int) var_1)))) * (((arr_13 [i_0] [i_3] [i_3]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_28 [i_0] [i_0] [i_4 - 2] [i_3 - 1] [i_7] [i_7]))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_30 = ((/* implicit */short) ((long long int) (-(((/* implicit */int) (_Bool)0)))));
                        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_4 - 3] [i_4 + 1])))))));
                        var_32 = ((/* implicit */unsigned short) arr_7 [i_3 + 1]);
                        var_33 = ((/* implicit */unsigned short) var_5);
                        arr_31 [i_3] [i_3 - 2] [i_3 + 1] [i_3 - 4] = ((/* implicit */signed char) (-((+(((/* implicit */int) var_12))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_35 [i_0] [i_0] [i_0] [i_3] [i_6] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_6 + 2] [18LL] [i_4 + 2] [i_3 + 1] [i_6]))) : (((((/* implicit */_Bool) var_8)) ? (1927362176U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                        var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3083469475U)) ? (((/* implicit */int) (signed char)-55)) : (((/* implicit */int) (signed char)(-127 - 1)))));
                    }
                }
                var_35 = ((((/* implicit */_Bool) 8796092989419LL)) ? (var_9) : (((((/* implicit */_Bool) var_9)) ? (arr_26 [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_3] [i_3] [i_3] [i_4] [i_4]))))));
            }
            for (unsigned int i_10 = 0; i_10 < 22; i_10 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (int i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        {
                            arr_43 [i_0] [i_3 - 4] [i_3] [i_3] [i_0] = ((/* implicit */long long int) ((var_2) ? (((/* implicit */int) arr_34 [i_3 - 3] [i_3 - 4] [i_3 - 3] [i_3 - 1] [i_3 - 3] [i_3 + 1])) : (((/* implicit */int) ((10652676760104830906ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-109))))))));
                            var_36 *= ((/* implicit */unsigned int) ((signed char) (_Bool)0));
                            var_37 = ((((/* implicit */int) (short)-5628)) | (((/* implicit */int) (_Bool)0)));
                            var_38 = ((/* implicit */int) arr_26 [i_3 + 1] [14ULL]);
                        }
                    } 
                } 
                var_39 = ((/* implicit */unsigned int) var_14);
            }
            var_40 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2367605094U))));
        }
        for (unsigned int i_13 = 3; i_13 < 19; i_13 += 3) 
        {
            var_41 = ((/* implicit */long long int) (-(16)));
            var_42 = ((/* implicit */signed char) ((_Bool) (unsigned char)92));
            /* LoopSeq 1 */
            for (unsigned char i_14 = 2; i_14 < 21; i_14 += 1) 
            {
                var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) ((var_2) ? ((-(930787163120881217ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20426))))))));
                var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) arr_7 [i_13]))));
            }
            /* LoopSeq 2 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_16 = 3; i_16 < 20; i_16 += 2) 
                {
                    var_45 = ((/* implicit */_Bool) min((var_45), (((/* implicit */_Bool) ((-1324820112) | (((/* implicit */int) (unsigned char)163)))))));
                    var_46 = ((/* implicit */unsigned char) -2333634155150130493LL);
                    var_47 = (+((+(((/* implicit */int) (_Bool)0)))));
                }
                for (unsigned int i_17 = 0; i_17 < 22; i_17 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_18 = 1; i_18 < 19; i_18 += 2) 
                    {
                        var_48 = ((((/* implicit */unsigned long long int) 4768136006553074402LL)) & (arr_16 [i_13 + 1] [i_17]));
                        var_49 = ((/* implicit */_Bool) max((var_49), (((/* implicit */_Bool) var_15))));
                    }
                    for (long long int i_19 = 0; i_19 < 22; i_19 += 2) 
                    {
                        var_50 = ((/* implicit */_Bool) ((arr_46 [i_13 - 2] [i_13 - 2] [1U] [i_13 + 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_19 [i_13 - 1] [i_15] [i_17] [i_19])));
                        var_51 = ((/* implicit */_Bool) max((var_51), ((!(((/* implicit */_Bool) ((unsigned short) var_4)))))));
                        arr_58 [i_0] [i_13 - 2] [(signed char)4] [i_17] [i_19] &= ((/* implicit */unsigned int) -1854357189);
                    }
                    var_52 *= ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */int) arr_46 [i_13 + 2] [i_13 + 2] [i_13 + 2] [i_17]))));
                }
                var_53 = ((/* implicit */unsigned char) (-(arr_20 [i_13 + 2] [i_13] [17LL] [i_0] [i_15])));
            }
            for (short i_20 = 1; i_20 < 21; i_20 += 2) 
            {
                arr_61 [i_13] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) << (((arr_1 [i_13 - 3]) - (1743279311U)))));
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 22; i_21 += 4) 
                {
                    for (unsigned char i_22 = 2; i_22 < 21; i_22 += 1) 
                    {
                        {
                            arr_66 [i_0] [i_22] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 943331017)) ? (((long long int) arr_41 [i_22] [i_13] [i_22] [i_20] [i_22])) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)1792))))))));
                            arr_67 [i_0] [i_0] [i_22] [18U] [9U] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_22 - 2] [i_13] [i_20] [i_20 + 1] [i_22 - 2] [i_21])) ? (((/* implicit */int) arr_30 [i_13 - 2])) : (((/* implicit */int) (signed char)-100))));
                            arr_68 [i_22] [i_22] [(unsigned short)5] [(short)12] [i_20] = ((/* implicit */short) (!(((var_11) == (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                        }
                    } 
                } 
                var_54 = ((/* implicit */long long int) (unsigned char)253);
                arr_69 [i_0] = ((/* implicit */unsigned short) ((int) ((arr_65 [i_0] [i_13] [(unsigned short)5] [i_13]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))));
                var_55 = ((/* implicit */unsigned char) max((var_55), (((/* implicit */unsigned char) ((arr_56 [i_13 + 3] [i_0] [i_20 - 1]) > (((/* implicit */unsigned int) 848325646)))))));
            }
        }
    }
    /* vectorizable */
    for (int i_23 = 0; i_23 < 22; i_23 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (long long int i_24 = 0; i_24 < 22; i_24 += 1) /* same iter space */
        {
            var_56 = ((/* implicit */unsigned short) max((var_56), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_16 [i_23] [i_23])))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_24] [5LL] [i_24] [i_24] [i_24]))))))));
            /* LoopSeq 1 */
            for (unsigned char i_25 = 1; i_25 < 19; i_25 += 2) 
            {
                var_57 = ((/* implicit */long long int) (-(((/* implicit */int) arr_49 [i_25 + 2] [i_25 + 2] [i_25]))));
                arr_78 [i_23] [i_25] &= ((/* implicit */long long int) (-(17515956910588670395ULL)));
                var_58 &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) 3042846598U)) ? (((/* implicit */int) (unsigned char)166)) : (((/* implicit */int) (short)4544)))) >> (((((/* implicit */int) (unsigned char)211)) - (202)))));
            }
            /* LoopSeq 1 */
            for (short i_26 = 0; i_26 < 22; i_26 += 2) 
            {
                arr_82 [i_24] [i_24] [i_24] = ((/* implicit */_Bool) ((arr_13 [2] [i_24] [i_24]) ? (1252120695U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_24])))));
                /* LoopSeq 2 */
                for (unsigned short i_27 = 0; i_27 < 22; i_27 += 1) /* same iter space */
                {
                    var_59 = ((/* implicit */signed char) max((var_59), (((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)9844))))) : ((+(var_5))))))));
                    var_60 = ((/* implicit */unsigned short) ((arr_71 [i_24]) || (arr_71 [i_23])));
                }
                for (unsigned short i_28 = 0; i_28 < 22; i_28 += 1) /* same iter space */
                {
                    arr_87 [i_23] [i_23] [i_26] [i_28] [i_28] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_23] [i_23])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_4)))) : (17515956910588670395ULL)));
                    /* LoopSeq 3 */
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                    {
                        var_61 = ((/* implicit */long long int) min((var_61), (((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_23] [i_29] [i_26])) / (((var_2) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14)))))))));
                        var_62 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_85 [i_23] [i_24] [i_28] [i_29]))) & (arr_19 [i_26] [i_26] [i_26] [i_24])));
                        var_63 *= ((/* implicit */signed char) ((var_10) ? (var_5) : (((/* implicit */unsigned int) arr_36 [i_23]))));
                    }
                    for (_Bool i_30 = 1; i_30 < 1; i_30 += 1) 
                    {
                        var_64 = ((/* implicit */_Bool) max((var_64), ((!(((/* implicit */_Bool) (unsigned char)16))))));
                        var_65 *= ((/* implicit */signed char) var_8);
                    }
                    for (unsigned long long int i_31 = 0; i_31 < 22; i_31 += 2) 
                    {
                        var_66 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (var_15) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_9))))));
                        arr_96 [i_24] [i_28] [i_26] [i_24] = var_1;
                    }
                    var_67 = ((/* implicit */int) 1592427806113382892ULL);
                    arr_97 [i_23] [i_23] [0ULL] [i_24] [i_24] [i_28] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_23] [i_23] [i_24] [i_26] [6])) ? (arr_20 [10U] [i_24] [i_26] [i_26] [i_28]) : (arr_20 [i_28] [i_28] [5U] [i_24] [i_23])));
                }
                var_68 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_23] [(short)6]))) - (arr_9 [i_26] [i_26] [i_26])));
            }
        }
        for (long long int i_32 = 0; i_32 < 22; i_32 += 1) /* same iter space */
        {
            var_69 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_14 [(unsigned short)2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 12077916264626350325ULL))))) : (((((/* implicit */_Bool) 1252120668U)) ? (((/* implicit */int) var_1)) : (1324820090)))));
            var_70 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? ((+(-1094635747))) : (((/* implicit */int) (unsigned short)65511))));
        }
        for (long long int i_33 = 0; i_33 < 22; i_33 += 1) /* same iter space */
        {
            var_71 = ((/* implicit */unsigned int) arr_81 [i_33] [i_23] [i_33]);
            var_72 = ((/* implicit */unsigned char) min((var_72), (((/* implicit */unsigned char) arr_16 [i_23] [i_23]))));
        }
        arr_105 [i_23] = ((/* implicit */unsigned long long int) (unsigned short)6742);
        arr_106 [i_23] &= ((/* implicit */_Bool) ((long long int) arr_5 [i_23] [i_23]));
        arr_107 [i_23] [i_23] = ((/* implicit */_Bool) arr_27 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23] [(_Bool)1]);
        var_73 = ((/* implicit */_Bool) arr_50 [i_23] [i_23] [i_23] [i_23] [i_23]);
    }
    for (int i_34 = 0; i_34 < 22; i_34 += 2) /* same iter space */
    {
        arr_111 [i_34] &= ((/* implicit */short) (+(13635294198842729288ULL)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_35 = 0; i_35 < 22; i_35 += 3) 
        {
            arr_115 [i_34] [i_34] [i_34] = ((/* implicit */_Bool) arr_45 [i_34]);
            var_74 = ((/* implicit */unsigned short) var_10);
        }
        for (long long int i_36 = 1; i_36 < 21; i_36 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_37 = 2; i_37 < 20; i_37 += 3) 
            {
                arr_124 [i_34] [i_34] [i_37] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_36])) ? (((((/* implicit */_Bool) -2235022978958070910LL)) ? (6763142626750725865ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))));
                var_75 *= ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_8))));
            }
            /* vectorizable */
            for (long long int i_38 = 0; i_38 < 22; i_38 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_39 = 1; i_39 < 21; i_39 += 4) 
                {
                    for (unsigned int i_40 = 4; i_40 < 18; i_40 += 3) 
                    {
                        {
                            var_76 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) var_10)))));
                            arr_133 [i_34] [i_36] [i_38] [i_38] [i_39 + 1] [i_39 + 1] [i_38] = var_9;
                            arr_134 [i_34] [i_38] [13LL] = ((/* implicit */_Bool) var_9);
                        }
                    } 
                } 
                var_77 = ((/* implicit */unsigned char) (unsigned short)65510);
            }
            arr_135 [i_34] [(unsigned char)7] [i_36 - 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((-1324820111) + (2147483647))) << (((/* implicit */int) arr_32 [i_36] [i_34] [i_36 - 1] [i_34] [(unsigned char)4])))))));
            var_78 += ((/* implicit */signed char) var_0);
        }
        arr_136 [(unsigned char)20] = ((/* implicit */unsigned char) arr_99 [i_34]);
    }
    for (int i_41 = 0; i_41 < 22; i_41 += 2) /* same iter space */
    {
        var_79 = ((/* implicit */long long int) max((((int) arr_83 [i_41] [i_41] [(signed char)9] [i_41] [i_41])), (((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_41] [i_41] [(unsigned char)11] [i_41] [i_41] [i_41])) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (var_5)))))))));
        arr_140 [9ULL] [9ULL] = ((/* implicit */_Bool) (-((-(((/* implicit */int) min((var_1), (arr_84 [(signed char)14] [i_41] [(signed char)14] [(signed char)14] [i_41]))))))));
        var_80 = ((/* implicit */int) ((((/* implicit */_Bool) -39)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) var_14)))))) : (((1814782601333123607LL) / (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_41])))))));
    }
    var_81 = ((/* implicit */_Bool) (-(18014398509481983LL)));
}
