/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3445
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
    var_13 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                for (long long int i_3 = 1; i_3 < 23; i_3 += 1) 
                {
                    {
                        var_14 &= ((/* implicit */signed char) min((var_3), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_6 [i_2] [(_Bool)1] [8ULL] [i_2 - 2])), (arr_5 [i_0] [i_0 + 1] [i_3 + 1]))))));
                        arr_11 [i_0] [i_1 + 1] [i_2] = ((/* implicit */long long int) arr_6 [i_0 + 1] [i_0 - 1] [i_1 - 1] [i_3]);
                        var_15 = 7083807503195833433ULL;
                    }
                } 
            } 
        } 
        arr_12 [i_0 - 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [3LL] [i_0] [i_0])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0 - 1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1] [i_0]))) : (var_3)))) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0 - 1])) || (((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0]))))))));
    }
    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        arr_16 [i_4] &= ((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [5])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [19LL])))))), (min((arr_14 [i_4]), (((/* implicit */unsigned long long int) arr_13 [i_4]))))))));
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) arr_15 [i_4]))));
        arr_17 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (arr_14 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14750))))) + (((/* implicit */unsigned long long int) ((unsigned int) arr_13 [i_4])))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4]))) != (arr_14 [i_4])))) : ((+(((/* implicit */int) (short)-14753))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_5 = 1; i_5 < 22; i_5 += 1) 
        {
            arr_20 [i_4] = ((/* implicit */unsigned long long int) -6574968302474508913LL);
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                for (int i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    {
                        var_17 += ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_7])) ? (((/* implicit */unsigned long long int) 510177326U)) : (11362936570513718175ULL)));
                        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_19 [i_4] [i_5] [i_6]) ? (((/* implicit */int) (unsigned short)8079)) : (((/* implicit */int) var_4))))))))));
                    }
                } 
            } 
            arr_28 [9LL] [9ULL] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (arr_23 [i_4] [i_5 - 1] [(unsigned short)18] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_4] [i_5 - 1])))));
        }
        for (signed char i_8 = 0; i_8 < 25; i_8 += 3) /* same iter space */
        {
            arr_32 [i_4] [i_8] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)150))));
            var_19 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) arr_18 [i_4] [i_8])), ((short)-14751)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_6)))))) : (arr_14 [i_4])))));
            var_20 = ((/* implicit */signed char) min((11362936570513718174ULL), (((((/* implicit */_Bool) (short)-14750)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8670))) : (11362936570513718183ULL)))));
        }
        for (signed char i_9 = 0; i_9 < 25; i_9 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_10 = 1; i_10 < 23; i_10 += 2) 
            {
                for (short i_11 = 0; i_11 < 25; i_11 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_12 = 0; i_12 < 25; i_12 += 1) 
                        {
                            var_21 = ((/* implicit */long long int) arr_34 [i_4] [13LL] [i_4]);
                            arr_41 [i_10] [i_10] [i_10] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_19 [i_4] [i_10 + 2] [i_10 - 1])) : (((/* implicit */int) arr_19 [(short)5] [i_10 + 1] [i_10 + 2]))));
                            arr_42 [(unsigned char)21] [i_10] [(unsigned char)21] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_25 [i_4] [i_9]) : (319868199047022341ULL))))));
                        }
                        for (long long int i_13 = 0; i_13 < 25; i_13 += 2) 
                        {
                            var_22 -= ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_19 [i_10 + 1] [i_9] [i_10 + 1])) & (((/* implicit */int) arr_19 [i_10 + 2] [i_9] [i_10]))))));
                            var_23 = ((/* implicit */unsigned char) ((signed char) min((((unsigned long long int) arr_29 [i_9] [i_9])), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))))));
                            arr_46 [i_4] [i_13] [(signed char)16] [i_11] [i_13] [i_10] [i_9] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_14 [(signed char)5]), (var_11)))) ? (((((/* implicit */_Bool) 11362936570513718175ULL)) ? (arr_44 [21U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [(signed char)10] [15ULL] [(unsigned short)23] [(_Bool)1] [i_4]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)49408)) && (((/* implicit */_Bool) var_8))))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_4] [i_9] [i_10 + 1] [i_10] [i_11] [(unsigned short)2] [i_13])))))))) : ((~(((unsigned long long int) 92030693437472870ULL))))));
                        }
                        var_24 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_4] [i_9] [(_Bool)1] [20U] [i_11])) ? (arr_14 [i_10 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_4] [i_9] [(_Bool)1] [i_10] [i_11])))))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_9]))))));
                        arr_47 [i_11] [i_10] [(_Bool)1] [(short)11] [i_10] [6U] = ((/* implicit */unsigned int) arr_33 [i_4] [(unsigned char)18]);
                        var_25 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_38 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 + 1]) == (arr_38 [i_10 + 2] [i_10 + 2] [i_10 + 1] [i_10 - 1])))), (max((arr_36 [i_10] [i_10 + 2] [i_10 - 1]), (arr_36 [i_10] [i_10 + 1] [i_10 + 1])))));
                        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) var_3))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned long long int i_14 = 4; i_14 < 23; i_14 += 2) 
            {
                arr_51 [i_4] [7ULL] [5U] [(signed char)17] = ((/* implicit */unsigned short) ((short) ((min((((/* implicit */unsigned int) (short)-19651)), (var_7))) != (max((var_6), (((/* implicit */unsigned int) (unsigned char)29)))))));
                arr_52 [i_4] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59315))) : (7937048809496666723ULL))))));
            }
            for (unsigned int i_15 = 2; i_15 < 22; i_15 += 4) 
            {
                arr_57 [1ULL] [(signed char)4] [i_4] [i_4] |= ((/* implicit */unsigned long long int) arr_19 [i_4] [i_9] [i_15 - 2]);
                /* LoopSeq 2 */
                for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 4) /* same iter space */
                {
                    arr_60 [i_4] [i_9] [i_9] [(_Bool)1] [(_Bool)1] [(_Bool)1] &= ((/* implicit */unsigned char) max(((+(arr_33 [i_15 - 2] [i_15 + 3]))), (((((/* implicit */_Bool) arr_38 [i_4] [i_9] [i_15] [i_15])) ? (((var_3) / (12013306026776506881ULL))) : (((var_4) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
                    var_27 = ((/* implicit */short) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)65525)), (var_11)))) ? (13197207U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-8682)))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_17 = 3; i_17 < 23; i_17 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) arr_31 [i_4] [16U] [i_4]);
                        arr_64 [i_4] [i_4] [23U] [i_4] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_38 [i_4] [i_4] [i_16] [10U]), (min((arr_33 [i_16] [i_4]), (arr_33 [i_4] [(signed char)1]))))))));
                    }
                }
                for (unsigned long long int i_18 = 0; i_18 < 25; i_18 += 4) /* same iter space */
                {
                    var_29 = ((/* implicit */int) var_3);
                    var_30 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_22 [i_15 + 3] [i_15 + 3] [22])) ? (arr_22 [i_15 + 1] [i_9] [15LL]) : (arr_22 [i_15 + 1] [i_9] [i_15 + 1]))));
                }
                var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_63 [i_15 - 2] [i_15 + 3] [i_15] [(_Bool)1] [23U]), (((/* implicit */unsigned char) arr_61 [i_15 + 1] [i_9] [i_15] [6ULL] [i_4])))))));
                arr_67 [i_4] [i_9] [i_15] &= ((/* implicit */int) arr_65 [i_4] [(unsigned char)1]);
            }
            arr_68 [i_4] [i_4] [1U] = ((/* implicit */_Bool) min((((/* implicit */int) min((arr_15 [(unsigned char)4]), (arr_15 [i_9])))), (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) arr_15 [i_4]))))));
        }
        for (signed char i_19 = 0; i_19 < 25; i_19 += 3) /* same iter space */
        {
            var_32 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(var_9))))))) << (((((/* implicit */int) arr_55 [(unsigned char)19] [i_19] [(unsigned short)24])) + (85)))));
            var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) arr_26 [i_4] [i_19] [21ULL] [i_19] [i_19] [i_19]))));
            /* LoopNest 2 */
            for (unsigned char i_20 = 0; i_20 < 25; i_20 += 4) 
            {
                for (unsigned long long int i_21 = 1; i_21 < 24; i_21 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_22 = 0; i_22 < 25; i_22 += 4) 
                        {
                            arr_79 [i_22] [i_21] [i_20] [i_21] [i_4] = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_37 [i_4] [i_19] [i_20] [i_21 - 1] [i_22])))), (((/* implicit */int) arr_27 [i_4] [20ULL] [i_20] [i_21 - 1] [(_Bool)1]))));
                            arr_80 [i_21] [i_21] [i_20] [i_19] [i_21] = ((/* implicit */signed char) (!(var_4)));
                        }
                        arr_81 [i_21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1772750680U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)13868))) : (1772750680U)));
                        var_34 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) ((unsigned long long int) var_8)))) << (((((/* implicit */_Bool) min((arr_23 [i_4] [i_4] [i_20] [i_4]), (((/* implicit */unsigned long long int) arr_24 [(short)15] [2] [i_20] [i_20]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((1772750695U) != (arr_21 [i_20]))))) : (min((((/* implicit */unsigned int) arr_48 [i_4] [i_19] [9ULL] [23LL])), (arr_54 [i_4] [6LL] [i_4] [i_4])))))));
                    }
                } 
            } 
            var_35 ^= ((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned short)16118))))));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_23 = 3; i_23 < 23; i_23 += 4) 
        {
            arr_84 [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_1)) : (arr_74 [i_4] [(short)14] [i_4] [i_4] [i_4]))), (((/* implicit */int) max((arr_58 [i_23] [22LL] [i_4]), (((/* implicit */unsigned short) var_2)))))))) ? (arr_24 [(short)10] [i_4] [i_4] [3ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
            var_36 = ((/* implicit */short) (~((~(12013306026776506877ULL)))));
        }
        for (unsigned char i_24 = 1; i_24 < 23; i_24 += 3) 
        {
            var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_62 [i_4] [i_4])))) ? (((1523214507) | (((/* implicit */int) (signed char)22)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_58 [i_24 + 2] [i_24 + 2] [i_24])))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_25 = 2; i_25 < 24; i_25 += 2) 
            {
                var_38 ^= ((/* implicit */signed char) (~(((unsigned int) arr_22 [i_24 - 1] [i_24 + 2] [i_25 + 1]))));
                arr_90 [i_24] [i_24] = ((/* implicit */unsigned char) min(((+((-(((/* implicit */int) arr_73 [i_4] [i_4] [i_24] [i_25])))))), ((-(((/* implicit */int) arr_72 [i_4] [i_24] [i_25 - 1]))))));
                /* LoopSeq 2 */
                for (unsigned int i_26 = 1; i_26 < 24; i_26 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_27 = 3; i_27 < 23; i_27 += 1) 
                    {
                        var_39 ^= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_33 [i_25 + 1] [i_26 - 1])) ? (arr_33 [i_4] [(signed char)13]) : (arr_33 [i_4] [i_24 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) -1934883378629261633LL)) < (arr_33 [(signed char)5] [(signed char)5]))))));
                        var_40 |= ((/* implicit */int) (((!(((/* implicit */_Bool) (((_Bool)0) ? (-6266645251721477742LL) : (((/* implicit */long long int) 4281770073U))))))) || ((!(((/* implicit */_Bool) arr_39 [i_4] [i_24 + 1] [i_26 - 1] [12ULL] [i_26] [i_26] [i_27 + 2]))))));
                    }
                    var_41 = ((/* implicit */unsigned short) ((min((((((/* implicit */int) (signed char)76)) ^ (((/* implicit */int) var_12)))), (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-113)))))) <= (((/* implicit */int) min((((arr_82 [i_4]) || (((/* implicit */_Bool) arr_91 [i_4] [i_24 - 1] [10ULL] [i_26])))), ((!(((/* implicit */_Bool) var_2)))))))));
                    var_42 &= ((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned char)167), ((unsigned char)167)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-14761))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-27))) + (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (3117182158U)))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_28 = 0; i_28 < 25; i_28 += 3) 
                    {
                        arr_97 [i_4] [i_4] [i_26] [i_24] = ((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) var_2)))));
                        var_43 = ((/* implicit */int) var_0);
                    }
                    for (unsigned char i_29 = 0; i_29 < 25; i_29 += 1) 
                    {
                        arr_100 [(_Bool)1] [i_24] [i_24] [i_26 + 1] [i_29] [i_29] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~((+(((/* implicit */int) var_4))))))), (arr_22 [3LL] [(unsigned char)4] [3LL])));
                        var_44 += arr_38 [(signed char)14] [i_25] [4] [i_4];
                    }
                }
                for (long long int i_30 = 1; i_30 < 23; i_30 += 2) 
                {
                    arr_103 [i_24] [i_30] [(unsigned short)5] [i_24] [i_24] [i_24] = ((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned short)8128)))) == (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_78 [(signed char)9] [i_24] [i_24] [(_Bool)1] [i_30]))))))))));
                    arr_104 [19U] [i_24] [i_25 - 2] = ((/* implicit */unsigned short) (~(arr_24 [i_24 + 1] [i_25 - 1] [i_30 + 1] [i_24 + 1])));
                    arr_105 [i_24] [(unsigned char)21] [i_24 + 2] [i_24] = ((/* implicit */int) (~((-(((((/* implicit */_Bool) arr_98 [i_30] [14ULL] [i_24] [i_24] [i_4] [i_24] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [(unsigned short)0] [i_24 - 1]))) : (arr_71 [i_4] [(unsigned short)3] [(unsigned short)3])))))));
                }
                var_45 = ((min((var_11), (((/* implicit */unsigned long long int) arr_72 [i_24 + 2] [i_24 + 2] [i_24 + 2])))) - (((((/* implicit */_Bool) (((_Bool)1) ? (-3211149667514037477LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)40)))))) ? ((+(arr_23 [i_4] [i_4] [i_25] [i_24]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_102 [i_24] [(_Bool)0] [i_24])) ? (((/* implicit */int) arr_77 [i_24 - 1])) : (((/* implicit */int) arr_45 [i_4] [i_4] [i_24] [13LL] [i_4]))))))));
                var_46 = ((/* implicit */int) max((var_46), (((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_29 [(unsigned char)12] [(unsigned char)12])))) ? (((unsigned long long int) arr_69 [i_25])) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) % (((/* implicit */int) var_12)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_13 [0LL]) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) (signed char)-24)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_4] [i_24 + 1] [6U] [6U])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_85 [i_25 - 1])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 10572135548010383687ULL)) ? (arr_71 [7] [i_24] [i_24]) : (((/* implicit */unsigned long long int) arr_54 [(unsigned char)14] [23ULL] [i_25] [(short)2]))))))))))));
            }
            for (unsigned short i_31 = 0; i_31 < 25; i_31 += 1) 
            {
                arr_108 [i_24] = ((/* implicit */signed char) var_4);
                arr_109 [i_4] [i_24] [i_31] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(arr_107 [i_4] [(_Bool)1]))))));
            }
            var_47 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(2719921976U))))));
        }
    }
    var_48 = ((/* implicit */_Bool) max((var_48), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((((/* implicit */long long int) var_10)) != (var_0))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)59311))))) : (var_6))) : ((~((~(var_6))))))))));
}
