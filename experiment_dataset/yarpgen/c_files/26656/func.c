/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26656
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
    var_15 = var_8;
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */signed char) arr_1 [i_0]);
                var_17 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_1 [i_0 - 1])))) ? (((((/* implicit */int) arr_2 [i_0 - 1] [i_1] [i_0])) - (((/* implicit */int) arr_2 [i_0 - 1] [i_1] [i_1])))) : (((/* implicit */int) (signed char)-64))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_2 = 3; i_2 < 19; i_2 += 2) 
    {
        var_18 += ((/* implicit */unsigned long long int) (unsigned char)97);
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                /* LoopSeq 4 */
                for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        arr_21 [i_2] [i_3] [i_4] [i_5] [i_6] = ((((/* implicit */_Bool) -1944296757)) ? (((/* implicit */int) arr_13 [i_3 + 1] [i_3] [i_3 - 2] [i_4])) : (((/* implicit */int) arr_3 [i_3 - 3])));
                        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_2 + 1] [i_3 + 1]))));
                        arr_22 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_8 [17]);
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (10928567280958479507ULL)));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 7518176792751072099ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 7518176792751072099ULL)))) : ((-(72057594037927935ULL)))));
                    }
                    for (long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        var_22 = ((/* implicit */long long int) (-(((/* implicit */int) arr_23 [i_3] [i_3 - 2] [i_3] [i_3] [i_3]))));
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7518176792751072099ULL)) ? (arr_18 [i_2] [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */long long int) arr_1 [i_5]))))) ? (10928567280958479516ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (402653184U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_7] [i_5] [i_3] [i_3] [i_2]))))))));
                        var_24 = ((/* implicit */short) arr_18 [i_7] [i_5] [i_4] [i_2] [i_2]);
                        arr_25 [i_2] [i_3] [i_3 + 1] [i_4] [i_2] [i_7] = ((/* implicit */unsigned long long int) ((signed char) 5803068171019958556LL));
                    }
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((unsigned long long int) (+(((/* implicit */int) arr_11 [i_3] [(signed char)5] [i_5]))))))));
                }
                for (unsigned short i_8 = 1; i_8 < 18; i_8 += 4) 
                {
                    arr_29 [i_2 - 2] [i_8] [i_4] [i_8 + 1] [5ULL] = ((/* implicit */short) (~(10928567280958479509ULL)));
                    var_26 = ((/* implicit */unsigned int) (unsigned char)128);
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_8 - 1] [i_8 - 1] [i_3 - 3] [i_8 - 1]))) != (3892314111U)));
                    var_28 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_2 + 1] [i_2 - 3] [i_2 - 3] [i_2 - 1])) ? (((/* implicit */int) arr_28 [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) arr_28 [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2 + 1]))));
                }
                for (long long int i_9 = 0; i_9 < 21; i_9 += 2) /* same iter space */
                {
                    arr_32 [i_2] [i_3] [i_3] [i_4] = (+(arr_27 [i_9] [i_3] [i_3] [i_2 - 3] [i_2]));
                    var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) arr_11 [i_2] [i_2] [i_2]))));
                }
                for (long long int i_10 = 0; i_10 < 21; i_10 += 2) /* same iter space */
                {
                    arr_37 [i_2] [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) 3892314101U))));
                    var_30 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2 - 3])) || (((/* implicit */_Bool) arr_6 [i_2 - 1]))));
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((signed char) 10928567280958479507ULL)))));
                }
                var_32 = ((/* implicit */int) (unsigned short)5939);
            }
            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_2 + 2])) ? (arr_7 [i_3 + 2] [i_3 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3 - 3]))))))));
        }
        var_34 += ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)27))));
        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_2] [i_2 - 1] [i_2] [i_2] [i_2 - 1])) ? (7518176792751072099ULL) : (7518176792751072108ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 7518176792751072099ULL)))) : (((((/* implicit */_Bool) arr_27 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (7518176792751072108ULL) : (((/* implicit */unsigned long long int) arr_31 [i_2] [i_2] [i_2 - 3] [i_2]))))));
        arr_38 [i_2] [i_2] = ((/* implicit */long long int) ((10928567280958479516ULL) | (((/* implicit */unsigned long long int) 3892314108U))));
    }
    for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 1) 
    {
        arr_43 [i_11] = ((/* implicit */unsigned long long int) ((int) 134201344U));
        /* LoopNest 3 */
        for (signed char i_12 = 0; i_12 < 22; i_12 += 1) 
        {
            for (long long int i_13 = 0; i_13 < 22; i_13 += 1) 
            {
                for (int i_14 = 3; i_14 < 20; i_14 += 2) 
                {
                    {
                        arr_53 [i_14] = ((/* implicit */int) ((unsigned char) arr_42 [i_12]));
                        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) (((+(((((/* implicit */_Bool) (unsigned short)31844)) ? (arr_39 [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42245))))))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)89))))) ? (((((/* implicit */_Bool) 10928567280958479528ULL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)9)))) : (((/* implicit */int) (unsigned char)94))))))))));
                    }
                } 
            } 
        } 
        arr_54 [i_11] |= ((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */int) arr_44 [i_11])) : (((int) ((((/* implicit */_Bool) 1689936322U)) ? (arr_46 [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_11])))))));
        arr_55 [(unsigned short)11] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_49 [i_11] [i_11] [i_11] [i_11]))) ? (max((arr_49 [i_11] [i_11] [i_11] [i_11]), (((/* implicit */long long int) -1357860188)))) : (((/* implicit */long long int) ((int) arr_49 [i_11] [i_11] [i_11] [i_11])))));
    }
}
