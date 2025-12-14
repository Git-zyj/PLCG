/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28973
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-91))))) ? (((unsigned int) var_8)) : (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)59)), (arr_4 [i_1] [i_1]))))))));
                    var_18 = ((/* implicit */int) var_5);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 3; i_3 < 19; i_3 += 4) 
    {
        for (long long int i_4 = 2; i_4 < 19; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 2; i_7 < 19; i_7 += 1) 
                        {
                            arr_24 [i_3] [i_4] [i_5] [i_7] = ((/* implicit */_Bool) arr_14 [i_7] [i_3 + 1] [i_3 + 1]);
                            arr_25 [i_3] [i_4] [i_5] [i_6] [i_6] [i_5] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) max((((/* implicit */long long int) 81836846U)), (arr_23 [i_3] [i_7 - 1])))) ? (((/* implicit */int) arr_21 [i_3] [i_4] [i_4] [i_6])) : (((((/* implicit */int) arr_17 [i_4] [i_6] [i_7 + 1])) & (((/* implicit */int) (unsigned char)204))))))));
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_12))));
                            arr_26 [i_7 - 2] [i_6] [i_5] [i_4 - 2] [i_3] = ((arr_11 [i_3 - 1]) & (arr_18 [i_7] [i_6] [i_5] [i_4]));
                            var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) (+(var_8))))))) ? (max((((/* implicit */int) (_Bool)1)), (max((((/* implicit */int) (_Bool)1)), (var_8))))) : (((/* implicit */int) var_16))));
                        }
                        arr_27 [i_6] [i_5] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (arr_20 [i_4 - 1] [i_4 + 1] [i_4] [i_4 + 1] [i_4 - 2])))) ? ((+(max((((/* implicit */unsigned int) arr_21 [i_3] [i_3 - 1] [i_3 - 2] [i_3])), (var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3] [i_4 - 2] [i_5])))));
                        var_21 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_15 [i_4 - 2] [i_4] [i_4])))) ? (((((/* implicit */_Bool) arr_15 [i_4 + 1] [i_4 - 1] [i_4 + 1])) ? (((/* implicit */int) arr_15 [i_4 - 1] [i_6] [i_6])) : (((/* implicit */int) arr_15 [i_4 - 2] [i_4 - 2] [i_4 - 2])))) : (((/* implicit */int) arr_15 [i_4 - 2] [i_5] [i_5]))));
                    }
                    for (signed char i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned int) (_Bool)1);
                        arr_30 [i_5] [i_4] [i_5] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_28 [i_3 - 1] [i_3 - 1] [i_5] [i_8])), (var_13)))) ? (max((arr_28 [i_8] [i_5] [i_3 - 2] [i_3 - 2]), (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((long long int) var_5)) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-117))))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((arr_20 [i_4] [i_8] [i_4] [i_4] [i_4]) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                    }
                    var_23 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) arr_15 [i_4] [i_4] [i_4 - 1])) / (((/* implicit */int) max((var_4), (var_4)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 1) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_11 = 0; i_11 < 15; i_11 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 3; i_12 < 13; i_12 += 4) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 3) 
                        {
                            {
                                arr_44 [i_9] [i_10] [i_9] [i_12] [i_13] = ((/* implicit */_Bool) arr_42 [i_9] [i_10] [i_10] [i_9] [i_11] [i_12] [i_13]);
                                var_24 = ((/* implicit */unsigned int) ((int) 4229764027U));
                                arr_45 [i_9] = ((/* implicit */signed char) ((arr_11 [i_12 - 1]) <= (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_12 - 1] [i_12 - 2] [i_12 + 1] [i_12 - 1])))));
                                arr_46 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_9] [i_12 - 1] [i_11] [i_12 - 1])) ? (arr_22 [i_9] [i_10] [i_10] [i_9] [i_12 - 3]) : (((/* implicit */unsigned int) arr_39 [i_9] [i_9] [i_11] [i_12 + 1] [i_13] [i_10]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (long long int i_15 = 1; i_15 < 13; i_15 += 3) 
                        {
                            {
                                arr_51 [i_9] [i_9] [i_9] [i_9] [i_14] [i_15] = ((long long int) (~(arr_16 [i_9] [i_10] [i_9])));
                                arr_52 [i_11] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_9] [i_15 + 1])) ? (((/* implicit */int) arr_41 [i_15] [i_14] [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_21 [i_9] [i_10] [i_15 + 2] [i_14]))));
                                arr_53 [i_9] [i_14] [i_11] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (arr_43 [i_9] [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */long long int) arr_22 [i_9] [i_10] [i_15 - 1] [i_11] [i_10]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 11; i_16 += 3) 
                    {
                        for (signed char i_17 = 0; i_17 < 15; i_17 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) arr_14 [i_10] [i_16 + 4] [i_17]))));
                                arr_60 [i_17] [i_9] [i_9] [i_11] [i_9] [i_9] [i_9] = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_56 [i_9] [i_11] [i_16])))))) | (arr_19 [i_9] [i_17] [i_9]));
                            }
                        } 
                    } 
                    arr_61 [i_9] [i_9] = ((/* implicit */signed char) ((-7921418155065900816LL) & (((/* implicit */long long int) arr_48 [i_9] [i_11] [i_9] [i_9] [i_9]))));
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_19 = 1; i_19 < 11; i_19 += 4) 
                    {
                        arr_66 [i_9] = (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_19 + 1] [i_19] [i_19 + 3] [i_19 + 2] [i_18] [i_18]))) : (-137330369768946102LL));
                        arr_67 [i_9] [i_9] [i_9] [i_18] [i_9] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_9] [i_9])))))));
                    }
                    for (short i_20 = 0; i_20 < 15; i_20 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) max((((arr_18 [i_10] [i_10] [i_18] [i_18]) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-121))))), (((((/* implicit */_Bool) var_0)) ? (arr_18 [i_9] [i_9] [i_18] [i_20]) : (arr_18 [i_9] [i_10] [i_10] [i_20])))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_21 = 2; i_21 < 14; i_21 += 3) 
                        {
                            arr_73 [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_62 [i_9] [i_10] [i_10]) : (var_0)))) ? (arr_20 [i_9] [i_21 - 1] [i_21] [i_21 - 1] [i_21]) : (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_9] [i_10] [i_18] [i_18] [i_21 + 1] [i_20])))));
                            arr_74 [i_9] [i_10] [i_18] [i_18] [i_20] [i_21 + 1] = ((/* implicit */long long int) arr_50 [i_21 + 1] [i_21 + 1] [i_21 + 1] [i_21 - 2] [i_21 + 1] [i_21 + 1]);
                        }
                        for (unsigned int i_22 = 1; i_22 < 13; i_22 += 1) 
                        {
                            arr_77 [i_9] [i_10] [i_10] [i_10] [i_9] [i_9] [i_22 + 2] = ((/* implicit */int) max((((/* implicit */long long int) (~(arr_28 [i_9] [i_20] [i_18] [i_22 - 1])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 65203241U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_10] [i_10] [i_20]))) : (arr_50 [i_9] [i_9] [i_9] [i_20] [i_22] [i_20])))) ? (((/* implicit */long long int) arr_28 [i_22 + 2] [i_22] [i_22 + 2] [i_22 + 2])) : (arr_75 [i_22 + 1] [i_10] [i_22] [i_10] [i_10] [i_9] [i_10])))));
                            var_27 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_10 [i_22 - 1] [i_22] [i_22 + 1] [i_22 + 2])) | (((unsigned long long int) arr_58 [i_22] [i_22 - 1] [i_22 - 1] [i_22 + 2] [i_9] [i_22] [i_22 + 2]))));
                            var_28 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_75 [i_9] [i_10] [i_10] [i_9] [i_22] [i_18] [i_10])) ? (18259311039541866286ULL) : (((/* implicit */unsigned long long int) var_1))))) ? (((unsigned long long int) arr_68 [i_20] [i_22])) : (((/* implicit */unsigned long long int) arr_48 [i_9] [i_22 + 2] [i_22 + 2] [i_20] [i_22 + 2])))));
                        }
                        var_29 *= ((((max((var_0), (((/* implicit */long long int) (_Bool)1)))) <= (((/* implicit */long long int) (-(((/* implicit */int) var_7))))))) ? (arr_69 [(unsigned short)6]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_75 [i_9] [i_9] [i_10] [i_18] [i_18] [i_20] [i_9])))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_23 = 0; i_23 < 15; i_23 += 3) 
                    {
                        for (unsigned int i_24 = 1; i_24 < 14; i_24 += 3) 
                        {
                            {
                                var_30 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((arr_50 [i_24] [i_24 + 1] [i_24 + 1] [i_24 + 1] [i_24] [i_24 - 1]), (arr_50 [i_24] [i_24 - 1] [i_24 - 1] [i_24 - 1] [i_24] [i_24 + 1])))) >= ((~(arr_43 [i_24 - 1] [i_24 - 1] [i_24 - 1] [i_24] [i_24])))));
                                var_31 = ((/* implicit */unsigned long long int) var_12);
                                arr_84 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_24] [i_24 - 1] [i_24 - 1] [i_24 - 1] [i_24 - 1] [i_24 - 1]))))));
                                arr_85 [i_18] [i_10] [i_18] [i_23] [i_24] [i_9] [i_23] = ((/* implicit */signed char) max((var_6), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (max((((/* implicit */unsigned long long int) arr_65 [i_9] [i_9] [i_9] [i_9])), (187433034167685324ULL))))))));
                            }
                        } 
                    } 
                }
                arr_86 [i_10] [i_9] [i_9] = ((/* implicit */unsigned char) max((var_3), (((/* implicit */short) var_11))));
                arr_87 [i_9] = ((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) != (((var_14) - (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_40 [i_9] [i_10])) < (((/* implicit */int) arr_40 [i_9] [i_10])))))) : (max((arr_7 [i_9]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_56 [i_10] [i_10] [i_10])) : (((/* implicit */int) var_16))))))));
                arr_88 [i_9] [i_9] = ((/* implicit */_Bool) ((((arr_20 [i_10] [i_10] [i_10] [i_9] [i_9]) | (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1))) % (4294967291U)))))) / (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_9] [i_10])))));
                arr_89 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_9] [i_9] [i_10] [i_9])) ? (((/* implicit */int) arr_17 [i_9] [i_9] [i_9])) : (((((((/* implicit */int) var_3)) + (2147483647))) << (((var_13) - (720813991518951709LL)))))));
            }
        } 
    } 
}
