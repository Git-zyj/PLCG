/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217864
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
    for (signed char i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_11 ^= ((/* implicit */short) max((((((/* implicit */int) max((var_10), ((signed char)-1)))) ^ (((/* implicit */int) var_5)))), (((/* implicit */int) var_1))));
                var_12 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((var_0) / (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_7))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) var_5)))))))));
                arr_5 [i_0] [i_1 + 1] = ((/* implicit */signed char) var_0);
                var_13 += ((/* implicit */unsigned short) var_3);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_4 = 3; i_4 < 19; i_4 += 1) 
                {
                    for (signed char i_5 = 1; i_5 < 19; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) var_0);
                                var_15 = ((/* implicit */_Bool) min((max((((((/* implicit */long long int) var_6)) / (var_3))), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) ((((((/* implicit */int) var_1)) << (((/* implicit */int) var_1)))) - (((/* implicit */int) arr_10 [i_2] [(unsigned char)2] [i_2])))))));
                                var_16 = ((/* implicit */unsigned int) var_10);
                                var_17 = ((/* implicit */unsigned long long int) var_3);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    var_18 = (i_2 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_3] [i_2]))) > (var_0)))) << (((((/* implicit */int) ((signed char) arr_17 [i_2] [i_2] [i_2]))) + (124)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_3] [i_2]))) > (var_0)))) << (((((((/* implicit */int) ((signed char) arr_17 [i_2] [i_2] [i_2]))) + (124))) - (12))))));
                    var_19 ^= var_9;
                    /* LoopNest 2 */
                    for (signed char i_8 = 1; i_8 < 18; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 3; i_9 < 19; i_9 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [13ULL] [i_7] [i_7] [i_8] [i_8 + 1] [i_9] [i_3])) - (((/* implicit */int) var_9)))))));
                                var_21 = ((((/* implicit */long long int) ((/* implicit */int) var_2))) & (((((/* implicit */_Bool) -1279650598)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_2] [8LL]))) : (var_3))));
                                arr_23 [i_2] [i_2] [i_7] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2047)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))) ? (((((((/* implicit */int) var_9)) < (((/* implicit */int) var_5)))) ? (var_0) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_14 [i_2] [i_3] [i_3] [i_10])) : (((/* implicit */int) arr_16 [i_2] [i_10] [i_2] [i_2] [i_2] [i_2] [i_2]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)1)) ? (((((/* implicit */int) var_2)) << (((((/* implicit */int) arr_14 [i_10] [i_3] [i_3] [i_2])) - (37982))))) : (((((/* implicit */int) var_5)) - (((/* implicit */int) (short)-22025)))))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) -1279650607))));
                        var_24 += var_5;
                        var_25 = ((/* implicit */unsigned char) var_3);
                    }
                    for (int i_12 = 2; i_12 < 19; i_12 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */_Bool) min((var_26), (((((((/* implicit */_Bool) ((unsigned char) var_10))) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)32767), (((/* implicit */short) var_10)))))) : (((long long int) var_0)))) != (((/* implicit */long long int) max((var_8), (((/* implicit */unsigned int) var_9)))))))));
                        var_27 = ((/* implicit */_Bool) min((((((/* implicit */int) var_5)) / (((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_4))))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) > (((/* implicit */long long int) 134217727)))))) == (17708261455756469697ULL))))));
                    }
                    for (int i_13 = 2; i_13 < 19; i_13 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */long long int) var_4);
                        arr_35 [i_2] [i_3] [i_3] [i_13] [i_2] = ((/* implicit */long long int) (signed char)91);
                        var_29 += ((/* implicit */short) ((((long long int) (signed char)-1)) * (((((/* implicit */_Bool) arr_34 [i_10] [i_13 + 1] [i_10] [i_13])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (27U)))) : (1893059998284511682LL)))));
                        var_30 = ((/* implicit */signed char) var_3);
                    }
                    /* LoopNest 2 */
                    for (long long int i_14 = 2; i_14 < 16; i_14 += 1) 
                    {
                        for (long long int i_15 = 1; i_15 < 18; i_15 += 1) 
                        {
                            {
                                var_31 ^= ((/* implicit */short) var_2);
                                var_32 = ((/* implicit */_Bool) var_2);
                                var_33 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) max((var_4), (((/* implicit */unsigned short) arr_7 [i_10]))))) <= (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)7878)) : (((/* implicit */int) var_10)))))))) <= (((unsigned int) arr_13 [i_14 + 2] [i_14 + 2] [i_14 + 4] [i_14 + 1] [i_14]))));
                            }
                        } 
                    } 
                }
                for (long long int i_16 = 0; i_16 < 20; i_16 += 2) 
                {
                    var_34 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)2)) | (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (arr_22 [i_2] [i_3] [i_3] [i_3] [9LL] [i_16] [i_16]))))))) || (((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)29)) | (((/* implicit */int) var_9)))) & (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (var_6))))))));
                    var_35 ^= var_1;
                    var_36 += ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)227))) : (arr_17 [i_2] [i_16] [18LL]))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_31 [18U] [i_16] [i_2] [(_Bool)1] [(short)2] [i_16])) : (((/* implicit */int) arr_43 [i_16] [i_16])))))));
                    var_37 = ((/* implicit */unsigned short) min((arr_30 [i_3] [i_3] [i_3] [i_2]), (arr_39 [i_3] [i_2])));
                    arr_45 [(signed char)0] [i_2] = ((/* implicit */signed char) arr_7 [i_2]);
                }
                for (unsigned char i_17 = 0; i_17 < 20; i_17 += 1) 
                {
                    var_38 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned int) var_2)) < (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) / (var_6)))))))) / (((unsigned int) var_2))));
                    /* LoopNest 2 */
                    for (unsigned int i_18 = 0; i_18 < 20; i_18 += 3) 
                    {
                        for (long long int i_19 = 1; i_19 < 17; i_19 += 1) 
                        {
                            {
                                var_39 ^= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)6698)) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_3) : (var_0))) : (((/* implicit */long long int) var_8)))));
                                var_40 ^= ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (unsigned short)0)), (min((var_0), (((/* implicit */long long int) var_5)))))), (((/* implicit */long long int) var_7))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
