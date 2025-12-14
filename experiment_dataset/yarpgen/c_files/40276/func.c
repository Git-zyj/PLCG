/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40276
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_1] [i_1]);
            /* LoopSeq 1 */
            for (short i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((long long int) -218625845)))));
                arr_8 [i_1] [i_1] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 218625835)) ? (218625835) : (-218625818)));
                /* LoopSeq 3 */
                for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    arr_11 [i_1] [(short)11] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3375524788259717258ULL)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))) * (arr_10 [i_2 - 1] [i_2 - 1] [i_2] [(unsigned short)0] [i_2 - 1] [i_0])));
                    var_12 = ((218625844) / (((/* implicit */int) var_2)));
                }
                for (long long int i_4 = 1; i_4 < 12; i_4 += 1) 
                {
                    arr_14 [i_0] [i_0] [i_1] [i_2] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
                    /* LoopSeq 4 */
                    for (int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        var_13 = ((/* implicit */signed char) ((218625835) > (((((/* implicit */_Bool) arr_16 [i_1] [i_5] [i_1] [i_1] [i_1])) ? (218625854) : (arr_9 [i_4] [i_1] [i_2 + 1] [i_1])))));
                        arr_17 [i_0] [(_Bool)1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2 + 2])) ? (((/* implicit */int) arr_1 [i_2 + 1])) : (((/* implicit */int) var_9))));
                        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((-218625871) < (((/* implicit */int) arr_15 [i_4 + 1] [(unsigned char)4] [(short)10] [(short)12] [i_4 - 1] [11LL])))))));
                        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (arr_2 [i_1] [i_1])));
                        arr_18 [i_5] [i_1] [i_5] [(short)10] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_0);
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] = (signed char)-44;
                        arr_22 [(short)4] [i_0] [(_Bool)1] [i_0] [2ULL] &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_4 + 1] [i_1])) >> (((((((/* implicit */_Bool) 218625854)) ? (8292134521322545188LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) - (8292134521322545165LL)))));
                        arr_23 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 7179951972104101984ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_10 [i_4 + 2] [i_1] [(short)11] [(short)11] [i_6] [i_1])));
                    }
                    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        arr_28 [i_2 - 1] [i_1] [i_2 - 1] [i_4] [i_7] = (i_1 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1] [(unsigned char)1])) * (((/* implicit */int) arr_3 [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1] [(unsigned char)1])) / (((/* implicit */int) arr_3 [i_1] [i_1])))));
                        var_16 = ((/* implicit */short) ((arr_4 [i_2 - 1] [i_2 - 1]) || (arr_4 [i_2 + 1] [i_2])));
                        var_17 -= ((/* implicit */unsigned short) var_1);
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_4 + 2] [i_4 + 2])) : (((/* implicit */int) var_7))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) 16520889182834545961ULL)) ? (((/* implicit */int) arr_29 [i_2 - 1] [(_Bool)1] [i_2] [i_1])) : (arr_27 [i_1] [i_1])));
                    }
                    var_20 *= ((/* implicit */unsigned char) ((((/* implicit */int) (short)-1)) % ((((_Bool)1) ? (((/* implicit */int) arr_6 [i_0] [i_2] [0])) : (((/* implicit */int) var_4))))));
                }
                for (int i_9 = 0; i_9 < 14; i_9 += 3) 
                {
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_1] [i_2 - 1] [i_1] [i_2 + 2] [i_2 - 1] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_10 [i_1] [i_2] [i_2] [i_1] [i_2 + 1] [i_2 + 1]))))));
                    var_22 = ((/* implicit */short) ((arr_2 [i_1] [i_1]) ? (((long long int) arr_34 [i_2 + 2])) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                    arr_36 [(unsigned short)12] [(_Bool)1] [i_1] [4LL] [i_1] [i_9] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)0))));
                }
                /* LoopSeq 1 */
                for (short i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    var_23 = ((/* implicit */int) (!(((_Bool) 2147483647))));
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [11]))))) ? (((/* implicit */int) arr_0 [i_2 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) 7179951972104101984ULL))))))))));
                }
            }
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((arr_12 [i_0] [i_0] [i_11] [i_11]) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [(unsigned char)10])) : (((/* implicit */int) var_6)))))));
            var_26 = ((/* implicit */signed char) (~(((/* implicit */int) var_4))));
            var_27 -= ((short) arr_9 [i_0] [i_0] [i_11] [4LL]);
            /* LoopSeq 1 */
            for (unsigned short i_12 = 0; i_12 < 14; i_12 += 3) 
            {
                var_28 = ((/* implicit */long long int) (+(((/* implicit */int) var_6))));
                /* LoopSeq 3 */
                for (unsigned short i_13 = 0; i_13 < 14; i_13 += 3) /* same iter space */
                {
                    arr_49 [i_11] [(signed char)13] = ((/* implicit */long long int) (+(((/* implicit */int) arr_42 [i_11] [i_13]))));
                    /* LoopSeq 2 */
                    for (short i_14 = 0; i_14 < 14; i_14 += 4) /* same iter space */
                    {
                        arr_52 [i_0] [i_0] [i_11] [3LL] = ((/* implicit */long long int) ((unsigned short) arr_43 [i_11]));
                        var_29 *= ((/* implicit */_Bool) arr_35 [i_14] [8] [i_12] [i_12]);
                    }
                    for (short i_15 = 0; i_15 < 14; i_15 += 4) /* same iter space */
                    {
                        var_30 = ((/* implicit */_Bool) min((var_30), (((7179951972104101984ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                        var_31 = ((/* implicit */unsigned int) (_Bool)1);
                        arr_55 [1LL] [i_11] [i_12] = ((/* implicit */signed char) ((1550811904) > (((/* implicit */int) arr_47 [i_15] [(short)9] [i_11] [i_15]))));
                    }
                    arr_56 [i_13] [i_11] [i_11] [i_11] [i_0] = ((/* implicit */signed char) (+(218625844)));
                    var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) 770524200893145735LL))) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)72)) + (((/* implicit */int) (_Bool)0)))))));
                }
                for (unsigned short i_16 = 0; i_16 < 14; i_16 += 3) /* same iter space */
                {
                    arr_60 [i_0] [i_11] = ((/* implicit */long long int) arr_0 [i_0]);
                    var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) arr_48 [(signed char)9] [(signed char)9]))) + (((/* implicit */int) (!(arr_43 [i_11]))))));
                }
                for (unsigned short i_17 = 0; i_17 < 14; i_17 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_34 = (i_11 % 2 == 0) ? (((/* implicit */unsigned char) ((((arr_27 [i_11] [i_11]) + (2147483647))) >> (((var_1) - (17522094842054381830ULL)))))) : (((/* implicit */unsigned char) ((((((arr_27 [i_11] [i_11]) - (2147483647))) + (2147483647))) >> (((var_1) - (17522094842054381830ULL))))));
                        var_35 = ((/* implicit */int) max((var_35), (((((-218625836) + (1271913926))) / ((-(arr_9 [10LL] [i_11] [i_12] [i_17])))))));
                        arr_67 [i_18] [i_18] [i_17] [i_17] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [(short)13] [(short)6] [(short)13] [i_17] [11ULL] [i_11])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) arr_19 [i_12] [i_11])) : (8292134521322545183LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-73)))))));
                    }
                    for (int i_19 = 1; i_19 < 13; i_19 += 4) 
                    {
                        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((((/* implicit */_Bool) arr_47 [i_0] [i_0] [i_0] [2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_47 [i_0] [i_0] [i_0] [i_17])))))));
                        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((arr_25 [(_Bool)1] [i_11] [i_19 - 1] [i_11] [i_19 - 1]) ? (((/* implicit */int) arr_25 [i_17] [i_11] [i_12] [i_17] [i_19 - 1])) : (((/* implicit */int) arr_25 [i_11] [i_11] [i_11] [i_19] [i_19 - 1])))))));
                    }
                    arr_71 [i_11] = arr_48 [i_0] [i_11];
                    var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (((/* implicit */int) arr_66 [i_12] [i_12] [i_12] [i_12] [(_Bool)1])))))));
                    var_39 = ((/* implicit */_Bool) ((signed char) arr_9 [i_11] [i_11] [i_11] [i_17]));
                }
                arr_72 [i_11] [(_Bool)1] [i_11] [i_12] = ((/* implicit */long long int) arr_66 [i_0] [i_12] [10ULL] [i_0] [7ULL]);
                var_40 = ((/* implicit */unsigned char) arr_46 [i_11] [i_11] [2ULL] [7ULL] [i_11] [i_11]);
            }
        }
        /* LoopSeq 1 */
        for (short i_20 = 0; i_20 < 14; i_20 += 4) 
        {
            var_41 = var_4;
            arr_77 [1] [7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_51 [i_20] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)52799))));
            var_42 -= ((/* implicit */short) ((((/* implicit */int) arr_39 [i_20] [i_20] [12] [i_0] [i_20] [i_0])) | (((/* implicit */int) arr_62 [i_0] [i_20] [i_0]))));
            /* LoopNest 2 */
            for (unsigned char i_21 = 1; i_21 < 12; i_21 += 4) 
            {
                for (unsigned int i_22 = 2; i_22 < 11; i_22 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_63 [i_0] [(_Bool)1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_22 - 2]))) : (arr_10 [i_23] [(short)2] [(_Bool)1] [i_21 + 1] [i_22 - 1] [i_21 + 1])));
                            var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) (signed char)-83))));
                        }
                        arr_87 [i_22 + 3] [i_20] [i_0] = ((/* implicit */short) arr_74 [i_22 - 2] [i_21] [i_21 + 1]);
                    }
                } 
            } 
            var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) arr_85 [13LL] [13LL] [i_20] [(signed char)1] [13LL]))));
        }
        arr_88 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [3])) ? (arr_69 [i_0] [i_0] [(unsigned char)8] [i_0] [i_0]) : (((/* implicit */int) arr_76 [i_0] [i_0]))));
        arr_89 [i_0] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0])) / (1271913931)))) ? (arr_50 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_83 [(_Bool)1] [(unsigned char)9] [i_0]))));
        var_46 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_3) + (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_0] [i_0] [i_0] [10ULL] [i_0] [i_0]))) : (((((/* implicit */long long int) ((/* implicit */int) var_6))) % (-8292134521322545185LL)))));
    }
    for (unsigned long long int i_24 = 0; i_24 < 14; i_24 += 4) /* same iter space */
    {
        var_47 *= ((/* implicit */short) (unsigned char)143);
        var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) arr_9 [i_24] [i_24] [i_24] [i_24]))))))));
    }
    var_49 = ((/* implicit */long long int) min((((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (unsigned short)52795)))), (((/* implicit */int) ((_Bool) ((unsigned short) var_6))))));
}
