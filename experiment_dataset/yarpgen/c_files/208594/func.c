/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208594
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
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 7; i_3 += 2) 
                    {
                        for (int i_4 = 2; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) arr_4 [i_1] [i_2] [i_3]);
                                arr_12 [i_4] [i_3] [i_0] [i_1] [i_0] = min((var_12), ((unsigned char)28));
                                var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) arr_10 [i_0 + 1] [i_2 + 1] [(_Bool)1] [i_3 + 2] [i_3 - 3] [i_4 - 2])))));
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_2)) >> (((((/* implicit */int) arr_10 [i_0 + 1] [i_1] [i_0 + 1] [i_3] [i_0 + 1] [(_Bool)1])) + (52))))) >> (((((/* implicit */int) max((arr_11 [(_Bool)1] [(_Bool)1] [i_2 - 2] [(_Bool)1] [i_2 + 1] [i_2] [i_2 - 1]), (arr_1 [i_0] [i_0 + 1])))) - (215)))))))))));
                                var_17 -= ((/* implicit */unsigned char) arr_9 [i_0] [i_2 - 1] [i_3] [4LL] [4]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 8; i_6 += 4) 
                        {
                            {
                                var_18 &= (!(((/* implicit */_Bool) arr_13 [i_6 - 1] [i_2 - 2])));
                                arr_19 [i_0 + 1] [(unsigned char)8] [i_2] [i_5 + 1] [i_5] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [(unsigned short)7] [(unsigned char)0] [(unsigned char)0] [9LL] [9LL] [i_0])) | (((/* implicit */int) var_12))))) ? ((~(((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) arr_3 [i_6] [(unsigned char)0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_8 [i_2 - 2] [(unsigned char)7] [i_2 - 2])))))));
                                arr_20 [i_0 + 1] [i_5] = ((/* implicit */long long int) (-((((-(((/* implicit */int) arr_10 [i_0] [i_5] [(unsigned char)4] [(unsigned char)4] [(unsigned char)6] [i_5 - 1])))) - (((/* implicit */int) min((arr_2 [(short)2]), (var_12))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_7 = 4; i_7 < 20; i_7 += 3) 
    {
        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 4) 
        {
            for (unsigned char i_9 = 0; i_9 < 23; i_9 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 23; i_11 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) (+((-((~(((/* implicit */int) arr_26 [i_8]))))))));
                                var_20 = ((/* implicit */int) min((var_20), ((~(((/* implicit */int) arr_27 [i_7] [i_7 + 3]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_12 = 1; i_12 < 22; i_12 += 1) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 23; i_13 += 2) 
                        {
                            {
                                arr_43 [i_12] [i_13] = ((/* implicit */long long int) (((((-(((/* implicit */int) arr_32 [i_7] [i_7] [i_9] [i_9])))) + (2147483647))) >> (((((((/* implicit */_Bool) ((((/* implicit */long long int) arr_34 [i_7] [i_8] [i_7] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12])) + (arr_30 [i_7] [i_7] [i_7] [i_7])))) ? (((/* implicit */int) arr_32 [i_7 - 3] [i_7 - 2] [i_12 + 1] [i_12 + 1])) : ((-(((/* implicit */int) arr_29 [i_9] [i_8] [20ULL])))))) - (10)))));
                                arr_44 [i_7 - 4] [i_12] [i_7 - 4] = ((/* implicit */int) (+(((long long int) arr_39 [i_12] [(unsigned char)2] [i_7 - 3]))));
                                var_21 = ((/* implicit */unsigned char) arr_36 [(unsigned char)14] [i_9] [i_12] [(short)12]);
                                var_22 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_39 [i_13] [i_12 + 1] [i_13])) ? (((/* implicit */int) arr_26 [18U])) : (((/* implicit */int) arr_31 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_12 - 1] [i_13]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 23; i_14 += 2) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 23; i_15 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) arr_21 [i_7 - 2]);
                                var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_7 + 2] [i_7] [(unsigned char)19] [i_7] [i_7 - 1])) + (((/* implicit */int) arr_46 [19LL] [i_7 - 3] [i_7] [i_7 - 2] [i_7] [i_7 - 3]))))) ? (((/* implicit */int) arr_31 [i_7 + 1] [(signed char)7] [i_7] [i_7 - 4] [i_7 - 4])) : (((/* implicit */int) arr_41 [i_7 + 2] [i_7 + 1] [i_7] [i_7 + 1] [i_7 - 3]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        for (unsigned char i_17 = 0; i_17 < 16; i_17 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_18 = 2; i_18 < 14; i_18 += 1) 
                {
                    for (unsigned char i_19 = 2; i_19 < 15; i_19 += 2) 
                    {
                        {
                            var_25 = var_7;
                            var_26 = ((/* implicit */int) arr_42 [i_18] [i_18] [i_19] [i_19 + 1] [i_18 + 1] [i_18] [i_16]);
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_55 [i_18 - 2])) / (((/* implicit */int) arr_55 [i_16]))))))) ? (max(((-(((/* implicit */int) var_12)))), ((~(var_6))))) : (((/* implicit */int) arr_37 [i_16] [i_16] [i_16]))));
                            var_28 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)201))) : (1824104336667261996LL))) * (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (arr_48 [i_16] [i_19 - 1] [i_19] [i_19] [i_18 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_19 - 2] [i_18 - 1] [i_18] [i_19 - 2] [(unsigned short)1] [i_19 - 2]))))))));
                            arr_63 [i_16] [i_16] [i_17] [i_18] [i_18] [i_18] = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) arr_28 [i_16] [i_18 - 1] [i_19 - 2]))) * (((/* implicit */int) arr_58 [i_16] [i_17] [i_18]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_20 = 0; i_20 < 16; i_20 += 2) 
                {
                    for (unsigned int i_21 = 0; i_21 < 16; i_21 += 2) 
                    {
                        {
                            arr_68 [i_16] [i_16] [i_16] [i_17] [i_17] [i_16] = ((/* implicit */int) arr_31 [i_16] [(unsigned short)15] [i_16] [i_16] [(unsigned char)2]);
                            var_29 = ((/* implicit */int) max((var_29), (max((((((/* implicit */int) arr_28 [i_21] [i_20] [(unsigned char)6])) * (((/* implicit */int) arr_29 [i_20] [(unsigned short)14] [i_16])))), (((((var_13) + (2147483647))) >> (((((/* implicit */int) arr_28 [i_16] [16] [i_20])) - (112)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_22 = 3; i_22 < 14; i_22 += 3) 
    {
        for (int i_23 = 0; i_23 < 17; i_23 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 17; i_24 += 2) 
                {
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        {
                            arr_80 [i_22] [(unsigned short)7] [i_22 + 3] [1U] [(unsigned char)16] [i_23] = ((((((/* implicit */_Bool) arr_40 [i_22 + 1] [i_22 + 1] [i_22 + 1] [i_22] [i_22] [i_22])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_11))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_40 [i_22] [i_22 - 1] [i_22 - 2] [i_22 - 2] [i_24] [i_25])) / (((/* implicit */int) arr_40 [i_22 - 3] [i_22 - 3] [i_22 - 3] [(signed char)17] [i_24] [i_22 - 3]))))));
                            arr_81 [(short)1] [i_24] [(_Bool)1] [1] = max((arr_38 [i_22] [i_23] [i_23] [i_22 - 3]), (((/* implicit */int) var_7)));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_26 = 0; i_26 < 17; i_26 += 2) 
                {
                    for (unsigned char i_27 = 0; i_27 < 17; i_27 += 1) 
                    {
                        for (long long int i_28 = 2; i_28 < 14; i_28 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_40 [i_22] [i_23] [i_23] [i_27] [i_28] [i_28 - 1]))));
                                arr_90 [i_27] [i_27] = ((/* implicit */signed char) var_4);
                                var_31 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_24 [i_28 + 3])) / (((/* implicit */int) arr_72 [i_22] [i_23])))) * (((((/* implicit */int) var_1)) * (((/* implicit */int) arr_24 [i_22 - 3]))))));
                                arr_91 [(unsigned char)0] [i_27] [i_27] [i_22] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_22] [i_23] [i_26] [i_27] [(unsigned char)22])) + (var_0)))) ? ((-(arr_35 [i_22] [i_23] [i_26] [i_26] [(unsigned char)3] [i_27] [i_26]))) : (((/* implicit */long long int) arr_89 [i_28] [i_28 + 1] [i_28 + 2] [(unsigned short)8] [i_22 + 3] [i_22])))), (((/* implicit */long long int) var_9))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_29 = 0; i_29 < 17; i_29 += 4) 
                {
                    for (signed char i_30 = 1; i_30 < 15; i_30 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */long long int) (+(((min((229130751), (((/* implicit */int) (unsigned short)512)))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_76 [15LL] [14])))))))));
                            arr_96 [i_22] [(signed char)7] [i_29] [i_30] = ((/* implicit */_Bool) arr_45 [i_30]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                {
                    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                    {
                        {
                            var_33 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_21 [i_22])), (((((/* implicit */_Bool) arr_84 [i_22 - 2] [i_22 - 2] [(unsigned short)1] [i_32])) ? (((/* implicit */long long int) ((/* implicit */int) arr_87 [i_22] [(_Bool)1] [i_22] [i_22] [(short)13]))) : (arr_98 [i_22] [(unsigned char)4] [i_22] [i_32]))))))));
                            var_34 = ((/* implicit */int) max((var_34), (arr_76 [i_31] [i_31])));
                            var_35 = ((/* implicit */_Bool) max((var_35), ((!(((/* implicit */_Bool) (-(((/* implicit */int) var_12)))))))));
                            var_36 = ((/* implicit */long long int) arr_86 [i_22 - 3] [i_22] [(_Bool)1] [(_Bool)1] [5LL]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_33 = 0; i_33 < 17; i_33 += 3) 
                {
                    for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                    {
                        {
                            arr_108 [i_34] [i_33] [i_33] [i_22] = ((((arr_30 [i_22 - 3] [i_23] [i_33] [i_34]) / (((/* implicit */long long int) ((/* implicit */int) arr_75 [i_23] [i_23] [6U] [i_23]))))) + (((/* implicit */long long int) ((((/* implicit */int) arr_75 [i_22] [i_23] [i_23] [i_34])) * (((/* implicit */int) arr_75 [(unsigned short)16] [i_23] [i_33] [i_34]))))));
                            arr_109 [0] [i_33] [i_33] [i_34] = ((/* implicit */short) arr_31 [i_34] [i_34] [i_33] [i_23] [(signed char)11]);
                            var_37 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_74 [i_22] [i_23] [i_33] [i_34])))))));
                            var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_97 [i_22 + 2] [i_22 - 3]))))))))));
                            var_39 = ((/* implicit */long long int) (+(((/* implicit */int) arr_25 [i_22]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
