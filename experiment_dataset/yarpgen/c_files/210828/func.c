/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210828
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_18 = ((/* implicit */short) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_0])), (var_13)))) ? (((/* implicit */int) max((arr_0 [i_0]), ((_Bool)0)))) : (((/* implicit */int) arr_0 [i_0])))), (max(((+(((/* implicit */int) arr_2 [(short)3])))), (((/* implicit */int) max((var_6), (((/* implicit */unsigned char) (_Bool)1)))))))));
        var_19 = arr_1 [i_0] [i_0];
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((min((((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), ((((_Bool)1) ? (4294967263U) : (2347265760U))))), (((/* implicit */unsigned int) var_1)))))));
        arr_5 [i_1] = ((/* implicit */short) (-(((arr_4 [i_1]) ? (((3931671021233120399ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_1] [i_1])))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        var_21 = ((/* implicit */long long int) arr_6 [i_2] [i_2]);
        arr_8 [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)7)), (358790634U)));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_22 |= ((/* implicit */short) arr_6 [i_3 - 1] [i_3]);
        /* LoopNest 2 */
        for (unsigned char i_4 = 2; i_4 < 8; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_18 [i_3 - 1] [i_4] [i_3 - 1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)110)), (-1383765289764461599LL)))), (((((/* implicit */_Bool) (~(14515073052476431207ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4] [i_4]))) & (18U)))) : (((((/* implicit */_Bool) arr_17 [i_4] [i_4])) ? (8348016778358429367ULL) : (((/* implicit */unsigned long long int) var_5))))))));
                    arr_19 [i_3] [i_3] [i_4] = ((/* implicit */short) ((min((((/* implicit */unsigned int) (unsigned char)7)), (((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_3))))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-29010)) ? (((/* implicit */int) arr_14 [i_3])) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)90)) && (arr_13 [i_3] [i_5] [i_5])))))))));
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_7 = 4; i_7 < 22; i_7 += 3) 
        {
            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_7 - 1])) ? (arr_24 [i_7 - 1] [i_7 - 2]) : ((-(arr_23 [(unsigned char)2]))))))));
            /* LoopSeq 3 */
            for (long long int i_8 = 2; i_8 < 21; i_8 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
                {
                    arr_32 [i_6] [i_6] = arr_26 [i_8] [i_8 + 2] [i_8 + 2];
                    arr_33 [i_7] [i_6] = ((/* implicit */_Bool) arr_25 [i_6] [i_7]);
                    arr_34 [i_6] = ((/* implicit */unsigned int) ((arr_31 [i_6] [(short)19] [i_8] [i_9]) && (((_Bool) var_4))));
                    arr_35 [i_6] = ((/* implicit */short) arr_29 [i_8] [i_7] [i_8] [i_8] [i_8 - 1]);
                }
                for (unsigned int i_10 = 0; i_10 < 23; i_10 += 3) /* same iter space */
                {
                    arr_38 [i_6] [i_6] [i_6] [7U] [i_10] = ((((/* implicit */_Bool) arr_30 [i_7 - 1] [i_6])) && (((/* implicit */_Bool) arr_30 [i_7 + 1] [i_6])));
                    /* LoopSeq 1 */
                    for (short i_11 = 2; i_11 < 21; i_11 += 3) 
                    {
                        arr_41 [i_6] [i_7] [i_6] = ((/* implicit */unsigned char) arr_25 [i_8] [i_7 - 4]);
                        arr_42 [i_8 + 2] [i_6] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_7] [i_7 - 3])) ? (arr_24 [i_11 + 2] [i_11 - 1]) : (((((/* implicit */_Bool) (short)-240)) ? (arr_7 [i_6] [i_10]) : (((/* implicit */unsigned long long int) var_3))))));
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14515073052476431210ULL)) || (((/* implicit */_Bool) (unsigned char)236))));
                        arr_43 [i_6] [i_10] [i_8] [i_7] [i_6] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_29 [i_8] [i_8] [i_8] [i_10] [i_10]))));
                    }
                    arr_44 [i_6] = (short)8107;
                }
                /* LoopSeq 2 */
                for (unsigned int i_12 = 0; i_12 < 23; i_12 += 3) 
                {
                    arr_47 [i_6] = ((/* implicit */unsigned int) ((unsigned char) arr_31 [i_12] [i_8] [i_7] [(_Bool)1]));
                    arr_48 [i_6] [i_6] [i_6] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_8 - 1] [i_7] [i_8]))) != ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2870821359U)))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_54 [i_6] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 847786526U))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_8 + 2] [i_7 - 4] [i_6] [i_6]))) : (2734670464U)));
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) arr_26 [i_6] [i_7] [i_7 + 1])))))));
                    }
                    for (short i_15 = 0; i_15 < 23; i_15 += 3) 
                    {
                        arr_57 [i_6] [i_13] [i_8 - 2] [(_Bool)1] [i_15] [i_13] [i_6] = ((/* implicit */unsigned char) ((arr_31 [i_8 - 1] [i_7 - 4] [i_8 - 2] [i_13]) ? (((/* implicit */int) ((unsigned char) 2401977668U))) : (((((/* implicit */_Bool) arr_21 [i_13])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (_Bool)1))))));
                        arr_58 [i_6] [(_Bool)1] [i_8] [21U] [i_6] [i_8] [(short)17] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [(short)17])) ? (arr_29 [i_6] [i_6] [i_6] [(unsigned char)21] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((8114252899138179394ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_45 [i_15] [i_8] [i_6])) ? (((/* implicit */int) arr_21 [i_7 - 3])) : (((/* implicit */int) arr_55 [i_6] [i_6] [(_Bool)1] [i_6] [i_6])))))));
                        var_26 = ((/* implicit */unsigned long long int) var_2);
                    }
                    for (long long int i_16 = 2; i_16 < 19; i_16 += 3) 
                    {
                        var_27 -= ((/* implicit */short) ((arr_36 [(short)12]) / (((/* implicit */unsigned long long int) arr_40 [i_16] [i_16 + 1] [i_8] [i_8 - 2] [i_7] [i_6]))));
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_7 - 1] [i_6])) ? (((/* implicit */int) arr_50 [i_6] [i_8 + 2] [i_7 - 2] [i_6])) : (((/* implicit */int) arr_50 [i_6] [i_8 + 2] [i_7 - 1] [i_6]))));
                        var_29 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_6] [i_7 - 2])) ? (((9221355051184529637ULL) * (((/* implicit */unsigned long long int) 2993112868U)))) : (((/* implicit */unsigned long long int) arr_22 [i_13] [i_6]))));
                        arr_61 [i_6] [i_7] [i_6] [i_13] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_53 [i_6] [i_6] [i_6] [i_6] [i_6])) || ((!((_Bool)1)))));
                    }
                    arr_62 [i_6] [i_7] [i_6] [i_6] [i_13] [i_13] = ((/* implicit */short) (-(((/* implicit */int) arr_26 [i_13] [i_8 - 2] [i_6]))));
                    arr_63 [i_6] [8ULL] [i_8 - 1] [i_13] [i_7] [i_13] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16705791851489019773ULL)) ? (((/* implicit */int) (short)64)) : (((/* implicit */int) (unsigned char)123))))) ? (9225389022525021984ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_13] [i_7 - 2] [i_8] [i_7] [i_7 + 1] [i_6] [i_6]))));
                    var_30 = ((/* implicit */unsigned long long int) ((arr_40 [i_7 - 2] [i_7 - 4] [i_7 - 3] [i_8 + 1] [i_8] [i_8 + 2]) - (arr_40 [i_7 - 2] [i_7 - 4] [i_8] [i_8 + 1] [(unsigned char)4] [i_8 - 1])));
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_6] [i_6] [i_8 - 2])) ? (((/* implicit */int) arr_26 [i_8] [(short)5] [i_8 + 1])) : (((/* implicit */int) arr_53 [i_8] [i_8] [i_8 + 1] [i_8] [22U])))))));
                }
            }
            for (unsigned int i_17 = 2; i_17 < 20; i_17 += 3) 
            {
                var_32 = ((/* implicit */unsigned long long int) ((((unsigned int) 3997865304U)) == (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_46 [i_6]))))));
                var_33 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_6 [i_17 + 3] [i_6])) ? (-7449050431710692938LL) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_7 - 4] [i_7 - 1] [i_17])))))));
                var_34 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (short)64)) / (((/* implicit */int) (short)57))))));
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                var_35 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_36 [(unsigned char)2]))));
                /* LoopNest 2 */
                for (short i_19 = 3; i_19 < 20; i_19 += 3) 
                {
                    for (short i_20 = 3; i_20 < 22; i_20 += 3) 
                    {
                        {
                            arr_74 [i_6] [i_7] [i_6] [i_6] = ((/* implicit */unsigned char) ((((unsigned int) (short)-992)) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)26242)) >= (((/* implicit */int) (_Bool)1))))))));
                            arr_75 [i_6] [i_6] [i_18] [i_19 + 2] [i_6] = ((/* implicit */unsigned char) (-(((unsigned int) (short)57))));
                            arr_76 [i_6] [i_19] [i_18] [i_18] [i_7] [i_6] = ((arr_64 [i_6] [i_7 - 2] [i_20 - 3]) + (((/* implicit */unsigned long long int) arr_22 [i_7] [i_7 - 2])));
                        }
                    } 
                } 
            }
            var_36 = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) * (((/* implicit */int) arr_50 [i_6] [i_7 - 3] [i_7 + 1] [i_6]))));
            /* LoopSeq 2 */
            for (long long int i_21 = 0; i_21 < 23; i_21 += 3) 
            {
                arr_81 [i_6] [i_6] = ((((/* implicit */unsigned int) ((/* implicit */int) (short)-11691))) <= (4024101019U));
                /* LoopNest 2 */
                for (unsigned char i_22 = 0; i_22 < 23; i_22 += 3) 
                {
                    for (unsigned char i_23 = 3; i_23 < 21; i_23 += 3) 
                    {
                        {
                            arr_87 [i_6] [15ULL] = (short)27762;
                            var_37 = ((/* implicit */unsigned int) ((short) (_Bool)1));
                            arr_88 [i_6] [i_7] [i_22] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_86 [i_7 - 2] [i_23 - 1])) + (((((/* implicit */_Bool) arr_23 [i_21])) ? (((/* implicit */int) (short)27750)) : (((/* implicit */int) arr_31 [(short)14] [i_7 + 1] [i_21] [i_7]))))));
                            var_38 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [i_23 - 1] [i_7 - 1] [i_7])) ? (((/* implicit */unsigned long long int) 1048934175U)) : (arr_24 [i_7 - 4] [i_6])));
                            arr_89 [i_6] [i_22] [i_6] [i_23] [i_23] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) var_10)) | (((((/* implicit */int) arr_31 [i_23 + 1] [i_22] [i_6] [i_6])) & (((/* implicit */int) (short)480))))));
                        }
                    } 
                } 
                var_39 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_6] [i_7] [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_6]))) : (((long long int) arr_65 [i_6] [i_7] [i_21]))));
            }
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                arr_93 [i_6] [i_6] [i_6] = var_11;
                var_40 = ((/* implicit */short) ((((/* implicit */_Bool) arr_64 [(short)11] [i_7] [i_24])) ? (((/* implicit */int) arr_71 [i_6])) : (((/* implicit */int) arr_67 [i_7 - 3] [i_7 - 1] [(_Bool)1] [i_7]))));
            }
        }
        arr_94 [i_6] [i_6] = ((/* implicit */short) (-(((/* implicit */int) arr_71 [i_6]))));
    }
    for (unsigned char i_25 = 0; i_25 < 23; i_25 += 3) /* same iter space */
    {
        var_41 = ((/* implicit */long long int) min((arr_22 [i_25] [i_25]), (((/* implicit */unsigned int) ((unsigned char) arr_22 [i_25] [i_25])))));
        var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) (~(arr_77 [(unsigned char)10] [18ULL] [(unsigned char)10]))))));
        arr_98 [i_25] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
        var_43 = ((/* implicit */unsigned char) ((((arr_78 [i_25] [i_25]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17741))) : (7133692617153637615ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_60 [i_25] [i_25] [i_25] [i_25] [i_25]))))))));
    }
}
