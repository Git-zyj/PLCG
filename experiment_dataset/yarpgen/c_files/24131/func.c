/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24131
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
    var_13 = ((/* implicit */long long int) var_3);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [3] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) (unsigned char)255)))))));
        var_14 -= arr_0 [i_0];
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 24; i_2 += 4) 
            {
                {
                    var_15 ^= ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) var_1)))));
                    arr_8 [i_0] [i_1] [i_2 - 1] = ((/* implicit */_Bool) ((long long int) var_2));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) max((arr_13 [i_2] [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_2 - 1]), (((/* implicit */int) arr_1 [i_2 - 1]))));
                                arr_15 [i_1] [i_4 - 1] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_4 [i_0] [i_0])) << (((/* implicit */int) var_4)))), (((/* implicit */int) arr_0 [i_3]))));
                                arr_16 [i_4] [i_3] [(short)15] [(unsigned short)3] [(unsigned short)3] = ((/* implicit */long long int) -1479906277);
                                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_0))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */long long int) arr_10 [i_0] [i_1] [i_2 - 1] [i_1]);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_5 = 1; i_5 < 23; i_5 += 4) 
        {
            var_19 = arr_13 [i_0] [i_5] [i_0] [i_5] [i_5];
            var_20 = ((/* implicit */short) var_3);
            /* LoopSeq 2 */
            for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                var_21 = ((/* implicit */unsigned short) ((((-1749538211022528549LL) % (((/* implicit */long long int) 1170537665)))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)25))))))));
                arr_21 [(unsigned char)1] [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_0])) ? (((((/* implicit */_Bool) var_12)) ? (-1133157513440414503LL) : (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) arr_13 [i_0] [i_0] [i_5] [i_6] [i_0]))));
                arr_22 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (max((var_0), (((((/* implicit */long long int) ((/* implicit */int) var_4))) % (arr_2 [(unsigned char)3]))))) : (((/* implicit */long long int) arr_5 [i_5 - 1] [i_5 - 1] [i_5 + 1]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_7 = 2; i_7 < 24; i_7 += 2) 
                {
                    var_22 = ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_5 + 2] [i_5] [i_5 + 2])) | (((/* implicit */int) (_Bool)0))));
                    var_23 = ((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) << (((((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0])) - (1))));
                }
                arr_25 [i_0] [i_0] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                arr_28 [i_0] [i_5] [i_8] = (-(var_9));
                arr_29 [2U] [i_5 + 2] [i_8] = ((/* implicit */short) var_0);
                arr_30 [i_8] = ((/* implicit */signed char) (+(arr_13 [i_5 - 1] [i_5] [i_5 + 1] [i_5] [i_5])));
                arr_31 [i_0] [5U] [i_8] [i_0] = ((((/* implicit */_Bool) ((6458606543554585207LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)240)))))) ? ((-(((var_9) & (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) : (((/* implicit */unsigned int) ((int) arr_27 [i_8] [i_5 + 1] [i_5 + 1] [i_5 + 1]))));
            }
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 25; i_9 += 4) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_11 = 3; i_11 < 24; i_11 += 4) 
                        {
                            arr_39 [i_0] [i_10] [19U] [i_9] [i_0] [i_11 + 1] [i_11 - 1] = ((/* implicit */short) (signed char)112);
                            var_24 &= ((/* implicit */unsigned short) (_Bool)0);
                            var_25 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) == (2949250394130017153ULL))));
                        }
                        for (signed char i_12 = 0; i_12 < 25; i_12 += 1) 
                        {
                            var_26 ^= ((/* implicit */short) (signed char)85);
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_38 [i_0] [i_10]), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65525))) == (4294836224U))))))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 16203716596438893279ULL)) ? (((/* implicit */int) (short)-11601)) : (-896646429)))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58848))) & (2138443589U)))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) (short)-17530)) : (((/* implicit */int) (short)-1483))))) + (((((/* implicit */long long int) 1435682914U)) & (var_11)))))));
                            var_28 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) min((11356647482195136500ULL), (16122130197137813033ULL)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_18 [i_0]))))) : (var_6)))));
                            arr_43 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [i_0] [i_0])) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) var_10))));
                        }
                        arr_44 [(short)16] [i_5] [i_0] [i_0] |= ((/* implicit */unsigned char) ((arr_20 [i_5 + 1] [i_5 + 2]) * (((/* implicit */long long int) ((3400550460U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-102))))))));
                    }
                } 
            } 
        }
    }
    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
    {
        var_29 = ((/* implicit */short) var_12);
        /* LoopNest 2 */
        for (unsigned char i_14 = 0; i_14 < 14; i_14 += 2) 
        {
            for (long long int i_15 = 1; i_15 < 12; i_15 += 3) 
            {
                {
                    var_30 = ((/* implicit */long long int) (-(((/* implicit */int) arr_42 [i_13] [i_13 + 1] [i_13 + 1] [i_13 + 1] [(_Bool)1]))));
                    arr_52 [i_13] = ((/* implicit */signed char) min((((/* implicit */long long int) var_5)), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-32))))), ((+(var_11)))))));
                    arr_53 [i_13] [i_13] [i_14] [i_15 - 1] = ((/* implicit */int) ((((((/* implicit */unsigned int) (+(var_12)))) / (4010793292U))) != (((unsigned int) ((((/* implicit */_Bool) arr_36 [i_13] [i_13] [i_13])) ? (var_0) : (((/* implicit */long long int) arr_5 [i_15] [i_15] [i_15])))))));
                }
            } 
        } 
    }
    for (short i_16 = 4; i_16 < 20; i_16 += 4) 
    {
        var_31 = ((/* implicit */unsigned char) var_10);
        var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) -1771844448)))));
        var_33 *= ((/* implicit */long long int) (!(((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2994341457U)) && (((/* implicit */_Bool) arr_19 [i_16] [i_16])))))) < (894416835U)))));
    }
    /* vectorizable */
    for (int i_17 = 1; i_17 < 10; i_17 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_18 = 0; i_18 < 11; i_18 += 4) 
        {
            var_34 = ((/* implicit */unsigned int) var_11);
            var_35 -= ((/* implicit */unsigned char) arr_54 [20LL]);
            arr_62 [i_17] [i_17 - 1] = ((/* implicit */_Bool) arr_14 [i_18] [i_18] [i_18]);
            var_36 = ((/* implicit */short) ((((/* implicit */int) arr_4 [13] [i_17 + 1])) & (((/* implicit */int) arr_4 [i_17] [i_17 + 1]))));
        }
        for (unsigned char i_19 = 0; i_19 < 11; i_19 += 2) 
        {
            arr_66 [i_17] = ((/* implicit */int) ((short) var_8));
            arr_67 [i_17 - 1] [3ULL] = ((/* implicit */unsigned short) ((long long int) arr_57 [i_17 - 1] [i_17 - 1]));
            var_37 = ((/* implicit */short) ((((/* implicit */_Bool) -2106303445)) ? (((/* implicit */long long int) ((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)222))) : (3400550460U)))) : (((((/* implicit */long long int) ((/* implicit */int) var_5))) / (var_1)))));
            arr_68 [i_17] [i_17] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) << (((arr_38 [i_17] [i_17 + 1]) - (2096777435018634880LL)))));
        }
        for (signed char i_20 = 0; i_20 < 11; i_20 += 4) 
        {
            var_38 = 2097024U;
            arr_71 [i_20] = ((/* implicit */long long int) (~(arr_12 [i_17 + 1])));
        }
        /* LoopNest 2 */
        for (unsigned int i_21 = 3; i_21 < 10; i_21 += 2) 
        {
            for (unsigned short i_22 = 0; i_22 < 11; i_22 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_23 = 0; i_23 < 11; i_23 += 1) 
                    {
                        var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) var_2))));
                        var_40 *= ((/* implicit */short) (-(((((/* implicit */int) var_5)) ^ (((/* implicit */int) (unsigned short)23988))))));
                        arr_79 [i_22] [9] = ((/* implicit */_Bool) var_0);
                        var_41 ^= ((/* implicit */signed char) arr_78 [i_17 + 1] [i_17] [i_17] [i_17]);
                        var_42 = ((/* implicit */long long int) var_9);
                    }
                    for (unsigned int i_24 = 0; i_24 < 11; i_24 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_25 = 3; i_25 < 8; i_25 += 2) /* same iter space */
                        {
                            var_43 = ((/* implicit */signed char) arr_7 [i_17 - 1]);
                            arr_85 [i_17] [i_21 - 3] [i_24] [i_25] = ((/* implicit */unsigned short) ((((arr_40 [i_25]) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_17 + 1] [i_21 - 3] [(unsigned short)2])))));
                            arr_86 [i_17] [i_25] = (-(((/* implicit */int) (unsigned short)56862)));
                        }
                        for (unsigned int i_26 = 3; i_26 < 8; i_26 += 2) /* same iter space */
                        {
                            arr_90 [i_24] [i_26] [i_26] [i_17] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (11606712730472334345ULL))) != (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_6)) + (var_1))))));
                            arr_91 [i_17] [i_17 - 1] [i_17] [i_17] [i_26] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3318920587044556130LL)) ? (var_12) : (((/* implicit */int) var_8))));
                            arr_92 [i_26] [i_21] [i_22] [(unsigned char)4] = ((/* implicit */short) arr_73 [i_26]);
                            var_44 = ((/* implicit */signed char) arr_74 [i_21] [(_Bool)1] [i_21]);
                            arr_93 [i_17] [i_26] [i_22] = ((/* implicit */unsigned long long int) ((short) 8249183633606324896LL));
                        }
                        var_45 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)69))) - (2994341452U))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_17] [i_21] [i_22] [i_24] [i_22] [5ULL])))));
                        arr_94 [i_17 - 1] [(short)2] [i_22] = ((/* implicit */long long int) ((var_11) == (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                        var_46 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_21 + 1]))) + (var_6)));
                    }
                    /* LoopSeq 2 */
                    for (short i_27 = 0; i_27 < 11; i_27 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (int i_28 = 0; i_28 < 11; i_28 += 1) 
                        {
                            arr_102 [i_17] [i_17] [i_22] [i_27] [i_27] [i_27] [i_28] = ((/* implicit */long long int) (short)18184);
                            var_47 = ((/* implicit */long long int) arr_27 [i_28] [i_21] [i_22] [i_28]);
                        }
                        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                        {
                            arr_105 [i_29] [i_27] [i_22] [i_21] [i_17] = ((/* implicit */unsigned int) ((long long int) var_8));
                            arr_106 [3] [i_21] [i_21] [i_21] [i_21 - 2] [i_21 - 3] [i_21] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_27 [i_22] [i_17 + 1] [i_21 - 1] [i_22]))));
                        }
                        for (unsigned short i_30 = 0; i_30 < 11; i_30 += 4) 
                        {
                            var_48 = ((/* implicit */long long int) ((((/* implicit */int) var_8)) - (((((/* implicit */_Bool) arr_78 [i_17 + 1] [i_17 + 1] [i_17] [i_17 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_88 [i_17 - 1] [i_17 - 1] [i_30] [i_27] [i_30] [i_30]))))));
                            arr_110 [i_17] [i_17] [i_22] [i_22] [i_30] [i_27] [i_22] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((/* implicit */int) var_7)) : ((((_Bool)0) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)85))))));
                            arr_111 [i_17] [i_21] [i_27] [i_27] [i_30] [i_27] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)192)))));
                            arr_112 [i_22] = ((/* implicit */long long int) arr_49 [i_30]);
                        }
                        var_49 ^= var_9;
                    }
                    for (int i_31 = 1; i_31 < 10; i_31 += 3) 
                    {
                        var_50 = ((/* implicit */long long int) max((var_50), (arr_82 [i_31 - 1] [i_31 - 1] [i_31] [i_22] [i_31 - 1])));
                        var_51 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) > (var_11)));
                        arr_116 [i_31 - 1] = ((/* implicit */unsigned short) var_9);
                    }
                }
            } 
        } 
    }
    var_52 = ((/* implicit */int) var_5);
}
