/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196681
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
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_17 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)38)) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)32760)) << (((/* implicit */int) (_Bool)1)))))));
            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) < (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (signed char)28))))))))));
            arr_6 [i_0] = ((/* implicit */unsigned long long int) ((1125762467889152ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14793)))));
        }
    }
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_13))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_3 [i_2])))) : ((~(1152921470247108608ULL))))))));
        arr_10 [i_2] = ((/* implicit */unsigned int) (((((~(var_12))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)14800)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32778))) : (8153342702444566182LL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)32757)) ? (((((/* implicit */_Bool) (unsigned short)32780)) ? (((/* implicit */int) (unsigned short)32777)) : (((/* implicit */int) (unsigned short)32767)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2]))) != (arr_2 [i_2] [i_2]))))))) : (var_12)));
    }
    /* LoopSeq 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_20 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14788)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_11 [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3]))) : (-7184326618725535735LL))), (((/* implicit */long long int) ((((/* implicit */long long int) 3496723347U)) == (((var_4) + (((/* implicit */long long int) ((/* implicit */int) (short)-29366)))))))));
        /* LoopSeq 2 */
        for (signed char i_4 = 2; i_4 < 14; i_4 += 1) /* same iter space */
        {
            var_21 |= ((/* implicit */unsigned long long int) arr_7 [(signed char)4]);
            var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)106)) / (((/* implicit */int) (short)-14777))))), (var_2)));
        }
        for (signed char i_5 = 2; i_5 < 14; i_5 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned int) var_1);
            var_24 = ((/* implicit */long long int) arr_8 [i_5]);
            /* LoopNest 2 */
            for (unsigned short i_6 = 1; i_6 < 13; i_6 += 4) 
            {
                for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    {
                        arr_26 [i_3] [10U] [10U] [i_7] [i_7] [i_5] = ((/* implicit */short) ((((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)40605))))) & (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (3496723360U))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3316489912U)) ? (((/* implicit */int) ((var_1) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3])))))) : (((/* implicit */int) var_7)))))));
                        var_25 = ((/* implicit */unsigned short) var_3);
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) arr_25 [i_7] [i_7] [i_7] [i_7]))));
                        var_27 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-26433))) % (-1LL)));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (int i_8 = 3; i_8 < 14; i_8 += 4) /* same iter space */
            {
                arr_30 [i_5] [i_5] = ((((/* implicit */_Bool) ((arr_28 [i_5 - 1] [i_5] [i_5]) ^ (((/* implicit */unsigned long long int) 953119128))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)32777)), (4003181418U)))) : (((unsigned long long int) var_11)));
                arr_31 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_29 [i_3] [i_5])) ? (var_11) : (var_3))) < (((/* implicit */long long int) ((/* implicit */int) var_9)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)14801)))))));
                var_28 &= ((/* implicit */long long int) ((arr_17 [i_5] [i_3]) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_3] [i_5 - 2] [i_5] [i_3])) ? (arr_28 [(unsigned short)8] [i_5] [(unsigned short)8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14801)))))) ? (((((/* implicit */_Bool) arr_29 [i_5] [2])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_3] [13] [i_8]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_15)), (var_7)))))))));
            }
            for (int i_9 = 3; i_9 < 14; i_9 += 4) /* same iter space */
            {
                arr_36 [11ULL] [i_5] [i_9] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_5 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_5]))) : (max((((/* implicit */unsigned long long int) -1673447489223111259LL)), (8ULL))))) * (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned short)4219)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)239)))))))));
                arr_37 [i_5] = ((((((/* implicit */_Bool) var_8)) ? (((long long int) var_15)) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((arr_8 [i_5]), (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_8 [i_5])) : (arr_29 [i_3] [i_5])))))))));
            }
            arr_38 [i_5] = var_15;
        }
        arr_39 [(short)8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) < (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) >= (var_2))))) != (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) var_10)) : (8928051115638807521ULL))))))));
        /* LoopNest 3 */
        for (short i_10 = 0; i_10 < 15; i_10 += 2) 
        {
            for (long long int i_11 = 2; i_11 < 12; i_11 += 4) 
            {
                for (unsigned int i_12 = 4; i_12 < 13; i_12 += 2) 
                {
                    {
                        arr_46 [i_11] [i_11] [(_Bool)1] [(_Bool)1] [i_3] [i_3] = ((/* implicit */int) var_3);
                        var_29 = (-(((/* implicit */int) (_Bool)1)));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_14 = 1; i_14 < 13; i_14 += 3) 
        {
            for (int i_15 = 4; i_15 < 13; i_15 += 2) 
            {
                {
                    var_30 += ((/* implicit */unsigned char) (short)21528);
                    var_31 = ((/* implicit */short) arr_52 [(short)11] [i_14 + 2] [11ULL]);
                }
            } 
        } 
        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_13] [i_13] [i_13] [i_13])) ? (((/* implicit */int) arr_19 [i_13] [i_13] [i_13] [i_13])) : (arr_16 [i_13] [i_13])));
        /* LoopSeq 1 */
        for (unsigned short i_16 = 2; i_16 < 14; i_16 += 4) 
        {
            var_33 = ((/* implicit */int) ((unsigned long long int) ((var_2) * (((/* implicit */unsigned long long int) -1LL)))));
            /* LoopNest 3 */
            for (long long int i_17 = 4; i_17 < 12; i_17 += 2) 
            {
                for (signed char i_18 = 2; i_18 < 12; i_18 += 1) 
                {
                    for (unsigned int i_19 = 1; i_19 < 13; i_19 += 2) 
                    {
                        {
                            arr_67 [i_18] [(unsigned char)3] [10ULL] [10ULL] [i_18] [3LL] |= arr_33 [i_16 - 2] [i_18 - 2] [i_19 - 1] [i_19];
                            arr_68 [i_13] [i_13] [(unsigned char)10] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14752)) ? (3039615353071594754LL) : (((/* implicit */long long int) 3564136931U))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) + (16105422619868001631ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_20 = 0; i_20 < 15; i_20 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_21 = 2; i_21 < 14; i_21 += 2) 
                {
                    var_34 = ((/* implicit */long long int) arr_3 [i_13]);
                    var_35 &= ((/* implicit */long long int) (((!(((/* implicit */_Bool) (short)19454)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (var_2))) : (((/* implicit */unsigned long long int) arr_51 [i_13] [i_16]))));
                    var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) var_3))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_22 = 2; i_22 < 13; i_22 += 4) 
                {
                    var_37 -= ((/* implicit */unsigned int) arr_47 [i_20]);
                    /* LoopSeq 2 */
                    for (short i_23 = 1; i_23 < 13; i_23 += 3) 
                    {
                        var_38 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [i_16 + 1] [i_22])) ? (arr_29 [i_13] [i_20]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-58)))));
                        var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((int) (unsigned short)23641))) * (arr_44 [i_22] [i_22 + 2] [i_22] [i_22 + 2]))))));
                        arr_79 [i_13] [i_16 - 2] [i_20] [i_22 + 2] [i_23] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_13] [i_13] [i_16])) * (((/* implicit */int) arr_20 [i_13] [9ULL] [i_13]))));
                    }
                    for (unsigned short i_24 = 1; i_24 < 13; i_24 += 4) 
                    {
                        arr_83 [i_16] [(unsigned short)5] [i_22 + 1] [(unsigned short)5] = (_Bool)1;
                        arr_84 [i_13] [i_16] [i_20] [i_13] [i_24 - 1] [i_13] [6ULL] = ((/* implicit */signed char) ((long long int) var_6));
                    }
                    var_40 = ((/* implicit */unsigned short) max((var_40), ((unsigned short)61306)));
                    var_41 += ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_24 [i_16 - 1] [i_22 + 1] [i_22] [i_22]))));
                }
                var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) var_2))));
                var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) (unsigned char)240))));
            }
            for (long long int i_25 = 0; i_25 < 15; i_25 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_26 = 1; i_26 < 14; i_26 += 3) 
                {
                    for (long long int i_27 = 0; i_27 < 15; i_27 += 2) 
                    {
                        {
                            var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_25] [i_25])) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) % (326565248114654825LL)))) : (((2236133532369864579ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
                            arr_94 [i_13] [i_25] [i_13] [i_26] [i_27] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (arr_21 [i_13] [i_16] [i_25] [i_27])))) | (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)45542)) : (((/* implicit */int) (short)-9722))))));
                            var_45 *= ((/* implicit */signed char) ((var_1) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_71 [5ULL] [i_16] [i_16 + 1] [i_26] [i_27] [i_27])))));
                            var_46 = ((/* implicit */unsigned long long int) min((var_46), (((/* implicit */unsigned long long int) ((var_10) << (((var_11) - (7237588823543314227LL))))))));
                            var_47 = ((/* implicit */short) var_14);
                        }
                    } 
                } 
                arr_95 [i_13] [i_13] [i_13] [13] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (arr_78 [i_13] [i_16] [i_16 - 2] [i_16 + 1] [i_16 - 1] [i_16] [i_16 - 1]) : (arr_78 [i_13] [i_13] [i_16 - 1] [i_16 - 1] [i_16] [i_16] [i_16 - 1])));
                var_48 += ((/* implicit */unsigned char) ((arr_2 [i_13] [i_16]) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 902552277)) && (((/* implicit */_Bool) 18446744073709551611ULL))))))));
                var_49 = ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) * (((/* implicit */int) (short)14802))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)4219)))) : (((((/* implicit */int) arr_71 [i_13] [3LL] [i_16] [i_16] [i_25] [i_25])) - (((/* implicit */int) var_14)))));
                arr_96 [i_13] [(signed char)6] [i_16] [i_25] = ((/* implicit */short) arr_50 [i_16]);
            }
            var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_13] [i_13] [i_13] [i_13])) ? (((/* implicit */int) (unsigned short)32756)) : (((/* implicit */int) ((var_2) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_81 [i_13] [i_13] [i_13] [i_16] [i_16]))))))));
        }
        var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (2896200068U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) (short)-22172)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_13] [i_13]))) >= (4611686001247518720ULL))))));
    }
}
