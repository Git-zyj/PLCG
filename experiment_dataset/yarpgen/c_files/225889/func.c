/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225889
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                var_17 *= ((((/* implicit */int) ((_Bool) arr_4 [i_1 - 2] [i_1 - 2]))) & (((((/* implicit */int) (short)10653)) + (((/* implicit */int) (_Bool)1)))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)92)) : (((((/* implicit */_Bool) arr_9 [i_1 - 1])) ? (((/* implicit */int) (signed char)-79)) : (((/* implicit */int) (unsigned char)255)))))))));
                            arr_11 [i_1] [i_1] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */int) arr_8 [i_1 - 1] [i_0] [i_1 + 1] [i_0])) / (((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (signed char)78))))))));
                            var_19 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_2 [i_0] [(unsigned char)6])))) * (((((/* implicit */int) (short)32767)) & (((/* implicit */int) (unsigned char)116)))))) - (((/* implicit */int) ((var_0) || (((/* implicit */_Bool) var_14)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 4; i_4 < 16; i_4 += 2) 
    {
        for (signed char i_5 = 1; i_5 < 18; i_5 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_9 [i_4 + 3])))) ? (((arr_9 [i_4 + 2]) - (arr_9 [i_4 + 3]))) : (((((/* implicit */_Bool) arr_9 [i_4 + 1])) ? (arr_9 [i_4 + 1]) : (arr_9 [i_4 + 3]))))))));
                var_21 ^= ((/* implicit */signed char) max((((/* implicit */int) ((_Bool) arr_3 [i_4 + 2] [i_4 + 2]))), ((-(((/* implicit */int) ((short) var_7)))))));
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        {
                            arr_25 [i_4] [i_4] [(unsigned char)15] [i_4] [i_4 + 1] = ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((((/* implicit */_Bool) arr_12 [i_4 - 4] [i_4 - 4])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4 - 1] [i_4 - 3]))))) : (((unsigned int) var_4)));
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((signed char) var_6)))));
                            arr_26 [i_5] [i_6] [i_6] [i_7] = ((/* implicit */short) ((unsigned short) arr_6 [i_4] [i_6] [6]));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? ((+(var_2))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_5 - 1] [i_4 + 1])) : (((/* implicit */int) arr_12 [i_5 + 1] [i_4 + 2])))))));
                            arr_27 [i_4 - 3] [i_5] [i_6] [i_4 - 3] [i_7] |= ((((/* implicit */_Bool) ((short) arr_0 [i_4 - 4]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_11) < (arr_13 [i_5 + 1]))))) : (((arr_13 [i_5 + 1]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4 + 2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 2) 
    {
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            {
                var_24 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_14)) ? (arr_7 [i_9 - 1] [(short)12] [i_9 - 1]) : (arr_7 [i_9 - 1] [i_9 - 1] [i_9 - 1]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                var_25 *= ((/* implicit */short) (-(((/* implicit */int) min((var_15), (((/* implicit */signed char) arr_0 [i_8])))))));
                /* LoopSeq 2 */
                for (unsigned int i_10 = 3; i_10 < 20; i_10 += 1) 
                {
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_10 + 1])) >> (((((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_8])), (arr_5 [i_8])))) - (2742)))));
                    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(short)13] [i_9 - 1] [i_9 - 1])) ? (arr_7 [i_9 - 1] [i_9 - 1] [i_9 - 1]) : (arr_7 [i_9 - 1] [i_9 - 1] [i_9 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_16)), (var_4))))) : (min((arr_7 [i_9 - 1] [i_9 - 1] [i_9 - 1]), (arr_7 [15LL] [i_9 - 1] [i_9 - 1])))));
                    var_28 ^= ((/* implicit */unsigned long long int) 4132104316U);
                }
                for (short i_11 = 1; i_11 < 20; i_11 += 2) 
                {
                    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_34 [i_9 - 1] [i_9 - 1] [i_11 + 1])) * (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_8] [(signed char)6])) || (((/* implicit */_Bool) arr_3 [i_11] [i_11])))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_3 [i_9 - 1] [i_9 - 1]), (arr_3 [i_9 - 1] [i_9 - 1]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_8] [16U])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))))) ? (arr_6 [i_11 + 1] [i_9 - 1] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
                    var_30 += ((/* implicit */long long int) max((((/* implicit */unsigned short) ((_Bool) var_4))), (arr_3 [i_9 - 1] [i_11 - 1])));
                    /* LoopNest 2 */
                    for (signed char i_12 = 2; i_12 < 20; i_12 += 1) 
                    {
                        for (unsigned int i_13 = 1; i_13 < 18; i_13 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_6 [i_12 - 1] [i_12 - 2] [i_12 - 1])) ? (((/* implicit */int) arr_38 [i_13 + 2] [i_11] [i_13 + 2])) : (((/* implicit */int) var_15)))) >> (((((((/* implicit */_Bool) arr_42 [i_8] [(unsigned short)4] [i_9 - 1] [i_12 + 1] [i_13 + 1])) ? (((/* implicit */int) arr_8 [i_11 - 1] [i_11] [i_11 - 1] [i_9])) : (((((/* implicit */_Bool) arr_2 [i_9 - 1] [i_12])) ? (((/* implicit */int) var_10)) : (arr_28 [i_8]))))) - (217)))));
                                arr_44 [i_8] [i_13] [i_11] [i_12] [i_13 + 3] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_42 [i_8] [i_12 - 1] [i_12 - 1] [i_12 - 2] [(short)10])) ? (arr_42 [14U] [i_12 - 1] [i_11] [i_12 - 1] [i_12 - 1]) : (((/* implicit */int) var_16))))));
                            }
                        } 
                    } 
                    arr_45 [(short)3] [(signed char)15] [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_42 [i_8] [i_9 - 1] [i_11 + 1] [i_9 - 1] [i_9])))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)16552)))) : (((var_16) ? (arr_9 [i_11 - 1]) : (((/* implicit */long long int) arr_42 [i_8] [i_9 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1]))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_14 = 0; i_14 < 19; i_14 += 1) 
    {
        for (int i_15 = 4; i_15 < 16; i_15 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_16 = 1; i_16 < 17; i_16 += 4) 
                {
                    for (unsigned int i_17 = 1; i_17 < 17; i_17 += 1) 
                    {
                        {
                            var_32 += ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_16 + 2] [i_15 - 4] [i_16]))))), (((((/* implicit */int) arr_46 [i_16 + 1])) | (arr_19 [i_14] [i_14] [i_17 + 2])))));
                            /* LoopSeq 3 */
                            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                            {
                                var_33 -= ((/* implicit */unsigned int) arr_0 [i_16]);
                                var_34 = ((/* implicit */signed char) ((((arr_31 [1ULL] [i_15 - 2]) && (arr_31 [i_15] [i_15 + 2]))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_31 [i_14] [i_15 - 1])))))));
                                arr_58 [i_17] [i_15 + 2] [i_16] [i_17] [(short)11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_31 [i_14] [i_14]) ? (((((/* implicit */_Bool) arr_20 [i_15 + 3] [i_15 + 3] [i_18])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_43 [i_17] [i_15 - 2]))))) ? (((/* implicit */int) ((unsigned char) arr_13 [i_14]))) : ((~(((/* implicit */int) var_14))))));
                            }
                            for (unsigned short i_19 = 0; i_19 < 19; i_19 += 1) 
                            {
                                var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((((((/* implicit */_Bool) arr_55 [i_14] [i_14])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_8 [i_16] [i_15 + 1] [i_15 + 1] [i_16])))) * (((/* implicit */int) var_14)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_16] [i_16 + 1] [i_16 + 2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_14] [i_14] [1ULL])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_16 [12LL])))))))));
                                arr_61 [i_19] [i_17] [i_17] [i_15 + 3] [i_14] = ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_21 [7ULL] [i_14] [i_15 + 1] [i_15 + 1] [i_16 + 2])) : (((/* implicit */int) arr_38 [i_15] [i_17] [i_15 + 1])))) >= (((/* implicit */int) ((((/* implicit */int) var_9)) == (arr_42 [(_Bool)1] [i_17 - 1] [(signed char)13] [i_17 - 1] [i_17 + 1]))))));
                            }
                            for (unsigned int i_20 = 0; i_20 < 19; i_20 += 4) 
                            {
                                arr_66 [i_14] [i_15 + 2] [i_16 + 1] [i_17] [i_20] [i_20] [i_17 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (short)32767))));
                                var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) / (var_1)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_43 [i_17] [i_17])) / (((/* implicit */int) arr_60 [i_17] [(unsigned char)4] [i_17 + 2] [(unsigned char)4] [i_16 + 1] [i_17]))))) ? (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_14] [i_15 - 4]))))) : ((+(var_1))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) var_9)) * (((/* implicit */int) var_3)))) + (((/* implicit */int) arr_53 [i_14] [i_16 + 1] [i_17 + 1] [i_17])))))));
                                var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_12)))))));
                            }
                            var_38 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_41 [i_16 + 1] [i_16 + 1] [i_16 + 2] [i_17 + 1]) ? (((/* implicit */int) ((unsigned char) 4294967295U))) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_14] [i_17 + 1] [i_14])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_63 [(_Bool)1] [i_17] [i_17] [i_17 + 2]))))) : (((((/* implicit */_Bool) var_1)) ? (arr_50 [i_15 - 4] [i_15 + 1] [7ULL]) : (var_1)))));
                            var_39 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_65 [i_17 - 1] [i_16 + 1] [i_15 - 3]))) * (var_2)))) ? (((((/* implicit */int) var_8)) / (((/* implicit */int) arr_48 [i_15 - 2])))) : ((-(((/* implicit */int) (unsigned short)21143))))));
                            var_40 = ((/* implicit */long long int) ((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) max((arr_24 [i_14]), (((/* implicit */signed char) var_0))))))));
                        }
                    } 
                } 
                var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_15 + 1] [i_15] [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_31 [i_15 - 1] [i_15 - 3]) && (arr_31 [i_15 + 1] [3]))))) : (((arr_41 [(signed char)10] [i_14] [i_14] [(signed char)10]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (((arr_46 [i_14]) ? (arr_7 [i_14] [i_14] [i_15 - 1]) : (((/* implicit */unsigned long long int) arr_29 [(signed char)12] [i_14]))))))));
                var_42 -= ((/* implicit */signed char) (~((((_Bool)0) ? (((((/* implicit */_Bool) var_7)) ? (-881005708) : (((/* implicit */int) arr_8 [i_14] [i_15 - 4] [i_14] [i_15])))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_10 [i_14] [i_14] [(_Bool)1] [i_14]))))))));
            }
        } 
    } 
}
