/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201635
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
    var_18 = ((/* implicit */short) ((unsigned int) var_1));
    var_19 = ((/* implicit */short) (!(min(((!(((/* implicit */_Bool) (signed char)25)))), (((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (unsigned short)37226))))))));
    var_20 = ((var_5) << (((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))));
    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_17) << (((((((/* implicit */int) (unsigned short)28315)) % (((/* implicit */int) (signed char)110)))) - (45))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 7; i_0 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) max((var_22), (min((((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) var_6)))))), (min((arr_2 [i_0 + 4]), (max((var_11), (((/* implicit */unsigned int) var_3))))))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_0 + 2])), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_15)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (min((min((var_9), (var_15))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))));
        var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((~(arr_2 [i_0]))) : (16U)))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (short)27986))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_1)), (arr_0 [i_0 + 4])))) ? (((/* implicit */int) min((((/* implicit */unsigned short) ((signed char) (unsigned short)34345))), (max((((/* implicit */unsigned short) (short)4434)), (arr_1 [i_0] [i_0])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
    }
    for (signed char i_1 = 3; i_1 < 7; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (((!(((/* implicit */_Bool) (signed char)20)))) ? (((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0))))) : (((unsigned int) var_2)))))));
            var_26 = 3516574644U;
        }
        arr_10 [i_1] = ((/* implicit */signed char) min((((/* implicit */int) max((arr_9 [i_1 + 4] [i_1 + 4]), (arr_9 [i_1 + 2] [i_1 - 2])))), (((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1])) ? (((/* implicit */int) (unsigned short)28331)) : (((/* implicit */int) arr_9 [i_1 + 4] [i_1 - 3]))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            var_27 = ((/* implicit */signed char) var_6);
            arr_14 [(unsigned short)10] [i_1] [i_1] = ((/* implicit */unsigned short) ((1648052114U) << (((((2653611839U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37204))))) - (36528U)))));
            var_28 ^= ((/* implicit */unsigned short) arr_2 [i_1]);
            /* LoopSeq 2 */
            for (signed char i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_4 [i_1 + 1])) + (2147483647))) << (((((((/* implicit */int) arr_4 [i_1 - 1])) + (14636))) - (30)))));
                /* LoopSeq 3 */
                for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    var_30 *= ((unsigned short) arr_9 [i_1] [i_3]);
                    var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((3035023905U) + (1469449870U))))));
                }
                for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    var_32 = 1648052140U;
                    var_33 = ((unsigned int) arr_6 [i_1 + 2]);
                    var_34 = (~(3035023913U));
                }
                for (unsigned int i_7 = 1; i_7 < 10; i_7 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        var_35 = ((/* implicit */signed char) arr_2 [i_7]);
                        var_36 *= arr_0 [i_7 - 1];
                    }
                    for (unsigned int i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        var_37 ^= (short)-29621;
                        var_38 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)15713)) : (((/* implicit */int) (short)-26121))))) + (arr_22 [i_1 - 3] [i_3] [i_1 - 3] [i_7 - 1] [i_9] [i_7 - 1]));
                        arr_32 [i_3] [i_3] [i_3] [i_3] [i_3] [i_7] = ((unsigned short) (unsigned short)17);
                        arr_33 [i_1] [i_7] [i_4] [i_7] [i_9] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) arr_1 [i_7 + 1] [i_7 + 1])))));
                    }
                    /* LoopSeq 4 */
                    for (unsigned int i_10 = 4; i_10 < 8; i_10 += 3) /* same iter space */
                    {
                        arr_37 [i_1 - 2] [i_3] [i_3] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) arr_21 [i_7 + 1] [i_1 + 4]);
                        var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (short)3201))) ? (((((/* implicit */_Bool) var_4)) ? (2422658307U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((13U) << (((((/* implicit */int) arr_34 [i_1] [i_7] [i_7] [i_7] [i_10] [i_10])) - (15697)))))));
                        var_40 = arr_29 [i_1] [i_1 - 2] [i_3] [i_4] [i_10] [i_10] [i_4];
                        var_41 = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
                    }
                    for (unsigned int i_11 = 4; i_11 < 8; i_11 += 3) /* same iter space */
                    {
                        var_42 = var_2;
                        var_43 = ((/* implicit */unsigned short) arr_24 [i_7] [(short)10] [i_7]);
                        var_44 = ((unsigned short) arr_26 [i_1] [i_1 + 4] [i_7] [i_1] [i_11 - 2]);
                    }
                    for (unsigned int i_12 = 4; i_12 < 8; i_12 += 3) /* same iter space */
                    {
                        var_45 -= ((/* implicit */short) ((signed char) ((1259943392U) + (arr_36 [i_1] [i_3] [i_3] [10U] [i_12]))));
                        var_46 = arr_16 [i_12];
                    }
                    for (unsigned int i_13 = 4; i_13 < 8; i_13 += 3) /* same iter space */
                    {
                        var_47 = ((/* implicit */signed char) (unsigned short)37205);
                        arr_45 [i_7] [i_1] [i_7] = ((/* implicit */signed char) var_6);
                        var_48 = ((/* implicit */short) (unsigned short)49812);
                        var_49 += ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)37198)) << (((99978313U) - (99978307U)))));
                    }
                    var_50 = ((/* implicit */unsigned int) (unsigned short)15724);
                }
            }
            for (signed char i_14 = 0; i_14 < 11; i_14 += 4) /* same iter space */
            {
                var_51 = ((/* implicit */unsigned int) max((var_51), (((((/* implicit */_Bool) arr_34 [i_1] [i_3] [i_3] [i_1 - 3] [i_1 + 4] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : (arr_2 [i_1])))));
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 11; i_15 += 3) 
                {
                    for (unsigned short i_16 = 0; i_16 < 11; i_16 += 3) 
                    {
                        {
                            arr_55 [i_1] [i_3] [i_14] [i_15] [i_16] |= ((/* implicit */short) var_17);
                            var_52 = ((/* implicit */unsigned int) max((var_52), (((unsigned int) var_16))));
                        }
                    } 
                } 
                var_53 = ((unsigned int) var_15);
            }
            var_54 = ((/* implicit */unsigned short) arr_27 [i_3] [i_3] [i_1] [i_1 + 4] [i_3] [i_1] [i_3]);
        }
        for (unsigned int i_17 = 3; i_17 < 9; i_17 += 3) 
        {
            var_55 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_1] [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) (short)-6116)) : (((/* implicit */int) (unsigned short)15725))))) ? (((/* implicit */int) ((signed char) ((unsigned int) arr_20 [i_1])))) : (((/* implicit */int) var_14))));
            var_56 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-58)) ? (2646915182U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40643)))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_18 = 3; i_18 < 9; i_18 += 4) 
            {
                var_57 -= ((/* implicit */unsigned short) ((signed char) (unsigned short)37226));
                var_58 = ((/* implicit */unsigned short) ((arr_50 [i_1 + 2] [i_17 + 1] [i_1 + 2] [i_18 + 1]) * (((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) : (arr_8 [i_18] [i_1])))));
                var_59 *= ((/* implicit */unsigned int) arr_38 [i_1 - 2] [i_1 - 2] [i_1] [i_17 + 2] [i_17]);
                /* LoopNest 2 */
                for (signed char i_19 = 0; i_19 < 11; i_19 += 3) 
                {
                    for (short i_20 = 0; i_20 < 11; i_20 += 2) 
                    {
                        {
                            arr_67 [i_1] [i_18] [i_18] = ((/* implicit */unsigned int) ((short) 311863825U));
                            var_60 -= ((/* implicit */short) ((unsigned int) var_6));
                            var_61 ^= ((/* implicit */short) ((((/* implicit */int) ((unsigned short) 2487541730U))) << (((((((/* implicit */int) arr_53 [i_19] [i_18] [i_1] [i_1])) + (4242))) - (18)))));
                            arr_68 [i_1] [i_1] [i_18] [i_19] [i_18] = ((((unsigned int) arr_49 [i_1] [i_1] [i_1] [i_1])) + (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_18 - 2] [i_17 - 2] [i_1 + 3] [i_19]))));
                        }
                    } 
                } 
                var_62 = ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) (short)-7599)) ? (arr_17 [i_18] [i_17] [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((0U) + (((/* implicit */unsigned int) ((/* implicit */int) var_8))))));
            }
            for (unsigned short i_21 = 4; i_21 < 8; i_21 += 4) 
            {
                var_63 = ((/* implicit */short) (~(((/* implicit */int) var_10))));
                var_64 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((short) (-(((/* implicit */int) (short)-1026)))))), (max((arr_70 [i_17] [i_17] [i_1 + 3]), (arr_70 [i_1] [5U] [i_1 + 3])))));
                arr_72 [i_17] &= ((/* implicit */unsigned int) arr_9 [i_17] [i_21]);
                /* LoopSeq 3 */
                for (signed char i_22 = 0; i_22 < 11; i_22 += 3) 
                {
                    arr_77 [i_1] [(unsigned short)6] = ((/* implicit */signed char) ((3983103473U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-122)))));
                    var_65 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_18 [10U] [i_21] [10U] [i_1])), (((arr_42 [i_21 - 3] [i_21] [i_21 + 1] [i_21 - 2] [i_21 + 2] [i_21] [i_21]) + (arr_42 [i_21 - 3] [i_21] [i_21 - 1] [i_21 + 3] [i_21 - 4] [i_21] [i_21])))));
                    var_66 = ((/* implicit */unsigned short) ((arr_17 [i_17 + 2] [i_17 + 2] [i_21 - 1]) % (((/* implicit */unsigned int) ((/* implicit */int) min((arr_25 [i_17 + 1] [i_17 + 1]), (arr_25 [i_17 - 2] [i_17 + 2])))))));
                }
                for (signed char i_23 = 0; i_23 < 11; i_23 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_24 = 0; i_24 < 11; i_24 += 3) 
                    {
                        var_67 = ((/* implicit */unsigned int) max((var_67), (((/* implicit */unsigned int) ((unsigned short) arr_58 [i_1 + 4])))));
                        arr_83 [i_1] [(unsigned short)6] [i_1] [i_1] [i_1] [i_23] = ((/* implicit */signed char) (unsigned short)28310);
                    }
                    arr_84 [i_1] [i_1] [i_23] = var_17;
                    arr_85 [i_23] [i_21] = (unsigned short)2046;
                    arr_86 [i_23] [i_23] [i_21] [i_21] [i_21] = (~(min((((/* implicit */unsigned int) (short)-26121)), (67108800U))));
                    var_68 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) min((((((/* implicit */_Bool) (short)9268)) ? (((/* implicit */int) (short)11423)) : (((/* implicit */int) (short)-11409)))), (((/* implicit */int) (signed char)(-127 - 1)))))) % (max((4294967288U), (arr_36 [i_1] [i_1] [i_21] [i_1] [i_23])))));
                }
                for (short i_25 = 1; i_25 < 7; i_25 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_26 = 0; i_26 < 11; i_26 += 3) 
                    {
                        var_69 -= ((/* implicit */unsigned short) arr_71 [i_1] [8U] [i_1]);
                        var_70 = arr_39 [i_26] [i_1] [i_17] [i_25] [i_26];
                    }
                    for (short i_27 = 1; i_27 < 10; i_27 += 4) 
                    {
                        var_71 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_89 [i_25 + 2]))) + (var_16)));
                        var_72 = var_7;
                        var_73 -= ((/* implicit */short) ((((/* implicit */_Bool) (short)-5931)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (signed char)-118))));
                        var_74 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_79 [i_25 + 1] [i_17] [i_25]))))) ? (((((/* implicit */_Bool) 458173363U)) ? (3836793933U) : (min((2651814361U), (((/* implicit */unsigned int) (signed char)-3)))))) : (arr_20 [8U])));
                    }
                    var_75 = ((/* implicit */unsigned int) ((((/* implicit */int) max((var_14), ((short)-32026)))) & (((/* implicit */int) arr_41 [i_25] [2U] [i_25] [i_25]))));
                    var_76 *= arr_6 [i_1];
                }
            }
            for (unsigned int i_28 = 0; i_28 < 11; i_28 += 2) 
            {
                var_77 = ((/* implicit */signed char) ((arr_36 [i_1] [(short)9] [i_1 + 4] [i_17 + 2] [(unsigned short)10]) % (((((/* implicit */_Bool) arr_91 [i_17] [i_17 - 2] [i_17 - 2] [i_17 + 2] [i_17] [i_17] [i_17 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_1 - 3] [i_17 - 1] [i_17 + 1]))) : (arr_36 [i_1 - 3] [(unsigned short)5] [i_1 + 4] [i_17 + 2] [i_17])))));
                var_78 = ((/* implicit */unsigned short) ((max((arr_6 [i_1]), (((((/* implicit */_Bool) arr_43 [i_1] [i_28] [i_28])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1] [i_17] [i_28] [i_1]))))))) << (((((unsigned int) arr_9 [i_17] [i_17 + 1])) - (11542U)))));
                var_79 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15713))) : (arr_20 [i_1]))))) + (((/* implicit */int) arr_88 [4U] [4U] [i_28] [(signed char)8]))));
            }
        }
        for (unsigned short i_29 = 0; i_29 < 11; i_29 += 2) 
        {
            var_80 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((unsigned int) (unsigned short)15723))))) ? (((/* implicit */int) arr_62 [i_1] [i_1 - 3] [i_1 + 2] [i_1 + 1])) : (((((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_1] [i_29] [i_29] [i_29]))))) << (((((/* implicit */int) arr_101 [i_1] [i_29] [i_1])) + (103)))))));
            var_81 = ((/* implicit */unsigned short) 1514322282U);
            var_82 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_8))) % (((/* implicit */int) arr_12 [i_1] [i_29] [i_29]))));
            var_83 -= ((max((((arr_63 [i_1] [i_29] [i_1] [i_1] [i_29] [i_1]) % (var_15))), (((/* implicit */unsigned int) ((signed char) 4294967295U))))) + (max((2253036716U), (((/* implicit */unsigned int) (short)12288)))));
            var_84 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29310)) ? (((/* implicit */int) (short)5342)) : (((/* implicit */int) arr_0 [i_1]))))))))) + (arr_64 [i_1] [i_1] [i_29])));
        }
        var_85 &= ((/* implicit */signed char) ((unsigned short) arr_16 [4U]));
    }
}
