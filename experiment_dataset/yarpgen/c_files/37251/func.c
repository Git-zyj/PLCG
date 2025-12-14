/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37251
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_0 [i_0]) >> (((arr_0 [i_0]) - (1057938123U))))))));
        var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 - 1])) || ((_Bool)1)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned long long int) min((((signed char) min((arr_7 [i_1] [i_1]), (arr_7 [i_1] [i_1])))), (((/* implicit */signed char) ((((arr_5 [i_1] [i_1]) % (((/* implicit */long long int) ((/* implicit */int) arr_6 [(_Bool)1]))))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) (short)31)))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) ((70368743653376ULL) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_2])) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (unsigned short)12178)))))));
            var_21 = ((/* implicit */short) arr_9 [i_1] [i_2] [i_2]);
            /* LoopSeq 1 */
            for (signed char i_3 = 1; i_3 < 22; i_3 += 1) 
            {
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_13 [i_1] [(signed char)7])) ? (((/* implicit */int) arr_6 [5LL])) : (((/* implicit */int) (unsigned char)76)))))))));
                var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [i_2] [i_1])))))));
            }
            arr_14 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((int) ((int) arr_10 [i_1] [i_2])));
            /* LoopSeq 3 */
            for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                arr_18 [i_2] = ((/* implicit */short) (((+(((/* implicit */int) arr_7 [i_1] [i_4])))) % (((((/* implicit */int) arr_7 [i_1] [i_2])) + (((/* implicit */int) var_6))))));
                arr_19 [i_2] [i_2] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_2] [i_1])) ? (arr_5 [i_1] [i_2]) : (arr_5 [i_2] [i_4])));
            }
            for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6721)) ? (((/* implicit */int) arr_15 [i_2])) : (((/* implicit */int) arr_7 [i_1] [i_1])))))));
                var_25 = ((/* implicit */_Bool) arr_5 [i_2] [i_1]);
                var_26 = ((/* implicit */short) (+(((int) arr_20 [7ULL] [i_2] [i_1]))));
            }
            for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 1) 
            {
                arr_26 [i_2] [11LL] [8LL] [i_2] = ((/* implicit */unsigned char) (short)6714);
                /* LoopSeq 3 */
                for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    arr_30 [i_1] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_2] [i_6 + 1] [i_2]))));
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        var_27 = ((/* implicit */signed char) ((arr_11 [i_8] [i_6 - 1] [i_6 - 1]) ? (((/* implicit */int) arr_11 [i_7] [i_6 + 2] [i_6 + 3])) : (((/* implicit */int) arr_11 [i_7] [i_6 + 1] [i_6 + 1]))));
                        arr_33 [i_1] [i_2] [i_2] [i_7] [i_2] = ((var_16) - (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_7]))));
                        arr_34 [i_1] [i_2] [(short)12] [i_7] [i_8] = ((/* implicit */unsigned short) arr_31 [i_1] [i_1] [i_6] [(signed char)22] [i_7] [i_2]);
                        arr_35 [i_1] [i_2] [i_6] [i_6] [i_8] = ((/* implicit */unsigned long long int) arr_22 [(signed char)9] [i_2]);
                        var_28 &= ((((/* implicit */_Bool) arr_9 [i_1] [i_7] [i_8])) ? (((/* implicit */int) arr_12 [i_6] [i_6 + 2] [i_6 + 2])) : (((((/* implicit */_Bool) (short)31142)) ? (((/* implicit */int) arr_27 [i_1] [i_2] [i_1])) : (((/* implicit */int) (signed char)127)))));
                    }
                    for (unsigned long long int i_9 = 1; i_9 < 22; i_9 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)53))))) < (((/* implicit */int) ((short) var_18))))))));
                        arr_39 [i_2] [i_2] [i_6 - 1] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_9] [i_6 + 3] [i_6 + 3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_28 [i_9] [i_7] [i_6 + 2]))));
                        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (+(((/* implicit */int) (short)6725)))))));
                        var_31 = ((/* implicit */signed char) ((((/* implicit */long long int) ((var_18) ? (((/* implicit */int) (short)-20001)) : (((/* implicit */int) var_5))))) != (arr_22 [i_2] [i_2])));
                    }
                    var_32 = ((/* implicit */_Bool) ((short) arr_25 [i_6 + 1] [i_6] [i_6 + 3]));
                    arr_40 [i_2] [i_6] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (signed char)-127);
                }
                for (unsigned short i_10 = 0; i_10 < 24; i_10 += 1) /* same iter space */
                {
                    arr_44 [i_2] [i_2] [17LL] [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)197))) % (14680064LL)));
                    var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((unsigned short) 17163091968LL)))));
                }
                for (unsigned short i_11 = 0; i_11 < 24; i_11 += 1) /* same iter space */
                {
                    arr_47 [i_1] [i_2] [i_2] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_2])) ? (((/* implicit */int) arr_15 [i_2])) : (((/* implicit */int) arr_15 [i_2]))));
                    /* LoopSeq 3 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_50 [i_1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (short)-20001)) + (((/* implicit */int) (_Bool)1))));
                        var_34 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_1] [i_2]))))) <= (((/* implicit */int) arr_48 [(short)2] [i_2] [i_6 + 3] [i_2] [(unsigned char)17]))));
                        arr_51 [i_1] [i_2] [i_2] [i_2] [i_12] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_17 [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2]))) : (arr_36 [i_1] [i_1] [i_2] [i_1]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_1] [i_2] [i_2] [i_11] [i_6 - 1])))));
                        arr_52 [i_1] [i_1] [i_1] [(short)17] [i_2] [i_1] = ((signed char) ((((/* implicit */int) (signed char)-50)) > (((/* implicit */int) (unsigned short)49774))));
                    }
                    for (signed char i_13 = 0; i_13 < 24; i_13 += 1) 
                    {
                        arr_55 [i_2] [i_2] [i_2] [i_2] [i_2] [i_13] [(signed char)0] = ((/* implicit */unsigned long long int) ((arr_32 [i_1] [i_2] [i_2] [i_6 - 1] [i_13]) || (arr_32 [(signed char)16] [i_2] [i_2] [i_6 + 3] [(signed char)16])));
                        var_35 &= ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_17))) / (arr_25 [i_1] [i_1] [i_1]))) == (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_45 [i_1] [i_2] [i_1] [(_Bool)1] [i_13] [i_11]))))));
                    }
                    for (int i_14 = 0; i_14 < 24; i_14 += 2) 
                    {
                        var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) (!(arr_11 [i_6] [i_6 + 1] [i_2]))))));
                        var_37 = ((/* implicit */int) ((long long int) (+(arr_22 [i_6] [i_2]))));
                        var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) arr_43 [(unsigned char)8] [i_1] [i_6] [i_1] [i_2] [i_1]))));
                    }
                }
            }
        }
    }
    /* LoopSeq 1 */
    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_16 = 0; i_16 < 16; i_16 += 2) 
        {
            for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
            {
                {
                    arr_68 [0] [i_16] [i_16] &= ((/* implicit */_Bool) min(((+(((((/* implicit */int) (short)-32765)) - (((/* implicit */int) (signed char)13)))))), (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) -480314946)) || (((/* implicit */_Bool) arr_41 [i_15] [i_15] [i_15 + 1] [(unsigned short)9]))))), (((unsigned char) (signed char)-19)))))));
                    arr_69 [i_17] [i_15] [i_15] = ((/* implicit */short) arr_63 [i_16]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_18 = 0; i_18 < 16; i_18 += 4) /* same iter space */
                    {
                        var_39 = ((/* implicit */short) ((unsigned char) arr_43 [i_16] [i_16] [i_17 - 1] [i_17 - 1] [i_16] [i_15]));
                        arr_73 [i_15] [i_15] [i_16] [i_18] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_58 [i_15] [i_18] [i_15] [i_18] [i_18])) ? (((/* implicit */unsigned long long int) -36965125)) : (5716000947812742013ULL)));
                    }
                    for (unsigned int i_19 = 0; i_19 < 16; i_19 += 4) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (short i_20 = 1; i_20 < 15; i_20 += 4) 
                        {
                            var_40 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) min((arr_28 [i_15] [(unsigned char)1] [i_20]), (((/* implicit */unsigned char) arr_27 [i_15] [i_15] [8U]))))))));
                            var_41 = (!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)54)) || (((/* implicit */_Bool) 1654093488U)))))))));
                            arr_80 [i_15] [i_16] [i_17] [i_17] [i_19] [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [10U] [i_16] [i_17] [i_19] [i_15]))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) (short)-23450))))), ((-(arr_36 [i_15] [i_16] [i_15] [i_20])))))));
                            var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) arr_7 [i_15 + 1] [i_15 + 1]))));
                            var_43 = ((/* implicit */int) ((arr_64 [i_17] [i_19]) ? (((/* implicit */unsigned long long int) arr_61 [i_15])) : (((unsigned long long int) ((short) arr_7 [i_20] [i_19])))));
                        }
                        /* vectorizable */
                        for (unsigned char i_21 = 0; i_21 < 16; i_21 += 4) /* same iter space */
                        {
                            arr_83 [i_15] [i_16] [i_17] [i_15] [i_15] = ((/* implicit */signed char) (((!(var_3))) ? (((((/* implicit */_Bool) arr_76 [i_15] [i_16] [i_15] [i_15] [(unsigned short)7] [i_21])) ? (arr_62 [i_15] [i_16] [i_17]) : (((/* implicit */int) arr_49 [i_15] [i_15] [i_16] [i_16] [i_17] [18ULL] [i_21])))) : (var_10)));
                            var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_17 - 1] [i_15 + 1])) ? (arr_45 [i_15 + 1] [i_15] [i_15] [i_15 + 1] [i_17 - 1] [i_15]) : (arr_45 [i_15 + 1] [i_15 + 1] [(short)13] [i_15 + 1] [i_17 - 1] [i_15 + 1])));
                            var_45 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_15 + 1] [i_16])) ? (((((/* implicit */_Bool) arr_58 [i_21] [i_19] [20LL] [i_19] [i_15 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_53 [(short)22] [i_21] [(short)4] [i_15 + 1] [i_21] [i_15 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
                            var_46 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)93)) ? (((/* implicit */int) arr_48 [i_15] [i_16] [i_17 - 1] [i_15] [i_15])) : (((/* implicit */int) arr_17 [i_19] [i_16])))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_22 = 0; i_22 < 16; i_22 += 4) /* same iter space */
                        {
                            var_47 -= ((/* implicit */signed char) (!(arr_64 [i_17 - 1] [i_17 - 1])));
                            var_48 = ((/* implicit */unsigned short) (((+(arr_36 [i_19] [i_15] [i_15] [i_15 + 1]))) * (var_14)));
                            var_49 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_78 [i_17] [i_17 - 1] [i_17] [i_17] [i_17])) & (((/* implicit */int) arr_78 [i_16] [i_17 - 1] [i_16] [i_22] [i_17 - 1]))));
                        }
                        for (unsigned char i_23 = 0; i_23 < 16; i_23 += 4) /* same iter space */
                        {
                            arr_90 [i_15] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_15 + 1])))))));
                            var_50 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_79 [i_15 + 1] [i_16] [i_15 + 1] [i_19] [i_23])))))) < (((unsigned long long int) max((var_2), (((/* implicit */unsigned short) arr_32 [i_15] [i_16] [i_23] [i_19] [i_23])))))));
                        }
                        var_51 = ((/* implicit */int) (!((!(((/* implicit */_Bool) 1393821924))))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_24 = 0; i_24 < 16; i_24 += 4) 
                    {
                        arr_94 [(short)12] [i_15] [(short)12] [(signed char)8] = ((/* implicit */unsigned long long int) arr_25 [i_15] [i_16] [i_17]);
                        arr_95 [i_16] [(signed char)15] [i_15] = ((/* implicit */_Bool) arr_22 [(short)9] [i_15]);
                        var_52 = ((/* implicit */signed char) min((var_52), (((/* implicit */signed char) ((((/* implicit */int) var_13)) < (((/* implicit */int) arr_15 [i_24])))))));
                    }
                    for (unsigned short i_25 = 0; i_25 < 16; i_25 += 1) 
                    {
                        var_53 = ((/* implicit */signed char) (((!(arr_31 [i_15 + 1] [(_Bool)1] [(_Bool)1] [i_17 - 1] [i_25] [i_15]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_15] [i_16] [i_16] [i_17 - 1] [3U] [i_15]))) : (((-6544858940781458003LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)63)))))));
                        arr_98 [(short)2] [i_15] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_16 [i_17] [i_17] [i_16] [i_15]))))));
                    }
                }
            } 
        } 
        arr_99 [i_15] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-7)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_88 [i_15] [(unsigned short)11] [i_15]))))))))));
    }
    var_54 = ((/* implicit */short) max((var_54), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? ((+(var_9))) : ((+(((/* implicit */int) var_3))))))) ? (var_14) : (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_13)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) var_3))))))))))));
    var_55 = ((/* implicit */unsigned int) max((var_55), (((/* implicit */unsigned int) ((_Bool) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11))))))))));
}
