/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209007
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
    var_16 = ((/* implicit */unsigned int) max((min(((-(((/* implicit */int) var_1)))), (((/* implicit */int) var_3)))), (min((-1), (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 24; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) -1);
        arr_4 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
    }
    for (long long int i_1 = 1; i_1 < 24; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 2) 
                {
                    {
                        var_17 -= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_15))) && (((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) 266338304U)))))))));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 2; i_5 < 24; i_5 += 2) 
                        {
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (unsigned char)54))));
                            arr_19 [i_1 + 1] [i_2] [i_3] [i_4 + 1] [i_4 + 1] = var_6;
                            arr_20 [i_1] [i_1] [i_2] [i_3 + 1] [i_3 + 1] [i_4] [i_5] = (signed char)-83;
                        }
                        var_19 = ((/* implicit */unsigned char) (_Bool)1);
                        arr_21 [i_1] [i_2] [i_1] = ((/* implicit */int) ((unsigned long long int) ((min((((/* implicit */int) (unsigned char)39)), (21))) & (((int) 4)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            arr_24 [i_1 - 1] [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_18 [i_1] [9] [i_1] [i_6] [i_1 + 1]))));
            /* LoopSeq 3 */
            for (unsigned char i_7 = 3; i_7 < 22; i_7 += 2) 
            {
                var_20 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)-1)) ? (-1963348926) : (-5)))));
                var_21 = (+((~(((/* implicit */int) (unsigned char)227)))));
                arr_27 [i_6] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_7)) | (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (var_4)))));
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) ((unsigned short) 4));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_1 - 1] [i_7 - 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) 16990246433314437713ULL)) || (((/* implicit */_Bool) (unsigned char)29))))) : (((((/* implicit */int) (short)-2867)) + (((/* implicit */int) (unsigned short)26242))))));
                        }
                    } 
                } 
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((signed char) ((long long int) (unsigned char)115))))));
                arr_38 [i_1] [i_1] [i_1 + 1] = ((/* implicit */unsigned long long int) (unsigned char)255);
            }
            for (unsigned int i_11 = 0; i_11 < 25; i_11 += 2) 
            {
                arr_42 [i_1] [i_11] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_31 [i_1 + 1] [i_1 + 1] [i_6] [i_11]))));
                var_25 = ((/* implicit */unsigned short) ((arr_31 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (17159934970852160061ULL)));
                /* LoopSeq 3 */
                for (unsigned long long int i_12 = 1; i_12 < 22; i_12 += 2) 
                {
                    arr_45 [i_12 + 2] [i_11] [i_6] [i_1] [i_1] = (-(((unsigned long long int) var_7)));
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_43 [i_1 + 1] [i_1 - 1])) && (((/* implicit */_Bool) arr_43 [i_1 - 1] [i_1 + 1]))));
                }
                for (signed char i_13 = 0; i_13 < 25; i_13 += 2) /* same iter space */
                {
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) arr_44 [i_1] [i_1] [i_1 + 1] [i_1] [i_1]))));
                    /* LoopSeq 3 */
                    for (unsigned short i_14 = 4; i_14 < 23; i_14 += 2) 
                    {
                        var_28 = ((/* implicit */_Bool) ((unsigned long long int) arr_22 [i_1 + 1]));
                        var_29 -= ((/* implicit */unsigned char) ((long long int) arr_35 [i_13] [i_13] [i_1 + 1] [i_6]));
                    }
                    for (unsigned short i_15 = 0; i_15 < 25; i_15 += 2) 
                    {
                        arr_53 [(unsigned short)17] [(unsigned short)17] [i_11] = ((/* implicit */short) ((((/* implicit */int) arr_50 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1 + 1])) << (((((/* implicit */int) arr_50 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1 + 1])) - (64410)))));
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)115))))) ? (arr_43 [(unsigned short)9] [(unsigned short)9]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)216)))));
                    }
                    for (signed char i_16 = 0; i_16 < 25; i_16 += 2) 
                    {
                        arr_56 [i_1] [i_1] [i_11] [i_13] [i_16] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_1] [i_11] [i_11] [i_13] [i_16] [8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_1 + 1] [i_1] [i_11] [i_13] [i_16] [i_13] [22LL]))) : (12765879050508277862ULL))));
                        arr_57 [i_16] [i_13] [i_11] [i_6] [i_6] [(short)10] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)253)) ? (2778399220U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)83)))));
                        arr_58 [i_16] [i_13] [i_1] [i_1] = ((/* implicit */signed char) (+(((((/* implicit */int) var_1)) << (((((/* implicit */int) arr_55 [i_6])) + (26088)))))));
                    }
                }
                for (signed char i_17 = 0; i_17 < 25; i_17 += 2) /* same iter space */
                {
                    var_31 &= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)52)) << (((arr_62 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_11]) - (2748881762U)))));
                    arr_63 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) (!(arr_15 [i_1] [i_1 + 1] [i_1])));
                    var_32 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11255))) + (18446744073709551615ULL)));
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) arr_23 [i_1 + 1]))));
                    var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) (unsigned char)21))));
                }
                var_35 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) (unsigned char)28)))));
            }
            /* LoopSeq 1 */
            for (unsigned int i_18 = 0; i_18 < 25; i_18 += 2) 
            {
                var_36 = ((long long int) ((((/* implicit */_Bool) arr_26 [i_1] [i_6] [i_18] [i_18])) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) var_11))));
                /* LoopNest 2 */
                for (long long int i_19 = 0; i_19 < 25; i_19 += 2) 
                {
                    for (unsigned long long int i_20 = 0; i_20 < 25; i_20 += 2) 
                    {
                        {
                            arr_72 [i_18] = ((/* implicit */signed char) 18446744073709551615ULL);
                            var_37 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_0))));
                            var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1963348951)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)214))));
                            var_39 = ((/* implicit */_Bool) var_13);
                        }
                    } 
                } 
                var_40 &= ((/* implicit */unsigned int) arr_61 [i_6] [i_6]);
                var_41 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (short)11255))))) >> (((((/* implicit */int) var_6)) - (32506)))));
                /* LoopSeq 2 */
                for (long long int i_21 = 1; i_21 < 23; i_21 += 2) /* same iter space */
                {
                    var_42 = ((/* implicit */int) min((var_42), ((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_8))))))));
                    var_43 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)233)) & (((/* implicit */int) arr_25 [i_21] [i_21 + 1] [i_18] [i_21 + 2]))));
                }
                for (long long int i_22 = 1; i_22 < 23; i_22 += 2) /* same iter space */
                {
                    arr_77 [i_22] [i_6] = ((/* implicit */int) (unsigned char)204);
                    var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) (unsigned short)65529)))))));
                    /* LoopSeq 2 */
                    for (long long int i_23 = 1; i_23 < 24; i_23 += 2) /* same iter space */
                    {
                        var_45 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_39 [i_1] [i_6] [i_18]))));
                        var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) ((10181148991723619700ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253))))))));
                    }
                    for (long long int i_24 = 1; i_24 < 24; i_24 += 2) /* same iter space */
                    {
                        var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)2)) ? (var_7) : (arr_26 [i_24] [i_24] [i_22 + 1] [13LL])));
                        var_48 ^= ((/* implicit */short) ((((var_4) / (((/* implicit */unsigned long long int) arr_34 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26625)))));
                        var_49 = ((/* implicit */unsigned char) min((var_49), (((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) arr_79 [i_6] [i_22 - 1])) : (var_14))))));
                    }
                }
            }
            var_50 = ((/* implicit */int) max((var_50), ((~(((/* implicit */int) ((((/* implicit */_Bool) 4829057137149035113LL)) || (var_8))))))));
            var_51 = ((/* implicit */signed char) (unsigned char)0);
        }
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_26 = 4; i_26 < 24; i_26 += 2) 
            {
                for (signed char i_27 = 2; i_27 < 22; i_27 += 2) 
                {
                    {
                        var_52 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)7))));
                        arr_92 [i_25] [i_26] [i_25] [i_25] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)203)) ^ ((~(((/* implicit */int) (unsigned short)25899))))));
                        arr_93 [i_1] [i_25] [i_1] [i_27] = (+(((((/* implicit */_Bool) -1963348949)) ? (arr_88 [i_27 + 2] [i_1 + 1] [i_26 - 1]) : (arr_88 [i_27 - 1] [i_1 + 1] [i_26 - 1]))));
                        arr_94 [i_25] [i_27] [i_26] [i_1] [i_25] = ((/* implicit */_Bool) ((int) (+(((((/* implicit */int) (unsigned short)16383)) | (((/* implicit */int) var_15)))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_28 = 3; i_28 < 21; i_28 += 2) 
            {
                arr_97 [i_1] [i_25] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((1963348926) + (((/* implicit */int) var_15))))) ? (((unsigned long long int) var_13)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_1 + 1] [i_25] [i_1 + 1] [i_25] [i_25])))))) ? (((/* implicit */unsigned long long int) var_7)) : (arr_59 [i_28 - 1] [i_25] [i_25] [i_1 - 1])));
                var_53 = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((var_14) % (((/* implicit */int) var_15))))) + (max((((/* implicit */unsigned long long int) arr_32 [i_28] [i_28] [i_28] [i_28] [(_Bool)1] [i_28] [i_28])), (arr_89 [i_1] [i_25] [i_28])))))));
                var_54 = max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) var_11)))))), (((unsigned short) var_8)));
                var_55 = ((/* implicit */unsigned long long int) ((unsigned short) min(((-(((/* implicit */int) var_8)))), (((/* implicit */int) var_11)))));
            }
            var_56 = var_1;
            var_57 = ((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_82 [i_25] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1])) || (((/* implicit */_Bool) arr_62 [i_1 - 1] [4] [i_1 - 1] [i_1 + 1] [i_1 - 1]))))), (arr_70 [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_1 + 1])));
            arr_98 [i_25] = ((/* implicit */unsigned short) (~(1963348924)));
        }
        var_58 = ((/* implicit */int) min((var_58), (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_79 [2ULL] [i_1 - 1])) && (((/* implicit */_Bool) var_14))))), (var_9))))));
        arr_99 [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (~(1963348903))))));
        arr_100 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7))) : (((min((9552723396161743212ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) & (((/* implicit */unsigned long long int) (~(-4655601903445191981LL))))))));
    }
    var_59 = ((/* implicit */long long int) ((unsigned long long int) (~(((/* implicit */int) (unsigned char)224)))));
    /* LoopSeq 1 */
    for (short i_29 = 1; i_29 < 23; i_29 += 2) 
    {
        var_60 = ((/* implicit */int) ((unsigned short) var_5));
        /* LoopNest 2 */
        for (long long int i_30 = 1; i_30 < 24; i_30 += 2) 
        {
            for (unsigned short i_31 = 1; i_31 < 21; i_31 += 2) 
            {
                {
                    var_61 = ((-1963348924) / (((/* implicit */int) var_10)));
                    var_62 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned short) arr_74 [i_30 + 1] [i_30] [i_29]))))) ? (((/* implicit */int) max(((unsigned char)233), (((/* implicit */unsigned char) arr_74 [i_30 + 1] [i_29] [i_29 + 1]))))) : (((((/* implicit */_Bool) (unsigned short)40282)) ? (((/* implicit */int) arr_74 [i_30 + 1] [i_30 - 1] [i_30 + 1])) : (((/* implicit */int) arr_74 [i_30 - 1] [i_30] [i_29]))))));
                }
            } 
        } 
        var_63 = ((/* implicit */long long int) min((1707954871), (((/* implicit */int) var_3))));
        var_64 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) var_8)), ((~(((/* implicit */int) (unsigned short)25254))))))) & (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_86 [i_29] [i_29] [i_29]))) | (999558399767990770ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) (unsigned char)80)))))))));
    }
}
