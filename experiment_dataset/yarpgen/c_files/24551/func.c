/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24551
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_12 += ((/* implicit */int) ((signed char) 3690373980550953528LL));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-110))) & (3690373980550953528LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (((3410740003U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        var_14 = ((/* implicit */short) 576460752303423487LL);
                        arr_13 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2] [i_3 + 1])) ? (((/* implicit */int) arr_8 [i_2 - 1] [i_2] [i_3 + 1])) : (((/* implicit */int) (unsigned short)7779))));
                    }
                    for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned int) arr_2 [i_2 + 1]);
                        var_16 = ((/* implicit */signed char) (+(arr_0 [i_2 - 1] [i_2 + 1])));
                        var_17 = ((/* implicit */signed char) (_Bool)1);
                        arr_16 [i_4] [i_4] [i_2] [i_2] [(signed char)8] [(signed char)8] = ((/* implicit */unsigned int) (-(4612557527731633719ULL)));
                    }
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) -3690373980550953551LL)) ? (arr_10 [i_2 - 1] [i_1] [i_1] [(signed char)10] [i_0]) : (arr_10 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_5] [i_5])));
                        var_19 |= ((/* implicit */short) ((long long int) arr_12 [i_2 - 1] [i_1] [i_2] [i_2]));
                        arr_21 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_2 - 1])) ? (((/* implicit */long long int) arr_10 [i_0] [i_1] [i_2 + 1] [i_2 + 1] [i_2])) : (arr_14 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1])));
                        arr_22 [i_2] = ((/* implicit */long long int) arr_17 [i_2] [i_2 + 1] [i_2] [i_2] [(short)1] [i_2]);
                    }
                    var_20 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)119))));
                    arr_23 [(unsigned char)2] [i_0] [0LL] |= ((/* implicit */short) 499969570U);
                    arr_24 [i_2] [i_2] = ((/* implicit */unsigned int) var_3);
                    /* LoopSeq 4 */
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (arr_0 [i_2 + 1] [i_2 - 1])));
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 3; i_7 < 13; i_7 += 2) 
                        {
                            arr_30 [i_0] [i_2] [i_0] [7U] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                            var_22 = ((((/* implicit */_Bool) arr_6 [i_1] [i_2 + 1] [i_2])) ? (((/* implicit */int) arr_6 [i_0] [i_2 - 1] [i_2])) : (((/* implicit */int) arr_6 [i_0] [i_2 - 1] [i_2])));
                            arr_31 [i_7] [i_6] [i_2] [i_1] [i_0] = (signed char)-124;
                        }
                    }
                    for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) /* same iter space */
                    {
                        var_23 = 1324634101;
                        var_24 = ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_1 [i_8])) & (1100688316997712084LL)))) ? (arr_0 [i_2 + 1] [i_2 + 1]) : (((((/* implicit */int) arr_8 [i_0] [i_2] [i_2])) ^ (((/* implicit */int) (signed char)-94)))));
                        var_25 = ((/* implicit */int) (unsigned short)19992);
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */unsigned int) arr_12 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_8])) | (3794997741U))))));
                        arr_34 [i_0] [i_0] [i_8] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_2 - 1]))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 14; i_9 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */signed char) arr_27 [i_2 - 1] [i_2] [i_2] [i_2 + 1]);
                        arr_37 [i_2] [i_2 - 1] [i_2] [(_Bool)0] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_2]))));
                        arr_38 [i_0] [i_1] [i_2] [i_9] = ((/* implicit */int) (_Bool)1);
                        var_28 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) var_6)) : (((((/* implicit */_Bool) arr_27 [i_9] [i_2] [i_2] [i_0])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24699)))))));
                        var_29 += arr_8 [i_0] [i_9] [i_1];
                    }
                    for (unsigned int i_10 = 0; i_10 < 14; i_10 += 4) /* same iter space */
                    {
                        var_30 = ((/* implicit */long long int) arr_9 [i_2 + 1]);
                        var_31 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2 + 1]))) : (3039232157U)));
                        var_32 += ((((/* implicit */_Bool) -3332203529494075298LL)) ? (((((/* implicit */_Bool) 3145728U)) ? (((/* implicit */int) arr_28 [i_10] [i_1] [i_10] [i_10] [i_0] [i_0])) : (arr_27 [i_0] [i_0] [i_2] [i_0]))) : (((/* implicit */int) (short)10770)));
                    }
                }
            } 
        } 
        arr_41 [i_0] = ((/* implicit */short) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_6 [(_Bool)1] [i_0] [i_0])) : (((/* implicit */int) arr_35 [i_0] [i_0] [12ULL] [i_0] [i_0] [i_0]))));
    }
    /* LoopNest 3 */
    for (signed char i_11 = 0; i_11 < 12; i_11 += 4) 
    {
        for (short i_12 = 0; i_12 < 12; i_12 += 4) 
        {
            for (signed char i_13 = 0; i_13 < 12; i_13 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 1; i_14 < 11; i_14 += 2) 
                    {
                        for (long long int i_15 = 1; i_15 < 10; i_15 += 3) 
                        {
                            {
                                arr_58 [i_11] [i_12] [i_12] [i_14] [i_15 + 2] = ((/* implicit */int) max((((/* implicit */unsigned long long int) 2580636551U)), (4612557527731633719ULL)));
                                arr_59 [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */long long int) (signed char)-118))))) ? (((/* implicit */long long int) (~(max((var_7), (((/* implicit */unsigned int) arr_8 [i_11] [i_14] [i_14]))))))) : (arr_20 [i_11] [i_12])));
                            }
                        } 
                    } 
                    arr_60 [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_11 [i_13] [i_12] [i_12] [(short)13] [7ULL] [i_11]), ((short)-26049)))) ? (max((-3036623133303004624LL), (((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (-2119760313)))))) : (((((/* implicit */_Bool) 1352279885U)) ? (-3332203529494075298LL) : (((/* implicit */long long int) arr_45 [i_13] [i_13] [i_13]))))));
                    var_34 = ((/* implicit */int) 3332203529494075297LL);
                    var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_29 [i_13]))) ? (min((1593659221), (((/* implicit */int) (short)26028)))) : (((((/* implicit */_Bool) -1184536236)) ? (-463227306) : ((-2147483647 - 1)))))))));
                }
            } 
        } 
    } 
}
