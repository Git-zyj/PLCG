/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50321
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
    var_16 = ((/* implicit */long long int) (short)-24);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_17 *= ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        var_18 = ((/* implicit */short) var_5);
        var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((short) (signed char)-115))) ^ (max((((/* implicit */int) (unsigned char)180)), (var_11)))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_20 ^= ((max((((/* implicit */unsigned long long int) var_11)), (arr_3 [i_0] [i_0] [i_0]))) | ((-(arr_3 [i_0] [i_1] [i_1]))));
            arr_4 [i_1] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */int) (signed char)8)) : ((~(((/* implicit */int) (_Bool)1)))))), (max((((var_3) / (((/* implicit */int) (short)865)))), (((arr_1 [i_1] [i_0]) ^ (((/* implicit */int) var_9))))))));
            arr_5 [i_1] [i_0] [i_0] = ((/* implicit */int) min(((short)-9341), ((short)1199)));
            var_21 = ((/* implicit */unsigned int) 2815653086299582101ULL);
            /* LoopNest 2 */
            for (short i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((short) ((min((var_11), (var_14))) & (((/* implicit */int) (signed char)-9)))));
                        arr_11 [i_0] [i_1] [i_2 + 2] [i_3] = ((/* implicit */unsigned char) (-((((~(((/* implicit */int) (short)-17642)))) | (((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) (short)-865))))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 1) 
        {
            arr_15 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_4 + 2] [i_4 + 2] [i_4 + 2])))))));
            var_22 += ((/* implicit */short) ((((/* implicit */unsigned int) arr_1 [i_0] [i_0])) ^ (((((/* implicit */_Bool) var_4)) ? (((unsigned int) (signed char)44)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) arr_9 [1U] [i_4 - 1]))))))))));
            arr_16 [i_0] [i_0] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) var_11))));
            /* LoopNest 2 */
            for (signed char i_5 = 3; i_5 < 23; i_5 += 1) 
            {
                for (signed char i_6 = 2; i_6 < 23; i_6 += 1) 
                {
                    {
                        var_23 += ((/* implicit */short) (~((+(7033923312708996362ULL)))));
                        var_24 -= ((/* implicit */int) ((unsigned short) (unsigned char)156));
                        /* LoopSeq 2 */
                        for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            arr_23 [i_4] [i_4 + 2] [i_4] [i_4 - 1] [19] [i_4 + 3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_14 [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_20 [i_0] [i_5] [i_6 + 1] [i_5])) + (1461)))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-21))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) (unsigned char)128)) : (var_14)))), (1132044539275202716LL)))));
                            var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((long long int) min((min((((/* implicit */int) arr_9 [i_4 - 2] [i_4 - 2])), (var_11))), (((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_0])))))));
                        }
                        for (signed char i_8 = 3; i_8 < 21; i_8 += 2) 
                        {
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_8] [i_8] = max((max((arr_26 [i_8 + 2] [i_8]), (arr_26 [i_8 + 2] [i_8 + 1]))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-69))))));
                            var_26 = ((/* implicit */_Bool) var_7);
                            var_27 = ((/* implicit */long long int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            arr_28 [i_0] [i_8] = ((/* implicit */unsigned char) (-(max((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-7724))))), (arr_6 [i_4] [i_4])))));
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (int i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_10 = 0; i_10 < 24; i_10 += 3) /* same iter space */
                {
                    var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(560502394))))));
                    /* LoopSeq 4 */
                    for (short i_11 = 0; i_11 < 24; i_11 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */short) max(((signed char)-122), (((/* implicit */signed char) ((((287948901175001088ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21029))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_35 [i_4] [i_10]) == (var_11))))))))));
                        arr_39 [i_0] [i_4] [i_4] [i_10] [i_9] [i_0] [i_10] = var_9;
                    }
                    for (short i_12 = 0; i_12 < 24; i_12 += 1) /* same iter space */
                    {
                        arr_42 [i_0] [i_4 + 2] [i_10] [i_10] [5ULL] = arr_29 [i_4 + 1] [7ULL] [i_4] [i_4 + 2];
                        var_30 += ((((((/* implicit */_Bool) (signed char)9)) ? (max((arr_6 [i_0] [i_0]), (((/* implicit */long long int) arr_40 [i_0] [i_4] [i_4])))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))) | (((((((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_0] [i_0])) ? (arr_6 [i_9] [i_9]) : (((/* implicit */long long int) var_11)))) + (9223372036854775807LL))) >> (((arr_19 [i_0] [i_0] [i_0] [i_9] [i_10] [i_10]) - (408601456))))));
                        arr_43 [i_0] [6ULL] [i_10] [i_0] [i_12] = ((/* implicit */signed char) ((((/* implicit */int) max((var_12), (((/* implicit */unsigned char) arr_40 [i_0] [i_4 + 1] [i_10]))))) > ((-(((/* implicit */int) arr_18 [i_4] [i_12]))))));
                        var_31 += ((/* implicit */signed char) ((var_6) ? ((-(((((/* implicit */int) (signed char)-53)) & (((/* implicit */int) (unsigned short)8176)))))) : (arr_35 [i_4 + 1] [i_0])));
                        arr_44 [i_0] [i_4] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) ((short) (signed char)-102));
                    }
                    for (unsigned char i_13 = 0; i_13 < 24; i_13 += 3) /* same iter space */
                    {
                        var_32 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_4))))))) ? ((~(((((/* implicit */_Bool) arr_41 [i_0] [i_0] [i_9] [i_10] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-25249)))))) : (((/* implicit */int) var_9))));
                        var_33 += ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (var_14)))) ? (((((/* implicit */int) (signed char)18)) / (((/* implicit */int) (signed char)11)))) : (((/* implicit */int) arr_7 [i_0])))) >> (((((((/* implicit */_Bool) arr_6 [i_4 - 2] [i_4 + 1])) ? (arr_6 [i_4 - 2] [i_4 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)7))))) + (2484286793875752177LL)))));
                        var_34 = ((((/* implicit */long long int) ((/* implicit */int) arr_34 [i_10] [i_10] [i_10] [i_10] [i_10]))) ^ (-8719264416725562279LL));
                        arr_47 [i_10] [i_9] [i_10] = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) max(((short)-32645), (((/* implicit */short) var_5))))), (((((/* implicit */_Bool) arr_37 [i_10])) ? (4308952215918521125ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_0] [i_0] [i_0] [i_10] [i_0]))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-54)))));
                        arr_48 [i_0] [i_0] [i_4] [i_0] [i_10] [i_13] |= ((/* implicit */long long int) max((((/* implicit */short) ((min((346600600778905654LL), (((/* implicit */long long int) arr_34 [(unsigned char)21] [4U] [i_4] [i_4 + 2] [4U])))) < (((/* implicit */long long int) ((((/* implicit */int) arr_32 [i_13] [i_10] [i_0] [i_4] [i_0] [i_0])) ^ (((/* implicit */int) var_6)))))))), (min((arr_45 [i_0] [i_4 - 2] [i_4] [i_9] [i_0] [i_13]), (arr_45 [i_0] [i_4 + 3] [i_9] [i_9] [i_0] [i_13])))));
                    }
                    /* vectorizable */
                    for (unsigned char i_14 = 0; i_14 < 24; i_14 += 3) /* same iter space */
                    {
                        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_29 [i_0] [i_9] [i_10] [i_14])) : (((/* implicit */int) (signed char)7))))) ? (((/* implicit */int) (unsigned char)157)) : (((int) arr_33 [i_9]))));
                        var_36 = ((/* implicit */short) (+(var_14)));
                        var_37 = ((/* implicit */short) 346600600778905674LL);
                    }
                }
                /* vectorizable */
                for (long long int i_15 = 0; i_15 < 24; i_15 += 3) /* same iter space */
                {
                    arr_54 [i_0] [i_4] [(signed char)13] [(signed char)13] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_18 [i_4 - 1] [i_15]))));
                    arr_55 [(unsigned short)8] [(unsigned short)8] [(short)9] [i_9] [(unsigned short)8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (-1646770583) : (arr_33 [i_9])))) && (((/* implicit */_Bool) var_7))));
                    var_38 = ((/* implicit */short) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) arr_49 [i_4] [i_4] [i_4 + 1] [i_4 + 3] [i_0]))));
                    var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)53)) || (arr_52 [i_4] [i_4] [i_4 + 1] [i_4])));
                }
                /* LoopSeq 1 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_40 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_4 + 1] [i_4 + 2])) ? (arr_26 [i_4 - 1] [i_4 + 2]) : (arr_26 [i_4 + 3] [i_4 - 2])))) ? (((arr_36 [i_4 - 2]) ? (((/* implicit */int) (unsigned char)180)) : (((/* implicit */int) (unsigned short)17489)))) : (((/* implicit */int) arr_53 [i_0] [i_4] [2] [i_16]))));
                    var_41 -= ((/* implicit */short) (!(((((13862899709978227060ULL) << (((((/* implicit */int) (signed char)64)) - (64))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 2015612509411425744LL))))))));
                    var_42 = ((/* implicit */signed char) 2774874080668579513LL);
                }
                var_43 = ((/* implicit */_Bool) max(((short)21029), (max((((/* implicit */short) (_Bool)1)), ((short)5829)))));
            }
        }
        arr_59 [i_0] [i_0] = ((/* implicit */signed char) max((arr_33 [i_0]), (((/* implicit */int) arr_29 [(short)4] [i_0] [i_0] [i_0]))));
    }
}
