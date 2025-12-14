/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248291
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((8691900862108607884ULL), (((/* implicit */unsigned long long int) 4294967295U))))) ? (min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])), (arr_2 [i_0] [(short)6] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_0 [i_0] [i_1])) / (arr_1 [i_0]))))))) ? (min((((/* implicit */unsigned long long int) ((_Bool) arr_0 [4ULL] [i_1]))), (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (arr_2 [i_1] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -1901157803)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) -1901157803)))), (((/* implicit */unsigned int) (unsigned char)231)))))));
            arr_5 [i_0] [4ULL] &= ((/* implicit */short) ((min((((/* implicit */int) arr_4 [i_0] [i_1])), (arr_0 [i_0] [i_1]))) & (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)26)) && (((/* implicit */_Bool) 19ULL)))))));
            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_0] [i_0]) > (arr_2 [i_0] [i_0] [i_0])))), (min((arr_2 [i_0] [i_1] [i_1]), (arr_2 [i_0] [i_1] [i_1]))))), (((/* implicit */unsigned long long int) max((((/* implicit */short) ((_Bool) arr_2 [i_0] [i_0] [i_1]))), (arr_3 [i_0] [i_0] [i_0])))))))));
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) min((arr_0 [i_1] [i_1]), (((/* implicit */int) ((short) arr_2 [i_0] [i_0] [i_1]))))))));
        }
        arr_6 [i_0] = max((((((/* implicit */_Bool) min((arr_2 [6LL] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) : (max((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)46797)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (unsigned char)244))))));
    }
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        arr_9 [i_2] |= arr_8 [i_2];
        arr_10 [i_2] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_0 [i_2] [i_2])) / (arr_1 [i_2])))), (min((((/* implicit */unsigned long long int) 0U)), (34ULL)))));
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                for (unsigned short i_5 = 3; i_5 < 7; i_5 += 4) 
                {
                    for (short i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        {
                            arr_20 [i_5] [i_5] [i_5] [i_4] [i_5] [i_6] = min((((/* implicit */unsigned long long int) max((arr_19 [i_4] [i_4] [i_5] [i_5 + 2] [i_5] [i_6]), (arr_19 [i_2] [i_2] [i_5] [i_5 - 3] [i_5] [i_5])))), (arr_2 [i_4] [i_4] [i_4]));
                            arr_21 [i_5] [i_3] [(_Bool)1] [i_3] [i_3] = ((/* implicit */unsigned short) ((short) min((arr_7 [i_5 - 3]), (max((((/* implicit */unsigned long long int) arr_18 [5ULL] [i_3] [i_4] [i_5 - 2] [i_6])), (arr_7 [i_2]))))));
                            var_18 *= ((/* implicit */signed char) min((((/* implicit */short) (_Bool)1)), ((short)21317)));
                        }
                    } 
                } 
            } 
            arr_22 [i_2] [i_3] = max((max((((/* implicit */unsigned long long int) min((arr_3 [i_2] [i_3] [i_3]), (arr_3 [i_3] [i_3] [i_3])))), (arr_2 [i_2] [i_3] [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_2] [i_3] [i_3] [i_3])) ? (((arr_1 [i_3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_16 [2U] [(_Bool)1] [i_2] [i_2] [i_2] [i_3]) > (((/* implicit */unsigned long long int) arr_18 [i_2] [i_3] [(unsigned char)0] [i_2] [i_2]))))))))));
            arr_23 [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) max((41703799137251959LL), (((/* implicit */long long int) (_Bool)1))));
            arr_24 [i_2] &= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((short) arr_15 [i_3] [i_3] [i_2] [4U]))), (min((arr_1 [i_2]), (((/* implicit */unsigned int) min((arr_0 [i_2] [i_3]), (((/* implicit */int) arr_4 [i_2] [2ULL])))))))));
            arr_25 [i_3] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2] [i_3] [i_3]))) % (min((arr_18 [i_2] [i_2] [i_2] [(unsigned char)8] [i_3]), (arr_18 [i_3] [i_3] [i_3] [i_3] [i_2]))))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_19 |= ((/* implicit */short) min((((/* implicit */unsigned int) (_Bool)1)), (50113642U)));
            /* LoopSeq 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                arr_30 [i_2] [i_7] [4] |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_26 [i_2] [(_Bool)1] [i_8])) ? (((/* implicit */int) arr_26 [i_2] [i_7] [i_7])) : (((/* implicit */int) arr_3 [i_8] [i_7] [i_2])))), (((((/* implicit */_Bool) arr_13 [i_7] [i_8])) ? (((/* implicit */int) arr_13 [i_2] [i_7])) : (((/* implicit */int) arr_13 [i_8] [i_2]))))));
                /* LoopNest 2 */
                for (unsigned int i_9 = 1; i_9 < 8; i_9 += 4) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_35 [i_10] [i_9 + 1] [i_8] [i_7] [i_10] = ((/* implicit */int) min((((((/* implicit */_Bool) (short)-15811)) ? (max((arr_2 [i_10] [i_10] [i_8]), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((((/* implicit */_Bool) (unsigned char)176)) ? (12354348601957064814ULL) : (((/* implicit */unsigned long long int) 984748749)))))), (min((((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_2]))), (max((((/* implicit */unsigned long long int) arr_32 [i_2] [i_7] [i_10])), (arr_2 [i_2] [i_8] [i_8])))))));
                            arr_36 [i_10] = ((/* implicit */int) min((((/* implicit */unsigned int) min((arr_15 [i_9 - 1] [i_9 - 1] [i_10] [i_9 + 1]), (arr_15 [i_9 - 1] [i_9] [i_10] [i_9 + 2])))), (min((2259506793U), (((/* implicit */unsigned int) (_Bool)1))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 10; i_11 += 4) 
            {
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_3 [i_2] [i_7] [i_11])) : (((/* implicit */int) arr_3 [i_2] [(unsigned char)0] [(unsigned char)6])))))));
                var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)24)) & (((/* implicit */int) (short)-1))));
                arr_40 [(unsigned char)5] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_7])) <= (((((/* implicit */_Bool) arr_12 [i_2])) ? (arr_37 [i_2] [i_7] [i_7] [i_11]) : (arr_12 [i_2])))));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_7] [i_11])) ? (arr_2 [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_2] [i_2])))));
            }
            /* vectorizable */
            for (signed char i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                /* LoopSeq 2 */
                for (short i_13 = 0; i_13 < 10; i_13 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                    {
                        arr_47 [i_2] [i_14] [i_7] [i_12] [i_13] [i_14] [i_14] = ((((/* implicit */_Bool) arr_43 [i_2] [i_2] [i_2] [i_2] [(short)1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_2] [i_7] [i_13])))) : (arr_2 [i_14] [i_14 + 1] [i_14 + 1]));
                        arr_48 [i_2] [2ULL] [i_2] [i_14] [i_2] = ((/* implicit */unsigned long long int) arr_11 [i_14 + 1] [i_14 + 1] [i_14 + 1]);
                    }
                    for (unsigned char i_15 = 1; i_15 < 6; i_15 += 2) 
                    {
                        arr_51 [(unsigned char)1] [i_15] [i_12] [(_Bool)1] [i_15] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_46 [i_15 + 1] [i_7] [i_12] [i_13] [i_15] [i_13])) ? (arr_46 [i_15 - 1] [i_7] [i_12] [i_13] [i_15] [i_15 + 1]) : (((/* implicit */int) arr_50 [i_15 + 2] [7ULL] [i_15] [i_13] [i_12]))));
                        var_23 = ((/* implicit */unsigned int) ((unsigned char) arr_46 [i_15 + 2] [i_15 - 1] [i_15] [i_15 + 2] [i_15] [i_15 + 3]));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_15 + 1])) ? (((/* implicit */int) arr_8 [i_15 + 3])) : (((/* implicit */int) arr_8 [i_15 + 3]))));
                        arr_52 [i_2] [i_7] [i_12] [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_42 [i_15 + 1] [i_15 - 1] [i_15 - 1] [i_2])) ? (((/* implicit */int) arr_42 [i_15 + 3] [i_15 + 4] [i_15 + 1] [i_2])) : (((/* implicit */int) arr_42 [i_15 - 1] [i_15 - 1] [i_15 + 4] [i_13]))));
                    }
                    var_25 *= ((/* implicit */_Bool) ((arr_39 [i_7] [i_12] [i_13]) + (arr_39 [i_2] [i_7] [i_12])));
                }
                for (signed char i_16 = 0; i_16 < 10; i_16 += 3) 
                {
                    arr_56 [i_2] [i_2] [i_16] [i_2] = ((/* implicit */unsigned char) arr_49 [i_2] [i_16] [i_16] [i_16]);
                    arr_57 [i_2] [i_16] [i_7] [(_Bool)0] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_2] [i_7])) ? (arr_28 [i_2] [i_2]) : (arr_28 [i_7] [i_2])));
                }
                arr_58 [i_2] [i_2] [i_7] [i_12] = ((unsigned char) 2658999793U);
            }
            arr_59 [i_2] [i_7] &= ((/* implicit */short) ((((((/* implicit */_Bool) max((arr_31 [(unsigned char)9] [i_2] [i_2] [i_7] [2U] [i_7]), (((/* implicit */unsigned long long int) arr_26 [i_7] [i_7] [i_2]))))) ? (((/* implicit */unsigned long long int) min((arr_28 [i_2] [7ULL]), (((/* implicit */unsigned int) arr_19 [i_7] [i_2] [i_7] [i_2] [i_2] [i_2]))))) : (((((/* implicit */_Bool) 7922225851244542511ULL)) ? (16004724695218517265ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)108))))))) - (((((/* implicit */_Bool) min((arr_16 [i_2] [i_2] [i_2] [(short)0] [i_7] [i_7]), (((/* implicit */unsigned long long int) arr_54 [i_2] [(unsigned char)8] [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))) : (((((/* implicit */_Bool) arr_54 [6ULL] [i_7] [i_7] [i_2])) ? (((/* implicit */unsigned long long int) arr_12 [i_7])) : (arr_55 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))))));
            arr_60 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((short) min((((((/* implicit */unsigned long long int) 268435456U)) * (18446744073709551600ULL))), (((/* implicit */unsigned long long int) ((short) arr_34 [i_2] [i_7] [i_7] [(unsigned char)4] [i_7] [i_2] [i_7]))))));
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_2] [(unsigned short)1])) ? (min((arr_0 [i_2] [i_2]), (((/* implicit */int) min(((unsigned char)24), ((unsigned char)200)))))) : (max((((/* implicit */int) arr_19 [i_2] [i_7] [i_2] [i_2] [i_2] [i_7])), (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_32 [i_7] [i_2] [i_2])) : (arr_12 [i_2])))))));
        }
        for (unsigned short i_17 = 0; i_17 < 10; i_17 += 3) 
        {
            var_27 ^= ((/* implicit */unsigned short) min((((((/* implicit */int) arr_50 [i_2] [i_2] [i_2] [i_17] [i_17])) / (((/* implicit */int) arr_50 [i_2] [4ULL] [i_2] [i_2] [i_2])))), (((/* implicit */int) ((((/* implicit */int) arr_50 [i_2] [i_2] [i_2] [i_17] [i_2])) == (((/* implicit */int) arr_50 [i_2] [i_2] [i_2] [i_2] [i_2])))))));
            arr_64 [i_2] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3500))) / (15033110576346279756ULL))));
            arr_65 [i_17] = max((arr_7 [i_17]), (((/* implicit */unsigned long long int) ((arr_28 [i_2] [i_2]) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_42 [i_2] [i_2] [i_2] [i_17])) ? (arr_49 [(unsigned char)4] [i_2] [i_2] [i_2]) : (((/* implicit */int) arr_4 [i_2] [i_17])))))))));
        }
    }
    var_28 = ((/* implicit */unsigned int) var_14);
    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) min((((/* implicit */unsigned int) var_0)), (var_3))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))));
    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_3))))) << (((min((((/* implicit */unsigned int) var_2)), (var_3))) - (21102U))))))));
}
