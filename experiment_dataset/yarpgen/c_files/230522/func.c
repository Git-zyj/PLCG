/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230522
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (~((+(((/* implicit */int) var_1))))))) ? (((((/* implicit */_Bool) 2438845203U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 134152192)))) : ((-(5ULL))))) : (((/* implicit */unsigned long long int) 134152192))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((unsigned long long int) 2941799983U)) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)34))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) min((134152191), (((/* implicit */int) min((((/* implicit */short) var_1)), (var_4))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-4701)) || (((((/* implicit */_Bool) (signed char)4)) || (((/* implicit */_Bool) var_10))))));
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) var_4)))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-16))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)16)))) : (((int) 3539133669U))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    {
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_10))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-20914))))))))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967272U)) ? ((+(((/* implicit */int) (signed char)18)))) : (((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */int) var_9)))))))));
                    }
                } 
            } 
            arr_16 [i_1] [i_1] [i_1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)127))))) ? (((800397498) | (((/* implicit */int) ((short) (short)23943))))) : (((/* implicit */int) var_9))));
        }
        /* LoopSeq 2 */
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */unsigned int) -1443814354)) : (14U)));
            arr_19 [(signed char)2] [(unsigned char)8] [i_0] = ((/* implicit */signed char) (((~(((/* implicit */int) (unsigned short)62331)))) * (((/* implicit */int) ((((((/* implicit */int) (signed char)56)) ^ (((/* implicit */int) (signed char)32)))) == (((/* implicit */int) (short)-20216)))))));
            var_19 = ((/* implicit */short) min((var_19), (((short) (signed char)97))));
        }
        for (int i_6 = 3; i_6 < 11; i_6 += 3) 
        {
            arr_22 [i_0] [1] [(unsigned short)9] = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)24)))) & ((~(((/* implicit */int) arr_12 [i_0] [i_6 + 1] [i_0] [i_0]))))));
            /* LoopNest 2 */
            for (short i_7 = 1; i_7 < 10; i_7 += 4) 
            {
                for (signed char i_8 = 3; i_8 < 10; i_8 += 3) 
                {
                    {
                        var_20 += ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_5)), (((((/* implicit */int) arr_0 [(unsigned short)0])) & (((/* implicit */int) (unsigned short)0))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)47771)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_21 [(unsigned char)10]))))) : (18446744073709551615ULL)));
                        var_21 = (unsigned short)62331;
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (signed char i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned short) -134152170);
                var_23 = ((signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)62314))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)13891)))) : (3306503487U)));
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 11; i_10 += 1) 
                {
                    for (short i_11 = 0; i_11 < 12; i_11 += 2) 
                    {
                        {
                            var_24 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))) : (var_0)))) : (((((/* implicit */_Bool) 14680064U)) ? (((/* implicit */unsigned long long int) 800397498)) : (18446744073709551614ULL)))))) ? (((/* implicit */unsigned long long int) (-(53174722U)))) : (var_12));
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) 14ULL))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 12; i_12 += 2) 
                {
                    for (signed char i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (((unsigned int) 3223922219U)))))));
                            var_27 = ((int) ((unsigned long long int) (+(((/* implicit */int) (unsigned short)6115)))));
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) (short)-15105)), (4294967290U))))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (signed char i_14 = 0; i_14 < 12; i_14 += 3) /* same iter space */
            {
                arr_43 [i_0] = ((/* implicit */short) ((var_6) > (((/* implicit */int) var_7))));
                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)77)) << (((((/* implicit */int) var_1)) - (186)))));
                var_30 += ((/* implicit */unsigned short) ((var_6) * (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) 134152192)))))));
                var_31 = ((/* implicit */short) (-(arr_28 [i_0] [i_6] [i_6 - 2] [i_6] [i_14])));
            }
            var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((-(((/* implicit */int) (signed char)19)))), ((~(134152191)))))))))));
            arr_44 [i_0] = ((/* implicit */unsigned char) ((signed char) max((((/* implicit */unsigned long long int) arr_21 [i_0])), (var_12))));
        }
        var_33 ^= ((/* implicit */unsigned int) ((short) 0ULL));
    }
    for (signed char i_15 = 0; i_15 < 13; i_15 += 1) /* same iter space */
    {
        arr_47 [i_15] [i_15] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((short) (short)11220))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 7ULL)))) : (4ULL)))));
        /* LoopSeq 1 */
        for (short i_16 = 0; i_16 < 13; i_16 += 2) 
        {
            var_34 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((signed char) var_7))) & (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)(-32767 - 1))))))) & (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)158)))) | (((/* implicit */int) (signed char)0))))));
            arr_51 [i_15] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (signed char)62))))));
        }
        /* LoopNest 2 */
        for (int i_17 = 1; i_17 < 12; i_17 += 4) 
        {
            for (unsigned short i_18 = 1; i_18 < 12; i_18 += 1) 
            {
                {
                    arr_58 [i_15] = ((/* implicit */short) ((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)64))))))) < (((unsigned long long int) ((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))))));
                    arr_59 [i_15] [i_17] [i_17] [i_15] = (+(min((var_6), (((/* implicit */int) var_5)))));
                    arr_60 [i_15] [i_17] [i_17] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)32))));
                    /* LoopSeq 1 */
                    for (signed char i_19 = 1; i_19 < 12; i_19 += 4) 
                    {
                        arr_63 [i_15] [i_17 + 1] [i_15] = ((/* implicit */short) ((unsigned char) max((((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)0)))), (((((/* implicit */int) var_2)) + (((/* implicit */int) (unsigned char)24)))))));
                        var_35 = ((/* implicit */signed char) var_3);
                        arr_64 [i_19] [i_17 + 1] [i_19] [i_15] [i_19] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) var_11)) >> (((((/* implicit */int) var_1)) - (188))))));
                    }
                    arr_65 [i_15] [1U] [i_18] [i_15] = ((/* implicit */short) ((signed char) min((1083970303U), (((unsigned int) (unsigned char)223)))));
                }
            } 
        } 
    }
    for (signed char i_20 = 0; i_20 < 13; i_20 += 1) /* same iter space */
    {
        arr_68 [i_20] = ((/* implicit */int) var_5);
        /* LoopNest 2 */
        for (short i_21 = 3; i_21 < 11; i_21 += 4) 
        {
            for (int i_22 = 1; i_22 < 9; i_22 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_23 = 0; i_23 < 13; i_23 += 4) 
                    {
                        var_36 = ((signed char) 0ULL);
                        var_37 -= ((/* implicit */unsigned int) (unsigned char)122);
                    }
                    for (unsigned int i_24 = 0; i_24 < 13; i_24 += 3) 
                    {
                        var_38 = ((/* implicit */unsigned short) ((short) (signed char)-93));
                        var_39 = ((/* implicit */unsigned long long int) ((short) (((~(18446744073709551615ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_49 [i_22] [2U])) ? (((/* implicit */int) (unsigned char)122)) : (((/* implicit */int) var_11))))))));
                        var_40 = ((/* implicit */int) 2626088321U);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_25 = 4; i_25 < 9; i_25 += 2) 
                    {
                        for (unsigned int i_26 = 0; i_26 < 13; i_26 += 4) 
                        {
                            {
                                var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -134152192)) ? (8388607) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)32)) > (((/* implicit */int) (short)(-32767 - 1)))))))))));
                                arr_82 [i_20] [i_21] [i_22 + 2] [i_20] [i_20] = min((((/* implicit */unsigned int) ((((/* implicit */int) ((short) 14605568098225215846ULL))) >= (((/* implicit */int) ((19U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)14667))))))))), (max((((/* implicit */unsigned int) (short)-14667)), (((unsigned int) (unsigned char)255)))));
                                arr_83 [i_20] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned long long int) arr_70 [i_20] [i_22 - 1] [i_22 - 1]))))) ? (((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) 1838205571U)) && (((/* implicit */_Bool) var_7))))), (var_7)))) : (((/* implicit */int) (signed char)34))));
                                var_42 = (i_20 % 2 == 0) ? (((/* implicit */int) ((((unsigned long long int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) (signed char)14))))) << ((((~(((int) arr_66 [i_20] [i_20])))) + (14)))))) : (((/* implicit */int) ((((unsigned long long int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) (signed char)14))))) << ((((((~(((int) arr_66 [i_20] [i_20])))) + (14))) - (81))))));
                                var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) (+(var_0))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_27 = 2; i_27 < 12; i_27 += 3) 
                    {
                        for (unsigned short i_28 = 0; i_28 < 13; i_28 += 2) 
                        {
                            {
                                arr_89 [i_20] [i_21] [i_22] [(short)9] [i_21] = ((/* implicit */unsigned int) var_6);
                                arr_90 [i_20] [i_21] [i_21] [i_21] [i_21] [i_21 + 2] [i_21 - 3] = ((/* implicit */short) (+(((unsigned int) var_7))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_29 = 0; i_29 < 13; i_29 += 3) 
                    {
                        for (unsigned int i_30 = 2; i_30 < 10; i_30 += 4) 
                        {
                            {
                                var_44 = ((/* implicit */int) min((var_44), (((/* implicit */int) (!(((((464543277U) * (0U))) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)32))))))))));
                                var_45 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) var_3)), (((((/* implicit */int) var_4)) << (((((/* implicit */int) var_5)) - (230))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_31 = 0; i_31 < 13; i_31 += 1) 
                    {
                        for (unsigned short i_32 = 1; i_32 < 12; i_32 += 3) 
                        {
                            {
                                arr_100 [i_20] [i_20] [i_20] [i_22] [i_31] [i_31] [i_32 - 1] = ((/* implicit */unsigned long long int) ((int) var_10));
                                var_46 = ((/* implicit */unsigned int) (((-(((/* implicit */int) var_2)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) 17ULL)))))));
                                var_47 = ((/* implicit */unsigned long long int) ((unsigned short) ((((((/* implicit */int) arr_78 [i_20] [i_21 - 2])) + (2147483647))) >> (((1048575) - (1048567))))));
                                var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) (!((!(((/* implicit */_Bool) ((int) var_9))))))))));
                                arr_101 [i_20] [i_31] = ((/* implicit */int) 4294967295U);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_102 [i_20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)122)))) + (2147483647))) >> (((((/* implicit */int) var_4)) - (9309)))))) ? (1830880114) : (max((var_6), (((/* implicit */int) (short)960))))));
    }
}
