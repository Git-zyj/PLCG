/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44956
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
    var_11 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)190)) | (((/* implicit */int) (short)-25765))));
                    var_12 = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((((/* implicit */unsigned int) min((arr_1 [i_0]), (((/* implicit */unsigned char) arr_4 [i_2] [i_0]))))), (((((/* implicit */_Bool) arr_3 [i_2 + 1] [i_0])) ? (arr_9 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1])))))))), (((long long int) min((arr_9 [i_1]), (((/* implicit */unsigned int) arr_1 [i_2])))))));
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_6 [i_0] [i_1]), (((/* implicit */unsigned short) arr_3 [i_0] [i_2 - 1]))))) ? (((int) arr_3 [i_0] [i_2 + 1])) : (((/* implicit */int) ((unsigned short) arr_5 [i_2])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_2]))) ? (((/* implicit */int) arr_0 [i_0] [i_2 + 1])) : (((/* implicit */int) arr_1 [i_1]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4828)) ? (14062284827720509350ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)190))) : (4384459245989042266ULL)))))));
                    var_13 = (i_1 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */int) ((short) min((arr_3 [i_0] [i_0]), (arr_5 [i_1]))))) >> (((((unsigned int) ((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_0]))))) - (138U)))))) : (((/* implicit */signed char) ((((/* implicit */int) ((short) min((arr_3 [i_0] [i_0]), (arr_5 [i_1]))))) >> (((((((unsigned int) ((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_0]))))) - (138U))) - (4294967142U))))));
                }
            } 
        } 
        arr_12 [i_0] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */short) arr_8 [16U] [i_0])), (arr_0 [i_0] [i_0])))) ? (((/* implicit */int) ((unsigned short) arr_0 [i_0] [i_0]))) : (((/* implicit */int) min((arr_0 [i_0] [i_0]), (((/* implicit */short) arr_8 [(unsigned char)12] [i_0]))))));
    }
    for (unsigned char i_3 = 2; i_3 < 13; i_3 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_5 [i_3 + 1])) ? (((/* implicit */int) arr_5 [i_3 + 1])) : (((/* implicit */int) arr_5 [i_3 - 1])))), (((/* implicit */int) ((short) (short)-18496)))));
        /* LoopSeq 1 */
        for (unsigned int i_4 = 1; i_4 < 11; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) min((((((/* implicit */_Bool) arr_20 [(short)0] [i_3 - 1] [i_4 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3 + 1]))) : (arr_20 [(unsigned short)8] [i_3 - 1] [i_4 + 3]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_8 [4] [i_4]))) ? (((/* implicit */int) arr_17 [2U] [i_5])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4] [i_5]))) == (arr_21 [i_5] [(short)10] [(short)10] [i_3]))))))))))));
                var_16 = ((/* implicit */signed char) arr_7 [i_3]);
                var_17 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) min((arr_16 [(unsigned char)8]), (((/* implicit */int) arr_2 [i_3])))))) ? (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_9 [(_Bool)0])) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) arr_18 [i_5] [i_4 + 1] [i_3])))), (((/* implicit */int) arr_0 [i_4] [i_4]))))) : (min((((/* implicit */unsigned int) arr_6 [i_3 - 1] [14])), (((unsigned int) arr_16 [(unsigned char)2]))))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    for (long long int i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        {
                            var_18 += ((/* implicit */short) min((((/* implicit */unsigned int) ((unsigned char) arr_0 [i_4 + 1] [i_4 + 3]))), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-25790)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)18496))))), (min((((/* implicit */unsigned int) arr_14 [i_6] [i_6])), (arr_22 [i_3 - 2] [i_4] [i_4] [i_4] [i_6] [i_7])))))));
                            arr_28 [i_3] [i_4] [i_5] [i_6] [i_5] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) min((arr_4 [i_4 + 1] [i_4 + 3]), (arr_4 [i_4 + 2] [i_4 - 1])))), (arr_17 [i_3] [i_6])));
                        }
                    } 
                } 
                arr_29 [i_3] [i_4 + 1] [i_4 + 1] = ((/* implicit */short) ((long long int) min((((/* implicit */int) ((short) arr_24 [i_5] [i_4] [i_3]))), (((((/* implicit */int) arr_2 [i_5])) % (((/* implicit */int) arr_24 [i_5] [i_5] [i_5])))))));
            }
            var_19 ^= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((arr_8 [0] [i_4]), (arr_1 [i_4])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [(short)10] [i_4 + 3])) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) arr_2 [i_3]))))) : (min((arr_25 [i_3 + 1] [(signed char)2] [i_3] [i_3 + 1] [i_3]), (((/* implicit */unsigned long long int) arr_24 [i_4] [i_3] [i_3])))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((short) (short)-25790))), (arr_9 [(unsigned short)2]))))));
        }
    }
    for (signed char i_8 = 0; i_8 < 10; i_8 += 3) 
    {
        arr_33 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_27 [i_8] [i_8] [i_8] [(signed char)8] [i_8] [i_8] [i_8]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_8]))) : (arr_13 [i_8] [i_8])));
        arr_34 [i_8] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_8]))) + (min((((/* implicit */unsigned int) arr_19 [i_8] [i_8] [(short)11])), (arr_22 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))))), (arr_31 [i_8] [i_8])));
        /* LoopSeq 3 */
        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            arr_38 [i_8] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_13 [i_8] [i_9])) ? (arr_13 [i_8] [i_8]) : (arr_13 [i_8] [i_9]))));
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 3) 
            {
                for (int i_11 = 4; i_11 < 8; i_11 += 1) 
                {
                    {
                        var_20 *= ((((/* implicit */_Bool) min((arr_37 [i_9]), (((/* implicit */long long int) arr_39 [i_9]))))) ? (((((/* implicit */_Bool) (short)18496)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)124)))) : (((/* implicit */int) ((short) arr_39 [i_9]))));
                        var_21 = ((/* implicit */short) ((signed char) (signed char)0));
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((int) arr_37 [i_9])))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((signed char) (unsigned char)1)))) ? (min((((/* implicit */long long int) ((signed char) arr_13 [i_8] [i_9]))), (min((arr_37 [i_8]), (((/* implicit */long long int) arr_7 [i_8])))))) : (min((((/* implicit */long long int) ((unsigned short) arr_0 [i_8] [i_10]))), (((arr_36 [i_8] [i_11]) ? (arr_37 [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_11])))))))));
                        var_24 ^= ((/* implicit */unsigned short) ((long long int) (unsigned char)66));
                    }
                } 
            } 
        }
        for (unsigned char i_12 = 2; i_12 < 9; i_12 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_13 = 1; i_13 < 9; i_13 += 3) 
            {
                arr_49 [i_13] [i_8] [i_8] [8] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((long long int) arr_17 [i_8] [i_13 - 1]))), (((unsigned long long int) arr_45 [i_8] [i_12] [i_8]))));
                arr_50 [i_8] = ((((/* implicit */_Bool) (short)-20585)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)66))) : (1421440210U));
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_13 + 1] [i_12 - 1] [i_12] [i_12] [i_12] [i_12])) ? (((/* implicit */int) arr_23 [i_12 - 1] [i_8] [10LL] [i_8] [i_12])) : (((/* implicit */int) arr_23 [i_12 - 1] [i_8] [i_12] [i_8] [i_12 - 2]))))) / (((((/* implicit */_Bool) arr_23 [i_12 - 1] [i_8] [i_12 - 1] [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_12 - 1] [i_8] [i_12] [i_8] [i_8]))) : (arr_31 [i_8] [i_8])))));
            }
            for (signed char i_14 = 0; i_14 < 10; i_14 += 4) 
            {
                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((unsigned char) min((((/* implicit */int) arr_3 [i_12] [i_12 - 1])), (((((/* implicit */int) arr_43 [i_8] [i_8] [i_8] [i_8] [i_14] [i_14])) % (arr_16 [i_14])))))))));
                arr_53 [i_14] [i_8] [i_8] [i_8] = ((/* implicit */int) min((arr_46 [i_8]), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_21 [i_14] [i_8] [i_8] [i_8])))) >= (min((((/* implicit */unsigned int) arr_30 [(unsigned char)1])), (arr_9 [i_8]))))))));
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_32 [i_8] [i_8]))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_22 [i_14] [i_14] [i_14] [i_12] [i_12] [i_8])) ? (arr_45 [i_8] [i_8] [i_8]) : (((/* implicit */int) arr_23 [i_8] [i_8] [i_8] [i_12] [i_14])))))) : (min((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)11765)) : (((/* implicit */int) (short)-32761)))), (((((/* implicit */_Bool) arr_51 [4U] [4U] [i_14])) ? (((/* implicit */int) arr_7 [i_8])) : (((/* implicit */int) arr_46 [i_8]))))))));
            }
            /* vectorizable */
            for (signed char i_15 = 0; i_15 < 10; i_15 += 4) 
            {
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_30 [i_12]))) ? (((((/* implicit */_Bool) arr_47 [5] [i_12] [i_8])) ? (arr_21 [i_8] [i_8] [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_15] [i_12] [i_8]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_8] [i_8])) ? (((/* implicit */int) arr_2 [i_8])) : (((/* implicit */int) arr_0 [i_8] [i_12])))))));
                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_8] [i_8] [i_12] [i_15] [4])) ^ (((/* implicit */int) arr_54 [i_15] [i_12] [i_8]))))) ? (((/* implicit */int) arr_56 [i_12 - 2] [i_8])) : (((int) arr_52 [i_8] [i_8] [i_15] [i_15]))));
                arr_57 [i_8] [i_12 - 2] [i_8] = ((/* implicit */signed char) ((unsigned char) arr_40 [i_8] [i_12 - 1] [i_12 - 2]));
            }
            var_30 += ((/* implicit */int) ((unsigned char) min((((((/* implicit */_Bool) arr_24 [i_8] [i_8] [i_8])) ? (arr_20 [(signed char)12] [(signed char)12] [(signed char)12]) : (((/* implicit */unsigned int) arr_48 [i_8] [i_8] [i_8])))), (((/* implicit */unsigned int) ((unsigned short) arr_56 [i_8] [(short)8]))))));
        }
        /* vectorizable */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_7 [6])) ? (((/* implicit */int) arr_23 [i_8] [(unsigned short)10] [i_8] [i_8] [i_16])) : (((/* implicit */int) arr_60 [(unsigned short)8] [(unsigned short)8]))))))));
            arr_62 [i_8] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_7 [i_8])) ? (((/* implicit */int) arr_1 [i_16])) : (((/* implicit */int) arr_55 [i_8])))));
            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_8])) ? (((((/* implicit */_Bool) arr_22 [i_16] [i_16] [i_16] [i_16] [i_8] [i_8])) ? (arr_37 [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_8] [i_8]))))) : (((/* implicit */long long int) ((unsigned int) arr_13 [i_8] [i_8])))));
            arr_63 [i_8] [i_8] = ((((/* implicit */_Bool) arr_15 [i_8] [i_16])) ? (((/* implicit */long long int) arr_59 [i_8] [i_8] [i_8])) : (((((/* implicit */_Bool) arr_2 [i_8])) ? (((/* implicit */long long int) arr_16 [i_8])) : (arr_37 [i_8]))));
            arr_64 [i_8] [i_16] = ((/* implicit */unsigned char) ((signed char) (unsigned char)126));
        }
    }
    for (int i_17 = 3; i_17 < 8; i_17 += 2) 
    {
        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_59 [i_17 - 2] [i_17 - 2] [i_17 - 1])) ? (arr_59 [i_17 - 3] [i_17] [i_17 - 3]) : (arr_59 [i_17 - 3] [i_17 - 3] [i_17 - 3])))))));
        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) ((short) arr_1 [i_17])))) ? (((/* implicit */unsigned long long int) min((min((arr_58 [(unsigned char)4]), (((/* implicit */long long int) arr_14 [(unsigned short)12] [(unsigned short)12])))), (((arr_37 [0LL]) % (((/* implicit */long long int) ((/* implicit */int) arr_36 [(unsigned char)4] [(unsigned char)4])))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_17] [i_17])) != (((/* implicit */int) arr_60 [0ULL] [0ULL]))))), (arr_25 [i_17] [(unsigned char)6] [i_17] [i_17 - 1] [i_17 - 2]))))))));
        var_35 ^= ((signed char) ((((/* implicit */int) ((unsigned short) arr_4 [i_17 + 1] [i_17 + 2]))) < (min((arr_39 [8]), (((/* implicit */int) arr_44 [(unsigned char)2] [(unsigned char)2]))))));
        arr_67 [i_17] = ((/* implicit */int) ((unsigned char) ((_Bool) min((((/* implicit */long long int) arr_66 [i_17 - 3])), (arr_31 [i_17] [i_17])))));
    }
}
