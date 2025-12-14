/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237160
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
    var_17 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_6)), (((unsigned long long int) (-(var_10))))));
    var_18 = ((/* implicit */int) var_11);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_2 [i_0]), (arr_2 [i_0])))) ? ((+(((/* implicit */int) arr_2 [i_1])))) : (((/* implicit */int) arr_2 [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((short) ((((arr_16 [i_0] [i_0] [i_2] [i_3] [i_4]) - (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_2] [i_3] [i_1]))))) - (min((arr_0 [i_0]), (4427715425083462476LL))))));
                                var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) (-(((/* implicit */int) (signed char)-68))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_5 = 1; i_5 < 8; i_5 += 4) 
                    {
                        var_22 |= ((/* implicit */short) arr_8 [i_0] [i_1] [i_2] [i_5]);
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_1] = ((/* implicit */short) var_2);
                            arr_23 [i_1] [i_1] [i_2] [i_5] [i_1] [i_2] = ((/* implicit */_Bool) ((unsigned char) var_1));
                        }
                        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) arr_3 [i_2])) : (arr_7 [i_5] [i_1] [i_1] [i_5 - 1])));
                            arr_26 [i_1] [i_5] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 + 1])) ? (arr_24 [i_0] [i_0] [i_1] [i_5 - 1] [i_0] [i_0]) : (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0] [i_0])))))));
                            var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_0] [i_1]))));
                        }
                    }
                    var_25 = ((/* implicit */long long int) arr_10 [i_0] [i_1] [i_1] [i_0]);
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_2]))) : (min((((/* implicit */unsigned int) var_5)), (arr_3 [i_0])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_12 [i_0] [i_0] [i_0] [i_1] [i_2] [i_2]), (arr_9 [i_0] [i_0] [i_1] [(unsigned short)2])))) ? (((((/* implicit */_Bool) var_3)) ? (arr_4 [i_1]) : (((/* implicit */int) arr_19 [i_0] [i_0])))) : (((/* implicit */int) var_4))))) : (-4427715425083462476LL)));
                }
            } 
        } 
        var_27 = ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0] [i_0])), (arr_12 [(signed char)3] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (min((((/* implicit */unsigned int) var_16)), (arr_3 [i_0]))) : (min((((/* implicit */unsigned int) var_9)), (arr_9 [i_0] [i_0] [i_0] [i_0])))));
        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) min(((-(arr_12 [i_0] [i_0] [i_0] [i_0] [2ULL] [i_0]))), (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (var_3) : (arr_3 [i_0]))))))))));
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 8; i_8 += 1) 
        {
            for (short i_9 = 1; i_9 < 7; i_9 += 4) 
            {
                {
                    arr_33 [i_0] [(short)3] = ((int) arr_28 [i_0]);
                    var_29 ^= ((/* implicit */signed char) arr_28 [i_8 + 2]);
                    arr_34 [i_0] [i_8] [i_8] [i_8] = ((/* implicit */signed char) min((((/* implicit */int) min(((short)32767), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_8 + 1] [i_8 + 2] [i_9]))) >= (-4427715425083462476LL))))))), (min((min((((/* implicit */int) arr_28 [i_0])), (876246808))), (-1366214554)))));
                }
            } 
        } 
    }
    for (signed char i_10 = 0; i_10 < 10; i_10 += 4) /* same iter space */
    {
        var_30 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)117))))) & (((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_10] [i_10] [i_10] [i_10] [(short)8] [i_10])) || (((/* implicit */_Bool) arr_5 [i_10] [i_10] [i_10])))))))), (min((arr_27 [i_10] [i_10]), (arr_27 [i_10] [i_10])))));
        arr_37 [i_10] [i_10] |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_16 [i_10] [i_10] [i_10] [i_10] [i_10]), (var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) arr_14 [i_10] [i_10] [i_10] [(short)6] [i_10])) : (var_13)))))))) : (((((/* implicit */_Bool) arr_2 [i_10])) ? (arr_0 [i_10]) : (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_10])))))))));
        var_31 |= ((/* implicit */_Bool) (-(min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_10] [i_10] [8U] [i_10] [i_10]))) : (var_13))), (((/* implicit */unsigned long long int) min((arr_11 [i_10] [i_10] [i_10] [i_10] [i_10]), (((/* implicit */int) (unsigned short)21716)))))))));
        arr_38 [i_10] = ((int) min((((/* implicit */unsigned int) (unsigned short)41974)), (((2864758356U) * (((/* implicit */unsigned int) 66922988))))));
        /* LoopNest 3 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned int i_12 = 1; i_12 < 9; i_12 += 1) 
            {
                for (unsigned int i_13 = 0; i_13 < 10; i_13 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_14 = 0; i_14 < 10; i_14 += 1) 
                        {
                            arr_50 [i_10] [i_11] [i_12] [i_11] [i_13] [i_14] = ((/* implicit */int) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_10] [i_10] [i_12] [3ULL] [i_14])) ? (arr_3 [i_11]) : (var_3)))), (arr_41 [i_12 - 1] [i_14] [i_12 - 1]))), (((/* implicit */long long int) (~((-(((/* implicit */int) (unsigned char)212)))))))));
                            arr_51 [i_10] [i_11] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_10] [i_10] [(unsigned short)9]))));
                            var_32 ^= ((unsigned long long int) ((arr_16 [i_10] [i_11] [i_14] [i_11] [i_14]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_17 [6] [i_10] [i_12 + 1] [i_10])))));
                            var_33 = ((/* implicit */short) min((((long long int) arr_35 [i_12 + 1])), (((/* implicit */long long int) arr_35 [i_12 + 1]))));
                        }
                        arr_52 [i_11] [i_11] [i_10] [i_11] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) ((unsigned char) arr_47 [i_11] [(short)5] [i_11] [i_12] [i_11] [(unsigned char)9] [i_10]))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_15 = 0; i_15 < 10; i_15 += 4) /* same iter space */
    {
        arr_56 [i_15] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (+(arr_46 [i_15] [i_15] [i_15] [i_15])))) ? (((/* implicit */int) arr_47 [i_15] [i_15] [i_15] [(_Bool)1] [i_15] [(_Bool)1] [i_15])) : ((+(((/* implicit */int) arr_17 [i_15] [i_15] [i_15] [i_15])))))));
        arr_57 [i_15] [i_15] = ((((/* implicit */long long int) min((arr_30 [i_15] [i_15] [i_15]), (arr_30 [i_15] [i_15] [i_15])))) > ((((~(arr_16 [i_15] [i_15] [i_15] [i_15] [i_15]))) ^ (((/* implicit */long long int) ((/* implicit */int) var_6))))));
    }
    /* vectorizable */
    for (signed char i_16 = 0; i_16 < 10; i_16 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_17 = 1; i_17 < 7; i_17 += 1) 
        {
            var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_0 [i_16]))))));
            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (-370278853) : (arr_6 [i_16] [i_16] [i_16])))) ? (((long long int) var_13)) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_17 + 3])))));
            var_36 = ((/* implicit */_Bool) arr_7 [i_16] [i_17] [i_16] [i_16]);
            arr_64 [(unsigned char)1] [i_17] = ((/* implicit */unsigned short) ((arr_13 [i_16] [i_16] [i_17 + 2] [i_17] [i_17]) ? (((/* implicit */int) arr_36 [i_17 + 2])) : (((/* implicit */int) arr_49 [i_17 + 3] [i_17] [i_17] [i_17 + 3] [i_16]))));
            var_37 = -1042068645;
        }
        /* LoopSeq 2 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
        {
            var_38 = ((/* implicit */_Bool) var_10);
            var_39 ^= ((/* implicit */signed char) ((arr_16 [i_16] [i_16] [i_16] [i_16] [i_18]) + (arr_16 [i_16] [i_18] [i_18] [i_16] [i_18])));
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_20 = 2; i_20 < 7; i_20 += 4) 
            {
                for (signed char i_21 = 0; i_21 < 10; i_21 += 1) 
                {
                    {
                        arr_78 [(signed char)3] [i_21] [i_20] [(signed char)3] = ((signed char) arr_58 [i_20 - 1]);
                        /* LoopSeq 4 */
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            var_40 = ((/* implicit */_Bool) arr_73 [i_20 + 1] [i_20 + 1]);
                            var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_16]))))) ? (((((arr_79 [i_16] [i_16] [i_16] [i_16] [i_16]) + (9223372036854775807LL))) >> (((/* implicit */int) arr_59 [i_16] [i_19])))) : (((/* implicit */long long int) ((/* implicit */int) arr_80 [i_16] [i_16] [i_16] [i_16] [i_16] [i_20] [(short)4]))))))));
                        }
                        for (unsigned long long int i_23 = 0; i_23 < 10; i_23 += 4) /* same iter space */
                        {
                            arr_85 [i_16] [i_19] [i_20] [i_21] [i_23] = ((/* implicit */unsigned char) (~(arr_74 [i_20 + 1] [i_16] [i_16] [i_21])));
                            arr_86 [i_16] [i_19] [(short)0] [i_19] [i_21] [i_16] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_15 [i_23] [i_21] [i_20] [i_16]))))));
                            var_42 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_49 [i_16] [i_16] [i_20] [i_21] [i_23]))));
                            var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_16] [i_20 + 1])) ? (arr_27 [i_16] [i_20 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
                            arr_87 [i_16] [i_19] [i_21] [i_20 - 1] [i_19] [6ULL] [i_16] |= ((/* implicit */int) arr_9 [i_16] [i_19] [i_19] [i_21]);
                        }
                        for (unsigned long long int i_24 = 0; i_24 < 10; i_24 += 4) /* same iter space */
                        {
                            arr_91 [i_16] [i_21] [i_21] [i_21] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_49 [i_16] [i_19] [i_20] [i_21] [i_24])) : (arr_30 [i_20 + 3] [i_20 - 1] [i_20 + 2])));
                            arr_92 [i_24] [i_21] [i_21] [3U] [i_24] [i_24] [i_24] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((short) (unsigned short)43820))) + (2147483647))) >> (((((/* implicit */int) arr_39 [i_16] [i_20 - 1])) - (64)))));
                        }
                        for (signed char i_25 = 0; i_25 < 10; i_25 += 1) 
                        {
                            arr_97 [i_16] [i_19] [i_19] [i_20 - 1] [(unsigned char)0] [i_21] [i_19] = ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) / (arr_70 [i_16]));
                            arr_98 [i_16] [i_16] [i_20] [i_19] [i_25] |= ((/* implicit */int) arr_29 [i_25] [i_21] [i_19]);
                            var_44 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) var_6))))));
                        }
                        var_45 = ((/* implicit */long long int) (-(((/* implicit */int) arr_47 [i_20] [i_20] [i_20 + 3] [i_20 + 3] [i_21] [i_20] [i_20]))));
                    }
                } 
            } 
            arr_99 [i_19] [i_16] = arr_13 [i_16] [i_16] [i_16] [i_16] [i_16];
            var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) arr_95 [i_19] [i_19] [i_16] [i_19] [i_19])) ^ (-7355389614073693601LL)))))))));
            var_47 = ((/* implicit */short) arr_61 [i_16] [i_16]);
        }
        arr_100 [i_16] = (+(((/* implicit */int) arr_77 [i_16])));
    }
    var_48 = ((/* implicit */signed char) min(((short)-21405), (((/* implicit */short) var_15))));
}
