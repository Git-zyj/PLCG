/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219693
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
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_2 [i_0 + 1]) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))));
        var_16 -= ((/* implicit */_Bool) arr_0 [(short)0] [i_0]);
    }
    /* LoopSeq 2 */
    for (long long int i_1 = 1; i_1 < 19; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 3) 
                        {
                            var_17 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)57)))))));
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_1 + 1] [i_1 + 1] [i_3] [i_3] [i_1 + 1]))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_4 + 1])))))));
                            arr_17 [i_1 - 1] [i_2] [i_3] [i_2] [i_2] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) var_2)) < (((/* implicit */int) arr_5 [i_1]))))), (min((((/* implicit */short) arr_4 [i_3])), (var_14))))))) & (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5]))) / (18446744073709551604ULL))) >> (((min((710262316687508892ULL), (((/* implicit */unsigned long long int) var_14)))) - (710262316687508887ULL)))))));
                            arr_18 [i_2] &= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_5 [i_1])) < (((/* implicit */int) arr_12 [i_1] [i_1] [i_4] [i_1])))))));
                            var_19 += ((/* implicit */signed char) (-(min(((~(((/* implicit */int) (unsigned short)50848)))), (((((/* implicit */int) (unsigned char)108)) | (arr_14 [i_1] [14] [i_3] [i_3])))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            arr_21 [i_1] [i_3] = (i_3 % 2 == zero) ? (((/* implicit */short) (((-(((/* implicit */int) arr_12 [i_1 + 1] [i_2] [i_3 - 1] [i_4 + 1])))) / (((/* implicit */int) ((((((/* implicit */int) var_10)) >> (((arr_10 [i_1 + 1] [i_1 + 1] [i_3] [i_4 + 1]) - (14847430153592582245ULL))))) < (((/* implicit */int) arr_12 [i_1 - 1] [i_3 - 1] [i_4 + 1] [i_6 + 1])))))))) : (((/* implicit */short) (((-(((/* implicit */int) arr_12 [i_1 + 1] [i_2] [i_3 - 1] [i_4 + 1])))) / (((/* implicit */int) ((((((/* implicit */int) var_10)) >> (((((arr_10 [i_1 + 1] [i_1 + 1] [i_3] [i_4 + 1]) - (14847430153592582245ULL))) - (12961803404314243194ULL))))) < (((/* implicit */int) arr_12 [i_1 - 1] [i_3 - 1] [i_4 + 1] [i_6 + 1]))))))));
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((unsigned long long int) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_19 [i_2] [i_4] [i_4] [i_3] [i_3 - 1] [i_1 - 1] [i_2])), ((unsigned short)50830))))))))));
                        }
                        var_21 -= ((/* implicit */_Bool) (~(var_13)));
                    }
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_8 = 1; i_8 < 18; i_8 += 4) 
                        {
                            arr_27 [i_2] |= ((/* implicit */unsigned int) min(((~(arr_23 [i_2] [i_7 + 1] [i_3 - 1] [i_2]))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) max((var_8), (((/* implicit */unsigned short) arr_12 [i_1] [i_1] [i_1] [i_1])))))) : (((((/* implicit */_Bool) (unsigned short)3520)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_5)))))));
                            arr_28 [i_1] [i_1] [i_3] [i_3] [i_3] = ((/* implicit */short) min((((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_19 [i_1] [i_1] [i_2] [7LL] [i_7] [i_7] [i_3]))))))), (min((var_6), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)58))))))));
                            var_22 = ((/* implicit */short) min((((/* implicit */int) (unsigned char)127)), ((-(((/* implicit */int) arr_11 [i_3] [i_2] [i_7 + 1] [i_1 - 1]))))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            arr_33 [3ULL] [i_3] [i_3] [i_7] [6LL] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 7926541263955427872LL)) ? (3554209224U) : (1712963343U))) & (((/* implicit */unsigned int) ((arr_14 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) * (((/* implicit */int) arr_25 [i_1 - 1])))))));
                            arr_34 [i_3] [i_7 + 1] [i_3] [i_2] [i_3] = ((/* implicit */short) var_13);
                            arr_35 [i_1] [i_2] [i_9] [i_3] [i_9] [i_2] = ((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_11))) / (740758063U)))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 2) /* same iter space */
                        {
                            arr_40 [i_3] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (~(2390858708U)))), (((((/* implicit */_Bool) arr_20 [11U] [i_2] [i_3] [i_3] [i_10])) ? (arr_20 [i_7 + 1] [i_7] [i_3] [i_3] [i_10]) : (arr_20 [i_1] [i_2] [i_7] [i_3] [i_10])))));
                            var_23 = ((/* implicit */signed char) (-((~(((var_3) / (((/* implicit */int) arr_12 [i_2] [i_3] [i_2] [i_3]))))))));
                            var_24 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_10] [i_7] [i_3 - 1] [i_1]))))), (((max((7926541263955427879LL), (arr_3 [i_1]))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_1]))) != (16368954824465192152ULL)))))))));
                            var_25 = ((/* implicit */signed char) (+(((/* implicit */int) arr_5 [i_3 - 1]))));
                        }
                        /* vectorizable */
                        for (unsigned int i_11 = 0; i_11 < 20; i_11 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)))))));
                            var_27 -= ((/* implicit */unsigned int) arr_6 [i_2] [i_7] [(unsigned char)7]);
                            arr_45 [i_1] [i_2] [i_3] [i_1] [i_3] = ((/* implicit */unsigned char) var_11);
                            var_28 = ((/* implicit */_Bool) min((var_28), ((!(((/* implicit */_Bool) 5884594249323936432LL))))));
                            arr_46 [i_11] [i_1 - 1] [i_2] [i_2] [i_1 - 1] [i_1 - 1] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) / (arr_0 [i_11] [i_7 + 1])));
                        }
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) 15214497266679346024ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [0LL]))))) * ((~(var_6))))))))));
                    }
                    var_30 ^= ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) 710262316687508892ULL))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_26 [i_1 - 1] [i_2] [i_3] [i_3] [i_1 - 1] [i_1] [i_3]))))));
                    arr_47 [i_3] [i_1] [(unsigned char)14] [(unsigned char)14] = ((/* implicit */unsigned char) (-(min((arr_10 [i_1] [i_1 + 1] [i_3] [i_3]), (arr_10 [0ULL] [i_1 + 1] [i_3] [i_1 + 1])))));
                    var_31 = ((/* implicit */_Bool) max((var_31), (((((/* implicit */unsigned long long int) min((min((arr_20 [i_1] [i_1] [i_1 - 1] [i_2] [i_1 - 1]), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (arr_38 [i_1] [i_1] [i_1] [i_1] [i_1]))))))) >= (min((((/* implicit */unsigned long long int) -54674308)), (3232246807030205583ULL)))))));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned int i_12 = 2; i_12 < 19; i_12 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 2; i_14 < 18; i_14 += 3) 
                {
                    for (short i_15 = 3; i_15 < 18; i_15 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) min((min((((/* implicit */long long int) arr_44 [i_15] [i_15 + 2] [i_15] [i_15] [(short)2] [i_15 - 2] [(short)2])), (var_12))), (((/* implicit */long long int) max((arr_44 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15 - 2] [i_15]), (arr_44 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15 + 1] [i_15 + 1])))))))));
                            var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_15 + 1]))))) ? ((-(((/* implicit */int) arr_29 [i_1] [16ULL] [i_1] [i_1] [i_1 - 1] [i_1] [i_1 + 1])))) : (((/* implicit */int) arr_39 [(unsigned short)0] [i_12 - 2] [i_13])))))));
                        }
                    } 
                } 
                arr_57 [i_1] [i_13] [i_1] [i_13] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_1] [14ULL] [i_1]))) != (min((13925943182479011644ULL), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)4096))))))));
            }
            arr_58 [i_1] [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */short) ((unsigned char) 295080915))), (var_14)))) ? (((/* implicit */int) (short)19283)) : (((/* implicit */int) var_8))));
        }
        for (unsigned char i_16 = 0; i_16 < 20; i_16 += 2) 
        {
            var_34 = ((/* implicit */unsigned long long int) ((((-2302497789567360621LL) / (((/* implicit */long long int) ((/* implicit */int) (short)4575))))) / (((/* implicit */long long int) ((/* implicit */int) arr_13 [2U] [2U] [i_16] [i_1] [i_1])))));
            arr_62 [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */int) arr_37 [i_16] [i_1] [i_1 + 1] [i_1])) <= (((/* implicit */int) var_8))))), (min(((unsigned char)16), ((unsigned char)34)))));
        }
        for (short i_17 = 0; i_17 < 20; i_17 += 3) 
        {
            var_35 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_2))))) * (((((/* implicit */_Bool) arr_23 [(signed char)0] [(signed char)0] [i_17] [i_17])) ? (arr_31 [i_17] [i_17] [i_17] [i_1] [i_1 + 1] [4U]) : (12215229907088285012ULL))))) & (((/* implicit */unsigned long long int) 0U))));
            var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) 4641611507918782048ULL))));
        }
        for (long long int i_18 = 2; i_18 < 19; i_18 += 1) 
        {
            arr_67 [i_1] [i_18] = ((/* implicit */short) min((((/* implicit */int) min((min(((short)-4576), (arr_53 [i_18 - 1] [5LL] [5LL] [5LL]))), (((/* implicit */short) (unsigned char)242))))), (((((((/* implicit */_Bool) 3619750114U)) ? (((/* implicit */int) (short)-4557)) : (((/* implicit */int) var_1)))) / (((((/* implicit */_Bool) arr_38 [i_1] [i_1 - 1] [i_1] [i_18 + 1] [i_18 + 1])) ? (((/* implicit */int) arr_12 [(unsigned short)19] [(unsigned short)19] [i_18] [(unsigned short)19])) : (61084247)))))));
            /* LoopSeq 1 */
            for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
            {
                var_37 -= ((/* implicit */short) max((((((/* implicit */long long int) ((/* implicit */int) (short)4556))) % (arr_61 [i_19 - 1] [i_19] [i_19 - 1]))), (arr_61 [i_19 - 1] [i_19] [i_19 - 1])));
                /* LoopSeq 3 */
                for (unsigned short i_20 = 0; i_20 < 20; i_20 += 2) /* same iter space */
                {
                    arr_73 [i_1] [i_18] [i_19] [i_18] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_18 - 2] [i_18] [i_19 - 1] [i_1 - 1] [i_19 - 1]))) : ((~(18446744073709551615ULL)))))));
                    var_38 ^= ((/* implicit */int) arr_31 [i_1] [i_18] [(short)11] [i_18] [i_18] [i_19 - 1]);
                    arr_74 [i_18] [i_18] [15LL] [15LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)0)), (arr_50 [i_1] [i_18] [i_19 - 1] [i_20])))) ? (((((/* implicit */int) arr_5 [i_1 + 1])) & (((/* implicit */int) var_14)))) : ((-((+(((/* implicit */int) arr_25 [i_1 + 1]))))))));
                }
                /* vectorizable */
                for (unsigned short i_21 = 0; i_21 < 20; i_21 += 2) /* same iter space */
                {
                    var_39 = ((/* implicit */unsigned long long int) var_12);
                    var_40 = (~(arr_50 [i_1 + 1] [i_18] [i_18 - 1] [i_19 - 1]));
                    arr_78 [i_18] = ((/* implicit */_Bool) (-(((/* implicit */int) var_14))));
                    var_41 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
                }
                for (unsigned short i_22 = 0; i_22 < 20; i_22 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_23 = 1; i_23 < 19; i_23 += 1) 
                    {
                        var_42 *= ((/* implicit */long long int) ((unsigned short) (~(((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */long long int) arr_59 [i_18] [i_18])))))));
                        var_43 |= ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned char)241), (((/* implicit */unsigned char) var_9))))))))));
                    }
                    arr_84 [i_22] [i_18 - 2] &= ((/* implicit */long long int) arr_19 [i_18 - 1] [i_19] [i_19] [i_19] [i_19] [i_19] [i_22]);
                    var_44 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((min((arr_30 [i_18] [i_18 - 2] [i_19 - 1] [i_22]), (((/* implicit */long long int) arr_81 [i_1] [i_18 - 2] [i_18] [i_19 - 1] [i_19] [0])))), (((/* implicit */long long int) min(((_Bool)1), (var_11))))))), (3120072775427972201ULL)));
                    arr_85 [i_19] [i_18] [i_1 + 1] = ((/* implicit */short) (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */int) ((_Bool) var_0))) : (((/* implicit */int) arr_7 [i_1 + 1] [i_18 - 1] [i_19 - 1]))))));
                    arr_86 [i_1 - 1] [14U] [i_22] |= ((/* implicit */long long int) min((((/* implicit */unsigned short) (unsigned char)230)), (arr_54 [i_22] [i_19 - 1] [i_18] [i_1 + 1])));
                }
                var_45 = ((/* implicit */unsigned long long int) var_6);
                var_46 |= ((/* implicit */signed char) (-(((/* implicit */int) arr_56 [i_1] [i_19 - 1]))));
            }
            var_47 = ((/* implicit */unsigned long long int) min((var_47), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_18 - 1] [16ULL] [16ULL] [i_1 - 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_72 [i_1 + 1] [i_1 - 1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)222)) ? (var_4) : (arr_0 [12ULL] [i_1])))) ? ((((_Bool)0) ? (arr_79 [18LL] [i_18]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_18] [i_18] [(_Bool)1] [i_18] [i_18] [i_18] [(signed char)10]))))) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
            arr_87 [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_64 [i_1] [i_1])) ? (((((/* implicit */long long int) ((unsigned int) 4172057115U))) - (arr_32 [i_18] [i_18] [i_18] [i_18]))) : (((/* implicit */long long int) (((-(((/* implicit */int) (short)-4576)))) + (((/* implicit */int) arr_5 [i_18 - 1])))))));
        }
    }
    for (int i_24 = 1; i_24 < 8; i_24 += 4) 
    {
        var_48 = ((/* implicit */long long int) ((((((/* implicit */int) min((((/* implicit */short) (signed char)100)), (arr_52 [i_24] [i_24] [14ULL] [i_24 - 1])))) < (((/* implicit */int) ((var_9) || (((/* implicit */_Bool) var_7))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)227))))) : (((/* implicit */int) arr_29 [i_24] [i_24 + 1] [i_24] [i_24] [i_24] [6ULL] [i_24]))));
        arr_90 [9U] [i_24] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_65 [(_Bool)1])) ? (((/* implicit */unsigned long long int) var_7)) : (12977555860714383944ULL)))));
    }
    var_49 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1)) ? (((((/* implicit */_Bool) (~(var_4)))) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_8))));
}
