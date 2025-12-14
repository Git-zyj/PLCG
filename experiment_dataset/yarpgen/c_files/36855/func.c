/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36855
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
    var_15 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) 9223372036854775807LL))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            arr_4 [i_0] [i_0] [i_1] = ((/* implicit */int) 4194303U);
            /* LoopSeq 2 */
            for (unsigned short i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    for (long long int i_4 = 1; i_4 < 10; i_4 += 4) 
                    {
                        {
                            arr_13 [i_2] [i_2] [i_1] [i_3 + 1] [i_0] = ((/* implicit */int) ((unsigned short) -6445461033723493156LL));
                            arr_14 [i_0] [i_3] [i_2 + 2] [i_1] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) 394529308)) ? (var_11) : (((/* implicit */unsigned long long int) var_4)))) == (((/* implicit */unsigned long long int) arr_5 [i_2 - 1] [i_2] [i_0]))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1]))))) ? (((412078524U) >> (((1496299866988454169LL) - (1496299866988454154LL))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)44812))))))));
                arr_15 [i_0] [i_1 + 2] = ((/* implicit */unsigned char) (_Bool)1);
                var_18 = (~((-(((/* implicit */int) (_Bool)0)))));
            }
            for (int i_5 = 1; i_5 < 10; i_5 += 2) 
            {
                arr_18 [i_0] [8ULL] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_0])) > (((/* implicit */int) (signed char)-27))));
                var_19 &= (((~(3882888757U))) % (((/* implicit */unsigned int) (+(((/* implicit */int) (short)26864))))));
            }
            arr_19 [i_0 - 1] [i_0] [i_1] = ((/* implicit */long long int) ((signed char) -1LL));
        }
        for (int i_6 = 2; i_6 < 8; i_6 += 1) 
        {
            arr_22 [i_0] [i_0] = arr_17 [i_0];
            var_20 = ((/* implicit */int) var_10);
        }
        arr_23 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) -1552963784)))) <= (15957674608795890369ULL)))), ((-(6445461033723493136LL)))));
        var_21 = ((/* implicit */long long int) var_7);
    }
    for (long long int i_7 = 1; i_7 < 11; i_7 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_8 = 1; i_8 < 10; i_8 += 4) 
        {
            var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)23287))));
            /* LoopSeq 1 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)218)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (3882888771U))) << (((1552963784) - (1552963756)))));
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) 524272LL))) % (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (unsigned short)51934)))))));
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_7] [i_7] [i_8 + 1] [i_7 + 1] [i_7])) + (((/* implicit */int) var_10))));
            }
            arr_32 [i_7] [i_7] [i_7] = ((/* implicit */int) (~(412078514U)));
        }
        /* vectorizable */
        for (short i_10 = 1; i_10 < 10; i_10 += 3) /* same iter space */
        {
            var_26 *= ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1552963784))))) : (((/* implicit */int) var_6))));
            arr_36 [i_10] [i_7] [i_7] = ((/* implicit */signed char) arr_33 [i_7] [i_10 - 1] [i_7]);
        }
        for (short i_11 = 1; i_11 < 10; i_11 += 3) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned short) arr_29 [i_7 + 1]);
            var_28 = ((/* implicit */int) var_9);
            var_29 = ((/* implicit */unsigned short) 7570075853395455809ULL);
        }
        /* LoopSeq 1 */
        for (short i_12 = 2; i_12 < 11; i_12 += 4) 
        {
            arr_44 [i_7 + 1] [i_7] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
            /* LoopSeq 3 */
            for (short i_13 = 0; i_13 < 12; i_13 += 1) /* same iter space */
            {
                arr_47 [i_7] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_17 [i_7])))) <= (((/* implicit */int) ((_Bool) (signed char)-29))))) ? (arr_20 [i_7 - 1] [1]) : (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) != (10876668220314095830ULL)))) - (((/* implicit */int) arr_33 [i_7 - 1] [i_12 + 1] [i_7])))))));
                /* LoopSeq 3 */
                for (long long int i_14 = 3; i_14 < 9; i_14 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_15 = 1; i_15 < 10; i_15 += 4) 
                    {
                        arr_55 [i_7] [i_7] [i_7] [(unsigned short)5] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) (_Bool)1)), (arr_42 [i_7] [i_14] [i_7]))), (((/* implicit */unsigned int) var_10))))) ? (4095) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)161)))))))));
                        var_30 ^= ((/* implicit */unsigned char) (unsigned short)15930);
                        arr_56 [i_7] [i_7] [i_7] [i_7] [i_7 + 1] [i_7] [i_7] = ((/* implicit */unsigned int) (((~(245760LL))) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    for (short i_16 = 0; i_16 < 12; i_16 += 4) 
                    {
                        arr_59 [i_7] [i_7] [i_16] = ((((/* implicit */_Bool) ((unsigned short) -63752171))) ? (((arr_3 [i_16] [i_7] [i_13]) & (((/* implicit */unsigned long long int) ((-245761LL) / (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_7] [i_7 + 1] [i_7])))))))) : (min((((/* implicit */unsigned long long int) ((int) arr_31 [i_7] [i_7]))), (var_11))));
                        var_31 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) ((unsigned char) arr_27 [i_14]))) != (var_4))));
                        var_32 *= ((/* implicit */unsigned char) (!(var_9)));
                        var_33 ^= ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_2 [i_12])) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) arr_33 [i_7] [i_14] [i_16]))))))) ? (((/* implicit */unsigned long long int) (-(max((-245761LL), (((/* implicit */long long int) (short)3))))))) : (min((1ULL), (((/* implicit */unsigned long long int) ((long long int) var_7))))));
                    }
                    arr_60 [i_7] [i_12] [i_7] [1] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_1 [i_7]), (arr_1 [i_7])))) ? (((/* implicit */unsigned int) ((int) ((3882888750U) % (412078545U))))) : (412078545U)));
                }
                for (int i_17 = 3; i_17 < 9; i_17 += 2) 
                {
                    var_34 = 245760LL;
                    arr_63 [i_7] [i_7] [i_13] = ((((/* implicit */_Bool) ((((/* implicit */int) ((3882888750U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_7] [i_12] [i_17])))))) >> (((((((/* implicit */_Bool) (short)-13178)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10)))) + (124)))))) ? (((((/* implicit */_Bool) 4129278586539428645ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (arr_30 [i_7] [i_12 + 1] [i_12 + 1]))))) : (3882888750U))) : (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */int) var_14))))))));
                }
                for (unsigned int i_18 = 0; i_18 < 12; i_18 += 3) 
                {
                    var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -11LL)) ? (arr_42 [i_7 + 1] [i_12 + 1] [i_12 - 2]) : (arr_42 [i_7 - 1] [i_12 - 1] [i_12 - 2])))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) arr_42 [i_7 + 1] [i_12 - 2] [i_12 - 1])))))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_19 = 0; i_19 < 12; i_19 += 2) 
                    {
                        arr_69 [i_19] [i_18] [i_18] [10LL] [i_18] &= ((/* implicit */short) (~(arr_11 [6LL] [i_19] [i_12] [i_12 + 1] [i_12 - 2] [i_12 + 1] [i_12 - 2])));
                        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_7] [i_7 - 1] [i_7] [i_7] [i_7] [i_7])) % (((((/* implicit */_Bool) 3882888750U)) ? (((/* implicit */int) (signed char)-105)) : (var_5)))));
                        var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) ((signed char) arr_53 [i_19])))));
                        arr_70 [i_7] [i_12] [i_7] [i_18] [i_7] [i_19] [i_19] = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) arr_25 [i_7]))));
                    }
                    for (unsigned short i_20 = 1; i_20 < 8; i_20 += 3) 
                    {
                        arr_73 [i_7 + 1] [i_7] [i_13] [i_18] [i_20 - 1] = ((/* implicit */int) ((long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_62 [i_7] [i_7 + 1] [i_7 + 1] [11ULL])))));
                        arr_74 [(unsigned char)3] [(unsigned char)3] [i_7] [i_18] [i_20 + 1] [i_20] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((long long int) (_Bool)1)), (((/* implicit */long long int) var_12)))))));
                    }
                    var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) (!((_Bool)0))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_21 = 1; i_21 < 10; i_21 += 2) 
                {
                    for (unsigned long long int i_22 = 0; i_22 < 12; i_22 += 2) 
                    {
                        {
                            arr_80 [i_7] [i_12] = 3882888771U;
                            arr_81 [(_Bool)1] [i_7] [i_13] [i_21] [i_22] = ((/* implicit */unsigned int) var_9);
                            arr_82 [i_22] [i_12] [i_7] [i_12] [1U] = ((/* implicit */unsigned int) arr_57 [i_7] [i_7] [i_13] [i_13] [i_13]);
                            var_39 = ((/* implicit */_Bool) 1823756689005534517LL);
                            arr_83 [i_7] [i_12 - 1] [i_7] [i_21] [i_22] = (+(((/* implicit */int) ((((/* implicit */int) arr_58 [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 1] [i_7 + 1])) > (((/* implicit */int) var_10))))));
                        }
                    } 
                } 
            }
            for (short i_23 = 0; i_23 < 12; i_23 += 1) /* same iter space */
            {
                var_40 = ((/* implicit */unsigned long long int) ((min((max((((/* implicit */unsigned int) arr_71 [i_7] [i_7 + 1] [i_7] [(short)10] [i_7])), (2944659650U))), (((/* implicit */unsigned int) min((((/* implicit */short) (_Bool)1)), ((short)-16429)))))) > (max((((/* implicit */unsigned int) var_4)), (3882888771U)))));
                var_41 = ((/* implicit */long long int) var_13);
                arr_86 [i_7] [i_7] [i_23] [i_12] &= ((/* implicit */long long int) ((((/* implicit */int) (short)13719)) < (((/* implicit */int) (_Bool)1))));
                var_42 += ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 412078555U)))))) | (((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */unsigned long long int) arr_84 [i_7 - 1] [i_7 + 1])))));
                /* LoopNest 2 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        {
                            arr_93 [i_7] [i_12 + 1] [i_7] [i_23] [i_23] [i_25] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_9) ? (-1823756689005534517LL) : (((/* implicit */long long int) ((/* implicit */int) arr_40 [11U] [i_25]))))) - (((/* implicit */long long int) (((_Bool)1) ? (var_13) : (var_13))))))) ? ((~(arr_11 [i_12] [i_7] [i_12 - 1] [i_12 - 1] [i_12] [1U] [i_12]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_7])) ? (((/* implicit */int) arr_17 [i_7])) : (((((/* implicit */_Bool) -11LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)65535)))))))));
                            var_43 = ((/* implicit */long long int) var_7);
                        }
                    } 
                } 
            }
            for (short i_26 = 0; i_26 < 12; i_26 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_27 = 0; i_27 < 12; i_27 += 4) 
                {
                    for (long long int i_28 = 0; i_28 < 12; i_28 += 1) 
                    {
                        {
                            var_44 = ((/* implicit */int) ((unsigned int) ((short) var_10)));
                            arr_101 [i_7] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7] = ((/* implicit */int) arr_57 [i_7] [(unsigned short)4] [(unsigned short)4] [i_27] [(unsigned short)4]);
                            var_45 += ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)65535)), (-11LL)))) ? (((((/* implicit */_Bool) arr_79 [i_12] [i_12] [i_7] [i_12] [i_12 + 1])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((int) arr_94 [i_7 - 1] [2] [i_27])))));
                            var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_7] [(short)8])) & ((~(((/* implicit */int) (unsigned char)120)))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_29 = 0; i_29 < 12; i_29 += 3) 
                {
                    arr_104 [i_7] [i_12] [i_26] [i_29] = ((/* implicit */int) (_Bool)1);
                    var_47 -= ((/* implicit */_Bool) (signed char)30);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_30 = 0; i_30 < 12; i_30 += 2) 
                    {
                        arr_109 [i_7] = ((/* implicit */unsigned short) (+(((1823756689005534499LL) | (((/* implicit */long long int) arr_27 [i_7]))))));
                        arr_110 [i_7] [i_7] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)2047))))), (((var_7) & (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) / (((/* implicit */int) (signed char)2)))))))));
                    }
                }
                arr_111 [i_7] [i_7] [i_7] = (i_7 % 2 == zero) ? (((/* implicit */int) ((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_94 [i_7] [i_12] [i_7]))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_3)) : (var_11))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) << (((((/* implicit */int) arr_66 [i_7] [(signed char)3] [i_26] [i_26] [i_7])) - (49977))))))))) : (((/* implicit */int) ((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_94 [i_7] [i_12] [i_7]))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_3)) : (var_11))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) << (((((((/* implicit */int) arr_66 [i_7] [(signed char)3] [i_26] [i_26] [i_7])) - (49977))) + (19800)))))))));
            }
            var_48 = ((/* implicit */int) min((var_48), (((/* implicit */int) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((3882888771U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))) : (((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65530))) : (8873750830286520929ULL))))), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_25 [i_12])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23))))))))))));
        }
        var_49 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_102 [i_7] [i_7 + 1] [i_7 - 1] [i_7 + 1])) : (((/* implicit */int) arr_102 [i_7 + 1] [i_7] [i_7 - 1] [i_7 - 1]))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) var_6))))) >> (((arr_78 [10U] [i_7] [i_7] [i_7] [10U] [10U]) - (373307162)))))) : (9223372036854775807LL)));
    }
    var_50 = ((/* implicit */unsigned char) ((((((6531381539567750597LL) % (((/* implicit */long long int) ((/* implicit */int) var_0))))) == (min((-7377834264281342798LL), (((/* implicit */long long int) var_5)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) -949145670)))) : (((412078509U) << ((((+(((/* implicit */int) (signed char)60)))) - (30)))))));
    var_51 = min((min((((((/* implicit */_Bool) (unsigned short)23)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))), (((/* implicit */unsigned int) ((((((/* implicit */int) var_10)) + (2147483647))) << (((3882888771U) - (3882888771U)))))))), (((/* implicit */unsigned int) (-(var_5)))));
    var_52 = ((/* implicit */unsigned int) (unsigned short)1);
}
