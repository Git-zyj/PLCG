/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35641
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
    var_18 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) (short)32613)) | (((/* implicit */int) (unsigned short)47281)))) : (((/* implicit */int) var_8)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */short) (unsigned short)47265);
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            var_20 |= ((/* implicit */_Bool) ((var_10) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_12 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 1]), (arr_12 [i_0] [(unsigned char)1] [i_0] [i_0 + 2] [i_2])))))));
                            var_21 = ((/* implicit */unsigned short) (~((-((-(((/* implicit */int) (short)63))))))));
                            arr_13 [i_0 - 1] [i_1] [i_2] [i_3] [8ULL] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)18255))))))))));
                        }
                        for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            arr_17 [i_5] [(unsigned char)0] [i_1] [i_1] [i_0] = (unsigned short)62947;
                            arr_18 [i_0] [i_0] [i_0] [i_3] [i_2] [5ULL] [i_5] = ((/* implicit */unsigned short) 65535U);
                            arr_19 [i_0] [i_5] [i_5] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)15))))) > ((-(arr_16 [i_0] [i_1] [i_2] [(signed char)0] [i_5])))))) < (((((/* implicit */_Bool) (-(((/* implicit */int) var_17))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_9 [i_0]))))));
                        }
                        var_22 |= ((/* implicit */short) (~(((((((/* implicit */int) var_9)) % (((/* implicit */int) (short)-63)))) & (((/* implicit */int) arr_2 [i_2]))))));
                    }
                    /* vectorizable */
                    for (signed char i_6 = 2; i_6 < 9; i_6 += 4) 
                    {
                        var_23 += ((/* implicit */short) ((((/* implicit */_Bool) (short)-16384)) ? ((-(((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [7] [i_2])))) : (((/* implicit */int) (unsigned short)47281))));
                        var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_0] [i_0 - 1] [i_0 + 2] [i_0 - 1] [(unsigned short)3] [i_0 + 1])) ? (((/* implicit */int) arr_7 [i_6 - 1] [i_6])) : (((/* implicit */int) arr_21 [i_0] [i_0] [(_Bool)1] [i_0 + 1] [i_0] [i_0 + 2]))));
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-1))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [(short)3] [i_1] [i_2] [i_0] [i_6 - 2]))) ^ (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)18224))))))));
                    }
                    for (unsigned short i_7 = 1; i_7 < 9; i_7 += 3) 
                    {
                        arr_26 [i_0] [i_1] [i_2] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (arr_16 [i_0] [i_1] [i_7 - 1] [i_7] [(unsigned char)4]) : (((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned short)47298)) * (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [(signed char)6] [i_7 + 1]))))))))));
                        arr_27 [i_7] [(signed char)6] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)21139)) ? (max((((/* implicit */int) ((((/* implicit */int) arr_25 [i_0] [i_1] [i_7] [(short)8])) < (((/* implicit */int) var_13))))), (((((/* implicit */int) var_7)) >> (((((/* implicit */int) (signed char)-32)) + (43))))))) : (min(((~(((/* implicit */int) (unsigned char)40)))), ((-(((/* implicit */int) arr_9 [i_0]))))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 2) 
                        {
                            {
                                arr_35 [(unsigned short)4] [(unsigned short)4] [i_2] [i_8] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31))) : (max((((/* implicit */long long int) (short)32613)), (var_2)))));
                                var_26 -= ((/* implicit */long long int) min((((/* implicit */int) var_17)), ((-(((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_17)))))))));
                                var_27 = ((/* implicit */_Bool) arr_24 [i_0] [i_2] [6]);
                                var_28 *= ((/* implicit */short) 15777189146804877963ULL);
                                arr_36 [i_2] [i_8] [i_9] = ((/* implicit */unsigned long long int) arr_25 [i_1] [i_1] [i_8] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_29 = ((/* implicit */int) 0LL);
        arr_37 [8LL] = ((/* implicit */unsigned short) arr_3 [4U]);
        arr_38 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0 - 1])) || (((/* implicit */_Bool) ((5795567895830941510ULL) << (((((/* implicit */int) (short)16331)) - (16306))))))))), (min((((/* implicit */int) var_4)), (min((var_0), (((/* implicit */int) arr_29 [i_0 + 2] [i_0] [i_0] [(unsigned char)0] [i_0 + 2]))))))));
        arr_39 [i_0 + 1] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */int) (unsigned char)251)) ^ (-1051315831))), (((/* implicit */int) (short)-13867))));
    }
    /* vectorizable */
    for (unsigned short i_10 = 0; i_10 < 17; i_10 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_11 = 1; i_11 < 14; i_11 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_12 = 4; i_12 < 15; i_12 += 4) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned int) var_14);
                arr_48 [i_10] = ((/* implicit */short) (-(arr_45 [i_10] [i_10] [i_12])));
            }
            for (unsigned short i_13 = 4; i_13 < 15; i_13 += 4) /* same iter space */
            {
                arr_51 [i_11] [i_11] [i_11] [i_10] = ((arr_41 [i_11 - 1] [i_13 + 2]) && (((/* implicit */_Bool) (+(var_15)))));
                /* LoopSeq 2 */
                for (short i_14 = 0; i_14 < 17; i_14 += 4) /* same iter space */
                {
                    arr_54 [(unsigned short)0] [i_10] [i_13] [i_14] = (i_10 % 2 == 0) ? (((/* implicit */short) ((arr_49 [(unsigned short)12] [i_10]) >> (((arr_49 [i_10] [i_10]) - (10838538263870571102ULL)))))) : (((/* implicit */short) ((arr_49 [(unsigned short)12] [i_10]) >> (((((arr_49 [i_10] [i_10]) - (10838538263870571102ULL))) - (15580621927536141829ULL))))));
                    arr_55 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_43 [i_10] [i_11] [i_10]))))));
                    var_31 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_40 [i_14])) * (((/* implicit */int) arr_40 [i_13]))));
                }
                for (short i_15 = 0; i_15 < 17; i_15 += 4) /* same iter space */
                {
                    var_32 = ((/* implicit */unsigned short) arr_42 [i_10] [i_11 - 1]);
                    arr_58 [i_13] [i_10] [(_Bool)1] = ((/* implicit */short) (-(((/* implicit */int) (short)896))));
                    var_33 = arr_50 [i_10] [i_11];
                }
            }
            /* LoopSeq 4 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                /* LoopNest 2 */
                for (short i_17 = 0; i_17 < 17; i_17 += 4) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */short) ((((/* implicit */int) arr_60 [i_10] [i_10])) + (((/* implicit */int) arr_60 [i_18] [i_10]))));
                            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) arr_56 [i_17] [i_17]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_19 = 0; i_19 < 17; i_19 += 1) 
                {
                    for (short i_20 = 0; i_20 < 17; i_20 += 4) 
                    {
                        {
                            arr_74 [i_10] = ((/* implicit */_Bool) (-((-(((/* implicit */int) (short)-897))))));
                            var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(-6)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_66 [i_10] [i_20] [i_16] [i_19] [i_20])))))));
                            var_37 = ((/* implicit */_Bool) (short)-24890);
                            arr_75 [i_10] [(signed char)0] [i_10] [i_19] [i_20] [i_20] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_47 [i_10] [i_11] [i_19] [i_11]))) >> (((((arr_68 [i_19] [(unsigned short)12] [i_11]) ? (((/* implicit */int) var_9)) : (-1))) + (11)))));
                        }
                    } 
                } 
                arr_76 [i_10] [i_10] = ((/* implicit */short) ((arr_68 [i_10] [i_11] [i_16]) ? ((~(((/* implicit */int) var_13)))) : (((((/* implicit */int) (short)922)) & (((/* implicit */int) (unsigned short)49904))))));
            }
            for (unsigned long long int i_21 = 0; i_21 < 17; i_21 += 1) /* same iter space */
            {
                var_38 = ((/* implicit */short) (-(((/* implicit */int) arr_43 [i_10] [i_10] [i_10]))));
                /* LoopSeq 1 */
                for (unsigned short i_22 = 0; i_22 < 17; i_22 += 4) 
                {
                    var_39 ^= ((/* implicit */unsigned short) 2021883169);
                    arr_81 [i_10] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) 2101597547)) - (arr_42 [i_10] [i_10]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [(short)13] [i_11 + 2])))));
                }
            }
            for (unsigned long long int i_23 = 0; i_23 < 17; i_23 += 1) /* same iter space */
            {
                arr_85 [(unsigned char)0] [i_11] [(unsigned char)0] [(unsigned char)0] |= ((/* implicit */signed char) (~(((/* implicit */int) (short)30501))));
                var_40 = ((/* implicit */short) (-(((/* implicit */int) arr_67 [i_11 + 1]))));
            }
            for (unsigned long long int i_24 = 0; i_24 < 17; i_24 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_25 = 0; i_25 < 17; i_25 += 4) 
                {
                    for (unsigned short i_26 = 0; i_26 < 17; i_26 += 4) 
                    {
                        {
                            var_41 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_61 [14] [i_10]))));
                            arr_93 [i_10] [i_11 + 1] = ((/* implicit */_Bool) -3997629328886198252LL);
                            var_42 = ((/* implicit */short) 0U);
                            arr_94 [i_10] [i_11 + 2] [i_10] [i_10] [i_11 + 1] [15U] = ((/* implicit */_Bool) arr_84 [i_10] [i_24] [13ULL] [i_26]);
                            var_43 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_65 [i_11 + 2] [i_11 + 1] [i_11 - 1]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_27 = 0; i_27 < 17; i_27 += 3) 
                {
                    for (int i_28 = 1; i_28 < 14; i_28 += 4) 
                    {
                        {
                            arr_100 [i_10] [i_11 + 1] [i_11 + 1] [(short)16] [(short)16] [i_11 + 1] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_67 [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_89 [i_10] [i_10] [i_24] [i_27] [i_28]))) > (var_10))))) : (((((/* implicit */_Bool) var_17)) ? (3U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_73 [15] [i_11] [i_10] [i_24] [i_27] [i_27] [i_28])))))));
                            arr_101 [i_28] [i_10] [i_24] [i_11 + 2] [i_11 + 2] [i_10] [i_10] = ((/* implicit */int) ((((9521207632733120492ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) << (((((/* implicit */int) arr_69 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11])) - (38730)))));
                            var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) 9521207632733120506ULL))));
                        }
                    } 
                } 
                arr_102 [i_10] = ((/* implicit */unsigned int) (((-(((/* implicit */int) var_4)))) == (((/* implicit */int) var_4))));
            }
            arr_103 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((((/* implicit */int) var_9)) & (((/* implicit */int) (short)-24900)))) : (((/* implicit */int) ((arr_70 [i_10]) == (14082464012745123208ULL))))));
            /* LoopNest 2 */
            for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
            {
                for (_Bool i_30 = 1; i_30 < 1; i_30 += 1) 
                {
                    {
                        var_45 += ((/* implicit */unsigned char) (~(4294967293U)));
                        var_46 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_77 [i_10] [i_30] [i_29] [i_30 - 1]))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_31 = 3; i_31 < 14; i_31 += 4) 
                        {
                            var_47 = ((/* implicit */unsigned int) (((~(var_2))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) -2021883161)) > (arr_72 [i_10] [i_11 + 2] [i_10] [i_29] [i_30] [i_31 - 3])))))));
                            arr_114 [i_10] [i_11] [i_29] [i_29] [i_31] = ((/* implicit */unsigned short) (-(((21U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_113 [i_10] [i_10] [i_11] [i_29] [i_29] [i_31 + 2])))))));
                            var_48 = var_11;
                        }
                        for (int i_32 = 1; i_32 < 16; i_32 += 4) 
                        {
                            var_49 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))) != (((arr_49 [i_29] [i_10]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                            arr_117 [i_10] [i_10] [i_29] [i_11 + 1] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_107 [i_10] [i_11] [i_30 - 1] [i_11])) : (((/* implicit */int) var_3))))) ? ((-(((/* implicit */int) arr_106 [i_11 - 1])))) : (1069547520)));
                            var_50 = ((/* implicit */unsigned char) max((var_50), (((/* implicit */unsigned char) ((1972527026U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)125))))))));
                        }
                        arr_118 [i_10] [i_11] [i_11] [i_11] = ((/* implicit */signed char) (+((~(((/* implicit */int) var_11))))));
                        arr_119 [i_30] [i_30] [i_30] [i_30] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_52 [i_10])) ? ((+(((/* implicit */int) (short)16074)))) : (((var_15) / (((/* implicit */int) arr_69 [(_Bool)1] [i_11] [i_29] [(_Bool)1]))))));
                    }
                } 
            } 
            var_51 = ((/* implicit */unsigned long long int) ((-300000035) + ((+(((/* implicit */int) var_16))))));
        }
        for (unsigned char i_33 = 0; i_33 < 17; i_33 += 3) 
        {
            arr_123 [i_10] [i_10] = ((/* implicit */_Bool) arr_113 [i_10] [i_33] [i_10] [i_33] [i_33] [i_33]);
            /* LoopNest 3 */
            for (unsigned short i_34 = 1; i_34 < 16; i_34 += 4) 
            {
                for (unsigned short i_35 = 1; i_35 < 16; i_35 += 4) 
                {
                    for (signed char i_36 = 2; i_36 < 15; i_36 += 1) 
                    {
                        {
                            var_52 = ((/* implicit */unsigned short) max((var_52), (((/* implicit */unsigned short) (~(8527071489525235455LL))))));
                            var_53 = (unsigned short)37167;
                            var_54 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_49 [i_34 + 1] [i_10]))));
                        }
                    } 
                } 
            } 
            arr_133 [i_10] [i_10] [i_10] = ((/* implicit */long long int) var_4);
        }
        /* LoopNest 2 */
        for (unsigned long long int i_37 = 0; i_37 < 17; i_37 += 1) 
        {
            for (short i_38 = 0; i_38 < 17; i_38 += 1) 
            {
                {
                    arr_139 [i_10] = (~(arr_131 [i_10] [i_10]));
                    /* LoopNest 2 */
                    for (short i_39 = 4; i_39 < 16; i_39 += 1) 
                    {
                        for (signed char i_40 = 0; i_40 < 17; i_40 += 1) 
                        {
                            {
                                arr_147 [i_10] [i_39] [i_10] [i_39] [i_40] [i_10] [i_10] = ((/* implicit */unsigned short) (signed char)-112);
                                var_55 = ((/* implicit */int) var_11);
                                arr_148 [i_10] [i_10] [i_37] [i_38] [i_38] [15ULL] [i_38] = ((/* implicit */unsigned short) arr_77 [i_40] [i_37] [i_38] [i_37]);
                                arr_149 [i_10] [i_39] [i_10] [i_38] [i_10] [i_10] = ((/* implicit */short) -525929511);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_150 [(short)2] &= ((/* implicit */unsigned char) var_10);
    }
}
