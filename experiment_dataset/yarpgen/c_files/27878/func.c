/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27878
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
    var_12 = ((/* implicit */long long int) var_4);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            arr_12 [i_2] = ((/* implicit */unsigned int) ((max((8327823195191149165ULL), (((/* implicit */unsigned long long int) -974486292)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3] [i_1] [i_2 - 1])))));
                            /* LoopSeq 1 */
                            for (int i_4 = 4; i_4 < 17; i_4 += 1) 
                            {
                                var_13 = ((/* implicit */_Bool) 8327823195191149161ULL);
                                arr_15 [i_2] = ((/* implicit */unsigned int) ((max((arr_14 [i_0] [i_1] [i_2] [i_2 - 1] [i_4 + 1]), (arr_14 [i_0] [i_1] [i_2] [i_2 - 1] [i_4 + 3]))) ? (((/* implicit */int) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_2 - 1] [i_4 - 1])) > (((/* implicit */int) arr_14 [i_4] [i_1] [i_2] [i_2 - 1] [i_4 - 2]))))) : (((((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [i_2 - 1] [i_4 - 4])) >> (((var_7) - (1838775733)))))));
                            }
                            arr_16 [i_0] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-98))) : (arr_1 [i_0]))) % (((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_2] [i_2 - 1]))))), (min((min((15563982449572091854ULL), (((/* implicit */unsigned long long int) (unsigned short)25675)))), (((/* implicit */unsigned long long int) min((arr_9 [i_1] [i_2]), (((/* implicit */long long int) arr_7 [i_2])))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    for (long long int i_6 = 2; i_6 < 20; i_6 += 4) 
                    {
                        {
                            arr_23 [i_0] [i_1] [i_5] [i_6] [i_0] [i_6] = ((/* implicit */_Bool) ((arr_7 [i_1]) - (min((arr_3 [i_6 - 1] [i_1]), (((/* implicit */int) (_Bool)0))))));
                            /* LoopSeq 1 */
                            for (int i_7 = 2; i_7 < 20; i_7 += 1) 
                            {
                                arr_28 [i_0] [i_1] [i_5] [i_5] [i_5] [i_0] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) 14274669845769920232ULL)) ? (((36028797018931200ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)98), ((signed char)(-127 - 1)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1319101712U)) && (((/* implicit */_Bool) (unsigned short)4088))))))));
                                var_14 += ((/* implicit */_Bool) min((arr_17 [i_1]), (((/* implicit */short) var_4))));
                            }
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned char) min((((/* implicit */int) ((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) > (arr_20 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])))), (min((arr_11 [i_0] [i_0] [i_1] [i_1]), (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_8 = 0; i_8 < 18; i_8 += 2) 
    {
        for (unsigned long long int i_9 = 2; i_9 < 16; i_9 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 18; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 1; i_11 < 16; i_11 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (short i_12 = 1; i_12 < 14; i_12 += 4) 
                            {
                                var_16 = ((/* implicit */unsigned int) arr_22 [i_12 + 1] [i_9 + 1] [i_10] [i_11 + 1]);
                                var_17 = ((/* implicit */unsigned char) min((((/* implicit */signed char) ((arr_39 [i_9 - 1] [i_9 - 1] [i_10] [i_12 + 4] [i_11 + 2] [i_12]) > (((var_11) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-100)))))))), ((signed char)98)));
                                var_18 = ((/* implicit */_Bool) min((min((min((((/* implicit */unsigned long long int) arr_6 [i_11] [i_9])), (var_3))), (((/* implicit */unsigned long long int) arr_31 [i_8] [i_8] [i_10])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((3715418696U) >> (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) arr_3 [i_9 + 2] [i_11 + 1])))))));
                                var_19 = ((/* implicit */signed char) arr_27 [i_8] [i_9] [i_8] [i_11] [i_12] [i_11]);
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) var_10)) / (((/* implicit */int) arr_10 [i_8] [i_9] [i_11] [i_9] [i_12])))), (((/* implicit */int) arr_22 [i_9 + 2] [i_11 - 1] [i_11 - 1] [i_12 + 2]))))) ? (((/* implicit */unsigned long long int) var_8)) : (((((/* implicit */_Bool) ((var_9) >> (((var_11) + (5070056659799253702LL)))))) ? (max((((/* implicit */unsigned long long int) var_7)), (8327823195191149161ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_4 [i_10] [i_11] [i_10])), ((short)7304))))))))))));
                            }
                            var_21 = ((/* implicit */_Bool) min((((max((var_0), (((/* implicit */unsigned long long int) arr_18 [i_8])))) ^ (((/* implicit */unsigned long long int) min((arr_21 [i_8] [i_8] [i_8] [i_8]), (((/* implicit */long long int) var_1))))))), (((/* implicit */unsigned long long int) arr_38 [i_11] [i_11 + 1] [i_11] [i_11 + 1]))));
                            var_22 ^= min((max((arr_20 [i_9] [i_9] [i_9] [i_9 + 1] [i_11] [i_11 + 1]), (((/* implicit */unsigned long long int) arr_14 [i_8] [i_8] [i_9] [i_9 - 1] [i_10])))), (((/* implicit */unsigned long long int) max((arr_39 [i_11 - 1] [i_9 - 1] [i_10] [i_11] [i_11] [i_8]), (((/* implicit */long long int) (unsigned short)16231))))));
                            /* LoopSeq 3 */
                            for (unsigned int i_13 = 2; i_13 < 17; i_13 += 2) /* same iter space */
                            {
                                var_23 = var_7;
                                var_24 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_3 [i_9 + 2] [i_9 - 2])), (min((arr_20 [i_9 - 2] [i_13 - 2] [i_10] [i_11] [i_11] [i_11 + 2]), (((/* implicit */unsigned long long int) arr_17 [i_9 + 2]))))));
                            }
                            for (unsigned int i_14 = 2; i_14 < 17; i_14 += 2) /* same iter space */
                            {
                                var_25 |= ((/* implicit */unsigned long long int) min((min((arr_0 [i_10] [i_8]), (((((/* implicit */_Bool) arr_31 [i_9] [i_9] [i_14])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_8])))))), (max((var_6), (var_9)))));
                                var_26 = ((arr_29 [i_8] [i_9]) != (((/* implicit */unsigned int) arr_30 [i_9 - 1])));
                                arr_48 [i_8] [i_8] [i_8] [i_11] [i_14] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_41 [i_9] [i_10] [i_11] [i_10])) ? (((/* implicit */int) arr_5 [i_8])) : (var_6))) << (((/* implicit */int) ((((/* implicit */int) arr_2 [i_8])) < (((/* implicit */int) (short)32755)))))))) ? (var_6) : (-2147483647));
                            }
                            for (unsigned int i_15 = 2; i_15 < 17; i_15 += 2) /* same iter space */
                            {
                                arr_52 [i_8] [i_8] = ((/* implicit */short) ((min((arr_29 [i_11 + 1] [i_9 + 1]), (arr_29 [i_11 + 2] [i_9 + 2]))) & (((/* implicit */unsigned int) arr_42 [i_9 - 2] [i_9] [i_9 - 2] [i_9]))));
                                arr_53 [i_8] [i_9] [i_10] [i_10] [i_11] [i_15] [i_15] = ((/* implicit */unsigned char) ((min((arr_45 [i_15] [i_15 - 2] [i_15] [i_15] [i_11 - 1]), (arr_45 [i_15] [i_15 - 1] [i_11 + 2] [i_11 + 2] [i_11 + 2]))) / (arr_45 [i_15] [i_15 - 1] [i_11] [i_11] [i_11 + 2])));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_16 = 1; i_16 < 15; i_16 += 2) 
                {
                    for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned int i_18 = 2; i_18 < 17; i_18 += 2) 
                            {
                                arr_63 [i_8] [i_9] [i_16] [i_16] [i_18] = ((/* implicit */unsigned char) var_0);
                                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_8] [i_9])) ? (10118920878518402453ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_17 + 1] [i_18 - 2])))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)30698)) ^ (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((((/* implicit */_Bool) arr_21 [i_8] [i_16] [i_17] [i_8])) ? (arr_40 [i_8] [i_8] [i_16] [i_8] [i_18] [i_17]) : (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_18 [i_8]), (arr_36 [i_16] [i_16] [i_9] [i_17] [i_18]))))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)7295)), ((unsigned short)61441))))))))));
                                var_28 = ((/* implicit */unsigned int) (short)7304);
                            }
                            /* LoopSeq 1 */
                            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                            {
                                var_29 -= ((/* implicit */unsigned short) (signed char)98);
                                var_30 = ((((/* implicit */_Bool) arr_25 [i_9] [i_9 + 2] [i_9] [i_16 + 1] [i_16 + 2] [i_17 + 1] [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_34 [i_9] [i_9 + 2] [i_9] [i_16 + 2])) >= (arr_25 [i_9] [i_9 - 2] [i_9] [i_16 - 1] [i_16 + 2] [i_17 + 1] [i_19]))))) : (max((0U), (((/* implicit */unsigned int) (unsigned short)45200)))));
                                arr_67 [i_16] = ((/* implicit */long long int) max((((/* implicit */int) arr_41 [i_8] [i_9 + 1] [i_8] [i_17])), (max((((/* implicit */int) arr_54 [i_17 + 1] [i_16] [i_9 + 2])), (((((/* implicit */_Bool) (signed char)98)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_49 [i_8] [i_8] [i_16] [i_17] [i_8] [i_9] [i_16]))))))));
                                var_31 = ((/* implicit */long long int) arr_42 [i_8] [i_8] [i_8] [i_8]);
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_20 = 3; i_20 < 16; i_20 += 2) 
                {
                    for (signed char i_21 = 0; i_21 < 18; i_21 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned long long int i_22 = 1; i_22 < 16; i_22 += 4) 
                            {
                                var_32 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_62 [i_22] [i_8] [i_22] [i_8] [i_9 - 2])) ? (2058423659) : ((-2147483647 - 1))));
                                arr_76 [i_21] = ((/* implicit */short) arr_5 [i_20]);
                                var_33 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_9 [i_9 + 1] [i_20 - 3])) : (((((/* implicit */_Bool) var_1)) ? (arr_20 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) : (((/* implicit */unsigned long long int) var_2))))));
                            }
                            /* vectorizable */
                            for (unsigned short i_23 = 4; i_23 < 16; i_23 += 1) 
                            {
                                arr_79 [i_8] [i_9] [i_20] [i_21] [i_23] [i_8] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_71 [i_20 - 3] [i_9 - 2] [i_9 - 1])) == (((/* implicit */int) arr_71 [i_20 - 3] [i_9 - 2] [i_9 - 1]))));
                                var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((((/* implicit */unsigned int) 2147483644)) == (arr_65 [i_23 + 1] [i_23] [i_23] [i_23 + 2] [i_23] [i_23 - 1] [i_23]))))));
                            }
                            /* LoopSeq 1 */
                            for (int i_24 = 0; i_24 < 18; i_24 += 1) 
                            {
                                arr_83 [i_20] = ((/* implicit */long long int) arr_49 [i_8] [i_9] [i_9] [i_21] [i_24] [i_21] [i_9]);
                                var_35 = var_1;
                                arr_84 [i_8] [i_9] [i_20] [i_21] [i_9] = ((/* implicit */unsigned long long int) min((((/* implicit */int) max((arr_58 [i_9 + 2] [i_9 + 2] [i_8] [i_9] [i_9]), (arr_58 [i_9 + 2] [i_9] [i_9] [i_9] [i_9])))), (max((var_6), (((/* implicit */int) arr_58 [i_9 + 1] [i_9] [i_9] [i_9] [i_9]))))));
                            }
                            var_36 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_9 + 1] [i_9 - 1] [i_20 - 1])) || (((/* implicit */_Bool) var_2))))), (min((arr_31 [i_9 - 1] [i_9 - 2] [i_20 - 3]), (arr_31 [i_9 + 1] [i_9 - 1] [i_20 + 1])))));
                            arr_85 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */int) min((((var_8) << (((((((/* implicit */int) arr_49 [i_9] [i_9] [i_9 - 1] [i_9 - 1] [i_9 - 2] [i_20 - 1] [i_20 + 2])) + (49))) - (12))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) arr_66 [i_8] [i_21] [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61441))) : (arr_24 [i_8] [i_8] [i_8] [i_8] [i_8]))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_25 = 1; i_25 < 14; i_25 += 2) 
                {
                    var_37 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) var_1)) - (var_3))), (((/* implicit */unsigned long long int) ((var_11) == (arr_40 [i_25] [i_25] [i_9] [i_9] [i_8] [i_8]))))))) ? (((/* implicit */unsigned long long int) arr_29 [i_9 + 1] [i_25 + 3])) : (min((((/* implicit */unsigned long long int) arr_81 [i_25 - 1] [i_9] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9] [i_9 - 1])), (min((((/* implicit */unsigned long long int) arr_61 [i_8] [i_8] [i_8] [i_25] [i_8] [i_8] [i_8])), (arr_33 [i_8] [i_8])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_26 = 0; i_26 < 18; i_26 += 2) 
                    {
                        for (int i_27 = 0; i_27 < 18; i_27 += 2) 
                        {
                            {
                                var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_6)), (arr_33 [i_8] [i_8]))) | (max((var_3), (10118920878518402455ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56140))) : (((((/* implicit */unsigned long long int) var_7)) | (var_0))))))));
                                var_39 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_5)), (arr_62 [i_8] [i_9] [i_25] [i_8] [i_8])))) + (((10118920878518402450ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)98)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_80 [i_9 + 2] [i_25 + 1] [i_9 + 2] [i_25 + 3])) != (var_5))))) : (arr_93 [i_8])));
                            }
                        } 
                    } 
                }
                for (unsigned char i_28 = 1; i_28 < 16; i_28 += 4) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                    {
                        var_40 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_78 [i_8] [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) arr_51 [i_29] [i_28] [i_9])) : (((((/* implicit */unsigned long long int) -472454413)) * (var_3))))) << (((max((((/* implicit */unsigned long long int) (short)-32755)), (max((arr_96 [i_28] [i_28]), (((/* implicit */unsigned long long int) arr_13 [i_8] [i_28])))))) - (18446744073709518820ULL)))));
                        var_41 -= ((/* implicit */_Bool) arr_33 [i_8] [i_9]);
                    }
                    /* vectorizable */
                    for (int i_30 = 2; i_30 < 17; i_30 += 2) 
                    {
                        var_42 = ((/* implicit */long long int) ((((/* implicit */long long int) arr_61 [i_9] [i_9 + 1] [i_28 - 1] [i_28] [i_28] [i_30 - 1] [i_30])) > (var_8)));
                        arr_102 [i_8] [i_28] [i_28] [i_30] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_28] [i_28 + 2] [i_28 + 2] [i_28])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_87 [i_28])) >= (((/* implicit */int) var_4)))))) : (arr_40 [i_28 + 1] [i_30 - 2] [i_30 - 2] [i_30] [i_28] [i_30 - 2])));
                        var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) arr_33 [i_9 - 1] [i_28 + 2]))));
                        var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) arr_8 [i_9] [i_30]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_31 = 1; i_31 < 17; i_31 += 2) 
                    {
                        for (unsigned long long int i_32 = 0; i_32 < 18; i_32 += 1) 
                        {
                            {
                                var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) var_4))));
                                var_46 = ((/* implicit */_Bool) min((var_46), (((/* implicit */_Bool) max((arr_109 [i_9 + 2] [i_9] [i_28 - 1] [i_28 + 2] [i_31 + 1]), (((/* implicit */short) ((((/* implicit */_Bool) arr_109 [i_9 - 1] [i_9 - 1] [i_28 + 2] [i_28 + 2] [i_31 - 1])) && (((/* implicit */_Bool) arr_109 [i_9 - 2] [i_9 - 2] [i_28 + 2] [i_28 - 1] [i_31 - 1]))))))))));
                                var_47 = ((/* implicit */long long int) max((((((/* implicit */_Bool) 2001845464)) ? (((560609158U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_74 [i_8] [i_9] [i_28] [i_31] [i_32] [i_8] [i_9]))))) : (min((((/* implicit */unsigned int) (signed char)-110)), (arr_101 [i_9] [i_9]))))), (((/* implicit */unsigned int) (short)0))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_33 = 3; i_33 < 16; i_33 += 4) 
                    {
                        for (unsigned short i_34 = 0; i_34 < 18; i_34 += 1) 
                        {
                            {
                                var_48 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_94 [i_8] [i_9] [i_28] [i_28] [i_34])) : (((/* implicit */int) arr_80 [i_8] [i_8] [i_8] [i_8])))) >> (((max((((/* implicit */unsigned int) arr_77 [i_8] [i_8] [i_8] [i_8] [i_8])), (2U))) - (428069312U))))) | (var_6)));
                                var_49 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) -472454413)) ? (((/* implicit */int) arr_6 [i_33] [i_9])) : (((/* implicit */int) (unsigned char)101))))) & (arr_106 [i_8] [i_8] [i_8] [i_8] [i_8])))) - (max((arr_55 [i_8] [i_8] [i_8]), (6387749668408665852ULL)))));
                                var_50 = ((/* implicit */long long int) min((((((/* implicit */int) arr_34 [i_9 - 1] [i_9] [i_33 - 3] [i_28 - 1])) | (((/* implicit */int) arr_34 [i_9 - 2] [i_9] [i_33 - 3] [i_28 + 1])))), (((/* implicit */int) max((arr_34 [i_9 - 1] [i_28] [i_33 - 2] [i_28 + 2]), (arr_34 [i_9 + 2] [i_9] [i_33 - 2] [i_28 + 2]))))));
                                var_51 = ((/* implicit */unsigned char) min((var_51), (((/* implicit */unsigned char) (short)24576))));
                            }
                        } 
                    } 
                    var_52 = ((/* implicit */unsigned int) arr_73 [i_8] [i_9] [i_28] [i_8] [i_28]);
                }
                /* LoopNest 2 */
                for (signed char i_35 = 2; i_35 < 17; i_35 += 2) 
                {
                    for (signed char i_36 = 1; i_36 < 16; i_36 += 1) 
                    {
                        {
                            var_53 = ((/* implicit */unsigned int) (signed char)110);
                            arr_120 [i_8] [i_35] [i_9] [i_8] &= ((/* implicit */signed char) arr_27 [i_8] [i_9] [i_35] [i_35] [i_36] [i_35]);
                            /* LoopSeq 1 */
                            for (long long int i_37 = 1; i_37 < 15; i_37 += 4) 
                            {
                                var_54 += ((/* implicit */_Bool) arr_34 [i_8] [i_9] [i_35] [i_37]);
                                arr_123 [i_8] [i_9] [i_9] [i_36] = ((/* implicit */signed char) min((((/* implicit */int) min((arr_36 [i_9 - 2] [i_9] [i_35 - 1] [i_9] [i_36 - 1]), (((/* implicit */short) ((-1623527521) <= (((/* implicit */int) var_10)))))))), (arr_42 [i_8] [i_8] [i_8] [i_8])));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
