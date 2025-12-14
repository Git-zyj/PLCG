/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207625
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
    var_13 = ((/* implicit */_Bool) var_12);
    var_14 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            arr_6 [i_1] = ((/* implicit */unsigned int) arr_4 [i_0] [3U] [i_0]);
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_3 = 3; i_3 < 21; i_3 += 4) 
                {
                    var_15 = ((/* implicit */unsigned char) arr_8 [i_3 - 2] [i_3] [i_3] [i_3 - 2]);
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        var_16 = ((arr_12 [i_4]) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_8 [i_0] [i_1] [i_1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)151))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))));
                        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (8257770656170256917ULL)))))))));
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (+(((arr_5 [i_2] [i_2] [i_4]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                    }
                }
                for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                    arr_16 [i_0] [13ULL] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21144))) : (arr_0 [i_0])));
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_12))));
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [i_0])))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 4) 
                    {
                        arr_20 [i_0] [4ULL] [i_1] [i_2] [i_6] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_9 [i_5] [i_6 + 2]))));
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0] [i_0]))));
                        var_23 = ((/* implicit */int) (!((_Bool)1)));
                        arr_21 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                        arr_22 [(unsigned short)12] [12ULL] [i_2] [i_0] [i_0] [i_0] = (_Bool)1;
                    }
                    for (unsigned char i_7 = 4; i_7 < 21; i_7 += 2) 
                    {
                        arr_25 [(unsigned char)8] [i_1] [i_1] [i_5] [i_7 - 3] [i_7 - 3] &= ((/* implicit */unsigned int) arr_24 [i_7] [i_5] [23U] [i_5] [i_7 - 2] [i_0]);
                        arr_26 [i_0] [i_1] [i_2] [i_1] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_7 + 2] [i_7 - 3] [i_7 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_5 [10ULL] [(short)4] [10ULL])))) : (((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)153)))))));
                    }
                }
                var_24 = ((/* implicit */int) min((var_24), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_1] [i_2])) : (((/* implicit */int) var_10))))));
                /* LoopNest 2 */
                for (unsigned char i_8 = 3; i_8 < 23; i_8 += 1) 
                {
                    for (unsigned int i_9 = 2; i_9 < 20; i_9 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_2] [i_8 - 1])))))));
                            arr_32 [i_0] [i_0] [i_0] [i_2] [(short)7] [i_8] [i_9 + 3] = arr_7 [i_9 + 3] [i_9 - 1] [i_9 + 2] [i_9 + 1];
                        }
                    } 
                } 
            }
            for (unsigned long long int i_10 = 4; i_10 < 23; i_10 += 4) 
            {
                arr_37 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)41)) >> (((303752182U) - (303752163U)))));
                arr_38 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_23 [i_10] [i_10] [i_10 + 1] [i_10 - 1] [i_10 - 2]))));
            }
            for (short i_11 = 2; i_11 < 22; i_11 += 4) 
            {
                arr_41 [i_1] [(unsigned char)14] = ((/* implicit */unsigned long long int) (unsigned char)125);
                arr_42 [i_0] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) 4323455642275676160ULL))));
                /* LoopNest 2 */
                for (unsigned int i_12 = 1; i_12 < 23; i_12 += 4) 
                {
                    for (short i_13 = 0; i_13 < 24; i_13 += 1) 
                    {
                        {
                            arr_47 [i_13] [i_12] [i_11] [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] = ((/* implicit */unsigned int) var_12);
                            arr_48 [(unsigned char)15] [i_11] [i_11] [i_11] [i_11] [i_11] [(unsigned short)6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) 702675468))));
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_46 [i_13] [i_13] [i_11 - 2] [i_11 - 2]))) & (arr_18 [i_0] [i_1] [(unsigned char)15] [i_12] [i_13])));
                        }
                    } 
                } 
                arr_49 [i_0] [(unsigned char)21] [i_0] = ((/* implicit */unsigned char) (((_Bool)1) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_0] [i_11 + 2])))));
                var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_11] [i_11 - 2] [i_11] [i_11 - 1])) <= (((/* implicit */int) arr_2 [i_11 - 1] [i_11 + 1])))))));
            }
        }
        for (long long int i_14 = 0; i_14 < 24; i_14 += 4) 
        {
            arr_53 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((arr_5 [i_0] [i_0] [i_0]) & (max((arr_13 [(signed char)19]), (((/* implicit */unsigned int) var_2))))))), (min((arr_18 [i_0] [i_14] [i_14] [i_0] [i_14]), (((/* implicit */long long int) ((short) (unsigned char)14)))))));
            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) arr_33 [i_14] [i_14]))));
            arr_54 [i_0] = ((/* implicit */unsigned char) var_1);
            arr_55 [i_14] = ((/* implicit */unsigned short) max((max((arr_45 [i_0] [i_0] [i_0] [i_0] [i_14] [i_0]), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
        }
        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
        {
            arr_58 [i_15 - 1] = max((((/* implicit */long long int) ((((/* implicit */_Bool) min((2113598301U), (((/* implicit */unsigned int) (unsigned char)107))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)107)), ((unsigned short)65534)))) : (arr_43 [i_0] [i_15 - 1] [i_15 - 1])))), (arr_31 [i_15 - 1] [i_15] [i_15 - 1] [i_0] [i_0]));
            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967291U)) ? (((/* implicit */int) (unsigned char)14)) : (((((/* implicit */_Bool) (unsigned char)34)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) (short)-19490)))))))));
            /* LoopNest 3 */
            for (short i_16 = 0; i_16 < 24; i_16 += 4) 
            {
                for (unsigned char i_17 = 0; i_17 < 24; i_17 += 4) 
                {
                    for (unsigned int i_18 = 0; i_18 < 24; i_18 += 2) 
                    {
                        {
                            arr_67 [i_0] [i_0] [(short)13] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max(((-(-1630758916))), (((/* implicit */int) arr_46 [i_0] [i_15] [i_16] [i_15]))))) % (((((unsigned long long int) var_4)) | (((/* implicit */unsigned long long int) arr_45 [i_0] [i_15] [i_16] [i_17] [i_17] [i_18]))))));
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (unsigned short)20))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 1 */
        for (short i_19 = 0; i_19 < 24; i_19 += 4) 
        {
            arr_71 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (17017027536052986739ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) (unsigned char)167)) ? (var_1) : (((/* implicit */long long int) 3950213441U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 3950213458U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))))))) && (((/* implicit */_Bool) (unsigned char)255))));
            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (unsigned char)107))));
            arr_72 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (short)19490)), ((-(-2071496546)))))) <= (((((/* implicit */_Bool) 4316362193011320448LL)) ? (((/* implicit */unsigned long long int) min((1380614921), (((/* implicit */int) (unsigned char)145))))) : (((arr_33 [i_19] [i_0]) >> (((/* implicit */int) arr_40 [i_19] [i_19] [i_19] [i_19]))))))));
        }
        var_32 = ((/* implicit */unsigned char) min((((unsigned long long int) arr_17 [i_0] [i_0] [5U] [(short)21] [i_0] [i_0])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_0] [i_0])) && (((17533417905998584069ULL) <= (((/* implicit */unsigned long long int) 2273098046U)))))))));
    }
}
