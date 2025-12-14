/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243340
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
    var_18 = ((/* implicit */int) var_8);
    var_19 = ((/* implicit */_Bool) ((long long int) (-(((long long int) 4294967295U)))));
    var_20 = ((/* implicit */unsigned short) ((unsigned int) (-(((/* implicit */int) ((short) var_1))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_3 [(unsigned char)1] [(unsigned char)1] = ((/* implicit */unsigned int) (((-(var_16))) + (((/* implicit */long long int) ((/* implicit */int) var_3)))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) != ((~(arr_0 [i_0])))));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (arr_0 [i_3]) : (4294967295U)))) ? (((/* implicit */long long int) arr_6 [i_1 + 3] [i_3])) : (arr_17 [i_0] [i_1] [i_4 - 2] [i_1] [i_4] [i_4 - 2]));
                                var_21 = ((/* implicit */short) var_0);
                            }
                        } 
                    } 
                    arr_20 [i_0] [4ULL] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))));
                    arr_21 [i_1] [i_1 + 3] [i_0] = ((/* implicit */unsigned long long int) (short)-1);
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1 + 2] [i_2 - 1])))))));
                            arr_27 [6U] [i_0] [i_1] [i_0] [i_2] [i_5] [i_6] = ((/* implicit */_Bool) arr_13 [i_2 + 1]);
                        }
                        var_23 = (-(arr_12 [i_0] [i_2 + 1] [i_1 + 2]));
                        var_24 = ((/* implicit */long long int) ((unsigned long long int) arr_16 [i_1] [i_1 + 1] [i_1]));
                        var_25 = ((((/* implicit */_Bool) arr_12 [i_0] [i_1 + 3] [i_1 + 3])) ? (var_17) : (((/* implicit */int) arr_24 [i_1] [i_1 + 1] [i_1] [i_2 - 1])));
                    }
                    for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) + (var_4)));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1 + 2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (1U)));
                            var_28 = ((/* implicit */long long int) 2751154585U);
                        }
                        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_2 + 1] [i_2 - 1] [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_12 [i_2 + 2] [i_2 - 1] [i_2 - 1]))))));
                        arr_33 [i_0] [i_1 + 1] [5] [i_2] [i_1] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) 12926459530599758701ULL)) && (((/* implicit */_Bool) var_6))));
                    }
                    for (long long int i_9 = 0; i_9 < 17; i_9 += 2) 
                    {
                        var_30 &= ((/* implicit */short) arr_29 [i_9] [i_9] [i_2] [i_2]);
                        var_31 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_26 [i_0] [i_0] [i_9] [i_9] [i_9]))))));
                        var_32 = ((/* implicit */unsigned long long int) (+(arr_12 [i_1 + 2] [i_2 + 2] [i_2 + 2])));
                    }
                }
            } 
        } 
        var_33 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_14 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0])));
    }
    for (short i_10 = 0; i_10 < 12; i_10 += 4) /* same iter space */
    {
        var_34 = ((/* implicit */unsigned char) ((max((10908864166320899346ULL), (((/* implicit */unsigned long long int) max((arr_26 [i_10] [i_10] [i_10] [i_10] [6ULL]), (var_2)))))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12)))))));
        /* LoopNest 2 */
        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 4) 
        {
            for (long long int i_12 = 1; i_12 < 11; i_12 += 4) 
            {
                {
                    arr_43 [10U] [i_11] [i_11] |= ((/* implicit */unsigned char) (+(max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_10])) && (((/* implicit */_Bool) var_2))))), (arr_8 [i_10] [i_10] [i_12 - 1] [i_12 - 1])))));
                    var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) 4161468997U))));
                    /* LoopNest 2 */
                    for (signed char i_13 = 3; i_13 < 8; i_13 += 4) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 12; i_14 += 2) 
                        {
                            {
                                arr_49 [i_10] [i_10] [i_12] [i_13] [i_12] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_31 [i_10] [i_11] [i_12] [i_13])) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_14] [i_13]))) : (var_8)))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                                var_36 = arr_35 [i_10] [i_12 - 1] [i_13] [i_12 - 1] [i_14] [i_10];
                                var_37 ^= ((/* implicit */signed char) (-(((((/* implicit */int) arr_35 [i_10] [(short)2] [i_11] [i_12] [i_13] [i_14])) / (((/* implicit */int) arr_35 [10LL] [i_11] [i_11] [i_12 - 1] [i_13] [i_14]))))));
                                arr_50 [i_11] [i_12] [i_13] [i_14] = ((/* implicit */unsigned long long int) (-(((unsigned int) arr_45 [i_13 + 1] [i_11] [i_11] [i_13 - 1]))));
                                arr_51 [(short)11] [i_11] [i_11] [i_13] [i_13] = ((/* implicit */unsigned int) arr_28 [i_10] [i_10]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_15 = 0; i_15 < 12; i_15 += 4) /* same iter space */
    {
        var_38 = ((/* implicit */short) ((unsigned long long int) arr_31 [i_15] [i_15] [i_15] [i_15]));
        var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) var_4))));
        arr_54 [i_15] [i_15] = var_2;
    }
    var_40 = ((/* implicit */long long int) var_11);
}
