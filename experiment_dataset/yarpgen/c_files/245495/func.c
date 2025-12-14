/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245495
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_13 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 4 */
        for (short i_1 = 2; i_1 < 15; i_1 += 4) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)127)))))))));
            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0]))));
            var_16 ^= ((/* implicit */short) arr_4 [i_0] [i_0] [i_0]);
            arr_5 [i_1 - 2] [i_0] = ((/* implicit */int) arr_0 [8ULL] [2LL]);
        }
        for (short i_2 = 2; i_2 < 15; i_2 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (((!(arr_8 [i_0]))) ? (((/* implicit */long long int) arr_6 [i_2 - 1])) : (var_1)))), (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)16))) : (var_2)))) : (arr_1 [i_0] [i_0])))));
            arr_9 [i_0] [i_0] [6LL] = ((/* implicit */unsigned char) arr_0 [i_0] [i_2]);
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_2 - 1] [i_2 - 1] [i_2 + 1]))))), (((((/* implicit */_Bool) arr_1 [i_2 + 1] [i_2 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 + 2] [i_2 + 1] [i_2 + 1]))) : (-1731217179089319640LL)))));
        }
        for (short i_3 = 2; i_3 < 15; i_3 += 4) /* same iter space */
        {
            arr_13 [(unsigned char)2] [i_3] [i_3] = ((/* implicit */int) (short)-8192);
            arr_14 [i_0] = ((/* implicit */int) (+(var_5)));
        }
        for (short i_4 = 2; i_4 < 15; i_4 += 4) /* same iter space */
        {
            arr_17 [i_0] [15U] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0])) ? ((-(((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [(unsigned short)1] [i_4 + 2]))) & (var_5))))) : (var_7)));
            /* LoopSeq 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    for (signed char i_7 = 1; i_7 < 16; i_7 += 2) 
                    {
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(arr_12 [i_0])));
                            arr_26 [i_7] [i_5] [i_4 - 1] [i_0] = ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (4558060063309180715LL) : (arr_16 [6U] [i_7])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : ((~(var_8)))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (unsigned char)222))));
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((unsigned char) ((unsigned long long int) (_Bool)1))))));
                /* LoopSeq 3 */
                for (unsigned char i_8 = 0; i_8 < 17; i_8 += 4) 
                {
                    arr_30 [i_0] [i_0] [i_0] [(short)10] = ((/* implicit */_Bool) (~(957336992)));
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)107)))))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_22 [i_8] [i_8] [i_5] [i_5] [i_4 + 1] [i_4 - 1] [i_0])) / (((/* implicit */int) min(((unsigned char)180), (((/* implicit */unsigned char) (signed char)49)))))));
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1))))), (max((1265311739588643456ULL), (((/* implicit */unsigned long long int) arr_11 [i_8] [i_5] [i_0])))))))))));
                }
                for (short i_9 = 0; i_9 < 17; i_9 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */_Bool) arr_34 [i_0] [i_4 - 2] [i_5] [i_9] [i_0]);
                    arr_35 [i_0] [7U] = ((/* implicit */int) ((max(((+(var_8))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)48))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)72)))));
                }
                for (short i_10 = 0; i_10 < 17; i_10 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        arr_42 [(unsigned short)12] = ((/* implicit */unsigned short) (-(var_2)));
                        arr_43 [(_Bool)1] [(_Bool)1] [i_5] [i_4] [i_0] [i_0] = ((_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) -2065106423)) : (arr_0 [i_0] [(_Bool)1])));
                        var_24 = ((/* implicit */int) ((long long int) ((unsigned long long int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                    }
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (((-(((/* implicit */int) var_3)))) + ((+(((/* implicit */int) (_Bool)1)))))))));
                    arr_44 [i_0] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 17592184995840ULL)) ? (((/* implicit */int) (unsigned short)2917)) : (((/* implicit */int) var_9))))) / (max((((/* implicit */long long int) arr_22 [i_4 - 1] [i_4] [i_4] [i_4 - 1] [i_4] [i_4 - 2] [i_4 - 2])), (var_7)))));
                }
            }
            for (unsigned long long int i_12 = 4; i_12 < 13; i_12 += 2) 
            {
                /* LoopSeq 3 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_1 [0LL] [i_4 - 2]), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (max((((/* implicit */unsigned long long int) var_2)), (var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (2013270979U)))))))));
                    arr_51 [14] [i_4 + 2] = (-(arr_1 [i_13] [i_4]));
                }
                for (signed char i_14 = 1; i_14 < 14; i_14 += 2) 
                {
                    var_27 = ((/* implicit */int) var_0);
                    var_28 = ((/* implicit */_Bool) (unsigned short)62607);
                    arr_56 [i_12] [16] [i_14] [2LL] = min(((-(((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) (_Bool)1)));
                }
                for (unsigned int i_15 = 0; i_15 < 17; i_15 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_16 = 4; i_16 < 15; i_16 += 2) 
                    {
                        var_29 = ((/* implicit */int) 32752LL);
                        arr_62 [i_0] [(unsigned char)16] [i_4 - 2] [(_Bool)1] [(_Bool)1] [i_15] [i_16 - 3] = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) arr_8 [i_16 - 2]))) * (((((/* implicit */int) (unsigned char)14)) * (((/* implicit */int) arr_8 [i_16 - 1]))))));
                    }
                    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (3150008467U)))) | ((~(arr_12 [i_0]))))) ^ (((/* implicit */long long int) ((((int) (short)17374)) | ((~(((/* implicit */int) (unsigned char)207))))))))))));
                }
                var_31 = ((/* implicit */int) var_7);
                var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (((-(var_8))) & ((((_Bool)1) ? (min((((/* implicit */unsigned long long int) arr_45 [i_12] [(short)14] [i_0])), (66060288ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_22 [i_0] [(_Bool)0] [i_4 + 1] [i_4] [i_0] [i_0] [i_0])) <= (arr_36 [i_12 - 1] [i_4] [i_0]))))))))))));
                var_33 ^= min((8328847983390622397ULL), (((/* implicit */unsigned long long int) (_Bool)1)));
                /* LoopNest 2 */
                for (unsigned int i_17 = 0; i_17 < 17; i_17 += 2) 
                {
                    for (short i_18 = 0; i_18 < 17; i_18 += 2) 
                    {
                        {
                            arr_69 [i_0] [(unsigned char)6] [i_12 - 4] [i_12 - 4] [i_18] [i_18] = var_10;
                            arr_70 [i_0] [15] [i_12 - 2] [i_17] [i_17] &= ((/* implicit */signed char) ((((/* implicit */_Bool) -8887898214432139123LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)62611)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (1047552U)))) : (15339660388509327468ULL)));
                            var_34 = ((/* implicit */signed char) var_0);
                        }
                    } 
                } 
            }
            var_35 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_23 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 2] [i_4])) ? (arr_23 [i_4 + 1] [(signed char)7] [(signed char)7] [i_4 + 1] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (short)18261))))));
            var_36 = ((/* implicit */int) ((long long int) arr_19 [i_0]));
            arr_71 [i_0] = (-(max(((+(((/* implicit */int) arr_29 [i_0] [i_0] [i_4] [i_4])))), (4095))));
        }
        var_37 ^= ((/* implicit */unsigned short) (_Bool)1);
    }
    /* LoopNest 2 */
    for (unsigned char i_19 = 0; i_19 < 23; i_19 += 4) 
    {
        for (signed char i_20 = 2; i_20 < 22; i_20 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_21 = 2; i_21 < 21; i_21 += 2) 
                {
                    var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) (short)27807))));
                    /* LoopSeq 1 */
                    for (short i_22 = 3; i_22 < 22; i_22 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (short i_23 = 0; i_23 < 23; i_23 += 4) 
                        {
                            var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((min((max((var_4), (((/* implicit */unsigned int) var_12)))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_78 [i_19] [i_20] [i_21 + 2])) >> (((arr_83 [i_19] [i_20] [i_19]) + (1572767351)))))))) > (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                            var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_74 [i_20 + 1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_73 [i_19])) ? (arr_72 [i_22]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_84 [(unsigned char)18]))))))))) : (arr_83 [i_20] [i_21] [14U])));
                            var_41 = ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_81 [i_20 - 1] [i_22 - 1] [i_23] [i_22 - 1])) & (8887898214432139110LL)))) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_83 [i_19] [i_21] [i_19])) ? (((/* implicit */int) arr_79 [i_19] [i_19])) : (((/* implicit */int) arr_73 [(_Bool)1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_86 [i_20])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65526))) : (arr_72 [i_20]))) == (arr_80 [i_20 + 1]))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_24 = 0; i_24 < 23; i_24 += 2) 
                        {
                            var_42 = ((/* implicit */short) max((min((0U), (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) (unsigned char)110))));
                            var_43 = ((/* implicit */unsigned char) arr_88 [i_19] [i_19] [i_19] [i_19] [i_19]);
                            var_44 = (!(((((/* implicit */_Bool) max((8887898214432139110LL), (var_1)))) || (((/* implicit */_Bool) arr_90 [i_19] [i_19] [i_21] [i_19] [i_24] [i_21] [i_20])))));
                        }
                    }
                }
                for (short i_25 = 0; i_25 < 23; i_25 += 2) 
                {
                    var_45 = 4286503616461113585LL;
                    /* LoopNest 2 */
                    for (int i_26 = 1; i_26 < 20; i_26 += 4) 
                    {
                        for (unsigned long long int i_27 = 2; i_27 < 22; i_27 += 2) 
                        {
                            {
                                arr_99 [i_26] [i_20] [(short)1] [i_20 - 2] [i_20 - 1] [i_20] [(short)1] = ((/* implicit */signed char) max(((-(((/* implicit */int) arr_93 [i_19] [i_20] [i_25] [i_26] [i_27] [i_27])))), (((((/* implicit */_Bool) max((11716982914183241244ULL), (((/* implicit */unsigned long long int) 5257421272176758444LL))))) ? (4084) : (((/* implicit */int) arr_98 [i_27 - 1] [i_26 + 3] [i_26] [i_26] [i_19]))))));
                                arr_100 [i_19] [i_26] [i_19] [i_19] = ((/* implicit */int) ((unsigned long long int) var_3));
                                var_46 -= ((/* implicit */long long int) min(((short)8192), (((/* implicit */short) ((signed char) (signed char)15)))));
                            }
                        } 
                    } 
                    var_47 = ((/* implicit */unsigned long long int) min((var_47), (((/* implicit */unsigned long long int) ((short) (-((~(((/* implicit */int) (signed char)-40))))))))));
                    var_48 ^= ((/* implicit */int) (unsigned char)27);
                    var_49 += ((/* implicit */unsigned long long int) ((((680730767) >> (((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_93 [i_19] [i_19] [i_19] [i_25] [i_19] [i_25])) : (((/* implicit */int) var_3)))) + (11047))))) & (max(((+(2147483647))), ((+(arr_82 [i_19] [7U] [(_Bool)1] [i_19])))))));
                }
                /* LoopNest 3 */
                for (unsigned int i_28 = 2; i_28 < 21; i_28 += 2) 
                {
                    for (short i_29 = 0; i_29 < 23; i_29 += 4) 
                    {
                        for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                        {
                            {
                                var_50 = ((/* implicit */unsigned char) (!(((((/* implicit */int) max((arr_75 [i_19] [i_29]), ((signed char)100)))) >= (((/* implicit */int) arr_73 [i_20 - 2]))))));
                                var_51 = ((/* implicit */unsigned long long int) min((var_51), (((/* implicit */unsigned long long int) max((arr_92 [i_28 + 1] [i_20 - 2] [(short)21]), (arr_92 [i_28 + 1] [i_20 + 1] [i_28 + 1]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_31 = 2; i_31 < 22; i_31 += 4) 
                {
                    for (_Bool i_32 = 1; i_32 < 1; i_32 += 1) 
                    {
                        {
                            arr_117 [8ULL] [i_20] [(signed char)17] [i_20] = ((/* implicit */unsigned short) (+((+(arr_96 [(short)6] [i_19] [(unsigned short)17] [i_32 - 1] [i_31 - 2] [i_20 - 1])))));
                            var_52 = ((/* implicit */int) (signed char)4);
                        }
                    } 
                } 
            }
        } 
    } 
}
