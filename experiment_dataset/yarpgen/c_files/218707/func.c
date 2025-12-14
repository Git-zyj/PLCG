/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218707
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
    var_17 = ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) var_16)) : (var_14)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] [0ULL] [i_3 - 2] [2LL] [1U] = ((/* implicit */unsigned long long int) ((long long int) max((((unsigned char) 16128U)), (var_9))));
                            arr_12 [(_Bool)1] [(_Bool)1] [i_1] [i_2] [i_3 - 1] [i_3 + 2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_1 [i_0 + 1]), (arr_1 [i_3 - 2]))))));
                        }
                    } 
                } 
                arr_13 [(_Bool)1] [i_1] [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) arr_3 [i_0 + 3] [i_1])), ((-(arr_6 [8LL])))));
                var_18 = ((/* implicit */unsigned long long int) 4294951168U);
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(max((((/* implicit */long long int) var_15)), (var_5)))))) ? (((/* implicit */int) arr_9 [i_0 + 2] [(unsigned char)4] [i_0] [i_0 + 3])) : (((((/* implicit */int) arr_9 [6ULL] [i_1] [i_0 + 1] [i_1])) % (((/* implicit */int) arr_9 [i_0 + 2] [i_0 + 1] [i_0] [i_0 - 1]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) var_5);
    /* LoopSeq 2 */
    for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            arr_20 [i_4] [i_4 + 1] = ((/* implicit */signed char) (~(min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_16 [14U]))))), (((unsigned int) arr_18 [i_4] [i_4]))))));
            arr_21 [i_5] [(signed char)15] [i_4] = arr_14 [i_5];
        }
        for (long long int i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            var_21 = ((/* implicit */_Bool) (signed char)-65);
            var_22 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_14 [i_6])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_23 [(signed char)14] [i_6]))))));
            var_23 = ((/* implicit */unsigned int) min(((unsigned char)168), (((/* implicit */unsigned char) (signed char)-65))));
        }
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 16; i_7 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 3; i_8 < 15; i_8 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                {
                    arr_33 [i_7] = ((/* implicit */unsigned long long int) var_12);
                    arr_34 [i_8 - 3] = ((/* implicit */unsigned long long int) 4294951158U);
                    arr_35 [i_8] = ((/* implicit */signed char) (+(((/* implicit */int) arr_19 [i_9] [i_9]))));
                }
                arr_36 [8ULL] [7U] [i_4] = ((/* implicit */unsigned char) (-(((unsigned int) arr_18 [i_7] [i_8]))));
                /* LoopSeq 2 */
                for (signed char i_10 = 0; i_10 < 16; i_10 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 3) 
                    {
                        var_24 = ((/* implicit */signed char) arr_23 [i_4] [i_4]);
                        arr_42 [i_4] [i_7] [i_8] [i_7] [i_10] [i_11] = ((/* implicit */unsigned long long int) ((signed char) ((signed char) 712235366U)));
                        var_25 = ((/* implicit */unsigned long long int) ((signed char) var_1));
                        var_26 = ((/* implicit */signed char) arr_32 [i_4] [0LL] [8U] [(signed char)0] [(signed char)8]);
                        arr_43 [i_11] [(signed char)12] [i_8 - 2] [i_4 - 2] [i_4 - 2] = ((/* implicit */unsigned long long int) arr_25 [i_4 - 1]);
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_27 = ((/* implicit */signed char) arr_15 [i_4 - 2]);
                        arr_46 [i_4] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (arr_27 [i_4 + 1] [i_7] [i_8] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)117))))) % (((/* implicit */long long int) arr_37 [i_4 + 1] [i_4] [i_4 - 2] [i_4] [i_8 - 1]))));
                        var_28 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_0)))) || (((/* implicit */_Bool) ((unsigned long long int) arr_24 [i_8] [i_12])))));
                        arr_47 [14ULL] [i_7] [15LL] = ((unsigned long long int) arr_32 [i_4 + 4] [i_8] [i_8 - 3] [i_8 - 1] [i_10]);
                    }
                    for (signed char i_13 = 0; i_13 < 16; i_13 += 3) /* same iter space */
                    {
                        arr_51 [i_4] [(_Bool)1] [i_4 - 2] [5ULL] [i_4] [i_4 + 3] = ((/* implicit */unsigned char) ((_Bool) arr_38 [i_4 + 4] [i_4 + 4] [i_8 - 2] [14U]));
                        var_29 = ((/* implicit */long long int) (~(arr_28 [i_4 - 1] [i_7] [i_13])));
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_13])) | ((-(((/* implicit */int) arr_48 [i_13] [5ULL] [i_8] [i_8] [i_7] [i_4 + 1]))))));
                        arr_52 [(signed char)5] [i_13] [i_13] [(signed char)8] [7LL] [11LL] [11LL] = ((/* implicit */long long int) ((unsigned long long int) arr_22 [i_8 - 2] [i_4 + 2]));
                    }
                    for (signed char i_14 = 0; i_14 < 16; i_14 += 3) /* same iter space */
                    {
                        arr_57 [i_4] [i_4 + 1] [i_4] [i_14] [i_4] = ((/* implicit */unsigned long long int) arr_56 [i_4 + 3] [i_7] [i_8 - 3]);
                        arr_58 [4LL] [2LL] [i_14] [9ULL] = ((/* implicit */signed char) (+(((unsigned int) arr_15 [i_10]))));
                        arr_59 [i_4] [0ULL] [7ULL] [13ULL] [i_14] = ((/* implicit */long long int) ((unsigned int) ((((((/* implicit */int) var_3)) + (2147483647))) >> (((arr_38 [12ULL] [12ULL] [i_8] [i_10]) - (9073518960978187940ULL))))));
                        var_31 = ((/* implicit */unsigned char) ((unsigned long long int) arr_25 [i_8 - 1]));
                    }
                    arr_60 [i_10] [i_8] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_8 - 3] [3ULL] [7U] [i_4 - 1] [3ULL])) ? ((+(arr_32 [i_4 + 2] [i_7] [i_4] [i_10] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_50 [i_8 - 3]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_8] [i_10])))))))));
                    var_32 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_16 [i_8 - 2]))));
                }
                for (signed char i_15 = 0; i_15 < 16; i_15 += 4) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_16 = 0; i_16 < 16; i_16 += 2) 
                    {
                        arr_69 [i_16] [i_15] [i_4 + 2] [i_4 + 2] [i_4 + 2] = ((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_4 - 1] [i_8 - 2])) <= (((/* implicit */int) arr_24 [i_4 + 2] [i_8 - 1]))));
                        var_33 = ((/* implicit */unsigned int) var_12);
                        arr_70 [i_16] [i_15] [i_8] [i_7] [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) arr_55 [i_4]))));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 2) /* same iter space */
                    {
                        arr_73 [i_4] [(signed char)6] [i_4] [i_8] [2ULL] [(signed char)5] [6ULL] = ((/* implicit */unsigned char) (-(((3387594505U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [(signed char)13])))))));
                        arr_74 [i_17] [i_7] = ((/* implicit */signed char) (-(((/* implicit */int) var_12))));
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 16; i_18 += 2) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned char) arr_30 [8LL] [i_7] [i_8 + 1] [i_7]);
                        var_35 = ((/* implicit */long long int) ((unsigned int) arr_50 [i_4 + 2]));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_19 = 0; i_19 < 16; i_19 += 4) 
                    {
                        var_36 = arr_16 [i_4 + 1];
                        var_37 = ((/* implicit */long long int) ((((((/* implicit */int) var_7)) + (2147483647))) << (((((((/* implicit */int) ((signed char) arr_24 [i_7] [i_7]))) + (57))) - (1)))));
                    }
                    for (long long int i_20 = 0; i_20 < 16; i_20 += 3) 
                    {
                        var_38 = ((/* implicit */long long int) arr_63 [i_4] [i_4 + 3]);
                        var_39 = ((/* implicit */long long int) var_4);
                        arr_81 [i_4] [i_7] [i_20] [i_20] = ((/* implicit */unsigned long long int) ((arr_54 [(signed char)5] [i_4 + 3] [i_8] [i_20] [i_8 - 3]) & (arr_78 [i_4] [i_4 + 1])));
                        var_40 = ((/* implicit */_Bool) ((signed char) arr_54 [i_4 - 1] [i_4 + 1] [i_4] [i_20] [i_4]));
                        arr_82 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_15] [i_20] [i_20] = ((/* implicit */signed char) (~(((/* implicit */int) arr_41 [i_4 + 3] [i_8 - 3] [i_8 - 2] [i_8 - 3] [i_8 - 2]))));
                    }
                    var_41 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [11ULL] [i_7] [i_7])))))) > (((unsigned long long int) arr_68 [i_4] [(signed char)4] [i_7] [i_7] [(signed char)4] [i_8] [i_8]))));
                }
            }
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_22 = 3; i_22 < 15; i_22 += 3) 
                {
                    var_42 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_61 [4U] [i_7] [i_7]))));
                    var_43 = ((/* implicit */_Bool) arr_53 [i_22]);
                    arr_88 [i_7] [i_22] [i_21] [i_7] = ((signed char) (!(((/* implicit */_Bool) var_9))));
                    arr_89 [9LL] [i_22] [i_21] [1ULL] = ((arr_83 [i_4 - 1]) ^ (((/* implicit */unsigned long long int) arr_86 [i_4] [i_22] [11ULL] [i_4 + 3] [i_22 - 2])));
                }
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    var_44 = ((/* implicit */_Bool) ((((/* implicit */int) arr_62 [6ULL] [i_21] [2U] [i_4])) * (((/* implicit */int) arr_62 [i_4 + 3] [5ULL] [i_4] [i_4 - 1]))));
                    arr_94 [i_4 - 2] [(signed char)8] [i_21] [12ULL] = ((/* implicit */unsigned int) (-((~(-7784440428840074018LL)))));
                }
                for (unsigned long long int i_24 = 0; i_24 < 16; i_24 += 2) 
                {
                    arr_98 [i_21] [i_21] [(_Bool)1] [(_Bool)1] [i_21] [i_21] = ((/* implicit */signed char) ((long long int) arr_30 [i_4 + 3] [i_4 + 4] [i_4 + 2] [i_21]));
                    var_45 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 8271266146763843413LL)) ? (((/* implicit */int) arr_55 [i_21])) : (((/* implicit */int) arr_23 [i_21] [4U]))))));
                    var_46 = ((/* implicit */unsigned char) arr_84 [i_4 - 2] [i_21] [i_4 - 2] [i_4 - 2]);
                    /* LoopSeq 1 */
                    for (signed char i_25 = 2; i_25 < 15; i_25 += 2) 
                    {
                        var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_71 [i_25 - 2]) & (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_4] [i_7] [(signed char)1] [10ULL] [i_25])))))) && (((/* implicit */_Bool) arr_91 [i_4 + 3]))));
                        arr_102 [i_25] [(unsigned char)0] [i_21] [i_21] [i_7] [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_8))));
                        var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) arr_19 [i_4] [i_21]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_19 [i_25 - 1] [6LL]))))) : (arr_32 [i_25 - 1] [(unsigned char)1] [i_25 - 1] [i_4 + 1] [i_4 + 1])));
                    }
                }
                for (unsigned long long int i_26 = 0; i_26 < 16; i_26 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_27 = 0; i_27 < 16; i_27 += 2) 
                    {
                        var_49 = ((/* implicit */long long int) var_6);
                        arr_111 [i_4 + 4] [i_7] [(signed char)4] [i_27] [i_27] = ((/* implicit */unsigned long long int) ((long long int) arr_30 [i_4 - 2] [i_4] [i_4] [(signed char)12]));
                        var_50 = (-(arr_85 [i_4 + 1] [i_4 + 1] [i_21]));
                        var_51 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_15 [i_4 - 1]))));
                    }
                    arr_112 [i_4] [i_7] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_61 [i_4 - 2] [i_4 - 2] [i_4 + 4]))));
                    arr_113 [i_26] [i_7] [i_21] [i_26] [4ULL] [i_26] = ((signed char) (signed char)-56);
                }
                arr_114 [i_4 - 1] [(signed char)3] [i_21] = ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) arr_62 [i_4 + 2] [i_7] [i_7] [i_21]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_7]))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_4] [i_7]))) : (var_2))));
            }
            var_52 = ((/* implicit */long long int) var_9);
            arr_115 [i_4] [8ULL] [(signed char)7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_65 [i_4 - 1] [i_4 + 1])) && (((/* implicit */_Bool) arr_93 [i_4 - 1]))));
            arr_116 [i_7] [i_7] [i_7] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_7] [(unsigned char)2] [i_4 + 4] [i_4])))))));
        }
        arr_117 [i_4] [i_4] = ((/* implicit */unsigned int) (-(5831827321619041253LL)));
    }
    for (signed char i_28 = 0; i_28 < 14; i_28 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_29 = 1; i_29 < 13; i_29 += 4) 
        {
            for (unsigned long long int i_30 = 2; i_30 < 10; i_30 += 3) 
            {
                for (signed char i_31 = 0; i_31 < 14; i_31 += 3) 
                {
                    {
                        var_53 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_61 [i_28] [i_29] [i_30 + 3])), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_13)))) - (max((((/* implicit */unsigned long long int) arr_78 [i_29] [i_31])), (12745854422935823028ULL)))))));
                        var_54 = ((/* implicit */signed char) (+(max((((/* implicit */unsigned int) ((_Bool) arr_64 [i_31] [i_30] [i_30 + 3] [i_29 - 1] [i_28]))), (min((((/* implicit */unsigned int) var_15)), (arr_125 [i_28] [12LL] [i_28] [i_31])))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_32 = 1; i_32 < 12; i_32 += 4) 
                        {
                            arr_135 [(signed char)8] [i_28] [i_28] [i_28] [i_32] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) & (((/* implicit */int) arr_18 [i_28] [14LL]))));
                            var_55 = ((/* implicit */long long int) (+(arr_118 [i_29])));
                            arr_136 [i_28] [i_29 - 1] [6ULL] [i_31] [(signed char)2] [i_32] [i_32 + 2] = ((/* implicit */signed char) (+(4294951168U)));
                            arr_137 [13ULL] [i_29] [i_30] = ((/* implicit */signed char) ((arr_122 [i_32 + 2]) > (arr_122 [i_28])));
                        }
                        for (unsigned long long int i_33 = 2; i_33 < 13; i_33 += 3) 
                        {
                            var_56 = ((/* implicit */unsigned int) (-(((min((arr_68 [i_28] [i_28] [i_29] [i_30 + 2] [i_30 + 2] [i_31] [i_33 - 2]), (((/* implicit */unsigned long long int) arr_122 [i_31])))) & (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_95 [i_28])), (arr_134 [i_31] [i_29]))))))));
                            arr_140 [i_28] [i_29] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_129 [i_31] [i_29] [i_30 + 3] [i_31]))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_39 [i_28]))))) : (((((unsigned int) arr_27 [i_28] [i_28] [i_28] [i_28])) & (min((((/* implicit */unsigned int) var_6)), (var_16)))))));
                        }
                    }
                } 
            } 
        } 
        var_57 = ((/* implicit */unsigned int) max((min(((+(var_2))), (((/* implicit */unsigned long long int) arr_103 [i_28] [i_28] [i_28] [i_28] [8LL] [(signed char)6])))), (((/* implicit */unsigned long long int) (~(max((var_16), (((/* implicit */unsigned int) arr_96 [i_28])))))))));
    }
}
