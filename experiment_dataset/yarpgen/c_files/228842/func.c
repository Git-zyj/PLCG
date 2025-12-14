/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228842
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_4)) : (((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */long long int) 2147483647))))))) ? (var_5) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 429203296)) ? (((/* implicit */unsigned int) 2147483647)) : (0U)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)64198)) : (((/* implicit */int) var_16)))) : ((+(-893776582)))))));
    var_18 += ((/* implicit */_Bool) var_0);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (signed char i_3 = 1; i_3 < 17; i_3 += 3) 
                {
                    {
                        arr_12 [(signed char)15] [i_1] [i_2] [i_3] [5] = ((/* implicit */short) ((unsigned char) min((((/* implicit */unsigned short) (signed char)-4)), ((unsigned short)61136))));
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)20879)) ? (((/* implicit */int) arr_11 [i_3 - 1] [(signed char)16] [i_3 - 1] [i_3 - 1])) : (((((/* implicit */_Bool) 2147483631)) ? (((/* implicit */int) arr_7 [i_0 - 1] [i_1 - 1])) : (((/* implicit */int) arr_7 [i_0 + 1] [i_1 + 1])))))))));
                    }
                } 
            } 
        } 
        var_20 = min((((long long int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (((/* implicit */long long int) ((unsigned short) arr_4 [i_0 - 1] [i_0 - 1]))));
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            /* LoopSeq 3 */
            for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                arr_17 [i_5] [i_5] [3ULL] = ((/* implicit */signed char) max((-6484808865373632324LL), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) -2147483631)))))))));
                var_21 = ((/* implicit */signed char) (~(min((((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_4] [i_5])) < (((/* implicit */int) (signed char)(-127 - 1)))))), (((0U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [12U] [i_5])))))))));
            }
            for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    for (unsigned char i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) (unsigned short)65535))) * (((/* implicit */int) ((unsigned char) arr_11 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1])))));
                            arr_27 [i_6] = ((/* implicit */_Bool) min((((((/* implicit */int) (signed char)68)) << (((((/* implicit */int) arr_24 [17] [i_0] [i_0 + 1] [i_0] [i_7])) + (106))))), (((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((-7718514881381752206LL) + (7718514881381752224LL)))))));
                            var_23 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)203))));
                            var_24 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_4] [i_4] [i_7] [i_4])) ? (min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_5 [4LL] [(short)0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_25 [i_0 + 1] [i_0 + 1] [i_0 - 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_6] [i_0] [i_8])) != (((/* implicit */int) var_9))))))))))));
                        }
                    } 
                } 
                arr_28 [i_0] [i_4] [i_6] [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) ((2598686411U) < (553409843U))))));
                /* LoopSeq 4 */
                for (long long int i_9 = 0; i_9 < 18; i_9 += 3) 
                {
                    var_25 -= ((/* implicit */unsigned int) (signed char)95);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_10 = 3; i_10 < 15; i_10 += 2) 
                    {
                        arr_33 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */signed char) (-2147483647 - 1));
                        arr_34 [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_10 + 2] [i_10 - 3])) >> (((3799419026U) - (3799419020U)))));
                        var_26 *= ((/* implicit */unsigned int) 3644681236150945905ULL);
                        var_27 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_10] [i_0] [i_0]))) * (arr_5 [i_10 - 3] [i_10 + 3])));
                        var_28 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_9] [i_6] [i_6] [i_10 + 1] [i_6] [i_0 - 1] [i_10])) / (((/* implicit */int) arr_18 [i_0 + 2] [i_4]))));
                    }
                }
                for (long long int i_11 = 0; i_11 < 18; i_11 += 3) /* same iter space */
                {
                    arr_37 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */short) (-(((/* implicit */int) ((short) ((((/* implicit */int) arr_22 [i_11] [i_4] [i_11] [i_11])) <= (((/* implicit */int) (short)-31729))))))));
                    var_29 = var_4;
                }
                for (long long int i_12 = 0; i_12 < 18; i_12 += 3) /* same iter space */
                {
                    var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) max((((((/* implicit */_Bool) arr_23 [i_0] [15LL] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */int) (unsigned char)150)) : (((/* implicit */int) (signed char)127))))) : (arr_30 [(unsigned char)0] [i_6] [i_6] [i_0 + 2]))), (((/* implicit */long long int) arr_18 [i_0 + 2] [(unsigned char)4])))))));
                    var_31 = ((/* implicit */_Bool) var_11);
                    arr_41 [i_0 + 2] [i_0] [i_0] [i_0] = ((int) ((((/* implicit */_Bool) min((arr_16 [i_0] [(unsigned char)13] [i_6]), ((unsigned char)135)))) ? (((/* implicit */int) ((arr_19 [i_0] [i_12] [(signed char)14]) < (((/* implicit */long long int) ((/* implicit */int) var_9)))))) : (((((/* implicit */_Bool) (signed char)24)) ? (var_6) : (2147483647)))));
                }
                for (signed char i_13 = 4; i_13 < 16; i_13 += 4) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        arr_47 [17ULL] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) (signed char)-48);
                        var_32 += ((/* implicit */long long int) (((+(((/* implicit */int) var_12)))) ^ (-2147483647)));
                        var_33 *= (-(((/* implicit */int) arr_0 [i_0])));
                    }
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */signed char) ((unsigned char) ((9151314442816847872LL) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-274)) < (((/* implicit */int) (_Bool)1)))))))));
                        arr_50 [i_15] [i_0] = ((/* implicit */unsigned short) (((_Bool)1) ? (((unsigned long long int) arr_38 [i_15] [i_15 - 1] [i_15 - 1] [(short)3])) : (((/* implicit */unsigned long long int) (((+(6U))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_29 [17U] [(signed char)2] [i_6] [6LL] [i_6] [i_15])) || (((/* implicit */_Bool) arr_43 [i_15 - 1] [i_0])))))))))));
                        var_35 = ((/* implicit */unsigned char) min((((int) (signed char)(-127 - 1))), (((/* implicit */int) ((short) arr_45 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_0 + 2])))));
                    }
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) /* same iter space */
                    {
                        var_36 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_18 [i_4] [i_4])))))) + (2147483647))) << (((/* implicit */int) ((((arr_29 [i_0] [i_0] [i_6] [(signed char)16] [i_16] [(unsigned char)2]) | (((/* implicit */int) (_Bool)1)))) != (arr_29 [i_0] [i_0] [i_0] [i_0 + 1] [i_4] [12U]))))));
                        var_37 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_13 - 2] [i_13 - 3] [i_13 + 1] [i_13 - 3])))))));
                    }
                    /* vectorizable */
                    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) /* same iter space */
                    {
                        arr_55 [(short)1] [i_4] [i_6] [i_13] [i_17] [i_4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_42 [i_17 - 1] [i_13] [i_0 + 2])) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)16236)))))));
                        var_38 = ((/* implicit */short) arr_18 [(signed char)3] [i_4]);
                        var_39 += ((/* implicit */unsigned int) (-(((/* implicit */int) arr_45 [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17 - 1]))));
                    }
                    var_40 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_11 [i_13] [i_6] [i_0 + 2] [i_0 + 2])), (arr_48 [(signed char)11] [i_0 + 2] [(signed char)11] [i_0] [i_0] [i_0 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_13] [i_13 - 1] [11LL] [i_13] [(unsigned short)6] [11LL])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4])) ? (arr_40 [i_6]) : (arr_40 [i_0]))))))) : (((/* implicit */int) var_9))));
                    arr_56 [i_0] [i_0] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_53 [i_6] [i_0 - 1])) : (((/* implicit */int) arr_53 [i_0] [10ULL])))));
                }
                var_41 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_51 [i_0] [i_0] [(_Bool)1] [i_6] [i_6])), (1386006753U)))) ? (((/* implicit */int) arr_45 [i_0 + 2] [i_0 + 2] [i_0] [i_0] [10])) : (((((/* implicit */_Bool) (unsigned char)3)) ? (263805564) : (((/* implicit */int) (short)(-32767 - 1)))))))) ? (((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */long long int) arr_43 [i_0 + 1] [i_0])), (-3770397825860279434LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_54 [i_0] [i_4] [i_4] [(signed char)9] [i_6])) - (((/* implicit */int) arr_52 [(unsigned short)1] [11LL] [(unsigned short)17] [(short)8] [i_6] [i_6]))))))) : ((+(8055627834325076248LL)))));
                var_42 += ((/* implicit */long long int) ((min((arr_36 [i_0 + 2] [i_0 - 1] [i_0 + 2] [i_0 + 1]), (arr_36 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 + 2]))) >= (((arr_36 [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_0 + 2]) % (arr_36 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 2])))));
            }
            for (unsigned int i_18 = 0; i_18 < 18; i_18 += 3) 
            {
                arr_59 [i_0] [i_18] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-8)) & ((-2147483647 - 1))));
                var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) arr_35 [i_18] [i_18] [i_4] [i_0]))));
            }
            /* LoopSeq 4 */
            for (int i_19 = 2; i_19 < 16; i_19 += 2) 
            {
                arr_63 [i_0] [i_0 + 2] [(unsigned short)8] [i_0 - 1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-32)) + (2147483647))) << (((9250759277473252850ULL) - (9250759277473252850ULL)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-32758))) != (-3212571592290245873LL))))) : (((((/* implicit */_Bool) arr_9 [i_19 + 1] [i_19 + 1] [(unsigned short)15] [i_0] [i_0 + 2] [i_0])) ? (((((/* implicit */long long int) 3799419026U)) + (arr_30 [i_0] [i_19] [i_19] [i_0]))) : (((/* implicit */long long int) (-(arr_6 [i_4] [i_19] [i_4] [i_0 - 1]))))))));
                var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_0 + 2] [i_19] [i_0]))) : (var_3))))))));
            }
            for (long long int i_20 = 1; i_20 < 15; i_20 += 2) 
            {
                var_45 = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) | (((/* implicit */int) arr_14 [i_0 - 1] [i_20 + 2] [i_20 + 1]))));
                var_46 *= ((((/* implicit */int) ((arr_13 [i_20 + 2]) >= (arr_13 [i_20 - 1])))) % (((((/* implicit */int) (short)-32758)) * (((/* implicit */int) ((short) arr_24 [11LL] [i_20] [i_4] [i_4] [i_0]))))));
                var_47 += ((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) (short)-1))))) ? (((/* implicit */int) arr_49 [i_20] [i_20] [i_20] [i_20 + 1] [i_20] [i_0 + 2] [i_0])) : ((+(((/* implicit */int) arr_23 [i_20] [16LL] [3ULL])))))) < (((/* implicit */int) arr_64 [i_4] [(short)6] [16ULL] [i_4]))));
                var_48 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)23))))) ? (((((/* implicit */int) (short)62)) * (((/* implicit */int) var_7)))) : (((/* implicit */int) var_15))))) ? (min((((((/* implicit */_Bool) var_13)) ? (2181431069507584LL) : (((/* implicit */long long int) 400119367U)))), (((/* implicit */long long int) ((((/* implicit */int) arr_39 [i_0] [i_0] [(unsigned short)2] [i_0] [i_0] [i_20])) < (((/* implicit */int) (signed char)69))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)927)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_65 [i_20] [i_20])))) ? (((/* implicit */int) ((unsigned char) 14643482224840592618ULL))) : (-1967763214))))));
            }
            for (signed char i_21 = 0; i_21 < 18; i_21 += 1) 
            {
                arr_69 [(unsigned short)1] [(unsigned short)1] [(_Bool)1] = ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)8)), (arr_9 [i_4] [i_4] [i_4] [i_0 + 2] [i_0] [i_4])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 1] [i_0] [i_0])) ? (((/* implicit */int) arr_39 [i_0 + 2] [i_0] [i_0] [i_0 + 2] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_39 [i_0 + 2] [i_0] [(short)13] [i_0 + 1] [i_0] [i_0]))))) : ((-(((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) + (arr_13 [i_21]))))));
                var_49 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [10] [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((((var_13) ^ (((/* implicit */int) arr_64 [i_4] [i_4] [i_4] [i_21])))) - (var_6)))) : (var_4)));
            }
            for (int i_22 = 1; i_22 < 16; i_22 += 4) 
            {
                var_50 = ((/* implicit */unsigned long long int) min((var_50), (((/* implicit */unsigned long long int) arr_60 [i_22] [(signed char)15] [i_4] [i_0]))));
                arr_73 [i_22] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)172)) ? (var_2) : (arr_40 [i_0]))))))) ^ (((/* implicit */int) arr_24 [12] [i_0] [i_0] [i_22] [i_22]))));
            }
            var_51 = ((/* implicit */short) min((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)23))))), ((~(arr_43 [i_0 + 2] [i_0 + 1])))));
        }
    }
}
