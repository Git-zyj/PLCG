/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21110
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
    var_13 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))));
        arr_3 [i_0] [(unsigned char)6] = ((((/* implicit */_Bool) (~(((arr_1 [i_0]) * (arr_2 [i_0] [i_0 + 2])))))) ? (((/* implicit */unsigned long long int) (+(3804161253U)))) : (((((/* implicit */_Bool) (+(arr_2 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)77)))))) : (((((/* implicit */_Bool) var_7)) ? (arr_2 [10LL] [10LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (unsigned int i_3 = 1; i_3 < 8; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    {
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))) > (arr_1 [i_1])));
                        var_16 += ((/* implicit */unsigned long long int) ((arr_2 [i_4] [i_3 + 1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [(unsigned char)0] [i_3 + 3] [i_1])))));
                        var_17 += ((/* implicit */_Bool) var_5);
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            var_18 = ((/* implicit */long long int) 283637181U);
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((arr_12 [i_1] [i_3 + 3] [i_4] [i_5]) > (((/* implicit */int) ((((/* implicit */int) arr_15 [i_3] [i_3] [i_3] [i_3])) > (((/* implicit */int) (signed char)-54))))))))));
                            var_20 = ((/* implicit */long long int) var_1);
                        }
                        for (unsigned char i_6 = 2; i_6 < 10; i_6 += 1) 
                        {
                            arr_22 [i_1] [i_1] [i_1] [i_3] [i_1] [i_6] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_1]))));
                            arr_23 [3U] [3U] [2LL] [2LL] [2LL] = ((/* implicit */short) arr_18 [i_3] [i_3] [i_3] [i_3 + 2] [i_3 + 2] [i_3 + 3]);
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 629654805771589837LL)))))) % (((long long int) arr_11 [i_2] [5U]))));
                        }
                        for (int i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            var_22 += ((/* implicit */unsigned int) var_6);
                            arr_27 [i_1] [3U] [i_3] [3U] [i_2] = (+(arr_14 [i_3 - 1] [i_2] [i_3 - 1] [i_3 - 1]));
                            var_23 += ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_25 [i_7] [i_2] [i_1])))));
                            arr_28 [i_2] [i_4] [i_3 + 3] [i_2] [i_1] = ((/* implicit */int) var_9);
                            arr_29 [i_2] [i_2] [i_2] [(short)9] [(short)9] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_3] [i_3] [i_3] [i_3 + 2] [0ULL] [i_3 - 1] [i_7])) ? (((/* implicit */int) (short)-28982)) : (((/* implicit */int) arr_20 [3U] [i_3] [i_3] [i_3 + 2] [i_3]))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            for (unsigned short i_9 = 1; i_9 < 10; i_9 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) max((var_24), (var_11)));
                    arr_35 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_1))))) / (((/* implicit */int) arr_8 [i_9 + 1] [i_8 - 1]))));
                    var_25 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [i_1] [i_9] [6U] [i_1])) || (((/* implicit */_Bool) arr_17 [i_9] [i_9] [i_9 + 1] [i_9 - 1] [i_9] [i_9] [i_9 - 1]))));
                    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (+(164203766U))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_10 = 2; i_10 < 9; i_10 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned int i_11 = 0; i_11 < 11; i_11 += 2) 
            {
                for (unsigned char i_12 = 2; i_12 < 9; i_12 += 2) 
                {
                    for (int i_13 = 0; i_13 < 11; i_13 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */long long int) ((short) arr_33 [(short)0] [(short)0] [i_10 - 2] [i_11]));
                            var_28 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)(-32767 - 1)))))) ? (arr_2 [i_1] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_10] [(signed char)5] [i_12] [i_13])))));
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_10 + 2] [i_10 + 2] [i_10 - 1] [i_1])) || (((/* implicit */_Bool) arr_10 [i_1] [i_10] [i_10 + 2] [i_10 + 2]))));
            var_30 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (unsigned short)0))));
        }
        /* LoopSeq 3 */
        for (signed char i_14 = 3; i_14 < 8; i_14 += 2) 
        {
            var_31 = ((/* implicit */int) (+(arr_4 [i_1])));
            arr_49 [i_14] [i_14] [i_14] = ((/* implicit */short) arr_30 [(signed char)2] [i_14]);
        }
        for (unsigned int i_15 = 1; i_15 < 7; i_15 += 4) 
        {
            /* LoopSeq 4 */
            for (short i_16 = 3; i_16 < 10; i_16 += 3) 
            {
                arr_55 [i_15] [i_16] [i_16] [i_16] = ((/* implicit */unsigned int) ((arr_31 [i_15 - 1] [i_15 - 1]) ^ (((/* implicit */int) (unsigned short)0))));
                var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((long long int) arr_44 [i_1] [i_15 - 1] [i_15 + 2] [7U] [i_15 + 2])))));
                var_33 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_15 - 1] [i_15 + 4] [i_16] [i_16 - 3]))));
                arr_56 [i_16] [i_15] [i_16] = ((/* implicit */unsigned int) arr_26 [i_16]);
                var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((_Bool) var_3)))));
            }
            for (short i_17 = 0; i_17 < 11; i_17 += 1) 
            {
                /* LoopSeq 4 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    arr_61 [i_18] [i_17] [i_15] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((unsigned int) (unsigned char)0)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_52 [i_15 + 1] [i_17] [i_15 + 1])) : (((/* implicit */int) var_0)))))));
                    var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)150))) < (4294967295U)));
                    var_36 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_18] [i_15 + 1] [6U])) ? (arr_13 [(unsigned char)3] [i_15 + 1] [i_15]) : (arr_13 [i_18] [i_15 + 1] [i_1])));
                    var_37 |= ((((/* implicit */_Bool) arr_13 [i_1] [i_15 + 1] [10U])) ? (((/* implicit */unsigned int) arr_12 [i_1] [i_15] [i_17] [i_18])) : (4226486549U));
                }
                for (unsigned char i_19 = 1; i_19 < 10; i_19 += 4) 
                {
                    var_38 = 4204674939U;
                    arr_66 [i_1] [i_19] [i_17] [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6779)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_19 + 1] [i_15 + 4] [(unsigned short)10]))) : (var_11)));
                    var_39 = ((/* implicit */unsigned int) min((var_39), (arr_43 [(unsigned short)4] [i_15] [i_19 - 1])));
                    var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) -4386086398567267391LL))));
                }
                for (unsigned char i_20 = 0; i_20 < 11; i_20 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_21 = 0; i_21 < 11; i_21 += 2) 
                    {
                        var_41 = ((/* implicit */short) ((((/* implicit */int) arr_24 [i_1] [i_1] [i_1] [i_1] [i_21] [i_15 - 1] [i_1])) << (((3778171851U) - (3778171840U)))));
                        var_42 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */int) arr_47 [i_1])) : (((/* implicit */int) (unsigned short)9098))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_15 + 1] [3U]))) : (((long long int) arr_47 [i_21]))));
                    }
                    arr_71 [i_1] [i_1] [i_17] [i_20] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_42 [i_15 + 2] [i_15] [i_15]))));
                    arr_72 [i_17] [i_15] [i_17] [(unsigned char)3] |= ((/* implicit */_Bool) var_6);
                    var_43 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_30 [i_1] [i_15 + 4])) : (((/* implicit */int) arr_7 [i_20]))))));
                }
                for (unsigned int i_22 = 0; i_22 < 11; i_22 += 2) 
                {
                    var_44 += ((/* implicit */unsigned int) var_9);
                    var_45 += ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_22] [i_22])))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_23 = 0; i_23 < 11; i_23 += 4) 
                {
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        {
                            arr_83 [i_1] [i_1] [(unsigned char)10] [i_23] [i_24] [i_17] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)241)))))));
                            var_46 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)38293))));
                            arr_84 [i_17] [i_24] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [6] [i_15] [i_17] [i_17])) ? (((/* implicit */int) (signed char)-21)) : (1855588016)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)169))) : (0U));
                            var_47 *= ((/* implicit */unsigned long long int) (unsigned char)112);
                            arr_85 [i_1] [(unsigned short)9] [i_24] [i_17] [(_Bool)1] [(_Bool)1] [i_24] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1969580826U)) ? (((/* implicit */int) (unsigned char)213)) : (-1855588003)));
                        }
                    } 
                } 
            }
            for (unsigned char i_25 = 0; i_25 < 11; i_25 += 3) 
            {
                var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (arr_21 [i_25] [i_25] [i_15 + 4] [(unsigned short)6] [i_15] [i_1] [i_1]) : (arr_21 [i_25] [i_25] [i_15 + 4] [7] [i_15] [7] [7])));
                /* LoopNest 2 */
                for (unsigned short i_26 = 3; i_26 < 8; i_26 += 4) 
                {
                    for (signed char i_27 = 0; i_27 < 11; i_27 += 3) 
                    {
                        {
                            var_49 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_80 [i_27] [i_26 - 1] [(short)2] [i_1])) ? (((/* implicit */unsigned int) arr_80 [i_1] [i_15] [i_25] [i_26 - 1])) : (arr_53 [i_1])));
                            arr_95 [i_27] [(unsigned short)9] [0] [i_15] [i_1] = ((var_2) < (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))));
                            var_50 = ((/* implicit */unsigned short) min((var_50), (((/* implicit */unsigned short) ((((arr_5 [i_15] [i_15]) < (((/* implicit */long long int) 854094449U)))) ? (arr_46 [i_15] [i_26 - 2] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_15 + 1]))))))));
                            var_51 = ((/* implicit */unsigned long long int) var_10);
                        }
                    } 
                } 
                var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_1] [i_15 + 1])) : (((/* implicit */int) arr_63 [i_1] [i_15 + 3] [i_15 - 1] [i_15 - 1]))));
                arr_96 [i_1] [i_15] [(unsigned short)0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1969580826U)) || (((/* implicit */_Bool) arr_41 [i_1] [i_15 + 4] [i_25] [i_1]))));
            }
            for (unsigned char i_28 = 1; i_28 < 9; i_28 += 2) 
            {
                var_53 = ((/* implicit */unsigned int) min((var_53), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_77 [i_28 - 1] [i_28] [i_15 + 3])) ? (((/* implicit */int) arr_77 [i_28 + 1] [i_28 + 1] [i_15 - 1])) : (((/* implicit */int) arr_77 [i_28 + 1] [i_28 + 1] [i_15 + 2])))))));
                var_54 ^= ((/* implicit */unsigned char) ((unsigned long long int) arr_14 [i_28 + 2] [i_28] [i_15 + 3] [i_1]));
            }
            var_55 = ((/* implicit */long long int) max((var_55), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [5U] [i_15 + 1])) ? (arr_97 [i_15 + 2] [i_15 + 4] [i_15 + 2] [i_1]) : (((/* implicit */int) arr_8 [i_15] [i_15 + 1])))))));
        }
        for (unsigned int i_29 = 4; i_29 < 10; i_29 += 3) 
        {
            arr_103 [i_29] [i_29] [9LL] = ((unsigned int) (unsigned short)51204);
            var_56 = ((/* implicit */unsigned int) min((var_56), (((/* implicit */unsigned int) (-(((/* implicit */int) ((var_11) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)86)))))))))));
            var_57 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_99 [i_29 + 1] [i_29 + 1]))));
            arr_104 [i_1] [i_29] [i_29 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -2147483640)) ? (arr_41 [7U] [i_29] [i_29] [i_29]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_42 [7U] [i_29 - 4] [10ULL])) ? (((/* implicit */int) arr_15 [i_1] [i_1] [i_29] [i_1])) : (arr_31 [i_1] [(unsigned short)9]))))));
            arr_105 [i_29] [i_29] = ((/* implicit */unsigned int) (signed char)-113);
        }
    }
    var_58 += ((/* implicit */unsigned int) min((((unsigned long long int) max((((/* implicit */unsigned long long int) var_10)), (var_3)))), (((/* implicit */unsigned long long int) var_8))));
}
