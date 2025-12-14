/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225872
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
    var_16 = ((/* implicit */long long int) (short)12027);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) >= (((/* implicit */int) (unsigned short)44870))))) : (((((/* implicit */_Bool) (short)17925)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_2 [i_0]))))))) ? (min((925061147399452966LL), (((/* implicit */long long int) (short)12027)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))));
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            var_18 = ((/* implicit */short) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)62335)));
            var_19 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (var_10))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1038230359861377142LL)) || (((/* implicit */_Bool) (signed char)92)))))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) var_8);
                arr_10 [i_0] [i_0] [i_2] = ((/* implicit */int) ((unsigned long long int) var_5));
                /* LoopSeq 1 */
                for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    arr_14 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_1] [i_2] [i_3]);
                    arr_15 [i_0] [i_1] [i_0] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (+(((((((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_3] [i_1])) % (((/* implicit */int) (unsigned short)44881)))) - ((+(((/* implicit */int) var_13))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        arr_19 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */short) var_6);
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) arr_8 [i_0] [i_0] [i_0] [i_0]))));
                        var_21 = ((/* implicit */short) (~(((int) min((((/* implicit */long long int) var_1)), (var_15))))));
                        var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((3221225472U), (((/* implicit */unsigned int) (unsigned short)20679)))))));
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        arr_23 [i_0] [i_1] [i_2] [i_0] [i_5] [i_5] = (+(((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_5])));
                        var_23 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_16 [i_0]) > (arr_12 [i_0] [i_2] [i_5]))))) >= (((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
                    }
                    var_24 = ((/* implicit */int) max((var_24), ((-((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [i_2] [i_3])))))))))));
                }
            }
        }
        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_24 [i_0] [i_6]) ? (((/* implicit */int) arr_3 [i_0])) : (arr_4 [i_0] [i_0] [i_6])))) || (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
            arr_27 [i_0] [i_0] = ((/* implicit */signed char) (~(((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_6))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_6] [i_6] [i_0])))))));
            /* LoopSeq 1 */
            for (long long int i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                var_26 -= ((/* implicit */unsigned char) 1539655737);
                var_27 = ((/* implicit */unsigned short) (-(-1011551370)));
                var_28 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_8 [i_0] [i_6] [i_7] [i_7]))))))), (min((((long long int) var_15)), (((/* implicit */long long int) arr_26 [i_0] [i_7] [i_7]))))));
                arr_32 [i_0] [i_6] [i_6] [i_7] = ((/* implicit */long long int) var_0);
            }
            arr_33 [i_0] [i_6] = ((/* implicit */unsigned int) (unsigned char)143);
        }
        for (long long int i_8 = 0; i_8 < 20; i_8 += 4) 
        {
            var_29 = ((/* implicit */int) (signed char)-116);
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 20; i_9 += 4) 
            {
                for (unsigned int i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    for (short i_11 = 1; i_11 < 17; i_11 += 4) 
                    {
                        {
                            arr_43 [i_0] [i_8] [i_9] [i_0] [i_10] [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((1480764387), (((/* implicit */int) arr_11 [i_11 + 1]))))) ? (13407968582785036224ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_8] [i_11] [i_11 - 1] [i_11 + 3] [i_11])) % (-467041055))))));
                            var_30 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_0] [i_10])))))) % (arr_21 [i_0] [i_0] [i_0] [i_9] [i_10] [i_11] [i_11])));
                            var_31 += ((/* implicit */signed char) (-(((((/* implicit */int) arr_35 [i_11 + 3] [i_11 + 3])) & (((/* implicit */int) (signed char)118))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (short i_12 = 1; i_12 < 18; i_12 += 3) 
            {
                for (int i_13 = 0; i_13 < 20; i_13 += 3) 
                {
                    {
                        var_32 = var_7;
                        /* LoopSeq 4 */
                        for (unsigned short i_14 = 0; i_14 < 20; i_14 += 4) 
                        {
                            arr_53 [i_0] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_24 [i_14] [i_13]), (arr_24 [i_0] [i_8])))) % ((-(((/* implicit */int) arr_24 [i_12 - 1] [i_14]))))));
                            arr_54 [i_0] [i_8] [i_12] [i_13] [i_14] [i_0] [i_14] = ((/* implicit */unsigned char) var_10);
                        }
                        for (unsigned char i_15 = 2; i_15 < 17; i_15 += 3) 
                        {
                            var_33 = ((/* implicit */unsigned int) (short)-5997);
                            arr_57 [i_0] [i_0] [i_13] [i_15] = ((/* implicit */unsigned short) ((short) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) ^ (arr_52 [i_0] [i_8] [i_0] [i_13] [i_15]))) << (((var_14) - (2761737695U))))));
                            arr_58 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_36 [i_8] [i_12 + 2] [i_0]))));
                        }
                        for (int i_16 = 0; i_16 < 20; i_16 += 4) 
                        {
                            var_34 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_25 [i_0] [i_8] [i_16]), (arr_25 [i_0] [i_8] [i_12]))))));
                            arr_61 [i_0] [i_8] [i_12] [i_12] [i_13] [i_16] |= ((/* implicit */unsigned long long int) arr_25 [i_8] [i_12 - 1] [i_12]);
                            var_35 -= ((((/* implicit */int) arr_6 [i_0] [i_8] [i_12] [i_12])) != (((/* implicit */int) (!((_Bool)1)))));
                            var_36 = (!(((/* implicit */_Bool) (unsigned char)58)));
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 20; i_17 += 3) 
                        {
                            arr_66 [i_0] [i_8] [i_12] [i_0] [i_17] = ((/* implicit */unsigned char) ((var_6) ^ (((/* implicit */unsigned long long int) arr_12 [i_12 + 1] [i_8] [i_17]))));
                            arr_67 [i_0] [i_8] [i_12] [i_13] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_63 [i_17] [i_8] [i_12] [i_0] [i_17])) % ((+(arr_65 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            arr_68 [i_0] [i_0] [i_12] [i_13] [i_17] = (unsigned char)0;
                            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)241)) << (((((/* implicit */int) arr_55 [i_8] [i_13])) - (32)))));
                        }
                        var_38 = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_31 [i_12 - 1] [i_12] [i_12 + 1])))) ? (((/* implicit */long long int) max(((+(1427975493U))), (((/* implicit */unsigned int) (+(arr_1 [i_12]))))))) : (((long long int) arr_63 [i_12] [i_12] [i_12 + 2] [i_12] [i_12]))));
                    }
                } 
            } 
            var_39 = ((/* implicit */signed char) (~((~(arr_48 [i_0] [i_0] [i_8] [i_8] [i_8])))));
            var_40 = ((/* implicit */int) arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] [i_8]);
        }
        for (unsigned int i_18 = 0; i_18 < 20; i_18 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_19 = 0; i_19 < 20; i_19 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_20 = 3; i_20 < 17; i_20 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_21 = 0; i_21 < 20; i_21 += 1) 
                    {
                        arr_78 [i_18] [i_0] [i_19] [i_0] [i_21] = ((/* implicit */int) arr_41 [i_19] [i_21]);
                        var_41 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) min((arr_73 [i_0] [i_18] [i_20 - 1] [i_21]), (arr_73 [i_0] [i_18] [i_20 - 1] [i_0]))))));
                        arr_79 [i_0] [i_21] = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)2052))));
                    }
                    var_42 = max((((/* implicit */long long int) (unsigned char)163)), (((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (-35184372088832LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_22 = 0; i_22 < 20; i_22 += 3) 
                {
                    var_43 = ((/* implicit */int) (((+(((/* implicit */int) arr_20 [i_0] [i_18] [i_19] [i_22] [i_19])))) >= ((-(((/* implicit */int) arr_20 [i_0] [i_18] [i_19] [i_22] [i_0]))))));
                    var_44 *= ((/* implicit */signed char) arr_31 [i_0] [i_18] [i_19]);
                    var_45 = ((/* implicit */long long int) max((((((/* implicit */int) (_Bool)1)) << ((((((_Bool)1) ? (((/* implicit */long long int) var_14)) : (arr_42 [i_19] [i_18] [i_19] [i_19] [i_22] [i_19]))) - (2761737699LL))))), (((/* implicit */int) ((short) arr_74 [i_0])))));
                }
                var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) (-(((/* implicit */int) max(((short)-8266), (((/* implicit */short) ((var_15) > (((/* implicit */long long int) 1427975492U)))))))))))));
                var_47 *= ((/* implicit */unsigned int) var_5);
            }
            for (unsigned char i_23 = 0; i_23 < 20; i_23 += 3) 
            {
                var_48 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned short)120), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_18] [i_23] [i_23])) : (arr_7 [i_0] [i_18] [i_23] [i_23])))), (min((1120077524U), (((/* implicit */unsigned int) (signed char)-107))))));
                arr_85 [i_0] [i_18] [i_0] = ((/* implicit */long long int) var_11);
                /* LoopNest 2 */
                for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                {
                    for (unsigned int i_25 = 0; i_25 < 20; i_25 += 2) 
                    {
                        {
                            var_49 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (!((_Bool)1)))), (3622674403U)));
                            var_50 = ((/* implicit */signed char) min((((/* implicit */unsigned int) min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_13 [i_0] [i_18] [i_23] [i_24] [i_25]))))), ((((+(arr_82 [i_0] [i_0]))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_24])))))));
                        }
                    } 
                } 
            }
            arr_91 [i_0] [i_18] [i_18] = ((3146544185U) + (((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned char)13)))) & (((/* implicit */int) var_13))))));
        }
        var_51 ^= ((/* implicit */unsigned char) ((unsigned int) var_9));
    }
    /* LoopSeq 2 */
    for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
    {
        arr_95 [i_26] = ((/* implicit */unsigned char) (_Bool)0);
        /* LoopSeq 1 */
        for (int i_27 = 1; i_27 < 21; i_27 += 1) 
        {
            var_52 -= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_96 [i_26] [i_26] [(unsigned short)4])) >= (((/* implicit */int) max((var_0), (arr_96 [i_26] [i_26] [0ULL]))))))), ((((_Bool)1) ? (arr_98 [i_26] [i_26] [i_26]) : (((((/* implicit */_Bool) var_12)) ? (var_6) : (arr_98 [i_26] [i_26] [i_27])))))));
            var_53 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_6)))) || (((var_12) == (((/* implicit */unsigned int) ((/* implicit */int) arr_96 [i_26] [i_27] [i_26]))))))))) >= (((1624244723U) - (((390371776U) | (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_28 = 0; i_28 < 22; i_28 += 4) 
        {
            var_54 = ((int) 2045144118U);
            var_55 = ((/* implicit */short) var_3);
            var_56 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_94 [i_26] [i_26])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_99 [i_26] [i_26]))) : (var_6)))));
        }
        for (short i_29 = 0; i_29 < 22; i_29 += 3) 
        {
            var_57 += ((/* implicit */unsigned int) var_9);
            arr_106 [i_26] = ((/* implicit */signed char) min((390371776U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_100 [i_26] [i_26 - 1] [i_26])) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_102 [i_26] [i_29])) : (((/* implicit */int) arr_105 [i_26] [i_29] [i_29])))))))));
            var_58 *= ((/* implicit */unsigned long long int) var_5);
            var_59 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
        }
        for (short i_30 = 4; i_30 < 19; i_30 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_31 = 0; i_31 < 22; i_31 += 2) 
            {
                var_60 += ((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) var_5))));
                var_61 = ((/* implicit */unsigned int) ((((/* implicit */int) ((-79309437) < (((/* implicit */int) (signed char)81))))) == ((-(((((/* implicit */_Bool) 17418036196358532080ULL)) ? (636425023) : (((/* implicit */int) arr_105 [i_26] [i_30] [i_31]))))))));
            }
            for (signed char i_32 = 2; i_32 < 21; i_32 += 2) 
            {
                var_62 = ((/* implicit */int) (+(318181547U)));
                var_63 = ((/* implicit */signed char) (_Bool)1);
                arr_115 [i_26] = ((/* implicit */long long int) arr_93 [i_30]);
            }
            arr_116 [i_26] = ((/* implicit */unsigned int) min((((long long int) arr_111 [i_26] [i_26] [i_26] [i_26 - 1])), (((/* implicit */long long int) (signed char)3))));
            var_64 = (short)26844;
        }
        /* LoopSeq 1 */
        for (int i_33 = 1; i_33 < 20; i_33 += 2) 
        {
            /* LoopNest 3 */
            for (int i_34 = 0; i_34 < 22; i_34 += 1) 
            {
                for (int i_35 = 1; i_35 < 18; i_35 += 2) 
                {
                    for (signed char i_36 = 1; i_36 < 21; i_36 += 4) 
                    {
                        {
                            arr_125 [i_26] [i_26] [i_26] [i_34] [i_35] [i_36] = ((/* implicit */_Bool) var_11);
                            arr_126 [i_26] [i_33] [i_34] [i_35] [i_36] = ((/* implicit */signed char) min((2359547868U), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-73)))))));
                        }
                    } 
                } 
            } 
            var_65 = ((/* implicit */_Bool) ((0LL) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)236)))))));
            var_66 ^= ((/* implicit */signed char) (+(((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_104 [i_33]))))), (var_9))))));
            var_67 ^= ((/* implicit */unsigned int) (~(-51779090)));
        }
        var_68 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (unsigned char)254)))))));
    }
    for (unsigned int i_37 = 3; i_37 < 12; i_37 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_38 = 2; i_38 < 13; i_38 += 1) 
        {
            for (signed char i_39 = 0; i_39 < 15; i_39 += 1) 
            {
                {
                    arr_137 [i_37] = var_10;
                    var_69 = ((/* implicit */int) (!(((/* implicit */_Bool) 0LL))));
                }
            } 
        } 
        arr_138 [i_37] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) (_Bool)1))))));
        arr_139 [i_37] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_41 [i_37 - 3] [i_37])) & (((/* implicit */int) (signed char)-97))));
    }
    var_70 = ((/* implicit */int) max((((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)164))) & (747052473U))))), (((2866991803U) ^ (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) | (var_7)))))));
}
