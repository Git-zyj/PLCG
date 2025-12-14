/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27280
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
    var_10 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1108252746U)))))) >= (max((((/* implicit */unsigned int) (unsigned short)64477)), (var_4))))) ? (((((/* implicit */_Bool) var_4)) ? (1596730841U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_3))))))) : (((min((((/* implicit */unsigned int) var_8)), (var_0))) >> (((min((((/* implicit */int) var_1)), (var_6))) - (43216)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [(signed char)9] [i_2])) ? (arr_3 [i_0] [i_1 - 1] [i_2]) : (arr_3 [i_0] [i_1 + 2] [i_2])));
                arr_7 [i_2] [i_2] = ((/* implicit */unsigned short) ((long long int) arr_3 [i_1] [i_2] [i_1 - 2]));
                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_1 - 2] [i_2] [i_2])) ? ((+(arr_2 [i_0]))) : (arr_2 [i_1 + 2])));
            }
            /* LoopSeq 3 */
            for (long long int i_3 = 1; i_3 < 19; i_3 += 3) 
            {
                arr_11 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_3] [i_1 + 1] [i_1 + 1])) ? (((((/* implicit */_Bool) arr_10 [i_0])) ? (1596730841U) : (arr_1 [i_0]))) : (2698236459U)));
                var_13 = ((/* implicit */unsigned char) (+(arr_0 [i_0])));
            }
            for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                arr_15 [i_0] [i_0] [i_4] = ((((unsigned int) (short)-32760)) < (((/* implicit */unsigned int) ((/* implicit */int) var_5))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    for (unsigned short i_6 = 2; i_6 < 17; i_6 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_10 [i_0]))) << (((arr_0 [i_1 + 1]) - (1101304595U)))));
                            var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_6 + 1] [i_0])) & (((/* implicit */int) arr_13 [i_6 + 2] [i_6]))));
                            var_16 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)69)) ? (1596730841U) : (2698236464U)))));
                        }
                    } 
                } 
                var_17 += ((/* implicit */unsigned int) ((((arr_1 [i_4]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [2ULL] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) 1596730826U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4] [i_1] [i_0]))) : (1073741823LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1596730831U))))))));
            }
            for (int i_7 = 2; i_7 < 16; i_7 += 1) 
            {
                arr_24 [i_7] [i_7] [i_0] = ((/* implicit */long long int) 3276553556U);
                arr_25 [i_7] [i_7] [i_7] = ((/* implicit */short) (-(((unsigned long long int) arr_22 [i_0] [i_7] [i_1] [i_7 + 2]))));
                var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_7])))))) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (((((/* implicit */_Bool) (unsigned short)62930)) ? (((/* implicit */unsigned long long int) 2512097157U)) : (arr_4 [i_0] [i_1] [i_7]))));
                arr_26 [i_0] [14LL] [i_7 - 1] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_7 + 1] [i_7] [i_1] [i_1 + 2] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [(unsigned short)0] [i_1] [(unsigned char)13] [(unsigned char)13] [i_1] [i_0])))))) : (((((/* implicit */_Bool) arr_22 [i_0] [i_7] [i_1] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_7] [i_1] [i_0]))) : (4086936361U)))));
            }
            var_19 = ((/* implicit */unsigned int) ((unsigned long long int) arr_23 [i_1] [i_1] [i_1 - 2]));
            var_20 = ((/* implicit */unsigned int) ((signed char) arr_10 [i_1 + 2]));
        }
        for (unsigned int i_8 = 2; i_8 < 18; i_8 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_8] [i_0] [i_0] [13U] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) && ((!(((/* implicit */_Bool) (-2147483647 - 1))))))))));
            /* LoopSeq 1 */
            for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 3) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned long long int) (+(((long long int) arr_32 [i_8 + 2] [i_8] [i_8 - 1] [i_8] [i_8 + 2]))));
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((-(1946970149U))), (((/* implicit */unsigned int) arr_18 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)633)), ((unsigned short)19890))))) : ((+(((((/* implicit */_Bool) var_1)) ? (arr_20 [i_0] [i_0] [i_8] [i_8] [i_9] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6930)))))))));
                }
                for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_31 [i_0] [(signed char)5] [i_0] [(signed char)5] [i_9] [(unsigned short)6])), (arr_36 [i_9] [i_0] [i_9] [i_8] [i_8 + 1] [i_0])))) ? (arr_4 [i_9] [i_8 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 24ULL)))))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_23 [i_0] [i_8 + 2] [i_11])), (arr_6 [i_8 - 1] [i_9] [i_0]))))));
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)38947)) ? (((/* implicit */int) (short)-32766)) : (((/* implicit */int) (unsigned char)54))));
                    var_26 *= ((/* implicit */unsigned char) arr_8 [i_0] [i_8] [i_9] [i_11]);
                }
                for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 3) /* same iter space */
                {
                    arr_40 [i_0] [i_8] [i_9] [i_9] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_12] [i_9] [i_8])) ? (7ULL) : (((/* implicit */unsigned long long int) 2698236469U)))) % (((/* implicit */unsigned long long int) 2698236426U))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) min((((/* implicit */unsigned short) (short)-26712)), ((unsigned short)19345)))), (min((arr_6 [i_9] [i_9] [i_9]), (((/* implicit */int) var_7))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_8 + 1] [(short)6]))) & (min((var_2), (2698236425U)))))));
                    var_27 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((short) arr_28 [(_Bool)1] [i_8]))) < (min((arr_5 [i_0] [i_8] [i_9] [12ULL]), (((/* implicit */int) var_5)))))))) > (min((((long long int) arr_12 [i_12] [i_9] [i_0])), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */int) arr_30 [i_0] [i_8])))))))));
                    var_28 |= ((/* implicit */unsigned short) var_3);
                }
                for (unsigned short i_13 = 0; i_13 < 20; i_13 += 3) 
                {
                    var_29 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (short)-7953)), (18446744073709551615ULL)));
                    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551610ULL)) ? (((/* implicit */int) (unsigned char)152)) : (((/* implicit */int) (unsigned short)65535))))) && (((/* implicit */_Bool) ((unsigned int) arr_8 [i_0] [i_8] [i_8] [i_13])))))) - (((/* implicit */int) arr_12 [i_13] [i_8 + 2] [i_0])))))));
                }
                var_31 += ((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (512633834U) : (2698236433U)))), (arr_37 [i_9] [14ULL] [i_8] [i_8 + 1] [14ULL] [i_0]))));
                arr_43 [i_9] [i_8] [i_0] [i_9] = ((/* implicit */long long int) (-(((((((/* implicit */_Bool) 2037942266U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_9 [i_9] [i_8] [i_0]))) / (min((arr_37 [(short)16] [(short)16] [i_0] [i_0] [i_9] [i_9]), (((/* implicit */unsigned long long int) arr_31 [i_9] [i_9] [i_9] [i_8] [i_8] [i_0]))))))));
                var_32 *= ((/* implicit */unsigned long long int) (short)27551);
                /* LoopNest 2 */
                for (unsigned short i_14 = 2; i_14 < 18; i_14 += 4) 
                {
                    for (unsigned long long int i_15 = 4; i_15 < 19; i_15 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)52996))))) | ((-(((((/* implicit */_Bool) var_1)) ? (arr_37 [i_15 - 3] [i_9] [i_0] [i_0] [i_9] [i_0]) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))))))));
                            var_34 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_23 [(_Bool)1] [i_14 - 1] [i_15 - 2]))) ? (min((((arr_10 [i_8]) / (((/* implicit */unsigned int) (-2147483647 - 1))))), (((/* implicit */unsigned int) arr_6 [i_15] [i_15] [i_15 + 1])))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7944)))));
                            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) (+((~(((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_14] [i_8 - 2] [i_0]))) / (-4702556795488115603LL))))))))));
                        }
                    } 
                } 
            }
            var_36 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
            /* LoopSeq 3 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 2698236425U)) ? (2197495960U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-5)))))))) || (((/* implicit */_Bool) min((arr_31 [i_8 - 2] [i_8 - 2] [i_8 - 1] [i_8 - 2] [(unsigned char)8] [i_8 - 1]), (((/* implicit */long long int) (+(((/* implicit */int) var_3))))))))));
                var_38 -= ((/* implicit */unsigned short) (((((-(((/* implicit */int) var_1)))) + (2147483647))) << (((((((/* implicit */_Bool) (+(2147483637)))) ? ((~(18446744073709551594ULL))) : (((/* implicit */unsigned long long int) var_6)))) - (21ULL)))));
            }
            for (unsigned int i_17 = 3; i_17 < 16; i_17 += 3) /* same iter space */
            {
                var_39 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) (short)-24296)) || (((/* implicit */_Bool) -3466786302898518428LL)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) 2037942249U)))))))), (((/* implicit */unsigned int) ((short) ((var_4) / (arr_8 [i_0] [i_8] [i_17] [i_17])))))));
                arr_53 [i_0] [i_8 - 1] [i_8] [i_17] &= ((/* implicit */long long int) max((((/* implicit */unsigned int) arr_45 [(short)14] [i_17 + 3] [i_8 + 2] [(short)14])), (arr_10 [i_8 - 2])));
            }
            for (unsigned int i_18 = 3; i_18 < 16; i_18 += 3) /* same iter space */
            {
                var_40 = var_8;
                var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 33292288U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)253))) : (2037942261U)));
                var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) 16377272834046485186ULL)) && (((/* implicit */_Bool) arr_19 [i_0] [i_8] [i_8] [i_8 + 1] [i_18] [i_18])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_45 [(unsigned short)10] [i_8] [i_18 + 3] [i_18 - 1]), (((/* implicit */short) var_7)))))) : (min((7559161221415778013ULL), (((/* implicit */unsigned long long int) arr_33 [i_18] [i_18] [i_8 + 2] [i_0] [i_0])))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32767)) && (((/* implicit */_Bool) 2257025046U))));
            }
        }
        var_44 -= ((/* implicit */unsigned long long int) ((long long int) ((arr_27 [i_0] [i_0]) ? (((((/* implicit */_Bool) (unsigned short)12688)) ? (16933316648272666642ULL) : (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_4)))))));
        arr_57 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_42 [i_0] [i_0] [(short)6] [i_0] [i_0] [(short)6])) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
    for (unsigned short i_19 = 3; i_19 < 20; i_19 += 1) 
    {
        var_45 = ((/* implicit */short) ((unsigned int) ((unsigned char) (-(((/* implicit */int) var_7))))));
        var_46 += ((/* implicit */unsigned int) 8527259606905967440LL);
        var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) max(((unsigned char)84), (((/* implicit */unsigned char) (signed char)31)))))));
    }
    var_48 -= ((/* implicit */unsigned char) ((unsigned int) max((var_6), (((/* implicit */int) var_1)))));
}
