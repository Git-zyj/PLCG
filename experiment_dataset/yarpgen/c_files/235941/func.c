/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235941
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
    for (int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_6 [i_0 - 2] = ((/* implicit */signed char) max((arr_4 [i_0]), (max((arr_2 [i_0]), (arr_4 [i_0])))));
                arr_7 [i_0 + 1] [i_1] [i_1] = ((/* implicit */_Bool) max(((~(max((var_11), (2296858443699152686ULL))))), (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (var_11)))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) var_3))));
    /* LoopSeq 3 */
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_6)), (min((((/* implicit */long long int) (signed char)5)), ((~(arr_9 [i_2])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_3 = 2; i_3 < 20; i_3 += 4) 
        {
            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_3 + 2] [i_2])) ? (((/* implicit */int) arr_12 [i_3 - 1] [i_2])) : (((/* implicit */int) arr_12 [i_3 + 1] [i_2]))));
            var_15 = ((/* implicit */long long int) max((var_15), (arr_9 [i_3])));
            var_16 &= ((/* implicit */unsigned int) var_0);
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) ((arr_19 [i_3 - 2] [i_2] [i_3 - 2] [i_3] [i_3]) | (arr_19 [i_3 - 2] [i_2] [i_2] [i_4] [i_4])));
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_2] [i_3 + 1] [i_4] [i_5] [i_6])) ? (((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_3 + 1] [i_4] [i_2] [i_6])) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (_Bool)1)))) : (arr_19 [i_3 + 2] [i_2] [i_4] [i_3 - 2] [i_3])));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 4) 
        {
            arr_24 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((-1841348802) < (((/* implicit */int) arr_8 [i_2]))));
            var_19 &= ((/* implicit */_Bool) (~(max((max((((/* implicit */unsigned long long int) arr_11 [(signed char)12])), (7195495689663159622ULL))), (((/* implicit */unsigned long long int) 9223372036854775807LL))))));
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_20 [(unsigned char)18] [i_2] [i_2] [(unsigned char)18] [(unsigned char)18]))));
        }
        var_21 ^= ((/* implicit */signed char) min((((/* implicit */unsigned short) (signed char)1)), (max((arr_15 [(_Bool)1] [i_2] [(_Bool)1]), (arr_15 [(signed char)18] [i_2] [i_2])))));
        var_22 ^= ((/* implicit */unsigned long long int) arr_9 [(signed char)14]);
    }
    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 2) 
    {
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) (+(9223372036854775807LL)))) ? (-2492811262667516843LL) : (((/* implicit */long long int) ((max((3U), (((/* implicit */unsigned int) arr_21 [i_8] [i_8] [(unsigned short)0])))) + (((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_8] [i_8] [i_8] [i_8] [i_8])) - (((/* implicit */int) arr_21 [i_8] [i_8] [i_8])))))))))))));
        arr_27 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_12 [i_8] [i_8])), (var_3)))) ? (((/* implicit */long long int) 4261904561U)) : (((arr_2 [i_8]) + (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_8] [i_8])))))))) : (((((/* implicit */_Bool) arr_20 [i_8] [i_8] [i_8] [i_8] [i_8])) ? (((((/* implicit */_Bool) arr_16 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) arr_4 [i_8])) : (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_8])) ? (arr_5 [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_8] [i_8] [i_8] [i_8]))))))))));
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned char i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                {
                    var_24 -= ((/* implicit */_Bool) min((((/* implicit */int) var_10)), (arr_16 [i_9] [i_8] [i_10] [i_10] [i_9] [i_9])));
                    arr_33 [3ULL] [i_9] [i_10] |= (-((~((~(arr_29 [i_8]))))));
                    arr_34 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */long long int) max((arr_18 [i_8] [i_10] [i_10] [i_9] [i_9] [i_8]), (arr_18 [i_10] [i_10] [i_10] [i_10] [i_10] [i_8])));
                    var_25 = (-(((/* implicit */int) arr_21 [i_8] [i_10] [i_10])));
                }
            } 
        } 
    }
    for (unsigned int i_11 = 0; i_11 < 12; i_11 += 4) 
    {
        arr_39 [i_11] &= ((/* implicit */signed char) (+(arr_38 [i_11] [i_11])));
        arr_40 [i_11] = ((/* implicit */signed char) arr_32 [i_11]);
    }
}
