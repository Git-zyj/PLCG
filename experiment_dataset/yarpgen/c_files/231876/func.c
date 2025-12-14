/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231876
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
    var_18 = ((/* implicit */signed char) min(((((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_16)))), ((~((~(((/* implicit */int) (short)20221))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-112)) ^ (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_2] [i_1]))))) : (arr_6 [i_0] [i_2])));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        var_20 = max((max((((/* implicit */unsigned short) arr_10 [i_3] [3ULL] [i_1] [i_0])), (max((arr_4 [i_0] [i_1]), (((/* implicit */unsigned short) arr_8 [4LL] [i_3])))))), (((/* implicit */unsigned short) max((arr_10 [(short)9] [i_0 - 3] [i_2] [i_3]), ((signed char)112)))));
                        var_21 = ((/* implicit */int) min(((((~(arr_13 [(unsigned short)15] [i_0] [i_1] [11LL] [i_3] [i_3]))) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0 - 1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_3] [i_2] [i_1] [i_0])) ? ((~(arr_9 [i_0] [i_1] [18] [i_3]))) : (((/* implicit */int) var_8)))))));
                        var_22 &= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_4 [i_3] [(unsigned short)3]), (((/* implicit */unsigned short) (signed char)-99))))), (min((((/* implicit */unsigned long long int) arr_13 [(short)0] [19ULL] [i_2] [i_2] [i_3] [i_3])), (arr_11 [i_0] [i_1] [i_2] [(short)7])))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_12)) * (arr_6 [i_0 - 3] [1ULL]))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_5 [i_0] [(signed char)8]))));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-114)) * (((/* implicit */int) (short)32767))))) : (arr_2 [i_0 - 3])));
                        }
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) var_7)), (var_14)))))) ? (((((/* implicit */unsigned long long int) min((arr_7 [i_1] [i_4]), (((/* implicit */long long int) arr_14 [13ULL] [7LL] [i_2] [i_4]))))) + ((~(arr_6 [(signed char)18] [(short)2]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_9 [15ULL] [i_1] [i_2] [i_4])), (var_6)))) ? ((~(((/* implicit */int) arr_18 [i_0] [(signed char)7] [(unsigned short)2] [i_4])))) : (((/* implicit */int) (short)-32767)))))));
                        var_26 = ((/* implicit */unsigned long long int) (~(var_1)));
                    }
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
                    {
                        var_27 = arr_22 [i_0 + 2] [i_0] [i_0] [(signed char)13];
                        arr_23 [i_6] [(unsigned short)11] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned short) arr_12 [i_6] [i_6] [i_2] [i_1] [i_0] [i_0]));
                        var_28 *= ((/* implicit */short) min((min((((/* implicit */unsigned long long int) arr_1 [i_0] [0])), (arr_2 [13]))), (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                        var_29 = ((/* implicit */unsigned long long int) arr_21 [(signed char)0] [i_1]);
                    }
                    arr_24 [1ULL] [9] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_6 [i_2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [(signed char)19] [(signed char)13] [i_2] [i_2]))))) << (((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_1] [i_2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) var_16))))) & (min((arr_13 [(signed char)15] [i_2] [(signed char)7] [i_1] [i_0] [i_0]), (((/* implicit */long long int) -1))))))) : (arr_2 [(short)18])));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_7 = 3; i_7 < 17; i_7 += 2) 
    {
        for (signed char i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            {
                arr_31 [(signed char)14] [i_7] [i_8] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-1)) : (((((/* implicit */_Bool) var_10)) ? (arr_26 [i_7]) : (((/* implicit */int) arr_21 [14] [9]))))))));
                arr_32 [i_7] [(short)2] = ((/* implicit */unsigned short) var_15);
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_9 = 0; i_9 < 19; i_9 += 2) 
    {
        for (signed char i_10 = 0; i_10 < 19; i_10 += 3) 
        {
            for (int i_11 = 0; i_11 < 19; i_11 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_12 = 2; i_12 < 16; i_12 += 2) 
                    {
                        for (long long int i_13 = 0; i_13 < 19; i_13 += 2) 
                        {
                            {
                                arr_46 [i_9] [i_9] [i_11] [i_12] [(unsigned short)11] [11] = ((/* implicit */int) var_13);
                                arr_47 [i_9] [i_9] [i_9] [i_9] [i_9] [9LL] [i_9] = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((arr_22 [i_12] [i_10] [1ULL] [(unsigned short)2]), (((/* implicit */unsigned short) (signed char)(-127 - 1)))))), ((~(min((arr_3 [(signed char)9]), (((/* implicit */unsigned long long int) arr_0 [i_9]))))))));
                                var_30 = var_8;
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */int) arr_42 [11ULL] [(signed char)17] [i_11] [i_9]);
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 18; i_14 += 1) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 19; i_15 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned long long int) var_3);
                                var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 9223372036854775804LL)) || (((/* implicit */_Bool) arr_39 [i_9] [i_10] [i_11])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_0 [i_15])), (597612184)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [(unsigned short)14] [15ULL] [(short)18] [i_10] [(unsigned short)2]))) : (arr_39 [i_9] [17LL] [i_11])))))) ? (arr_6 [(unsigned short)1] [16LL]) : (((((/* implicit */_Bool) arr_45 [(signed char)11] [i_11] [(signed char)18])) ? (((arr_48 [i_9] [i_10] [(signed char)0] [2] [i_15]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_9] [i_10] [i_11] [i_11] [i_14 - 1] [i_15]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)10), ((signed char)-114)))))))));
                                arr_53 [i_9] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)19)) ? (0) : (((/* implicit */int) (signed char)122)))), (((/* implicit */int) arr_0 [i_9]))))) ? (((/* implicit */unsigned long long int) 65535)) : (arr_39 [8] [i_10] [i_10]));
                                var_34 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (min((var_17), (((/* implicit */int) (unsigned short)5)))) : (((/* implicit */int) arr_42 [i_14] [i_14] [(signed char)0] [i_14]))))) | (min((arr_51 [i_9] [(unsigned short)13] [i_10] [(signed char)12] [i_14] [i_15]), (arr_13 [i_15] [i_14] [i_11] [i_10] [i_9] [i_9])))));
                                var_35 = ((/* implicit */int) max((var_35), (1999319563)));
                            }
                        } 
                    } 
                    arr_54 [i_10] [(signed char)18] = ((/* implicit */int) -7389001510687993925LL);
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */int) ((var_15) + (var_13)));
}
