/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207474
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
    var_13 = (-(max((var_2), (((var_12) / (((/* implicit */int) var_11)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (short i_3 = 4; i_3 < 20; i_3 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            arr_15 [i_4] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) -1800576495)) ? (((/* implicit */int) arr_6 [(unsigned short)19] [i_1] [i_2])) : (((/* implicit */int) var_10)))), (var_2))))));
                            arr_16 [i_1] [(unsigned char)9] [i_1] [i_4] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_1)), ((-(((((/* implicit */_Bool) (unsigned short)28895)) ? (-7571502544852067588LL) : (((/* implicit */long long int) 1983793619))))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            arr_19 [i_0] [i_5] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((unsigned long long int) max(((~(var_1))), (((/* implicit */int) ((unsigned char) var_7))))));
                            arr_20 [i_5] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) min(((+(((-7571502544852067594LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27200))))))), (((/* implicit */long long int) ((int) arr_11 [i_3 + 1] [i_1] [i_1] [i_3 - 2] [i_5] [i_0])))));
                            arr_21 [i_2] [i_1] = ((/* implicit */int) var_6);
                        }
                        /* LoopSeq 4 */
                        for (int i_6 = 2; i_6 < 22; i_6 += 4) 
                        {
                            arr_24 [i_0] [i_1] [4] [i_3 - 4] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((max((arr_4 [i_3] [i_2] [i_0]), (2019616475))), (-822637280)))), (((((/* implicit */long long int) var_2)) / ((-(var_3)))))));
                            arr_25 [i_3 + 2] [i_1] [i_1] [18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -7571502544852067594LL)) ? (var_6) : (((/* implicit */long long int) (-(((var_12) / (((/* implicit */int) var_11)))))))));
                            arr_26 [i_1] [i_1] [i_2] [i_3] [i_6 - 2] = ((/* implicit */unsigned long long int) max((((long long int) ((17080134531138915634ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [(short)3] [(short)3] [(unsigned short)16] [8] [i_6 - 2] [i_6] [22])))))), (((/* implicit */long long int) (short)28015))));
                        }
                        for (int i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            arr_30 [i_2] [i_1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((((((/* implicit */unsigned long long int) arr_27 [i_3] [i_3])) | (2161727821137838080ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) & (((/* implicit */unsigned long long int) (~(((int) var_10)))))));
                            arr_31 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(max((244477), (((/* implicit */int) var_5))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) max(((short)-28015), (((/* implicit */short) var_5))))))))));
                        }
                        for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            arr_35 [i_0] [i_3] [i_3] [i_3 - 1] = ((int) ((int) arr_27 [i_0] [i_1]));
                            arr_36 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(max((((/* implicit */int) arr_9 [i_0] [i_0])), (var_1))))))));
                            arr_37 [i_1] [i_1] [i_1] = arr_12 [i_2] [i_3 + 3] [i_2];
                        }
                        /* vectorizable */
                        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            arr_40 [i_3] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_13 [i_0] [i_2] [i_3] [i_2] [i_1] [i_1])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                            arr_41 [i_0] [i_1] [i_2] [i_2] [i_9] = ((/* implicit */unsigned long long int) var_7);
                            arr_42 [21] = ((/* implicit */long long int) (+(2019616476)));
                        }
                        arr_43 [i_0] [i_1] [i_2] [i_3 - 2] = ((/* implicit */long long int) max(((-(((/* implicit */int) (!(((/* implicit */_Bool) 732568565))))))), (((int) (unsigned short)65528))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned char i_10 = 0; i_10 < 24; i_10 += 1) 
        {
            arr_46 [i_10] [i_10] = ((/* implicit */short) var_5);
            arr_47 [i_0] [(_Bool)1] [i_10] = ((/* implicit */unsigned long long int) ((unsigned char) 578500996));
            arr_48 [i_10] = ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)209)), ((unsigned short)0)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_7)), (-1368154927)))) ? (18014398509465600ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_0] [i_0] [i_10] [i_0] [i_10]))))))))));
        }
        for (short i_11 = 1; i_11 < 21; i_11 += 3) 
        {
            arr_52 [i_11] [i_11] [i_11] = ((/* implicit */int) 287667426198290432ULL);
            arr_53 [i_11 + 2] [i_11 + 2] [i_11 + 3] = ((/* implicit */unsigned long long int) (+(var_12)));
            arr_54 [i_0] [16] = ((/* implicit */_Bool) ((int) ((((-7571502544852067597LL) & (((/* implicit */long long int) -1)))) & (((/* implicit */long long int) ((/* implicit */int) var_7))))));
        }
        /* vectorizable */
        for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 1) 
        {
            /* LoopSeq 3 */
            for (int i_13 = 0; i_13 < 24; i_13 += 1) 
            {
                arr_59 [i_0] [i_12] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((var_6) / (var_6)))));
                /* LoopSeq 2 */
                for (int i_14 = 3; i_14 < 23; i_14 += 3) 
                {
                    arr_63 [(unsigned char)7] [i_12] [i_12] [i_14] [(short)23] [(short)23] = ((/* implicit */short) var_0);
                    arr_64 [i_0] [i_12] [i_13] [i_14] [i_14] [i_0] = ((/* implicit */long long int) ((((int) (unsigned short)13)) | ((+(983040)))));
                    arr_65 [i_0] [i_14 - 2] [6ULL] [i_13] [i_12] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8)) ? (((/* implicit */long long int) arr_44 [i_0] [i_12])) : (var_3)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_58 [i_0] [i_12] [15] [i_14 - 1]))))) : (((long long int) arr_6 [i_0] [12] [i_13]))));
                    /* LoopSeq 1 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        arr_68 [i_12] [i_12] [i_12] [i_12] [i_15] [i_12] = -651335707;
                        arr_69 [9] [i_12] [i_15] [i_12] [i_15] [(unsigned short)12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_2))) ? (179187163) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)17978)) == (((/* implicit */int) arr_58 [i_0] [i_12] [i_13] [i_14 - 3])))))));
                        arr_70 [i_12] [i_12] [i_13] [(unsigned short)5] [11] [i_15] [i_15] = ((/* implicit */_Bool) ((unsigned char) var_2));
                        arr_71 [i_15] [i_12] [i_12] [i_0] = ((/* implicit */int) (unsigned char)83);
                        arr_72 [i_0] [i_12] [i_13] [i_14 - 2] [i_12] = ((/* implicit */long long int) arr_34 [i_0] [i_0] [i_13]);
                    }
                }
                for (long long int i_16 = 0; i_16 < 24; i_16 += 3) 
                {
                    arr_76 [i_12] = ((/* implicit */unsigned char) var_6);
                    arr_77 [i_13] [i_12] [i_0] = ((/* implicit */short) arr_58 [i_0] [i_12] [i_0] [i_0]);
                }
            }
            for (int i_17 = 3; i_17 < 23; i_17 += 3) 
            {
                arr_80 [i_17] [i_12] = ((int) ((int) 510517737));
                arr_81 [i_12] [i_12] [i_17 + 1] = ((/* implicit */int) arr_9 [i_0] [i_12]);
                arr_82 [i_0] = ((unsigned short) ((var_1) + (((/* implicit */int) (_Bool)1))));
            }
            for (unsigned short i_18 = 0; i_18 < 24; i_18 += 3) 
            {
                arr_86 [i_0] = var_10;
                arr_87 [i_0] [i_12] [i_0] = ((/* implicit */long long int) ((1983793619) | (((/* implicit */int) ((((/* implicit */_Bool) -822637280)) || (((/* implicit */_Bool) var_8)))))));
            }
            arr_88 [i_0] [i_0] [i_12] = ((/* implicit */_Bool) var_9);
            arr_89 [i_0] [i_12] = ((/* implicit */unsigned long long int) var_8);
            arr_90 [i_12] = ((unsigned short) (unsigned short)65528);
        }
        arr_91 [i_0] = ((/* implicit */int) (-(var_6)));
        /* LoopNest 2 */
        for (unsigned short i_19 = 0; i_19 < 24; i_19 += 3) 
        {
            for (int i_20 = 2; i_20 < 22; i_20 += 2) 
            {
                {
                    arr_97 [i_0] [i_20 + 2] [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(-91469895)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)58568)) ^ (-822637281)))) : (min(((~(2305843009213693952ULL))), (((/* implicit */unsigned long long int) arr_94 [i_20 + 2]))))));
                    arr_98 [i_19] [i_19] [i_19] = ((int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) % (-4732609548982681774LL)));
                    arr_99 [i_19] [i_19] = ((/* implicit */unsigned char) var_7);
                }
            } 
        } 
    }
    for (unsigned long long int i_21 = 2; i_21 < 22; i_21 += 3) 
    {
        arr_104 [i_21] = ((/* implicit */int) (short)27997);
        arr_105 [i_21] = ((/* implicit */unsigned char) (+(3007161328490577111ULL)));
        arr_106 [i_21 + 1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_95 [i_21 + 1] [i_21 + 1] [i_21 - 1])) ? (((/* implicit */int) ((short) arr_100 [i_21 - 1]))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_74 [i_21] [i_21] [i_21 + 1] [i_21] [i_21 - 1])))))))));
        arr_107 [i_21] = ((/* implicit */unsigned char) arr_61 [i_21 - 2]);
    }
    /* LoopNest 2 */
    for (int i_22 = 0; i_22 < 20; i_22 += 4) 
    {
        for (short i_23 = 0; i_23 < 20; i_23 += 3) 
        {
            {
                arr_114 [i_23] [i_22] [i_23] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40546))) % (((((/* implicit */_Bool) (unsigned short)40545)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (1000929528383073506ULL)))));
                /* LoopSeq 2 */
                for (int i_24 = 0; i_24 < 20; i_24 += 1) 
                {
                    arr_118 [i_23] [i_23] [i_23] = ((/* implicit */_Bool) -183977401);
                    arr_119 [i_24] [i_23] [i_23] [i_22] = ((/* implicit */int) var_0);
                    arr_120 [i_23] [i_23] [i_23] [i_23] = ((/* implicit */int) var_6);
                }
                for (long long int i_25 = 0; i_25 < 20; i_25 += 1) 
                {
                    arr_123 [i_22] [i_22] [(short)14] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_5)) >= (arr_13 [i_25] [i_25] [i_22] [i_22] [i_22] [i_22])))), (((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */long long int) -340692742))))))) ? ((+(((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_7)))))) : (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10)))) + (((/* implicit */int) ((short) var_12)))))));
                    /* LoopSeq 1 */
                    for (int i_26 = 0; i_26 < 20; i_26 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_27 = 3; i_27 < 17; i_27 += 1) 
                        {
                            arr_129 [i_22] [i_23] [i_26] [i_23] [i_27] [i_22] [i_22] = ((/* implicit */long long int) var_7);
                            arr_130 [i_22] [i_23] [i_23] [i_23] [i_23] = ((/* implicit */short) (+(-1650011408)));
                            arr_131 [i_22] [i_22] [i_23] [i_22] [i_27 - 1] [i_22] [i_27] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_28 [i_27 - 2] [i_27] [i_27 + 3] [i_27 + 3] [i_27 - 2] [i_27 - 2] [i_27 + 2])), (var_3)))) ? (((((/* implicit */_Bool) arr_62 [i_27 - 1] [i_27 - 1] [i_27 + 1] [i_27 - 1] [i_27 + 1] [i_27 - 1])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_27] [i_27 - 3] [i_27] [i_27 + 3] [i_27] [i_27 + 3] [i_27 + 3]))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_28 [i_27 - 3] [i_27 - 3] [i_27 - 3] [i_27 + 2] [i_27 + 3] [i_27 - 3] [i_27 - 3])), (arr_62 [i_27 + 1] [i_27] [i_27 - 1] [i_27 + 1] [i_27 + 1] [i_27 - 1])))))));
                        }
                        for (int i_28 = 1; i_28 < 17; i_28 += 3) 
                        {
                            arr_135 [i_23] = ((/* implicit */int) min((((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)255)), (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) var_4)))))) : (arr_66 [2] [i_28] [i_22] [i_25] [i_23] [i_22] [(unsigned char)13]))), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_62 [i_22] [i_22] [(_Bool)1] [i_26] [i_28 + 1] [(_Bool)1])))))))));
                            arr_136 [i_22] [i_23] [i_25] [i_25] [i_28] = ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) (short)-28460))) / (((-7717782400653888253LL) % (var_3)))))));
                        }
                        for (int i_29 = 0; i_29 < 20; i_29 += 1) 
                        {
                            arr_139 [i_22] [i_23] [i_25] [i_29] [i_29] [i_22] [i_22] = ((/* implicit */unsigned long long int) ((int) max((((((/* implicit */_Bool) 1055129097)) ? (arr_83 [(unsigned short)4] [i_23] [i_23] [i_25]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) arr_73 [i_29] [i_25] [i_25] [i_22])))));
                            arr_140 [i_22] [i_22] [i_22] [i_26] [i_23] [i_29] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) var_11)) >= (((((/* implicit */_Bool) arr_22 [i_22] [i_22] [i_25] [i_23] [i_29] [i_22])) ? (var_1) : (((/* implicit */int) (short)4662)))))))));
                            arr_141 [i_22] [i_22] [i_22] [i_29] [i_29] [i_22] [i_23] = ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12147558043953603438ULL)) ? (((/* implicit */int) (unsigned short)3724)) : (91469895)))) && (((/* implicit */_Bool) var_12))));
                        }
                        arr_142 [i_23] [i_26] [i_25] [i_25] [i_23] [i_23] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_132 [i_22] [i_23] [i_25] [i_26] [i_22])), (var_3)))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) < (arr_132 [i_26] [i_26] [10ULL] [i_23] [i_22])))) : (((((/* implicit */int) (short)-6477)) ^ (arr_57 [(unsigned short)4] [i_22] [i_25] [i_25]))))))));
                        arr_143 [i_22] [i_23] [i_22] [i_23] = ((/* implicit */unsigned char) (+(var_12)));
                    }
                }
            }
        } 
    } 
}
