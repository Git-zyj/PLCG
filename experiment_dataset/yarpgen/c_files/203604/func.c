/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203604
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            {
                arr_6 [(short)3] [(short)3] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [(_Bool)1]))))), (max((max((11124834709194183677ULL), (((/* implicit */unsigned long long int) 4U)))), (((/* implicit */unsigned long long int) arr_1 [i_1 + 1]))))));
                var_10 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) (unsigned short)3702)), (min((0U), (((/* implicit */unsigned int) arr_2 [0ULL])))))), (((/* implicit */unsigned int) var_3))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)94))))) ? (4294967291U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)114))) >= (1U))))))));
                    var_11 = ((/* implicit */_Bool) max((((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) / (((arr_7 [i_2] [i_1] [i_0]) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-117)))))), (((/* implicit */int) min((max(((unsigned short)65535), (((/* implicit */unsigned short) arr_2 [i_0])))), (((/* implicit */unsigned short) arr_7 [i_2 - 1] [i_2 - 1] [i_1 + 4])))))));
                    var_12 = ((/* implicit */unsigned short) (-((+((~(var_9)))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_13 = ((/* implicit */unsigned int) arr_1 [i_2]);
                            arr_14 [i_0] [i_1 + 4] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) var_8);
                            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (+(((/* implicit */int) var_8)))))));
                            arr_15 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)240))));
                        }
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
                        {
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [9] [i_1 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_12 [i_5] [i_5] [i_2 - 1] [i_2] [i_1 - 1]))))));
                            arr_18 [i_3] [(unsigned char)8] [i_2] [i_3] = ((/* implicit */signed char) arr_10 [i_1] [i_3] [i_1] [i_1]);
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (var_9)))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (signed char)105))));
                            arr_22 [i_3] [i_1] [i_2] [i_3] [4LL] [4ULL] [i_2 - 1] = ((/* implicit */unsigned short) 0U);
                            var_18 = ((/* implicit */unsigned char) (signed char)105);
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (~(arr_8 [i_0] [i_1 + 4]))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_3] [(unsigned short)11] [i_3] [i_3] [(unsigned short)11] = ((/* implicit */int) (+(((((/* implicit */_Bool) max((arr_21 [i_0] [i_1] [i_2] [i_2] [i_0] [i_7] [i_2]), (((/* implicit */unsigned int) (short)-32755))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_3] [i_0] [i_3] [i_3]))))) : (6078422287532885540ULL)))));
                            var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) - (((((/* implicit */_Bool) (unsigned char)15)) ? (arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1]) : (var_0)))));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_17 [i_0] [i_0])) / (arr_1 [i_7]))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(_Bool)1])))))))) | (max(((+(var_9))), (((/* implicit */unsigned long long int) max((arr_16 [i_0] [(short)6] [i_2] [i_0] [i_0] [i_2] [i_7]), (((/* implicit */unsigned int) (unsigned short)4087)))))))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
                        {
                            arr_29 [i_3] [i_3] = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) arr_27 [i_2 - 1] [i_1] [i_3] [i_3] [i_1 + 3] [(_Bool)1] [i_1])), (((arr_23 [i_0] [i_0] [i_1] [i_0] [i_0] [i_3] [i_3]) + (((/* implicit */long long int) ((/* implicit */int) var_1))))))) > (((/* implicit */long long int) (~(((unsigned int) 0U)))))));
                            arr_30 [i_3] [i_8] [i_3] [i_2] [i_3] [1ULL] [1ULL] = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [11LL])) ? (236185897911196493LL) : (-87823325302989868LL)))), (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_6))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61833))) : (arr_5 [i_1])))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (short)-17191)) ? (2147483647) : (((/* implicit */int) arr_0 [i_0])))))))));
                            arr_31 [i_3] [i_3] = ((/* implicit */int) max(((unsigned char)176), ((unsigned char)0)));
                            var_22 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)244)) ? (12368321786176666076ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17187))))));
                        }
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_23 = ((/* implicit */long long int) max((((18300968497149635463ULL) * (arr_33 [(_Bool)1] [i_1 - 1] [(_Bool)1] [i_1] [i_1] [(_Bool)1]))), (((arr_33 [i_0] [i_0] [i_1 + 1] [i_0] [i_0] [i_1 + 1]) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)105)))))))));
                        var_24 = ((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_2] [i_9]);
                        arr_36 [i_9] = ((/* implicit */signed char) 18446744073709551611ULL);
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)12)), (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_35 [i_9] [(unsigned short)10] [i_0]), (((/* implicit */short) var_4)))))) : (6078422287532885539ULL)));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 0; i_11 < 12; i_11 += 2) 
                        {
                            arr_41 [i_10] = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [i_10] [i_2] [i_2] [3] [11U] [11U]))) + (arr_8 [(_Bool)1] [(_Bool)1]))))));
                            var_26 = ((/* implicit */signed char) arr_5 [i_2]);
                            arr_42 [i_0] [i_0] [i_0] [i_10] [i_0] = ((/* implicit */unsigned short) (-(max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)40475))))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (arr_23 [i_10] [i_10] [i_10] [i_2 - 1] [i_1] [i_1] [i_10])))))));
                            var_27 = ((/* implicit */unsigned long long int) ((unsigned char) arr_38 [i_1 + 4] [i_1 + 4] [i_1 + 4] [i_1 + 4]));
                            arr_43 [i_10] = max((((max((((/* implicit */unsigned long long int) -1LL)), (0ULL))) * ((+(0ULL))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_1 + 4] [i_2 - 1] [i_1 + 4]))))));
                        }
                        arr_44 [i_10] = ((/* implicit */_Bool) ((max((var_0), (((/* implicit */unsigned int) (_Bool)1)))) - (((/* implicit */unsigned int) ((/* implicit */int) max(((short)32753), (((/* implicit */short) (_Bool)1))))))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 12; i_12 += 3) 
                    {
                        arr_49 [i_0] [i_0] [(_Bool)1] [i_0] [i_12] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), (arr_47 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_1 + 4] [i_1] [i_1 + 3])));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) (signed char)0)))))) ? (((/* implicit */unsigned long long int) 236185897911196493LL)) : (max((4834676332242135345ULL), (((/* implicit */unsigned long long int) (short)5))))));
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((+(arr_23 [i_1] [i_1] [i_1] [i_1] [(_Bool)0] [(unsigned short)10] [i_0])))))) ? ((+(max((((/* implicit */unsigned long long int) (_Bool)0)), (10736397697847375280ULL))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65095)))))))));
                    }
                }
                /* vectorizable */
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7318351036365769829LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)17191))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (2367991213U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)162))))) : (arr_21 [i_13] [(unsigned char)6] [i_13 - 1] [i_13 - 1] [i_13] [i_13 - 1] [i_1 + 4]))))));
                    var_31 = ((/* implicit */int) ((((/* implicit */_Bool) -1LL)) ? (arr_4 [i_13 - 1] [i_1 + 2] [i_1 + 2]) : (arr_4 [i_13 - 1] [i_1 + 4] [i_1 + 1])));
                }
                for (unsigned int i_14 = 0; i_14 < 12; i_14 += 3) 
                {
                    var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) (-((+((+(var_2))))))))));
                    /* LoopSeq 3 */
                    for (signed char i_15 = 0; i_15 < 12; i_15 += 3) 
                    {
                        var_33 = var_1;
                        /* LoopSeq 2 */
                        for (long long int i_16 = 3; i_16 < 9; i_16 += 2) 
                        {
                            arr_61 [i_1] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((unsigned long long int) 34634616274944ULL)) : (((/* implicit */unsigned long long int) max((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)25)))), (((/* implicit */int) var_4)))))));
                            var_34 = ((((/* implicit */_Bool) 18446744073709551605ULL)) ? (((((/* implicit */_Bool) (unsigned char)82)) ? (max((18446744073709551605ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2119542596U)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_0))))) >= (((((/* implicit */int) arr_0 [i_15])) | (((/* implicit */int) (signed char)-31)))))))));
                        }
                        for (int i_17 = 0; i_17 < 12; i_17 += 1) 
                        {
                            var_35 = ((/* implicit */signed char) arr_46 [i_0] [(unsigned short)8] [11U] [i_0]);
                            var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) var_1))));
                            arr_64 [i_0] [6] [i_14] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max(((signed char)110), ((signed char)-15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_38 [1U] [(unsigned short)2] [(unsigned short)2] [(unsigned short)2])) > (((((/* implicit */int) (signed char)-26)) | (((/* implicit */int) var_4)))))))) : (((((((/* implicit */unsigned long long int) 995266396U)) | (9620656008395785253ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned short)2016)) : (((/* implicit */int) (_Bool)1)))))))));
                        }
                        arr_65 [i_14] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 480363896U)) ? (arr_12 [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)25)))))));
                        arr_66 [i_14] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_1 + 3] [(unsigned char)1] [i_14] [i_15] [3U] [(signed char)8] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)50))))) : ((+(arr_51 [i_0])))));
                    }
                    for (unsigned int i_18 = 1; i_18 < 11; i_18 += 2) 
                    {
                        arr_69 [i_14] [(unsigned char)5] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_19 [0U])), (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (16998193394258386295ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_1 + 4] [i_18 - 1])))))));
                        var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) (-(((/* implicit */int) arr_35 [i_18 - 1] [(unsigned short)4] [(unsigned short)4])))))));
                    }
                    for (unsigned short i_19 = 0; i_19 < 12; i_19 += 2) 
                    {
                        arr_72 [i_0] [i_1] [i_14] [(short)10] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(0ULL))))));
                        /* LoopSeq 4 */
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            arr_75 [i_1] [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(var_9))), (((/* implicit */unsigned long long int) max((arr_48 [i_0] [i_1] [i_14] [i_0] [i_20] [i_0]), (((/* implicit */unsigned int) arr_56 [(unsigned short)9] [i_19] [i_14] [i_14] [(unsigned short)0] [i_0])))))))) ? ((~(((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_14]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)2016)) ^ (((/* implicit */int) var_1)))))));
                            var_38 = ((/* implicit */unsigned char) ((max((max((((/* implicit */unsigned long long int) 19U)), (arr_5 [i_14]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [i_20]))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1))))));
                            arr_76 [i_0] [i_1] [i_19] [i_19] [10U] &= ((/* implicit */short) (~(9)));
                        }
                        for (short i_21 = 0; i_21 < 12; i_21 += 2) 
                        {
                            arr_79 [i_1] [i_14] [i_19] = ((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (unsigned short)2016)))))), ((-(((/* implicit */int) max((arr_57 [3U] [i_14] [i_0]), ((unsigned short)63520))))))));
                            var_39 = ((/* implicit */int) (~((+(((unsigned long long int) var_6))))));
                            var_40 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (_Bool)1))))));
                        }
                        for (unsigned int i_22 = 0; i_22 < 12; i_22 += 4) 
                        {
                            var_41 *= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) max((1448550679451165320ULL), (arr_40 [i_22] [i_22])))) ? (var_2) : (var_9)))));
                            arr_82 [(unsigned short)3] [i_1] [i_14] [(_Bool)1] [i_22] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_5 [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0]))))))))));
                            var_42 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (signed char)-10)) && (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))));
                            arr_83 [i_14] [i_14] [(unsigned short)8] [i_19] [i_22] = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_27 [i_1] [i_1 + 1] [i_14] [i_1] [i_1 + 1] [i_1] [i_1 + 4])))) - (((/* implicit */int) max((arr_11 [i_0] [i_1] [i_1 + 3] [i_19]), ((_Bool)1))))));
                        }
                        for (unsigned char i_23 = 2; i_23 < 11; i_23 += 3) 
                        {
                            arr_88 [i_0] [i_14] [i_14] [i_19] [i_19] = ((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_2)) ? (arr_70 [i_14]) : (((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) (unsigned char)219)))))) == ((-(((/* implicit */int) min(((short)-4891), (((/* implicit */short) (_Bool)1))))))));
                            var_43 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_73 [i_1] [i_1] [i_1] [i_14] [2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-122))) : (arr_48 [(unsigned short)4] [3ULL] [3ULL] [9LL] [3ULL] [i_23])))))) ? (((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) <= (arr_19 [i_23]))), ((!(((/* implicit */_Bool) (unsigned short)4045))))))) : ((~(((/* implicit */int) ((_Bool) (signed char)38))))));
                            var_44 = ((/* implicit */int) min((var_44), (((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)75)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (max((((/* implicit */unsigned int) (signed char)-44)), (2892086185U))))) >= (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 12; i_24 += 2) 
                {
                    for (unsigned long long int i_25 = 0; i_25 < 12; i_25 += 2) 
                    {
                        {
                            arr_94 [i_24] [i_24] [(signed char)4] [i_24] [i_24] [i_1] |= ((/* implicit */unsigned short) max((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) (signed char)0))));
                            arr_95 [i_0] [i_0] [i_24] [i_25] = ((/* implicit */long long int) max((181715693U), (((/* implicit */unsigned int) (signed char)-109))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_26 = 0; i_26 < 24; i_26 += 1) 
    {
        for (unsigned char i_27 = 0; i_27 < 24; i_27 += 2) 
        {
            {
                var_45 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) var_3)) + (((/* implicit */int) arr_100 [23ULL])))), ((+(((/* implicit */int) ((unsigned short) 1928576828)))))));
                var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_47 = ((/* implicit */signed char) 4989968548559863331ULL);
    var_48 = (~(((/* implicit */int) var_4)));
}
