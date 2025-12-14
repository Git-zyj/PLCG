/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34710
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((unsigned short) arr_3 [i_0]));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            var_13 = ((/* implicit */signed char) ((((arr_13 [i_2] [i_1] [i_0]) ^ (arr_2 [i_0]))) + (((unsigned long long int) arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4]))));
                            var_14 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_1))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4] [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [(unsigned char)11] [i_0])))))));
                        }
                        for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                        {
                            arr_20 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_4 [i_5])) : (((/* implicit */int) arr_4 [i_0]))));
                            arr_21 [i_5] [i_0] [(unsigned char)1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0] [i_2 + 1] [i_2]))));
                            var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-104)) * (((/* implicit */int) (unsigned char)0)))))));
                            var_16 = ((/* implicit */long long int) (~((-(arr_8 [i_2 - 1] [i_1])))));
                            arr_22 [i_0] [i_0] [i_3] [i_5] = arr_7 [9U] [2LL] [i_5];
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 1; i_6 < 16; i_6 += 3) 
                        {
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_6 - 1])) ? (arr_13 [i_6 - 1] [i_6 - 1] [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [4LL] [i_6 + 1] [i_6 + 1] [i_1])))));
                            arr_26 [i_0] [i_3] [i_2] [i_2] [i_2] [i_3] = var_0;
                            var_18 = ((long long int) arr_19 [i_6 - 1] [i_6] [i_6 - 1] [i_6 + 1] [i_3] [i_3] [i_2 + 1]);
                        }
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) 825791530))) && (((/* implicit */_Bool) arr_8 [8U] [i_1]))));
                        arr_27 [i_0] [i_1] [(signed char)12] [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) -1595269414873607056LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_16 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        arr_32 [i_7] [i_7] = ((long long int) var_1);
        /* LoopNest 2 */
        for (long long int i_8 = 2; i_8 < 13; i_8 += 3) 
        {
            for (long long int i_9 = 0; i_9 < 15; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 1; i_10 < 12; i_10 += 1) 
                    {
                        for (long long int i_11 = 3; i_11 < 14; i_11 += 2) 
                        {
                            {
                                arr_47 [i_7] [i_8 + 1] [i_11] [i_10] [i_8 + 1] = ((/* implicit */long long int) arr_29 [i_9]);
                                arr_48 [i_11] [i_11] = ((/* implicit */unsigned short) (!(var_9)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 1) 
                    {
                        for (long long int i_13 = 0; i_13 < 15; i_13 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */short) var_8);
                                var_21 = ((((/* implicit */_Bool) 89439430U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (89439430U));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 2) 
                    {
                        for (signed char i_15 = 4; i_15 < 13; i_15 += 1) 
                        {
                            {
                                arr_58 [i_7] [i_15] [i_9] [i_15] [i_7] = min((((/* implicit */unsigned long long int) ((long long int) arr_51 [i_15] [i_15 - 1] [i_15] [i_15]))), (((var_7) ? (arr_23 [i_8 + 2] [i_8 + 2] [i_15 - 3] [i_14] [i_8 + 2] [i_8 + 2]) : (arr_23 [i_8 - 1] [10ULL] [i_15 + 1] [15ULL] [(unsigned char)3] [(unsigned char)3]))));
                                var_22 = ((/* implicit */unsigned short) var_1);
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_43 [i_7])) << (((arr_46 [i_7] [i_8] [i_7] [4LL] [i_8]) + (799505638)))))))) && (((/* implicit */_Bool) var_4))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))));
                    arr_59 [(unsigned char)9] [i_8 + 1] [i_9] = min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((unsigned int) arr_41 [i_7] [13LL] [i_9] [14LL]))) | (((long long int) arr_45 [i_7] [i_7] [i_7] [(unsigned short)6] [(unsigned short)6]))))), (((((/* implicit */unsigned long long int) (~(arr_34 [i_8] [i_9])))) | (arr_23 [i_7] [(unsigned char)13] [i_9] [i_7] [i_7] [i_8 - 1]))));
                }
            } 
        } 
        arr_60 [i_7] = ((/* implicit */unsigned short) ((unsigned long long int) 0));
    }
    for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 3) 
    {
        arr_63 [i_16] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned char) var_2))), ((~(arr_30 [i_16] [(unsigned short)6])))))) ? (var_8) : (((/* implicit */unsigned long long int) var_3)));
        var_25 += ((/* implicit */short) (!(arr_36 [i_16])));
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) var_11))));
    }
    var_27 = var_3;
}
