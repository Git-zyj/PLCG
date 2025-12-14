/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207663
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
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_3))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1] [i_0 - 1])) ? (((((/* implicit */_Bool) (unsigned char)90)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-26896))) : (-3790382597931952363LL))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
            arr_7 [i_0 + 1] [i_0 + 1] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) & (((/* implicit */int) arr_6 [18]))))));
            arr_8 [i_1] &= ((/* implicit */signed char) ((((/* implicit */int) var_4)) >= (((/* implicit */int) arr_6 [i_0 + 2]))));
            var_20 = ((/* implicit */int) arr_4 [i_0] [i_0] [i_1]);
        }
        var_21 += ((/* implicit */_Bool) arr_0 [(unsigned short)11] [i_0]);
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    arr_18 [i_0] [i_0] = ((/* implicit */signed char) (short)1563);
                    arr_19 [20ULL] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_11 [i_0 + 2])))));
                    var_22 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) (signed char)-45)) != (((/* implicit */int) (unsigned short)33561)))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_23 [i_2] [i_0] = ((/* implicit */unsigned short) ((max((var_8), (((/* implicit */unsigned long long int) -1214461566)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_9)), (var_2))) > (((/* implicit */unsigned long long int) var_6))))))));
                    arr_24 [i_0] [3U] [i_3] [i_0] = ((/* implicit */signed char) var_1);
                }
                for (int i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    arr_27 [i_0 - 1] [i_0] [i_2] [(signed char)9] [21U] = ((/* implicit */int) (((-(((/* implicit */int) (unsigned short)65535)))) != ((~(((/* implicit */int) ((arr_10 [i_0] [i_0] [i_3]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0]))))))))));
                    arr_28 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) (short)-26899)), (-1877571161)));
                    arr_29 [i_0 + 3] [i_0] [i_2] [3] [12U] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 4294967278U)), (3790382597931952354LL)))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_2] [i_0 - 1] [i_0 - 1])))))));
                    var_23 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_25 [i_0] [1]))));
                }
                arr_30 [(_Bool)1] [i_0] [(_Bool)1] = (+(((((/* implicit */_Bool) var_5)) ? (arr_5 [i_0] [i_0]) : (arr_5 [i_0] [i_0]))));
            }
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_34 [i_0 - 1] [(signed char)2])))) & (((((/* implicit */_Bool) arr_34 [i_0] [i_2])) ? (((/* implicit */int) arr_34 [i_2] [i_7])) : (((/* implicit */int) (short)-8103))))));
                        arr_36 [i_0] [i_2] [i_0] [(signed char)2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)175)), ((short)26890))))) : (max((min((arr_32 [i_2] [i_2] [i_2] [i_0 + 2]), (((/* implicit */long long int) arr_13 [(unsigned char)0])))), (((/* implicit */long long int) min((arr_34 [i_8] [(unsigned short)14]), (((/* implicit */unsigned short) var_15)))))))));
                        arr_37 [i_0] [i_7] [i_2] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((signed char) arr_4 [i_0] [i_2] [i_8]))))))));
                        var_25 += var_7;
                    }
                } 
            } 
            var_26 = ((/* implicit */signed char) (((-(arr_0 [(signed char)18] [i_0 - 1]))) >> (((((arr_0 [10U] [i_0 - 1]) - (((/* implicit */int) var_16)))) + (544709786)))));
        }
        for (signed char i_9 = 0; i_9 < 25; i_9 += 3) 
        {
            arr_41 [i_0] [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_25 [i_0 + 3] [i_0 + 1])) - (((/* implicit */int) arr_25 [i_0 + 3] [i_0 - 1])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_9] [i_9])))))));
            /* LoopNest 2 */
            for (unsigned int i_10 = 1; i_10 < 23; i_10 += 2) 
            {
                for (signed char i_11 = 1; i_11 < 21; i_11 += 1) 
                {
                    {
                        var_27 -= ((/* implicit */signed char) ((min((((/* implicit */int) arr_46 [i_9] [(unsigned short)8])), (((((/* implicit */int) arr_33 [i_0] [i_9] [(unsigned char)12] [i_11])) % (((/* implicit */int) var_14)))))) > (((/* implicit */int) var_5))));
                        arr_49 [i_0] [(signed char)18] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_45 [i_0 + 1] [i_0 + 1] [i_0 + 1])) > (((/* implicit */int) ((short) arr_45 [i_11 + 2] [i_11 + 3] [i_11 + 3])))));
                        var_28 = ((/* implicit */unsigned int) ((max((((arr_20 [(_Bool)1] [i_9] [i_9] [i_9]) ? (((/* implicit */int) arr_3 [i_10 + 2] [i_9])) : (arr_0 [(unsigned char)21] [(unsigned char)21]))), ((-(((/* implicit */int) arr_43 [i_9])))))) * (((/* implicit */int) (unsigned short)59719))));
                        arr_50 [i_0] [(signed char)7] [i_9] [i_10 + 2] [i_10] [i_11] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_13))));
                        arr_51 [3ULL] [3ULL] [i_10] [i_0] [i_10] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_11 [8LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_11 + 1] [i_10 + 1] [i_0 + 1] [i_0 + 2]))) : (var_8))) ^ (((/* implicit */unsigned long long int) ((unsigned int) arr_5 [i_0] [i_0])))));
                    }
                } 
            } 
        }
    }
    for (signed char i_12 = 0; i_12 < 25; i_12 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_13 = 4; i_13 < 21; i_13 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_14 = 0; i_14 < 25; i_14 += 4) 
            {
                for (int i_15 = 2; i_15 < 23; i_15 += 2) 
                {
                    {
                        arr_62 [i_15] = ((((/* implicit */int) (unsigned short)32768)) != ((~(((/* implicit */int) arr_13 [i_15 + 2])))));
                        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_25 [i_13 - 2] [i_13 - 3])), (((((/* implicit */_Bool) arr_25 [i_13 - 2] [i_13 - 3])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_13 - 2] [i_13 - 3]))))))))));
                    }
                } 
            } 
            arr_63 [i_12] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_5 [i_13] [i_13 - 3]) ^ (((/* implicit */int) (unsigned short)39670))))) ? (((/* implicit */unsigned long long int) arr_5 [i_13] [i_13])) : (((((/* implicit */_Bool) arr_5 [i_13] [i_13])) ? (arr_42 [i_13 - 1]) : (arr_42 [i_13 + 2])))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                arr_66 [i_12] [(signed char)19] [(unsigned char)9] [i_12] = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)1920)) : (((/* implicit */int) arr_64 [i_13 - 2] [i_13 + 2] [i_16] [i_12])));
                /* LoopSeq 1 */
                for (signed char i_17 = 0; i_17 < 25; i_17 += 3) 
                {
                    arr_71 [i_12] [i_13 - 1] [23ULL] [i_12] [i_17] [i_17] = ((/* implicit */short) (-(arr_10 [i_12] [i_12] [i_12])));
                    arr_72 [i_12] = ((/* implicit */signed char) var_17);
                }
            }
            arr_73 [i_12] [7U] [7U] = ((/* implicit */unsigned short) min((arr_1 [i_12]), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) >= (3790382597931952353LL))))));
            var_30 -= ((/* implicit */unsigned int) arr_3 [i_12] [i_12]);
        }
        /* vectorizable */
        for (int i_18 = 2; i_18 < 24; i_18 += 3) 
        {
            arr_76 [(short)14] [(short)14] |= ((/* implicit */_Bool) ((3790382597931952347LL) >> (((-3790382597931952374LL) + (3790382597931952375LL)))));
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)16)) != (14412403)));
            /* LoopNest 2 */
            for (unsigned short i_19 = 0; i_19 < 25; i_19 += 1) 
            {
                for (unsigned int i_20 = 0; i_20 < 25; i_20 += 3) 
                {
                    {
                        var_32 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_80 [i_18 + 1])) ^ (((/* implicit */int) (short)976))));
                        var_33 ^= ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_59 [i_12] [(unsigned short)6] [10U])))) <= (((/* implicit */int) var_13))));
                        arr_82 [i_18] [i_18] [i_19] [i_19] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)0))));
                        arr_83 [i_20] [i_18] [i_19] [i_18] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ (((var_6) % (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_18])))))));
                    }
                } 
            } 
            var_34 = ((/* implicit */_Bool) ((((/* implicit */int) arr_80 [i_12])) % (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_31 [i_18])) : (((/* implicit */int) arr_16 [i_18]))))));
        }
        var_35 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) < (-14412404)))), (max((((/* implicit */unsigned int) (unsigned short)63615)), (3994888940U)))))), (max((((/* implicit */unsigned long long int) arr_33 [7] [7] [i_12] [i_12])), (min((arr_81 [(signed char)8] [(signed char)8]), (((/* implicit */unsigned long long int) arr_20 [i_12] [i_12] [i_12] [i_12]))))))));
        var_36 -= ((/* implicit */unsigned int) (~(((((((/* implicit */int) var_12)) / (((/* implicit */int) arr_46 [i_12] [(unsigned char)20])))) % (((/* implicit */int) var_5))))));
    }
    for (signed char i_21 = 0; i_21 < 20; i_21 += 4) 
    {
        var_37 = ((/* implicit */short) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)25)));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_22 = 3; i_22 < 19; i_22 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_23 = 2; i_23 < 18; i_23 += 1) /* same iter space */
            {
                var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_81 [i_22] [i_22 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)229))) : (arr_81 [i_22] [i_22 + 1])));
                var_39 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) != ((-(((/* implicit */int) (unsigned char)229))))));
                arr_92 [i_22] [i_22] [i_23 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((signed char) 14412403))) : (arr_75 [i_22])));
            }
            for (unsigned short i_24 = 2; i_24 < 18; i_24 += 1) /* same iter space */
            {
                var_40 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_22 + 1]))))) >= (((/* implicit */int) arr_17 [i_22] [i_22 - 3] [i_24 - 1] [i_22] [(_Bool)1] [i_24]))));
                var_41 = ((/* implicit */unsigned char) (signed char)53);
                var_42 += ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-37))));
            }
            var_43 += ((/* implicit */int) (!(arr_91 [i_22 - 2] [i_22 + 1] [i_22 - 3])));
            var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_22 - 1] [i_22 - 3] [i_22 - 2])) ? (arr_10 [i_22 - 1] [i_22 - 2] [17ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_22 - 3] [i_22 - 3] [i_22 - 3] [i_22 - 3] [19ULL] [i_22 - 1])))));
        }
        for (unsigned short i_25 = 0; i_25 < 20; i_25 += 4) 
        {
            var_45 += (((((+((~(((/* implicit */int) var_10)))))) + (2147483647))) >> (((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) arr_64 [i_21] [i_21] [i_21] [(short)1])) - (((/* implicit */int) (unsigned char)96)))) : (((/* implicit */int) arr_88 [i_21] [i_21])))) - (53))));
            arr_98 [(unsigned char)7] [(unsigned char)7] [i_25] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
        }
        for (unsigned char i_26 = 0; i_26 < 20; i_26 += 3) 
        {
            arr_101 [i_21] [i_26] [i_21] = ((/* implicit */unsigned char) max(((!(((((/* implicit */_Bool) (unsigned short)54145)) && (((/* implicit */_Bool) var_7)))))), ((!(((((/* implicit */_Bool) arr_81 [i_26] [i_26])) || (((/* implicit */_Bool) arr_55 [i_21]))))))));
            arr_102 [6U] [i_26] = ((/* implicit */unsigned short) max((((((/* implicit */int) var_13)) % (((/* implicit */int) arr_95 [(unsigned short)2] [(unsigned short)2] [i_26])))), (((/* implicit */int) var_17))));
            var_46 *= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)12))))) ? (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) (signed char)60))))) : (((/* implicit */int) var_12))))));
            /* LoopSeq 1 */
            for (unsigned char i_27 = 0; i_27 < 20; i_27 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_28 = 0; i_28 < 20; i_28 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_29 = 0; i_29 < 20; i_29 += 4) 
                    {
                        arr_111 [i_21] [i_26] [i_27] [i_26] [i_29] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26896)) ? (((/* implicit */int) arr_103 [i_21] [i_26] [i_27] [i_28])) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) (signed char)53)) - (((/* implicit */int) arr_91 [i_26] [i_26] [i_26]))))));
                        arr_112 [(signed char)12] [i_28] [i_21] [i_26] [i_21] |= ((((/* implicit */_Bool) arr_79 [i_26] [i_27] [i_27])) ? (arr_53 [i_21] [i_27]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)39)) > (((/* implicit */int) (signed char)30)))))));
                        var_47 ^= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [(short)12] [(signed char)1]))) - ((-(9223372036854775790LL)))));
                    }
                    for (unsigned int i_30 = 0; i_30 < 20; i_30 += 2) 
                    {
                        arr_116 [i_26] [i_26] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (-7929655434690219781LL)));
                        var_48 = ((/* implicit */int) min((var_48), (((/* implicit */int) (!(((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_95 [i_21] [(unsigned char)1] [i_27])))))))));
                        var_49 -= (((+(((/* implicit */int) arr_25 [i_21] [i_21])))) < (((/* implicit */int) arr_74 [i_27] [i_30])));
                    }
                    for (unsigned long long int i_31 = 1; i_31 < 19; i_31 += 1) 
                    {
                        arr_119 [(unsigned char)19] [i_26] [i_27] [(unsigned char)1] [i_31] [14U] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-87)))));
                        var_50 = ((/* implicit */int) min((var_50), (((/* implicit */int) arr_59 [i_21] [16ULL] [i_31 + 1]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_32 = 0; i_32 < 20; i_32 += 4) 
                    {
                        arr_122 [i_32] [i_28] [i_28] [i_26] [i_27] [i_26] [(unsigned char)1] = ((/* implicit */int) ((unsigned short) arr_68 [i_32] [i_28] [i_26] [i_21]));
                        var_51 = ((/* implicit */unsigned char) (signed char)(-127 - 1));
                        arr_123 [i_26] [i_28] [i_27] [i_26] [i_26] = var_11;
                    }
                }
                /* LoopNest 2 */
                for (unsigned char i_33 = 0; i_33 < 20; i_33 += 4) 
                {
                    for (unsigned char i_34 = 2; i_34 < 17; i_34 += 3) 
                    {
                        {
                            var_52 = ((/* implicit */signed char) min(((~(((/* implicit */int) arr_47 [(unsigned char)8] [i_26] [i_26] [i_33] [i_34])))), ((~(((/* implicit */int) arr_107 [i_21] [i_26] [4] [i_26] [i_27] [i_34 + 2]))))));
                            arr_130 [i_21] [i_26] [13] [i_26] [(signed char)10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)9)) ? (((min((arr_100 [i_21] [i_21]), (((/* implicit */unsigned int) var_14)))) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                        }
                    } 
                } 
                var_53 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0))));
            }
            var_54 = ((/* implicit */unsigned char) max((var_54), (((/* implicit */unsigned char) arr_39 [i_26]))));
        }
        arr_131 [i_21] = ((/* implicit */short) var_17);
        var_55 = ((/* implicit */_Bool) min((var_55), (((/* implicit */_Bool) (-(min((-14412404), (((/* implicit */int) var_3)))))))));
    }
}
