/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189796
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (1399656642) : (-1226963300)))) ? ((-(((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) arr_3 [i_0]))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            var_15 += ((/* implicit */unsigned short) (-(((/* implicit */int) var_11))));
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_9)))) : (((unsigned int) arr_14 [7ULL] [i_1] [i_2] [i_3] [i_4])))))));
                        }
                        var_17 = ((/* implicit */int) var_3);
                        var_18 -= ((arr_13 [i_0] [i_1] [i_2]) / (((/* implicit */unsigned long long int) arr_9 [i_3] [i_1] [i_2] [(short)4])));
                    }
                } 
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((((/* implicit */_Bool) 4997268532972757305ULL)) ? (var_5) : (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_13)))))))) || (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 1248672518)) ? (((/* implicit */int) (unsigned short)14642)) : (((/* implicit */int) var_3))))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        for (unsigned int i_6 = 4; i_6 < 10; i_6 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_7 = 1; i_7 < 7; i_7 += 3) 
                {
                    for (short i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        {
                            arr_25 [i_6] [i_6] [i_7 + 4] [i_8] = ((/* implicit */_Bool) var_8);
                            /* LoopSeq 2 */
                            for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 4) 
                            {
                                arr_29 [8U] [i_9] = ((/* implicit */int) ((unsigned short) arr_2 [i_5]));
                                arr_30 [1] [i_6 - 3] [i_6 - 3] [i_8] [i_9] [i_6 - 3] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))) > (var_8)));
                                arr_31 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((unsigned long long int) 3758602932U));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 1) 
                            {
                                var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)14642)) << (((arr_32 [i_7] [i_7 - 1] [i_7] [i_7 + 1] [i_7 + 3]) - (2066940277U)))));
                                var_21 = ((/* implicit */unsigned long long int) 5199704541873607820LL);
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_7]))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 2) 
                {
                    for (short i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        {
                            arr_38 [i_5] [(signed char)8] [i_11] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_35 [2LL] [0U] [i_11] [9ULL]) + (((/* implicit */unsigned long long int) -5199704541873607820LL))))) ? (((((/* implicit */int) (_Bool)1)) << (((arr_12 [4] [i_6]) - (2117205315))))) : (((/* implicit */int) arr_27 [i_5] [i_6] [i_11] [i_12] [i_5]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -706978729)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-16094))) : (-1065328747429575868LL))))))) : ((~(((/* implicit */int) ((unsigned char) var_2)))))));
                            /* LoopSeq 1 */
                            for (int i_13 = 0; i_13 < 11; i_13 += 1) 
                            {
                                arr_41 [i_12] [9ULL] [i_11] [(signed char)10] [i_13] [4ULL] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) 122843944328268681ULL)) || (((/* implicit */_Bool) (unsigned short)45773))));
                                var_23 = ((/* implicit */int) (+(((unsigned int) ((_Bool) (unsigned short)50894)))));
                                arr_42 [i_5] [i_5] = ((/* implicit */short) arr_19 [i_13]);
                                var_24 = ((/* implicit */int) 2219905416083305630ULL);
                                var_25 *= ((/* implicit */signed char) min(((+(((((/* implicit */_Bool) var_14)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((18323900129381282921ULL) / (((/* implicit */unsigned long long int) arr_1 [i_11]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_1 [i_11]))))));
                            }
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (short)-28250))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_14 = 0; i_14 < 21; i_14 += 1) 
    {
        for (signed char i_15 = 0; i_15 < 21; i_15 += 3) 
        {
            for (int i_16 = 0; i_16 < 21; i_16 += 3) 
            {
                {
                    var_27 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 4095)), (arr_50 [(unsigned short)0] [(_Bool)1] [i_16] [i_15])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_43 [(signed char)4])))) : (min((((/* implicit */unsigned long long int) min((arr_45 [8U]), (((/* implicit */unsigned short) arr_49 [i_14] [(unsigned short)10] [(short)8]))))), (arr_50 [(_Bool)1] [i_15] [(short)12] [i_15])))));
                    /* LoopSeq 2 */
                    for (unsigned short i_17 = 0; i_17 < 21; i_17 += 1) 
                    {
                        var_28 = ((/* implicit */signed char) var_12);
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_46 [(unsigned char)18]))))) : (arr_50 [(short)14] [i_14] [(signed char)18] [i_17])))))));
                        var_30 ^= ((/* implicit */_Bool) var_8);
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1125899906842623ULL))));
                        /* LoopSeq 2 */
                        for (short i_19 = 1; i_19 < 18; i_19 += 2) 
                        {
                            var_32 = ((/* implicit */int) min((((11U) + (2989248080U))), (((/* implicit */unsigned int) ((arr_51 [i_19 + 2] [i_19 + 3] [i_19 - 1] [i_14] [i_19] [i_19 - 1]) - (arr_51 [i_19] [i_19] [i_19] [i_14] [i_19 + 2] [i_19 - 1]))))));
                            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [(short)12])) ? (arr_52 [i_14] [i_14]) : (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_14]))) : (var_6)));
                        }
                        for (int i_20 = 0; i_20 < 21; i_20 += 3) 
                        {
                            var_34 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) arr_59 [i_16] [i_15] [i_14] [i_18])), (((13724497838596645112ULL) << (((1204471690879544009LL) - (1204471690879543975LL))))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6240)) ? (13724497838596645131ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((unsigned long long int) arr_56 [(short)19] [i_14] [i_15] [13ULL] [i_14] [i_20])) : (((((/* implicit */_Bool) arr_53 [11ULL] [i_14])) ? (13724497838596645112ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
                            arr_62 [i_14] [i_15] [i_15] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_0), ((short)31)))) ? (((((/* implicit */_Bool) arr_51 [i_14] [i_14] [15ULL] [i_14] [i_20] [i_20])) ? (arr_57 [i_14] [i_16]) : (arr_57 [i_14] [i_20]))) : (-515138697)));
                        }
                        var_35 ^= ((/* implicit */unsigned long long int) var_10);
                    }
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */int) min((var_36), (max(((-(((/* implicit */int) var_2)))), (((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)14642)) : (((/* implicit */int) var_0))))))))));
}
