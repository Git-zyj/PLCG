/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244980
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
    var_12 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) / (var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_8))))))) - (((((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) 0U))))) - ((-(((/* implicit */int) (signed char)(-127 - 1)))))))));
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (-(((/* implicit */int) var_0)))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_14 = (-(6ULL));
            var_15 = (signed char)-58;
            var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_1] [(signed char)16] [i_0]))));
        }
        for (short i_2 = 1; i_2 < 16; i_2 += 3) 
        {
            /* LoopSeq 4 */
            for (signed char i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
            {
                var_17 ^= ((/* implicit */signed char) 18446744073709551595ULL);
                var_18 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2 + 1] [i_2] [i_2]))) : (4294967295U)))));
                arr_11 [i_0] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) var_7)) >> (((min(((~(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) ((signed char) arr_2 [i_0]))))) - (93)))));
                /* LoopSeq 1 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    arr_15 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (max((((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) ^ (((/* implicit */int) (_Bool)1)))), ((((_Bool)1) ? (((/* implicit */int) (short)31)) : (((/* implicit */int) var_7))))))));
                    arr_16 [i_4] [i_3] [i_2 + 1] [i_4] = ((/* implicit */short) max((((/* implicit */unsigned int) ((10914300593507024648ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))), (min((max((15U), (((/* implicit */unsigned int) arr_10 [i_0] [i_2] [(_Bool)1])))), (((/* implicit */unsigned int) arr_6 [i_2 - 1] [i_4 - 1] [i_4]))))));
                    arr_17 [i_4] [i_2] [i_4] [i_2 + 1] = ((/* implicit */short) (((-(-5037138096065059951LL))) != (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)9756)) - (9751))))))));
                }
            }
            for (signed char i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (long long int i_6 = 2; i_6 < 14; i_6 += 4) 
                {
                    arr_23 [(_Bool)1] [i_2 + 1] [i_5] [i_6] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((short) var_7));
                    arr_24 [i_0] [i_2] [i_5] [i_6 - 2] [(_Bool)0] = ((/* implicit */_Bool) (((_Bool)1) ? (0ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_2 + 1])))))));
                }
                /* vectorizable */
                for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    var_19 = (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) arr_18 [(short)10] [i_5] [i_5]))))));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */int) arr_18 [i_0] [i_2] [i_0])) - (((/* implicit */int) arr_4 [i_2] [i_2 - 1] [i_2 + 1])))))));
                    arr_28 [i_0] [i_2 - 1] [i_5] [i_7] = ((/* implicit */unsigned int) var_6);
                    arr_29 [i_7] [i_5] [i_5] [i_2] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (!((_Bool)1))))));
                }
                /* LoopSeq 1 */
                for (long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    var_21 = ((/* implicit */signed char) max(((-(((/* implicit */int) arr_4 [i_0] [i_2 + 1] [i_5])))), (min((((((/* implicit */_Bool) arr_22 [i_2] [i_5] [i_8])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-25222)))), (((/* implicit */int) ((_Bool) (short)31150)))))));
                    var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) var_10))));
                }
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!((_Bool)1)))), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_5]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (6636709457281855773ULL))))))))));
            }
            for (unsigned int i_9 = 0; i_9 < 17; i_9 += 2) /* same iter space */
            {
                var_24 = ((/* implicit */long long int) (-(((/* implicit */int) arr_22 [i_2] [i_2] [i_2 + 1]))));
                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((_Bool) (signed char)-12)))));
            }
            /* vectorizable */
            for (unsigned int i_10 = 0; i_10 < 17; i_10 += 2) /* same iter space */
            {
                arr_36 [i_2] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (10U) : (4294967295U)));
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 1) 
                {
                    for (short i_12 = 0; i_12 < 17; i_12 += 1) 
                    {
                        {
                            arr_41 [i_12] [i_2] [i_10] [i_10] [i_12] = ((/* implicit */_Bool) var_3);
                            arr_42 [i_2] [i_2] [i_12] = ((/* implicit */long long int) (short)-7025);
                            var_26 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
                        }
                    } 
                } 
                arr_43 [i_0] [i_2] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((0U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (arr_25 [i_2 + 1] [i_10])));
            }
            /* LoopSeq 3 */
            for (long long int i_13 = 0; i_13 < 17; i_13 += 3) 
            {
                var_27 = ((/* implicit */signed char) 3697811599121473508LL);
                arr_47 [7U] [7U] = ((/* implicit */_Bool) (-(-6944576221346291498LL)));
                var_28 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)(-127 - 1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) || (((/* implicit */_Bool) arr_32 [i_2 - 1] [i_13] [i_13] [i_2 + 1]))))) : (((/* implicit */int) ((signed char) arr_20 [i_2 - 1] [i_2] [i_13] [i_13])))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_14 = 0; i_14 < 17; i_14 += 4) /* same iter space */
                {
                    arr_50 [i_0] [i_2] [i_13] [i_13] = var_8;
                    var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [(short)1] [i_13])))))));
                }
                for (short i_15 = 0; i_15 < 17; i_15 += 4) /* same iter space */
                {
                    var_30 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_25 [i_2 - 1] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1]))) : (2492325667U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_2 + 1] [i_2 - 1] [i_2])) * (((/* implicit */int) var_3)))))));
                    var_31 -= ((signed char) var_11);
                    var_32 *= (_Bool)1;
                    arr_53 [i_0] [i_13] [i_13] [i_15] [i_13] |= ((/* implicit */short) ((signed char) arr_32 [i_0] [i_2] [i_2] [i_15]));
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_33 -= ((/* implicit */unsigned int) var_7);
                    arr_56 [i_0] [i_16] [(signed char)0] = ((/* implicit */short) (-(((((/* implicit */_Bool) min((1432618058U), (3526004790U)))) ? (((/* implicit */int) arr_33 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_13])) : (((((/* implicit */_Bool) arr_20 [i_13] [i_2 - 1] [i_13] [i_16])) ? (((/* implicit */int) (short)25035)) : (((/* implicit */int) arr_9 [i_0] [i_13]))))))));
                    arr_57 [i_0] [i_16] [i_16] = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) 2614581654U)))));
                }
            }
            /* vectorizable */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                arr_60 [15LL] [i_2] [i_2] [3ULL] = ((/* implicit */_Bool) var_9);
                arr_61 [i_2] [i_0] = ((/* implicit */short) 18446744073709551605ULL);
                /* LoopNest 2 */
                for (signed char i_18 = 0; i_18 < 17; i_18 += 1) 
                {
                    for (unsigned long long int i_19 = 0; i_19 < 17; i_19 += 1) 
                    {
                        {
                            arr_66 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)32767)) ^ (((/* implicit */int) (short)32767))))) : (((((/* implicit */_Bool) arr_58 [i_0] [i_0] [(short)11])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (4294967272U)))));
                            var_34 |= ((/* implicit */short) 3751174313U);
                            arr_67 [i_17] = (!(((/* implicit */_Bool) arr_44 [i_2 - 1] [i_2 - 1] [6LL])));
                            arr_68 [i_17] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_2 + 1] [i_17] [i_18]))))) >> (((arr_25 [i_2 + 1] [i_2 + 1]) - (2154267315U)))));
                        }
                    } 
                } 
            }
            for (unsigned int i_20 = 0; i_20 < 17; i_20 += 3) 
            {
                arr_72 [i_0] [i_20] [i_0] [i_2 + 1] = (signed char)104;
                var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) 4294967295U))));
            }
            /* LoopNest 2 */
            for (short i_21 = 3; i_21 < 16; i_21 += 4) 
            {
                for (short i_22 = 4; i_22 < 16; i_22 += 1) 
                {
                    {
                        var_36 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)125))));
                        var_37 = ((/* implicit */long long int) arr_5 [i_21 + 1]);
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned long long int i_23 = 0; i_23 < 17; i_23 += 4) 
        {
            for (short i_24 = 0; i_24 < 17; i_24 += 3) 
            {
                {
                    arr_85 [i_23] = ((/* implicit */long long int) ((signed char) ((arr_71 [i_0] [i_23] [i_24] [i_24]) ? (((/* implicit */int) ((((/* implicit */long long int) 3526004776U)) < (arr_83 [i_0] [i_23] [i_24] [13ULL])))) : (((((/* implicit */int) var_11)) & (((/* implicit */int) arr_82 [(signed char)14] [(signed char)14] [i_24] [6U])))))));
                    arr_86 [i_0] [(_Bool)1] |= ((/* implicit */_Bool) arr_14 [i_24] [i_23] [(_Bool)1] [i_24] [(_Bool)1] [i_24]);
                }
            } 
        } 
    }
    for (long long int i_25 = 0; i_25 < 14; i_25 += 4) 
    {
        arr_90 [i_25] [5LL] = ((/* implicit */unsigned int) (_Bool)1);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_26 = 0; i_26 < 14; i_26 += 1) 
        {
            var_38 = ((/* implicit */signed char) (+(((arr_89 [i_25]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2048))) : (18446744073709551605ULL)))));
            /* LoopNest 2 */
            for (unsigned long long int i_27 = 0; i_27 < 14; i_27 += 4) 
            {
                for (long long int i_28 = 0; i_28 < 14; i_28 += 3) 
                {
                    {
                        var_39 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-30790)) ? (((/* implicit */int) arr_71 [i_25] [13U] [i_27] [i_28])) : (((/* implicit */int) arr_49 [i_28] [i_27] [i_27] [i_26] [i_26] [i_25]))));
                        arr_99 [i_25] [i_26] [i_25] [i_25] [i_27] [i_25] = ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_25] [(_Bool)1] [i_27])) ^ ((-(((/* implicit */int) var_7))))));
                        var_40 = 11ULL;
                    }
                } 
            } 
        }
        arr_100 [i_25] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : ((-(((/* implicit */int) (!(arr_74 [i_25] [i_25] [i_25]))))))));
    }
    /* vectorizable */
    for (signed char i_29 = 2; i_29 < 15; i_29 += 4) 
    {
        var_41 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_102 [i_29 - 1] [i_29 - 1])) ? (((/* implicit */int) (short)254)) : (((/* implicit */int) (_Bool)1))));
        arr_104 [i_29] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_103 [i_29 + 1])) : (((/* implicit */int) var_8))));
    }
}
