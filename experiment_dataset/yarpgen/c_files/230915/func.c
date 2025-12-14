/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230915
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
    var_14 = ((/* implicit */unsigned int) max((max((((unsigned long long int) var_3)), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) min((((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))) : (arr_6 [i_1] [i_2]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_0])) ? (((/* implicit */int) (unsigned short)38190)) : (((/* implicit */int) (unsigned short)27371))))) ? (max((arr_4 [i_0] [(unsigned char)19] [(short)14]), (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) min((arr_3 [i_0] [i_0]), (((/* implicit */short) (unsigned char)150)))))))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (unsigned char)251)), (min((((/* implicit */long long int) (unsigned char)193)), (-8479730900603148081LL)))));
                        arr_9 [i_3] [12U] [i_2] [i_3] = ((/* implicit */signed char) arr_3 [i_0] [19U]);
                        var_18 = ((/* implicit */signed char) max(((unsigned char)78), ((unsigned char)254)));
                    }
                    for (unsigned short i_4 = 4; i_4 < 24; i_4 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_0 [i_0])), ((unsigned short)254)))) ? (min((6ULL), (((/* implicit */unsigned long long int) arr_2 [i_0])))) : (((((/* implicit */_Bool) arr_3 [i_2] [i_1])) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1])) : (18446744073709551615ULL))))));
                        var_20 = ((/* implicit */int) max((var_20), (((int) (unsigned char)23))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            for (int i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                {
                    var_21 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_5] [23] [i_6])) ? (arr_5 [i_0] [(unsigned char)2] [i_0] [i_0]) : (arr_5 [i_0] [i_5] [i_5] [i_5]))));
                    var_22 ^= min((max((((/* implicit */unsigned int) arr_14 [i_0] [i_5] [i_6])), (arr_8 [i_0] [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_11 [i_6] [i_0])), (arr_12 [i_0] [i_5] [i_0])))) ? (((unsigned int) 1793739868)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2096896LL)) ? (((/* implicit */int) (unsigned char)78)) : (-137976268)))))));
                    var_23 = ((/* implicit */long long int) min((var_23), (((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_7 [i_0] [i_5] [i_6] [5U] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_5] [i_6]))))))) ? (((((/* implicit */_Bool) ((signed char) arr_14 [i_0] [i_0] [i_0]))) ? (((/* implicit */long long int) min((347748929U), (((/* implicit */unsigned int) arr_11 [i_5] [i_5]))))) : (-2096925LL))) : (((/* implicit */long long int) max((arr_1 [i_6]), (((/* implicit */unsigned int) arr_4 [i_0] [i_5] [i_6])))))))));
                    var_24 -= ((/* implicit */short) ((unsigned short) ((signed char) arr_11 [i_0] [i_0])));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_7 = 2; i_7 < 23; i_7 += 3) /* same iter space */
        {
            arr_20 [i_0] [i_0] = ((/* implicit */unsigned int) ((short) max((((/* implicit */int) arr_10 [i_7 + 1] [i_7] [i_7 - 2])), (((int) arr_18 [i_0] [i_0])))));
            var_25 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_7 - 1])), (max((((/* implicit */unsigned long long int) arr_10 [i_0] [i_7] [i_0])), (arr_7 [i_0] [i_0] [i_0] [i_7] [i_7])))));
            arr_21 [i_7 + 2] [i_0] [i_0] = ((/* implicit */long long int) max((arr_8 [i_0] [24U] [i_0] [i_0]), (min((arr_8 [i_0] [i_0] [i_0] [i_0]), (arr_8 [i_0] [i_0] [i_7] [i_0])))));
        }
        /* vectorizable */
        for (signed char i_8 = 2; i_8 < 23; i_8 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */long long int) (unsigned char)56);
            var_27 += ((/* implicit */int) (unsigned char)0);
            var_28 -= ((/* implicit */short) ((((/* implicit */_Bool) 3697515319U)) ? (arr_8 [i_8 - 2] [i_8] [i_8 - 2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_16 [i_8] [22U]))))));
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) 18359327618247217183ULL))) ? (((((/* implicit */_Bool) arr_18 [i_0] [i_8])) ? (727574869092572535LL) : (((/* implicit */long long int) arr_23 [i_8])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_8])) ? (arr_1 [i_8]) : (arr_23 [i_8]))))));
        }
    }
    for (unsigned char i_9 = 0; i_9 < 25; i_9 += 4) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned short) arr_25 [i_9]);
        /* LoopSeq 1 */
        for (unsigned int i_10 = 3; i_10 < 24; i_10 += 1) 
        {
            var_31 = ((((/* implicit */_Bool) 1805181612U)) ? (arr_28 [i_10] [(unsigned char)0] [i_10 - 1]) : (((((/* implicit */_Bool) arr_15 [i_9] [i_10 - 3] [i_10 - 2] [i_10 - 1])) ? (2621596734U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)180))))));
            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_4 [i_10] [(unsigned char)0] [i_9]), (946489812)))) ? (arr_28 [i_10 + 1] [i_10 + 1] [i_10 + 1]) : (((((/* implicit */_Bool) (unsigned char)180)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_9] [i_9] [i_9]))) : (arr_15 [i_9] [i_10] [i_10 - 3] [(unsigned char)14])))))) ? (((/* implicit */int) (unsigned short)27346)) : (((/* implicit */int) (signed char)-88))));
        }
        /* LoopSeq 4 */
        for (unsigned int i_11 = 0; i_11 < 25; i_11 += 3) /* same iter space */
        {
            var_33 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_9])) ? (arr_5 [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [1LL] [i_9] [i_11] [(unsigned char)18])) ? (((/* implicit */int) arr_26 [i_11])) : (((/* implicit */int) arr_30 [i_9]))))) : (((((/* implicit */_Bool) arr_30 [i_9])) ? (arr_5 [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_9]))))));
            arr_31 [i_9] [i_11] [i_11] = ((/* implicit */unsigned char) ((unsigned int) arr_29 [i_9] [i_11]));
            arr_32 [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_19 [i_9] [i_11] [i_9]), (((/* implicit */unsigned int) arr_2 [i_9]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */unsigned int) 1501720733)) : (412325078U)))) : (((long long int) arr_2 [i_9]))));
        }
        /* vectorizable */
        for (unsigned int i_12 = 0; i_12 < 25; i_12 += 3) /* same iter space */
        {
            arr_35 [i_12] = ((/* implicit */signed char) arr_27 [i_9] [i_12]);
            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_9] [17LL])) ? (arr_7 [i_9] [i_9] [14U] [(unsigned short)21] [14U]) : (((/* implicit */unsigned long long int) ((unsigned int) arr_7 [i_9] [i_12] [i_12] [i_12] [i_12])))));
        }
        for (unsigned int i_13 = 0; i_13 < 25; i_13 += 3) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned int i_14 = 2; i_14 < 24; i_14 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned int i_15 = 0; i_15 < 25; i_15 += 4) /* same iter space */
                {
                    var_35 = ((/* implicit */unsigned short) arr_37 [6U] [(unsigned char)15]);
                    arr_44 [i_15] [i_13] [10U] [i_13] [i_9] = ((/* implicit */long long int) ((unsigned int) arr_22 [i_13] [i_13]));
                    var_36 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_23 [i_13]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1769767611)) ? (((/* implicit */int) arr_36 [i_13])) : (((/* implicit */int) arr_16 [i_9] [i_9]))))))));
                    var_37 = ((/* implicit */unsigned long long int) (unsigned char)0);
                }
                /* vectorizable */
                for (unsigned int i_16 = 0; i_16 < 25; i_16 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (int i_17 = 0; i_17 < 25; i_17 += 2) /* same iter space */
                    {
                        arr_50 [i_13] [i_16] [i_14 - 1] [i_13] [i_13] = ((/* implicit */unsigned int) arr_47 [i_9] [i_9] [i_9]);
                        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) arr_15 [i_13] [i_13] [i_14 + 1] [i_16]))));
                    }
                    for (int i_18 = 0; i_18 < 25; i_18 += 2) /* same iter space */
                    {
                        var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) ((short) arr_11 [i_14 - 1] [i_14 - 1])))));
                        arr_55 [i_18] [21U] [i_18] [i_13] [i_18] = ((/* implicit */int) ((signed char) -918491466));
                        arr_56 [i_9] [0U] [i_9] [i_9] [i_9] [i_9] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_14 - 2])) ? (((/* implicit */int) arr_2 [i_14 + 1])) : (((/* implicit */int) arr_2 [i_14 - 1]))));
                        var_40 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (3973244597U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)512)))))) ? (((((/* implicit */_Bool) arr_22 [i_9] [i_18])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_18] [i_18]))))) : (((((/* implicit */_Bool) arr_15 [i_13] [i_13] [i_16] [i_16])) ? (10ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_9])))))));
                        var_41 = ((/* implicit */unsigned char) arr_24 [i_9]);
                    }
                    for (int i_19 = 0; i_19 < 25; i_19 += 2) /* same iter space */
                    {
                        arr_59 [i_9] [i_9] [i_13] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)79)) ? (arr_5 [i_19] [(short)23] [i_14 - 2] [i_16]) : (arr_15 [i_9] [i_13] [i_14 - 2] [(unsigned char)9])));
                        var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)188)) : (((/* implicit */int) (signed char)-120))));
                    }
                    arr_60 [i_16] [i_13] [i_13] [i_9] = ((/* implicit */unsigned long long int) arr_4 [i_14 - 2] [i_13] [i_9]);
                    var_43 -= ((/* implicit */int) (unsigned short)128);
                }
                var_44 ^= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53837)) ? (((/* implicit */int) arr_40 [i_9] [i_13] [i_9] [i_13] [i_13] [i_13])) : (((/* implicit */int) (unsigned char)15))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) min((arr_2 [i_14 + 1]), (arr_2 [i_13]))))));
                arr_61 [i_9] [i_13] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((int) arr_54 [i_9] [i_13])))) ? (arr_15 [i_9] [i_9] [i_13] [i_14]) : (min((((/* implicit */unsigned int) ((signed char) 3957781921U))), (((unsigned int) (unsigned short)65535))))));
            }
            /* vectorizable */
            for (unsigned int i_20 = 2; i_20 < 24; i_20 += 2) /* same iter space */
            {
                arr_65 [i_13] = ((/* implicit */unsigned int) arr_51 [i_13] [21U]);
                arr_66 [i_13] [i_13] [13ULL] [i_13] = ((/* implicit */int) arr_23 [i_13]);
            }
            for (unsigned int i_21 = 2; i_21 < 24; i_21 += 2) /* same iter space */
            {
                var_45 = ((/* implicit */int) ((signed char) 732148750U));
                arr_70 [i_13] = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) arr_68 [i_21])), ((unsigned char)115)));
                arr_71 [i_13] [i_13] [i_21] = arr_45 [i_9] [i_13];
                var_46 = ((/* implicit */int) arr_48 [i_21] [i_9] [i_21] [i_13] [i_13] [i_9] [i_9]);
                var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) 4ULL))));
            }
            for (unsigned int i_22 = 2; i_22 < 24; i_22 += 2) /* same iter space */
            {
                var_48 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) max((2563503014U), (((/* implicit */unsigned int) arr_68 [i_9]))))) ? (((((/* implicit */_Bool) arr_47 [i_9] [i_13] [i_22])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)75)))) : (((/* implicit */int) arr_57 [i_13] [9] [i_9] [i_9] [i_13])))));
                arr_75 [i_13] [i_13] [(unsigned char)20] [i_13] = ((/* implicit */int) min((((/* implicit */unsigned int) ((int) (short)-19294))), (arr_41 [i_13] [i_13])));
            }
            var_49 *= ((unsigned char) 10ULL);
        }
        for (unsigned short i_23 = 1; i_23 < 23; i_23 += 3) 
        {
            var_50 = ((/* implicit */short) min((min((((/* implicit */long long int) (unsigned short)53837)), (17LL))), (((/* implicit */long long int) arr_27 [i_9] [i_23]))));
            var_51 = ((/* implicit */short) 349706306);
            var_52 = ((/* implicit */unsigned int) max((var_52), (((((/* implicit */_Bool) min((arr_69 [i_9] [i_9] [i_9] [i_9]), (arr_73 [i_9] [i_23 + 1] [i_23])))) ? (min((arr_28 [i_23 + 2] [i_23 + 1] [i_23 + 1]), (max((((/* implicit */unsigned int) arr_51 [i_9] [i_23])), (arr_48 [i_23] [i_9] [i_23] [i_9] [i_9] [i_9] [i_9]))))) : (((((/* implicit */_Bool) max((arr_72 [i_9] [i_9] [i_9] [i_9]), (arr_64 [i_9] [i_23])))) ? (4294967295U) : (((/* implicit */unsigned int) min((4094), (((/* implicit */int) arr_33 [i_9] [i_9] [i_9])))))))))));
            var_53 -= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)18)), (arr_37 [i_9] [i_9])))), (((unsigned long long int) arr_4 [i_9] [i_9] [i_23]))))) ? (((((/* implicit */_Bool) arr_42 [i_23] [i_23] [i_9] [i_9] [i_9])) ? (min((((/* implicit */unsigned int) -1)), (arr_74 [i_9]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1548870168)) ? (((/* implicit */int) arr_62 [i_23] [i_9])) : (((/* implicit */int) arr_68 [i_9]))))))) : (arr_1 [i_9])));
        }
        var_54 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_33 [i_9] [i_9] [i_9]))) ? (2345665732U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_62 [i_9] [i_9])) ? (((/* implicit */int) arr_62 [i_9] [(unsigned char)0])) : (((/* implicit */int) arr_62 [i_9] [i_9])))))));
    }
}
