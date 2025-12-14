/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41678
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] = ((unsigned long long int) arr_1 [i_0]);
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            var_10 = ((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_1])), (min(((-(((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) ((((/* implicit */_Bool) (short)-17131)) && (((/* implicit */_Bool) var_7)))))))));
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                arr_8 [i_0] [i_1 + 3] [i_2] = ((/* implicit */unsigned char) var_3);
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    arr_11 [i_0] [i_1] [i_1 - 1] [i_1] [i_2] = ((/* implicit */short) ((_Bool) (-(((/* implicit */int) (short)-17103)))));
                    arr_12 [i_0] [i_2] [i_3] = ((/* implicit */_Bool) min((((unsigned int) (~(13833904855760692609ULL)))), (((/* implicit */unsigned int) max((((/* implicit */short) ((_Bool) (unsigned char)128))), ((short)-17142))))));
                    var_11 = ((/* implicit */short) ((((_Bool) -9223372036854775797LL)) ? (((/* implicit */int) (short)17113)) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3]))));
                    var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3115314063U))));
                    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1 + 3] [i_1 + 3] [i_1])))))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (~((~(((/* implicit */int) (_Bool)1)))))))));
                    var_15 += arr_7 [i_0] [i_0] [i_0] [i_4];
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) var_5))));
                        arr_20 [i_4] [i_4] = ((/* implicit */_Bool) (+(max((((((/* implicit */_Bool) (unsigned char)236)) ? (-1487598562839970380LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) max((var_5), (((/* implicit */unsigned int) (_Bool)0)))))))));
                        arr_21 [i_2] [i_4] [i_0] [i_2] [i_5] &= ((/* implicit */_Bool) min(((~((-(3742107074838139784ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_7 [i_1] [i_2] [i_4] [i_5])), (arr_10 [i_0] [i_1 - 1] [i_2]))))));
                    }
                    for (unsigned long long int i_6 = 2; i_6 < 10; i_6 += 3) 
                    {
                        var_17 ^= ((/* implicit */short) (_Bool)0);
                        arr_25 [i_0] [i_0] [i_2] [i_4] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_13 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1675848934))))) : ((+((~(((/* implicit */int) arr_2 [i_0]))))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_18 ^= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_16 [i_1 + 1] [i_1 - 1])) / (((/* implicit */int) (unsigned short)14812)))));
                        var_19 = (~(min((((/* implicit */unsigned int) var_0)), (((unsigned int) var_5)))));
                    }
                }
                arr_28 [i_0] [i_1 + 1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) (short)-17103)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (8602065891607044677ULL)))));
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_1 + 1] [i_2] [i_2])) ? (((/* implicit */int) ((unsigned short) var_6))) : (((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)58))) : ((~(max((((/* implicit */unsigned long long int) (short)1016)), (arr_14 [i_0] [i_1 + 3] [i_2]))))))))));
                var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) -1487598562839970380LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) == (((((/* implicit */_Bool) arr_26 [i_2] [i_2] [i_1 + 3] [i_2] [i_2])) ? (3560702899217009197LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 1])))))))), ((unsigned char)197)));
            }
            for (unsigned int i_8 = 2; i_8 < 8; i_8 += 4) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 1) 
                {
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)0))))) ? ((+(((/* implicit */int) arr_7 [i_8 + 3] [i_9] [i_1 + 2] [i_9])))) : (((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_0] [i_0] [i_8 - 2] [i_1 - 1])) ? ((-(((/* implicit */int) var_3)))) : (arr_0 [i_0] [i_1 + 3]))))))));
                    arr_34 [i_1] [i_1] [i_1] [i_9] [i_1 + 2] = ((/* implicit */short) (~(((/* implicit */int) arr_9 [i_0] [i_1 + 1] [i_8] [i_9]))));
                    var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))) + (arr_30 [i_8 + 2] [i_9] [i_1 + 3]))))));
                }
                for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned short) var_7);
                    arr_38 [i_8 + 4] [i_1 + 4] [i_1] [i_10] [i_1] = ((/* implicit */unsigned char) arr_37 [i_0] [i_0] [i_0] [i_8] [i_10]);
                }
                for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 3) /* same iter space */
                {
                    arr_41 [i_0] [i_11] [i_0] = ((/* implicit */unsigned long long int) var_6);
                    var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_36 [i_0] [i_1 + 2] [i_1 + 3] [i_11])) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_36 [i_1] [i_1 + 2] [i_1 - 1] [i_8 + 1]))))) : (((((/* implicit */_Bool) arr_36 [i_0] [i_1] [i_1 + 1] [i_8 + 4])) ? (-9223372036854775804LL) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_0] [i_0] [i_1 - 1] [i_1])))))));
                }
                var_26 -= ((/* implicit */unsigned short) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_24 [i_1 + 4] [i_1 + 4] [i_8] [i_0] [i_8 - 1])), ((unsigned short)20193))))));
                /* LoopSeq 2 */
                for (unsigned short i_12 = 0; i_12 < 12; i_12 += 3) /* same iter space */
                {
                    var_27 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_31 [i_0] [i_1 - 1] [i_8] [i_12]))));
                    arr_44 [i_1] [i_1 + 1] [i_1 + 2] [i_1 + 4] = 16178062442286447517ULL;
                }
                for (unsigned short i_13 = 0; i_13 < 12; i_13 += 3) /* same iter space */
                {
                    arr_48 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_33 [i_1 + 1] [i_8]);
                    arr_49 [i_0] [i_0] [i_0] [i_0] [i_0] = var_9;
                }
            }
            for (unsigned int i_14 = 2; i_14 < 8; i_14 += 4) /* same iter space */
            {
                arr_53 [i_1 + 4] [i_1] [i_1] |= ((/* implicit */unsigned char) (+(((/* implicit */int) min((var_0), (((/* implicit */unsigned short) arr_39 [i_0] [i_14] [i_0] [i_14])))))));
                /* LoopSeq 2 */
                for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                {
                    arr_56 [i_0] [i_1] [i_14 + 2] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 16868715379430628677ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1201013426U)))));
                    arr_57 [i_0] [i_1] [i_14] [i_0] |= (-(((unsigned int) (unsigned char)0)));
                }
                /* vectorizable */
                for (unsigned char i_16 = 3; i_16 < 10; i_16 += 4) 
                {
                    arr_62 [i_0] [i_14] [i_14 + 4] [i_16] &= ((/* implicit */unsigned long long int) ((long long int) 18446744073709551605ULL));
                    arr_63 [i_0] [i_1 + 4] [i_16] [i_16 - 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3742107074838139784ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)3))));
                    arr_64 [i_1 + 3] [i_16] [i_1] [i_1] = ((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) (short)-7930)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_17 = 0; i_17 < 12; i_17 += 4) 
                    {
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_59 [i_14 + 3] [i_14 + 2] [i_14 - 2] [i_14] [i_14 - 2])) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) arr_26 [i_16] [i_14] [i_14 + 2] [i_14] [i_14 + 3]))))));
                        var_29 ^= ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_0] [i_14] [i_17])) + (4946366166387509699ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_45 [i_0] [i_0] [i_0] [i_0]))))));
                        arr_67 [i_16] [i_16] = ((/* implicit */unsigned long long int) ((2722131038U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_16 - 1] [i_1] [i_14 - 2])))));
                        arr_68 [i_0] [i_16] [i_0] [i_16] [i_0] = ((/* implicit */short) (+(arr_51 [i_0] [i_0] [i_0] [i_0])));
                    }
                    for (unsigned int i_18 = 0; i_18 < 12; i_18 += 3) 
                    {
                        var_30 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */int) ((_Bool) arr_13 [i_0] [i_0] [i_14 - 1] [i_16] [i_18]))) : (((((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_14] [i_0] [i_18])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))));
                        var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_40 [i_0] [i_1 + 1] [i_18]))));
                        var_32 = (~(arr_58 [i_16] [i_1 - 1] [i_14 + 4] [i_14 + 4]));
                        var_33 = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (((((/* implicit */int) arr_19 [i_0] [i_1] [i_14] [i_14] [i_16] [i_14 - 1] [i_16 + 1])) + (((/* implicit */int) (unsigned char)177))))));
                        arr_73 [i_16] [i_1] = ((/* implicit */unsigned short) (_Bool)1);
                    }
                }
                /* LoopSeq 1 */
                for (unsigned char i_19 = 0; i_19 < 12; i_19 += 4) 
                {
                    var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) min((arr_60 [i_0] [i_14 + 3] [i_14] [i_19] [i_14]), (arr_60 [i_0] [i_0] [i_1 - 1] [i_14 - 1] [i_14]))))));
                    var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) 9ULL)))) ? ((+(arr_23 [i_0] [i_1 - 1] [i_14] [i_14] [i_19] [i_19]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)110)))))))))));
                    var_36 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (_Bool)1))))));
                }
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_20 = 0; i_20 < 12; i_20 += 4) 
            {
                arr_79 [i_20] [i_20] = max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((var_9), ((short)3072)))), (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_20] [i_20]))) : (1073741823LL)))))), (((unsigned long long int) arr_69 [i_20] [i_20] [i_20] [i_20] [i_20])));
                var_37 = ((/* implicit */_Bool) (short)32766);
                arr_80 [i_0] [i_0] [i_20] [i_1 - 1] = ((/* implicit */unsigned short) var_4);
                /* LoopSeq 1 */
                for (int i_21 = 0; i_21 < 12; i_21 += 4) 
                {
                    var_38 = ((/* implicit */long long int) (((_Bool)0) ? (1572836258U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)53)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                    {
                        var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) (!(arr_35 [i_22 - 1] [i_1 + 3] [i_20] [i_21]))))));
                        arr_87 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 3716583166636722781ULL);
                        var_40 = ((_Bool) (!(((/* implicit */_Bool) arr_84 [i_0] [i_22 - 1] [i_20] [i_21] [i_22]))));
                    }
                    /* vectorizable */
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        var_41 &= ((/* implicit */short) arr_84 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_42 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) (_Bool)0)))));
                        var_43 = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_7))))));
                    }
                    arr_91 [i_20] [i_20] [i_20] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1893217398U)) & (3742107074838139792ULL)));
                }
                /* LoopNest 2 */
                for (long long int i_24 = 0; i_24 < 12; i_24 += 3) 
                {
                    for (long long int i_25 = 2; i_25 < 11; i_25 += 3) 
                    {
                        {
                            var_44 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_86 [i_0] [i_1 + 1] [i_24] [i_0] [i_25] [i_24] [i_25 + 1])), (min((((/* implicit */long long int) arr_88 [i_0] [i_0] [i_24] [i_24] [i_0] [i_25])), (arr_30 [i_24] [i_24] [i_24]))))))));
                            arr_97 [i_0] [i_20] [i_24] |= ((/* implicit */_Bool) (~(((arr_16 [i_1 + 4] [i_25 + 1]) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_25 - 1])) ? (15877518092773634408ULL) : (((/* implicit */unsigned long long int) arr_27 [i_1] [i_1] [i_25] [i_24] [i_24])))) : (((((/* implicit */_Bool) 502136378U)) ? (arr_51 [i_0] [i_0] [i_20] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19071)))))))));
                            var_45 -= ((/* implicit */unsigned short) (((-(max((2103315714844231744ULL), (var_2))))) << (((((((((/* implicit */_Bool) (unsigned short)14900)) ? (var_7) : (((/* implicit */unsigned long long int) arr_10 [i_24] [i_24] [i_1])))) << (((var_7) - (8463692838264587887ULL))))) - (8463692838264587868ULL)))));
                            arr_98 [i_24] [i_1] [i_20] [i_24] [i_25 - 2] = ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)46465)))));
                        }
                    } 
                } 
            }
        }
        for (long long int i_26 = 1; i_26 < 10; i_26 += 3) 
        {
            var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) var_2))));
            arr_102 [i_0] = ((/* implicit */_Bool) max((9223372036854775807LL), (((long long int) (short)-4762))));
            /* LoopSeq 1 */
            for (unsigned int i_27 = 0; i_27 < 12; i_27 += 1) 
            {
                arr_106 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_6))) / (((((/* implicit */_Bool) arr_86 [i_26] [i_26] [i_27] [i_27] [i_0] [i_26 + 2] [i_0])) ? (((long long int) arr_14 [i_0] [i_26] [0ULL])) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))));
                arr_107 [i_0] [i_0] = ((/* implicit */long long int) (_Bool)1);
                arr_108 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */int) (unsigned short)10)) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_99 [i_0] [i_0]))))))) | ((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))));
            }
        }
        var_47 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_94 [i_0] [i_0] [i_0])) ? ((+(((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) 8191U)) ? (((/* implicit */int) (short)-4)) : (((/* implicit */int) (unsigned char)159))))));
        arr_109 [i_0] [i_0] = ((/* implicit */_Bool) arr_43 [i_0]);
    }
    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
    {
        arr_112 [i_28] = ((/* implicit */_Bool) (-(((/* implicit */int) ((arr_110 [i_28]) > (arr_110 [i_28]))))));
        arr_113 [i_28] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)251))))) ? (((((/* implicit */_Bool) arr_111 [i_28])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_110 [i_28]))) : (min((arr_110 [i_28]), (var_7)))))));
        var_48 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)19065))));
    }
    var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) var_3))));
    var_50 = ((/* implicit */unsigned short) max((var_50), (((/* implicit */unsigned short) var_5))));
}
