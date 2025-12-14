/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51973
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0]);
        arr_4 [i_0] = ((/* implicit */signed char) (unsigned char)177);
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            var_13 = ((/* implicit */unsigned int) (unsigned char)137);
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_14 [i_2] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)84)) ? (4263770282U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)181))))));
                /* LoopSeq 2 */
                for (unsigned short i_4 = 3; i_4 < 12; i_4 += 2) 
                {
                    arr_18 [i_1] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) (unsigned char)78)) : (((/* implicit */int) (unsigned char)85))))) ? (((/* implicit */long long int) arr_2 [i_4 - 3])) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)175))) | (-8340807175012891777LL)))));
                    var_14 = ((/* implicit */_Bool) var_6);
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)175)) && (((/* implicit */_Bool) var_9)))))));
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((int) ((unsigned char) (unsigned char)240))))));
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_8 [i_6])));
                    }
                    for (int i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        arr_26 [i_1] [i_1] [i_2] [i_3] [i_5] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [5U] [i_2] [i_2] [i_2])) ? (-7220746310555140327LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                        var_18 -= ((/* implicit */signed char) (short)29448);
                    }
                }
                /* LoopSeq 1 */
                for (unsigned int i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        arr_33 [i_2] [i_2] [i_2] [i_8] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60555)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (signed char)59))))));
                        var_19 = ((/* implicit */unsigned char) ((9223372036854775807LL) >= (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) (unsigned char)80)) : (((/* implicit */int) (unsigned char)175)))))));
                        var_20 = ((/* implicit */unsigned char) arr_2 [i_2]);
                    }
                    for (signed char i_10 = 1; i_10 < 14; i_10 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned char) var_6);
                        var_22 = arr_25 [i_1] [i_1] [i_3] [i_8];
                    }
                    var_23 += ((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1]);
                }
                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)240)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */unsigned int) -176180607)) & (arr_20 [i_1] [6U] [(unsigned short)0] [i_2] [i_3] [i_3]))))))));
            }
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_12 = 4; i_12 < 11; i_12 += 4) 
                {
                    for (signed char i_13 = 3; i_13 < 11; i_13 += 4) 
                    {
                        {
                            arr_46 [i_1] [i_2] [i_11] [14U] [i_13] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)84))));
                            var_25 += ((/* implicit */unsigned short) var_5);
                            arr_47 [i_1] [i_1] [i_1] [i_12] &= (!(((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_1] [i_2] [i_11] [i_12] [i_13 + 3])) << (13U)))));
                            var_26 = ((/* implicit */short) var_9);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_14 = 0; i_14 < 15; i_14 += 1) 
                {
                    arr_50 [i_2] [i_2] [i_2] [(unsigned short)4] [i_2] [(unsigned short)4] = ((/* implicit */unsigned char) ((int) arr_20 [i_1] [(unsigned char)3] [i_2] [i_11] [i_11] [i_11 + 1]));
                    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((long long int) var_6)))));
                    var_28 *= ((/* implicit */unsigned short) (_Bool)1);
                    /* LoopSeq 3 */
                    for (unsigned char i_15 = 0; i_15 < 15; i_15 += 1) 
                    {
                        var_29 += ((/* implicit */unsigned char) ((arr_22 [i_1] [i_11 + 1] [i_11 + 1] [i_11 + 1]) | (arr_22 [i_1] [i_11 + 1] [i_11 + 1] [i_11 + 1])));
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)167))))) ? (1737170050555110848LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)23)))));
                        var_31 |= ((/* implicit */long long int) arr_29 [i_1] [i_2] [0LL] [i_14] [i_14]);
                        arr_54 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) var_9);
                        var_32 = ((/* implicit */unsigned char) 8609340459743407170LL);
                    }
                    for (unsigned char i_16 = 0; i_16 < 15; i_16 += 1) 
                    {
                        var_33 = ((/* implicit */_Bool) var_7);
                        var_34 *= ((/* implicit */short) (unsigned char)206);
                        arr_57 [i_1] [i_1] [i_11] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 264241152U)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (_Bool)1))));
                        var_35 &= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) -5982139304774957705LL))))) * (((/* implicit */int) arr_11 [(unsigned short)12] [i_2] [(signed char)12] [(_Bool)1]))));
                    }
                    for (int i_17 = 4; i_17 < 13; i_17 += 2) 
                    {
                        var_36 = ((/* implicit */unsigned char) 7713442853123689620LL);
                        arr_61 [i_1] [i_1] [i_11] [(unsigned char)14] [i_17] [i_2] = ((/* implicit */short) ((unsigned int) arr_21 [i_1] [i_2] [i_14] [i_2]));
                        var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4958)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_9 [i_2] [i_11] [i_14]))))) ? (((((/* implicit */int) (unsigned char)125)) - (((/* implicit */int) (unsigned char)23)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)6)))))));
                        var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2963767179U)) ? (((/* implicit */int) arr_60 [i_11 + 1])) : (((/* implicit */int) (_Bool)1))));
                    }
                }
            }
            /* LoopSeq 4 */
            for (unsigned int i_18 = 0; i_18 < 15; i_18 += 2) 
            {
                var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */int) arr_19 [i_1] [i_18] [i_2] [(signed char)0]))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) arr_25 [13LL] [2] [i_18] [i_18])) ? (((/* implicit */int) arr_52 [i_1] [i_1] [i_2] [i_2] [i_18])) : (((/* implicit */int) (unsigned char)237))))));
                var_40 = ((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(signed char)5] [i_2] [i_1])) ? (((/* implicit */int) (unsigned short)60595)) : (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) 2555169588U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_1] [i_2] [i_18] [i_18]))) : (arr_21 [i_2] [(unsigned char)3] [i_1] [i_2]))));
                /* LoopSeq 3 */
                for (unsigned int i_19 = 0; i_19 < 15; i_19 += 1) /* same iter space */
                {
                    var_41 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)60591))) ? ((-(((/* implicit */int) var_12)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)28521)))))));
                    var_42 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)235))) < ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4082147899U)))));
                    /* LoopSeq 2 */
                    for (short i_20 = 2; i_20 < 14; i_20 += 4) 
                    {
                        var_43 ^= ((/* implicit */long long int) ((unsigned char) ((unsigned char) (_Bool)1)));
                        var_44 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255)))))));
                    }
                    for (unsigned int i_21 = 1; i_21 < 13; i_21 += 4) 
                    {
                        var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */int) ((unsigned char) (short)-28532))) : (((/* implicit */int) (signed char)95))));
                        var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) ((((arr_59 [i_1] [i_18] [i_18] [i_19]) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) (short)-21126)))) + (((/* implicit */int) ((unsigned char) (short)24624))))))));
                        var_47 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_25 [i_1] [i_19] [i_2] [i_1]))));
                    }
                }
                for (unsigned int i_22 = 0; i_22 < 15; i_22 += 1) /* same iter space */
                {
                    var_48 = ((/* implicit */unsigned short) var_12);
                    var_49 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 7972777349042722149LL))));
                    arr_73 [i_2] = ((/* implicit */_Bool) var_0);
                    var_50 += ((/* implicit */_Bool) (-(((/* implicit */int) arr_72 [i_1] [i_18] [i_18] [i_22]))));
                }
                for (unsigned int i_23 = 0; i_23 < 15; i_23 += 1) /* same iter space */
                {
                    var_51 = ((/* implicit */_Bool) max((var_51), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) (unsigned short)60591))))) ? (((/* implicit */int) (short)15267)) : (((/* implicit */int) (unsigned short)4940)))))));
                    var_52 += ((/* implicit */signed char) ((((/* implicit */_Bool) 1447350507U)) ? (((/* implicit */int) (short)-13017)) : ((~(((/* implicit */int) (short)29461))))));
                    var_53 = ((/* implicit */signed char) max((var_53), (((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_5)))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)230))) : (2077372796U))))))));
                }
                arr_78 [i_18] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_2] [i_18])) ? (((/* implicit */int) arr_24 [i_1] [i_18])) : (((/* implicit */int) arr_24 [i_1] [i_18]))));
                var_54 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_38 [i_1])) ? (((/* implicit */int) arr_29 [i_1] [i_1] [i_2] [i_18] [i_18])) : (((/* implicit */int) var_12))));
            }
            for (long long int i_24 = 3; i_24 < 13; i_24 += 4) /* same iter space */
            {
                arr_81 [i_2] = ((/* implicit */unsigned short) (+(arr_75 [i_24 + 1] [i_2])));
                var_55 = ((/* implicit */unsigned short) max((var_55), ((unsigned short)5)));
                var_56 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_1] [i_2] [(signed char)2] [i_24 - 1])) ? (((/* implicit */int) arr_23 [i_1] [i_2] [6LL] [i_2])) : (((/* implicit */int) arr_23 [i_1] [i_2] [(unsigned char)10] [i_2]))));
                var_57 = ((/* implicit */signed char) (((-(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) ((unsigned char) arr_68 [i_2] [(unsigned char)9] [i_24 - 1] [(unsigned char)9])))));
                var_58 = ((/* implicit */long long int) var_5);
            }
            for (long long int i_25 = 3; i_25 < 13; i_25 += 4) /* same iter space */
            {
                var_59 = ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) != (((/* implicit */int) arr_28 [(_Bool)1] [(_Bool)1] [i_1] [i_25] [i_25]))));
                arr_85 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-29461)) ? (((/* implicit */int) (signed char)62)) : (((((/* implicit */_Bool) 5764737303827503773LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))));
                var_60 = ((/* implicit */short) (((_Bool)1) ? (var_7) : (((/* implicit */int) (signed char)-40))));
            }
            for (long long int i_26 = 3; i_26 < 13; i_26 += 4) /* same iter space */
            {
                var_61 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-29461)) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) (short)-29447)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_82 [12LL])))))));
                arr_89 [(signed char)12] [i_2] [i_26] = var_6;
                /* LoopNest 2 */
                for (unsigned char i_27 = 3; i_27 < 13; i_27 += 4) 
                {
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                    {
                        {
                            var_62 = ((/* implicit */unsigned char) var_11);
                            var_63 = ((/* implicit */unsigned char) max((var_63), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_64 [i_26 - 3] [i_27 + 2] [i_27] [i_27 + 1] [i_27 + 2] [i_28]))) % (7405397214094033817LL))))));
                            var_64 = ((/* implicit */unsigned char) (!(arr_72 [i_1] [i_2] [i_27 - 3] [i_27 - 1])));
                        }
                    } 
                } 
            }
        }
        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
        {
            var_65 = ((/* implicit */unsigned int) min((var_65), (((/* implicit */unsigned int) 1339994403))));
            var_66 += ((/* implicit */long long int) (unsigned char)0);
            var_67 = ((/* implicit */_Bool) var_2);
        }
        arr_98 [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)105))));
    }
    var_68 = ((/* implicit */unsigned int) (+(var_3)));
    var_69 += ((/* implicit */unsigned short) ((unsigned int) var_3));
}
