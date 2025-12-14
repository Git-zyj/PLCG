/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26927
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
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 7; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_11 = arr_0 [i_1] [i_1];
                                var_12 = ((/* implicit */_Bool) (~(((/* implicit */int) max(((short)3928), (((/* implicit */short) (signed char)-1)))))));
                                var_13 = ((/* implicit */_Bool) ((short) min((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_0]))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)148))))) ? (((/* implicit */int) ((short) arr_8 [i_2] [i_1] [i_1] [i_0]))) : (((/* implicit */int) ((short) var_0)))))) ? (arr_6 [i_2]) : (((/* implicit */unsigned int) ((var_2) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_10 [0LL] [i_1] [i_2])))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (short i_6 = 1; i_6 < 9; i_6 += 3) 
                        {
                            {
                                arr_22 [i_0] [i_1] [i_1] [(unsigned short)6] [i_5] [i_5] [i_6 + 1] = ((/* implicit */unsigned short) 17543503311458104215ULL);
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) max((arr_0 [i_0] [i_1]), (var_2)))), (arr_21 [(short)9] [(unsigned char)0] [i_2 + 2] [i_6 - 1])))) ? (((long long int) 2131782389U)) : (((/* implicit */long long int) (((~(((/* implicit */int) (short)2888)))) & (((/* implicit */int) arr_20 [i_6] [i_5] [i_2] [i_2] [i_1] [i_0])))))));
                            }
                        } 
                    } 
                    arr_23 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) var_1)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_7 = 1; i_7 < 21; i_7 += 3) 
    {
        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) 
        {
            {
                var_16 = ((/* implicit */short) (~(((unsigned int) (~(var_4))))));
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 23; i_9 += 3) 
                {
                    for (int i_10 = 0; i_10 < 23; i_10 += 2) 
                    {
                        {
                            var_17 &= ((/* implicit */short) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)-12)) ? (var_0) : (((/* implicit */int) (_Bool)1))))))));
                            /* LoopSeq 4 */
                            for (unsigned short i_11 = 0; i_11 < 23; i_11 += 2) /* same iter space */
                            {
                                var_18 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (((!(var_2))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) min((var_9), (((/* implicit */unsigned short) var_1)))))))) / (var_5)));
                                var_19 = ((/* implicit */unsigned long long int) arr_27 [i_7 - 1] [i_8] [i_7]);
                            }
                            for (unsigned short i_12 = 0; i_12 < 23; i_12 += 2) /* same iter space */
                            {
                                arr_39 [(_Bool)1] [i_9] [i_9] [i_8] [i_9] = ((/* implicit */short) min((((max((-450660374), (((/* implicit */int) (signed char)-46)))) & ((((_Bool)0) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) arr_35 [i_7] [i_7 + 2] [i_7] [i_9] [i_7] [i_12])))))), ((~(((((/* implicit */_Bool) 16U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)131))))))));
                                var_20 = ((/* implicit */int) (_Bool)1);
                                arr_40 [i_9] [i_8] [i_9] [i_10] [i_12] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_10))));
                            }
                            /* vectorizable */
                            for (short i_13 = 0; i_13 < 23; i_13 += 2) 
                            {
                                var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)3)) ? (4294967295U) : (((/* implicit */unsigned int) 976451210))))) ? (arr_24 [i_8] [i_8]) : (((((/* implicit */_Bool) var_10)) ? (arr_38 [i_7] [i_9] [i_9] [i_10]) : (2532435568U))));
                                arr_44 [i_13] [i_9] [18ULL] [i_9] [i_7] = ((/* implicit */unsigned int) (+(var_0)));
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_33 [i_7] [i_8] [i_9])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_33 [i_7] [i_7] [i_13]))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 2) 
                            {
                                arr_47 [18ULL] [18ULL] [i_8] [i_10] [i_10] [i_10] |= ((((/* implicit */_Bool) arr_28 [i_7 + 1] [i_7 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_7 + 2]))) : (((((/* implicit */_Bool) var_0)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))));
                                arr_48 [i_9] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-19960)) ? (31U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)28032)))));
                                var_23 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 627124388601978688LL)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) -4241612489281168923LL)) : (arr_26 [i_7]))) : (((/* implicit */unsigned long long int) 3272675393U))));
                                var_24 = ((/* implicit */unsigned int) (~(arr_29 [i_9] [i_10] [i_14])));
                                var_25 = ((/* implicit */unsigned int) arr_41 [i_7 - 1] [i_7] [i_7] [i_7] [i_7 - 1]);
                            }
                        }
                    } 
                } 
                var_26 = ((((/* implicit */_Bool) max((12102505766979246377ULL), (((/* implicit */unsigned long long int) (unsigned char)24))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_26 [i_7 + 1])) ? (arr_26 [i_7 + 1]) : (arr_26 [i_7 + 1]))));
            }
        } 
    } 
    var_27 = var_3;
    /* LoopNest 2 */
    for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 3) 
    {
        for (unsigned char i_16 = 0; i_16 < 22; i_16 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_17 = 0; i_17 < 22; i_17 += 2) 
                {
                    for (unsigned long long int i_18 = 4; i_18 < 19; i_18 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */signed char) ((long long int) ((unsigned long long int) arr_58 [i_18 + 3] [i_18 + 3] [i_18 + 2] [i_18])));
                            var_29 = ((/* implicit */unsigned short) (((+((-(4011216615U))))) == (min((((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))), ((-(var_5)))))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (short)-14174)))) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_54 [i_15])) ? (((/* implicit */int) (short)8043)) : (((/* implicit */int) (signed char)118))))))) : ((+(2921454721U)))));
                var_31 = ((((/* implicit */_Bool) max((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_45 [i_16] [(_Bool)1] [i_16] [(unsigned short)13] [i_15] [i_15])) ? (((((/* implicit */_Bool) 873536481924870861LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_37 [i_15]))))) : (((min((3272675393U), (((/* implicit */unsigned int) (signed char)-5)))) | (((/* implicit */unsigned int) ((/* implicit */int) var_9))))));
            }
        } 
    } 
}
