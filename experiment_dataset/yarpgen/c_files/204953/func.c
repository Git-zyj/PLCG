/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204953
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
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) var_17);
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            var_19 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
            var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 1453386212)) ? (((/* implicit */int) arr_2 [i_0 - 1] [9LL] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_1])))) ^ (((/* implicit */int) arr_3 [i_0] [i_0]))));
            /* LoopSeq 2 */
            for (short i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                arr_8 [i_0] [i_1 + 2] [i_2] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 2] [i_0 + 2]))));
                var_21 = ((/* implicit */unsigned long long int) ((5051884104126023173LL) >= (((/* implicit */long long int) ((/* implicit */int) (short)-17)))));
                var_22 = ((/* implicit */unsigned long long int) ((unsigned char) 3493132537167896966ULL));
            }
            for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                arr_11 [i_0] [i_0] [i_3] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_3] [i_0])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 1])) ? (16463531654484976440ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_3] [i_3]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)64)) ? (arr_0 [i_1 - 1]) : (((/* implicit */int) var_14)))))));
                arr_12 [i_1] = ((/* implicit */unsigned long long int) var_14);
            }
        }
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)149))) : (6870125101573985658ULL)))) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [(unsigned char)16] [i_4] [(unsigned short)16])) > (((/* implicit */int) var_11))))) : (((/* implicit */int) arr_15 [i_0]))));
            /* LoopSeq 3 */
            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
            {
                var_24 ^= ((/* implicit */long long int) ((unsigned long long int) (unsigned short)11204));
                arr_18 [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_4] [i_5]);
                /* LoopSeq 2 */
                for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
                {
                    var_25 = ((/* implicit */int) (short)-17);
                    var_26 += (-(arr_1 [i_0 + 2]));
                    arr_21 [i_0 + 1] [i_0 + 1] [i_5] [i_6] = ((/* implicit */unsigned char) var_0);
                }
                for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (short i_8 = 1; i_8 < 22; i_8 += 3) 
                    {
                        var_27 += ((/* implicit */unsigned char) ((((((/* implicit */int) arr_2 [i_0] [1U] [i_0])) < (((/* implicit */int) var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */unsigned long long int) arr_9 [i_8 + 1] [i_5] [i_4] [i_0])) ^ (var_8)))));
                        var_28 -= ((/* implicit */unsigned char) (~(arr_0 [i_0])));
                    }
                    for (unsigned short i_9 = 2; i_9 < 23; i_9 += 1) /* same iter space */
                    {
                        arr_30 [i_0] [i_0] [i_0] [i_9] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (short)16)) ? (31U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_9] [i_4] [i_9])))));
                        arr_31 [7U] [i_0] [i_4] [i_5] [i_9] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-2))))) ? (((/* implicit */unsigned int) 1886643147)) : (((((/* implicit */_Bool) arr_25 [i_9 - 2] [i_7] [i_5] [i_4] [i_4] [i_0] [i_0])) ? (((/* implicit */unsigned int) arr_19 [i_0] [i_4] [i_5])) : (arr_1 [i_7])))));
                    }
                    for (unsigned short i_10 = 2; i_10 < 23; i_10 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) >> (((/* implicit */int) arr_4 [i_10] [i_10 - 1] [i_0 - 1]))));
                        arr_34 [i_0] [i_7] [i_10] [(short)14] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [21] [i_10] [i_0])) ? ((~(((/* implicit */int) arr_17 [15ULL])))) : (((((/* implicit */_Bool) 613723337U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_16))))));
                    }
                    /* LoopSeq 1 */
                    for (short i_11 = 1; i_11 < 20; i_11 += 4) 
                    {
                        var_30 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (1886643156) : (((/* implicit */int) arr_36 [i_5] [i_11]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_1 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11204)))))));
                        arr_37 [i_0] [(unsigned short)18] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) > (11046479115233317973ULL)));
                        var_31 = ((/* implicit */signed char) ((arr_1 [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                    }
                    var_32 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_15 [i_5])) - (((/* implicit */int) (unsigned char)130))));
                    arr_38 [i_0 + 1] = ((/* implicit */unsigned short) ((3181305688U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_9 [17ULL] [i_4] [18ULL] [i_7]) : (arr_0 [i_0 + 2])))) : (var_12)));
                }
                var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (-55925302)))) ? (((int) (unsigned short)63372)) : (var_9))))));
                var_35 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_23 [(short)0] [(short)0])))) ? (((/* implicit */int) ((unsigned char) arr_26 [i_5] [i_0]))) : ((-(((/* implicit */int) (_Bool)1))))));
            }
            for (unsigned char i_12 = 0; i_12 < 24; i_12 += 3) /* same iter space */
            {
                arr_41 [i_12] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2146635640975921296ULL))));
                var_36 = ((unsigned char) (unsigned char)205);
            }
            for (unsigned char i_13 = 0; i_13 < 24; i_13 += 3) /* same iter space */
            {
                var_37 ^= ((/* implicit */unsigned long long int) arr_0 [i_0 + 1]);
                var_38 &= ((/* implicit */int) ((((/* implicit */_Bool) 32767LL)) ? (4754349564923309373ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251)))));
                arr_46 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_39 [i_0 + 2] [(signed char)22]))));
                /* LoopSeq 2 */
                for (short i_14 = 0; i_14 < 24; i_14 += 3) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_15 = 4; i_15 < 22; i_15 += 1) 
                    {
                        var_39 = ((/* implicit */unsigned int) ((((var_9) > (((/* implicit */int) (short)-31159)))) || (((/* implicit */_Bool) arr_42 [i_0 - 1] [i_15 - 2] [i_0 - 1] [i_0 - 1]))));
                        var_40 = ((/* implicit */unsigned short) ((arr_49 [1U] [i_4] [i_13] [1U]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)57)))) : (var_13)));
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 1) /* same iter space */
                    {
                        arr_56 [i_16] [i_14] [i_13] [i_16] = (((!(((/* implicit */_Bool) arr_15 [i_16])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_16] [i_16] [i_16] [i_14])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_3))))));
                        arr_57 [i_0] [i_0] [i_4] [i_0] [i_13] [i_16] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1]))) : (3179989604759095936LL)));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 1) /* same iter space */
                    {
                        arr_60 [i_0 - 1] [i_0 - 1] [i_4] [i_13] [i_4] [i_17] = ((/* implicit */_Bool) ((unsigned long long int) arr_29 [i_17] [(unsigned short)22] [i_4]));
                        var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (6870125101573985658ULL)))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (arr_39 [(short)2] [14U]))) : (((/* implicit */int) (unsigned char)193))));
                        arr_61 [(unsigned char)2] [i_4] = ((/* implicit */unsigned long long int) (+((-(3672501610U)))));
                        var_42 = ((/* implicit */unsigned short) (short)-2);
                    }
                    var_43 = ((/* implicit */unsigned long long int) arr_1 [i_0 - 1]);
                    var_44 *= ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)57))) ^ (6870125101573985684ULL)))));
                    arr_62 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16)) ? (-1) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_13]))))) ? (2849608555U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (arr_1 [i_14])))))));
                    var_45 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 613723337U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) 3924331463U)) : (13624568609209094539ULL)));
                }
                for (unsigned long long int i_18 = 4; i_18 < 21; i_18 += 4) 
                {
                    var_46 = ((/* implicit */unsigned int) var_12);
                    var_47 -= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-17))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) 67108352)) && (((/* implicit */_Bool) (unsigned char)193)))))));
                    var_48 = ((/* implicit */short) ((_Bool) -67108352));
                    arr_66 [i_0] [i_0] [i_0] [i_0 + 2] = (!(((/* implicit */_Bool) (+(var_8)))));
                }
            }
            var_49 = ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))) | (((/* implicit */unsigned long long int) 3014088211U))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 1) 
        {
            var_50 = ((/* implicit */long long int) arr_10 [i_0] [i_0] [(short)8] [12]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_21 = 0; i_21 < 24; i_21 += 1) 
                {
                    for (int i_22 = 0; i_22 < 24; i_22 += 1) 
                    {
                        {
                            var_51 ^= var_10;
                            var_52 ^= ((/* implicit */unsigned char) var_9);
                        }
                    } 
                } 
                var_53 = ((((31774080) - (((/* implicit */int) (signed char)113)))) - (arr_19 [i_0 + 1] [i_0 + 2] [i_0 + 2]));
                arr_78 [i_19] [i_19] [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)91)) != (((/* implicit */int) (unsigned char)53))))) : (((/* implicit */int) (short)-16))));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_23 = 0; i_23 < 24; i_23 += 3) 
            {
                var_54 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [13ULL] [3ULL] [i_0 - 1] [i_0 + 2]))) - (((((/* implicit */_Bool) (short)-31159)) ? (arr_16 [(unsigned char)18] [(unsigned char)18] [(unsigned char)18]) : (var_13)))));
                /* LoopSeq 1 */
                for (unsigned short i_24 = 0; i_24 < 24; i_24 += 1) 
                {
                    arr_83 [i_19] [i_19] [i_19] [i_19] = ((/* implicit */_Bool) (unsigned char)187);
                    arr_84 [i_19] [i_19] [i_19] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_63 [(unsigned short)4] [i_0 + 2] [i_0 + 1] [i_0] [(unsigned char)8] [i_0 + 2]))));
                    arr_85 [i_24] [i_19] [i_19] [i_0] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_59 [i_24] [i_24] [(_Bool)1] [(unsigned char)21] [i_24] [i_24])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (arr_51 [(signed char)2] [i_0 - 1] [i_0 - 1] [6ULL] [i_24]))));
                }
                var_55 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) ? (370635832U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128)))));
            }
        }
    }
    var_56 = var_8;
}
