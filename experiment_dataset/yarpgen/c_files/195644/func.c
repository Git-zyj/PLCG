/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195644
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */int) var_15);
                            arr_12 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3665445399U)) ? (((/* implicit */int) (short)-21489)) : (((/* implicit */int) (signed char)-51))));
                        }
                    } 
                } 
                arr_13 [i_0] [6LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967272U)) ? (((/* implicit */int) (short)-512)) : (((/* implicit */int) (short)32764))));
                var_21 = ((/* implicit */unsigned int) ((long long int) arr_5 [i_0] [i_1] [i_1]));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) min((var_22), (var_10)));
        var_23 = ((/* implicit */unsigned int) var_4);
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                var_24 -= (short)17633;
                arr_21 [i_4] [i_5] [i_6] = ((/* implicit */long long int) (short)17620);
                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) var_2))));
                var_26 += ((/* implicit */unsigned long long int) ((arr_15 [i_4] [i_5]) ? (((/* implicit */int) arr_15 [i_4] [i_6])) : (((/* implicit */int) arr_19 [i_6]))));
            }
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                for (long long int i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    {
                        var_27 ^= ((/* implicit */_Bool) ((((((/* implicit */int) (short)-17633)) + (2147483647))) >> (((var_0) - (915472436U)))));
                        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) arr_18 [i_4]))));
                    }
                } 
            } 
            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) arr_23 [i_4]))));
        }
        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 2) 
        {
            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) var_16))));
            var_31 -= ((/* implicit */unsigned int) arr_14 [7ULL]);
            /* LoopNest 2 */
            for (unsigned int i_10 = 1; i_10 < 21; i_10 += 2) 
            {
                for (long long int i_11 = 0; i_11 < 24; i_11 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 24; i_12 += 2) 
                        {
                            arr_37 [i_10] = ((/* implicit */unsigned long long int) -1751681376895403833LL);
                            arr_38 [i_10] = arr_22 [i_4] [i_4];
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((signed char) arr_22 [20ULL] [i_9])))));
                        }
                        var_33 = ((/* implicit */_Bool) (-(((((((/* implicit */_Bool) -1751681376895403841LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7925))) : (4294967287U))) / (((arr_20 [i_4] [i_9] [i_9] [i_4]) * (2648934417U)))))));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (unsigned char i_13 = 0; i_13 < 24; i_13 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 3) /* same iter space */
            {
                var_34 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_13] [i_13] [i_4] [i_4])) ? (((arr_32 [i_4] [(signed char)21]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_4] [i_4]))) : (2648934412U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4] [i_4] [i_4])))));
                arr_43 [(signed char)16] [i_4] [i_4] &= ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_17 [i_4] [i_13] [i_4])) : (((/* implicit */int) arr_14 [i_4]))));
            }
            for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 3) /* same iter space */
            {
                arr_46 [i_4] [i_4] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_33 [i_4] [i_4] [i_4] [(short)23])) ? (arr_33 [i_15] [i_13] [i_13] [i_4]) : (arr_33 [(unsigned char)0] [i_4] [i_13] [i_4]))) - (((/* implicit */unsigned long long int) (-(var_17))))));
                arr_47 [i_4] [11U] [11U] = ((/* implicit */signed char) arr_18 [i_4]);
                /* LoopSeq 2 */
                for (signed char i_16 = 0; i_16 < 24; i_16 += 2) 
                {
                    arr_50 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_44 [i_4] [4ULL] [4ULL] [(short)6]);
                    var_35 = ((/* implicit */signed char) var_11);
                    var_36 = ((/* implicit */short) ((((/* implicit */_Bool) arr_44 [i_13] [i_15] [i_13] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_44 [i_16] [i_15] [i_4] [i_4]), (arr_44 [i_4] [i_4] [i_4] [i_4]))))) : (min((((/* implicit */long long int) arr_44 [(_Bool)1] [19LL] [i_15] [i_16])), (var_16)))));
                    arr_51 [(unsigned short)8] [5ULL] [(unsigned short)8] [5ULL] [(unsigned short)8] [5ULL] = ((/* implicit */unsigned int) arr_30 [i_4] [i_13] [i_15] [16LL]);
                    var_37 = ((/* implicit */int) var_0);
                }
                for (long long int i_17 = 0; i_17 < 24; i_17 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_18 = 0; i_18 < 24; i_18 += 2) 
                    {
                        arr_56 [i_15] [i_15] [i_15] [i_4] [i_4] = ((/* implicit */short) var_11);
                        arr_57 [i_4] [i_13] [i_13] = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (var_11)))))));
                        var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_16 [i_4] [i_15] [i_17])), (((((/* implicit */int) (unsigned short)36458)) + (((/* implicit */int) arr_35 [(signed char)21] [i_17] [i_15] [i_13] [i_4]))))))) ? (((/* implicit */unsigned long long int) arr_18 [i_4])) : (var_7)));
                    }
                    for (long long int i_19 = 0; i_19 < 24; i_19 += 3) 
                    {
                        arr_60 [7LL] [i_19] [i_19] [i_19] [i_4] = ((/* implicit */signed char) ((arr_14 [i_19]) ? (var_19) : (((/* implicit */long long int) (~(((/* implicit */int) (short)13347)))))));
                        var_39 += ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) 4294967272U)) ? (14U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)190)))))), (min((arr_28 [18LL]), (((/* implicit */long long int) 1214900067))))));
                        var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) arr_30 [i_4] [(signed char)11] [i_15] [i_17]))));
                        var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (var_0))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8745)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_4] [i_17] [i_13] [i_13] [i_4]))) | (var_7))))))));
                    }
                    var_42 ^= ((/* implicit */unsigned char) min((((/* implicit */long long int) (_Bool)1)), (1751681376895403835LL)));
                }
            }
            /* LoopSeq 3 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
            {
                var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_4] [i_4] [i_4] [i_20] [i_20])) ? (((/* implicit */int) arr_36 [i_4] [i_4] [i_20] [i_20] [i_4])) : (((/* implicit */int) arr_34 [i_13] [i_13] [i_13] [i_13] [i_13]))))) ? (((/* implicit */int) ((short) arr_36 [i_4] [i_4] [i_4] [i_4] [i_4]))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)7948))))));
                var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) var_6))));
            }
            /* vectorizable */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
            {
                var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1612556065)) || (((/* implicit */_Bool) (signed char)2))));
                var_46 ^= ((/* implicit */signed char) arr_65 [i_4] [i_4] [i_21]);
                var_47 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_26 [i_4] [i_13])) ^ (((/* implicit */int) arr_26 [i_4] [i_21]))));
                /* LoopSeq 1 */
                for (long long int i_22 = 0; i_22 < 24; i_22 += 2) 
                {
                    var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) (~(((/* implicit */int) arr_31 [i_22] [i_21] [i_4] [i_4])))))));
                    arr_70 [i_4] [5U] [i_21] [i_22] [i_22] = ((/* implicit */short) arr_66 [23LL] [23LL] [i_22] [i_22]);
                }
            }
            /* vectorizable */
            for (unsigned short i_23 = 0; i_23 < 24; i_23 += 3) 
            {
                arr_73 [i_4] [i_4] [i_23] = ((/* implicit */long long int) arr_59 [i_4] [i_13] [i_4] [i_4] [i_23] [i_4]);
                var_49 = ((/* implicit */signed char) var_10);
            }
            var_50 = ((/* implicit */unsigned int) max((var_50), (((/* implicit */unsigned int) min((((/* implicit */signed char) arr_66 [i_4] [i_4] [(unsigned char)0] [i_13])), (var_4))))));
            /* LoopSeq 3 */
            for (signed char i_24 = 0; i_24 < 24; i_24 += 1) 
            {
                var_51 -= ((/* implicit */unsigned char) (short)18214);
                arr_76 [8LL] = arr_28 [i_13];
            }
            /* vectorizable */
            for (unsigned char i_25 = 0; i_25 < 24; i_25 += 3) 
            {
                arr_80 [i_25] [i_25] [i_13] [i_25] = ((/* implicit */long long int) arr_31 [i_4] [i_4] [i_13] [i_25]);
                arr_81 [i_4] [i_4] [12U] [i_13] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_27 [i_13]))));
                arr_82 [i_25] [i_25] [(unsigned char)5] = ((/* implicit */int) arr_53 [i_4] [8LL] [i_4]);
            }
            /* vectorizable */
            for (signed char i_26 = 0; i_26 < 24; i_26 += 1) 
            {
                var_52 = ((/* implicit */long long int) min((var_52), (((/* implicit */long long int) var_11))));
                /* LoopNest 2 */
                for (long long int i_27 = 0; i_27 < 24; i_27 += 3) 
                {
                    for (unsigned char i_28 = 0; i_28 < 24; i_28 += 3) 
                    {
                        {
                            var_53 = ((/* implicit */_Bool) arr_16 [i_13] [i_13] [i_13]);
                            var_54 = ((/* implicit */signed char) arr_54 [(signed char)2] [8LL] [(signed char)2] [i_13] [(signed char)2]);
                            var_55 *= ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) arr_49 [i_28] [4LL] [i_4] [i_4])))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_29 = 0; i_29 < 24; i_29 += 3) 
                {
                    arr_94 [i_29] [i_29] = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)7895))))) : (((/* implicit */int) (signed char)-3)));
                    /* LoopSeq 1 */
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        arr_99 [i_4] [i_13] [i_26] [i_29] = var_10;
                        var_56 = ((/* implicit */short) min((var_56), (((/* implicit */short) ((((/* implicit */_Bool) arr_25 [13U] [i_29] [i_26] [i_13])) ? (((/* implicit */int) arr_42 [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_95 [21U] [21U] [21U] [i_26] [i_26] [i_26] [(unsigned short)20])))))));
                    }
                }
            }
            arr_100 [i_13] [i_4] [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((((/* implicit */int) arr_58 [i_13] [i_13] [i_4] [i_4] [i_13] [i_4])) + (2147483647))) >> (((arr_68 [i_13] [i_13] [i_4] [i_4]) - (5828725343906385408LL)))))) | (((1751681376895403828LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-4)))))))) ? (((/* implicit */unsigned long long int) arr_75 [i_4] [i_4] [i_4] [i_4])) : (var_1)));
        }
        var_57 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1751681376895403833LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)116))) : (334570061U)));
    }
}
