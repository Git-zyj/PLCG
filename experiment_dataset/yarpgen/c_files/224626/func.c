/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224626
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 21; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        arr_9 [i_0 - 2] [i_1] [i_2 + 1] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 2]))) == (-8530965470441413539LL)));
                        var_10 = ((/* implicit */long long int) var_3);
                        arr_10 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned long long int) var_0);
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 21; i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] = var_0;
        arr_15 [i_4] = ((((/* implicit */_Bool) arr_4 [i_4 - 1] [i_4])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [17])) : (arr_13 [i_4])))) : (var_6));
    }
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        for (signed char i_6 = 1; i_6 < 12; i_6 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_7 = 2; i_7 < 13; i_7 += 1) 
                {
                    var_11 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_6 + 1] [i_7 + 1])) ? (((arr_0 [i_5] [i_5]) >> (((((/* implicit */int) arr_22 [i_7 + 1] [i_6] [i_5])) + (109))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (4294967168U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                    /* LoopSeq 1 */
                    for (int i_8 = 1; i_8 < 13; i_8 += 4) 
                    {
                        arr_27 [i_5] [i_6 + 2] [i_7] [i_8] = ((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_5 [i_8] [i_5] [i_5] [i_5]))))));
                        arr_28 [i_7] [i_7] [i_7] &= ((/* implicit */unsigned short) arr_22 [i_8 - 1] [i_6] [i_5]);
                        var_12 = ((/* implicit */unsigned long long int) 4294967173U);
                        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) arr_25 [i_5] [i_6] [i_6] [i_8]))));
                    }
                    arr_29 [i_5] [i_5] [i_5] = ((/* implicit */long long int) -1262932782);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 14; i_9 += 4) 
                    {
                        for (signed char i_10 = 2; i_10 < 11; i_10 += 4) 
                        {
                            {
                                arr_36 [i_5] [i_6] [i_7] [i_6] [8] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
                                var_14 *= ((/* implicit */signed char) ((((/* implicit */int) ((4294967167U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-5)))))) != (((/* implicit */int) arr_20 [i_6] [i_6 + 2] [i_6 - 1]))));
                                arr_37 [0] [0] [i_10] [4] [i_10 - 1] = ((/* implicit */signed char) ((var_8) << (((((/* implicit */int) arr_35 [i_10] [i_10] [i_10 + 1] [i_10] [i_10] [i_10 + 2] [i_10 + 2])) - (60)))));
                                arr_38 [i_5] [i_6] [i_6] [i_6] [i_9] [i_9] = ((/* implicit */signed char) var_5);
                                arr_39 [i_5] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_10 + 3]))))) ? (((/* implicit */int) arr_19 [i_9])) : (((/* implicit */int) (!(((/* implicit */_Bool) 1492301417187525391LL))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 14; i_12 += 2) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 14; i_13 += 4) 
                        {
                            {
                                var_15 = ((((/* implicit */int) arr_6 [i_5] [i_6 - 1] [i_5] [i_6 - 1])) | (878830391));
                                arr_47 [i_6] = ((/* implicit */int) var_4);
                                arr_48 [i_13] [i_12] [i_11] [i_6] [i_5] |= ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_5] [i_5] [i_11] [(signed char)11])) >> ((((~(((/* implicit */int) arr_43 [(unsigned short)9])))) + (60528)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_14 = 1; i_14 < 13; i_14 += 2) 
                    {
                        for (short i_15 = 0; i_15 < 14; i_15 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_4 [i_5] [i_11])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_6] [i_11 - 1]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_15])))));
                                arr_54 [i_14] [i_6 + 1] [i_14] [i_6 + 1] [i_6 + 1] = ((/* implicit */unsigned int) var_7);
                                arr_55 [i_15] [i_11] [(unsigned short)11] [i_11] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) > (((/* implicit */int) arr_7 [i_14] [i_14 + 1] [i_14] [i_14]))));
                            }
                        } 
                    } 
                }
                arr_56 [(signed char)11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) min((arr_8 [7ULL] [i_6]), (((/* implicit */int) var_5))))) / (((((/* implicit */_Bool) -1551524787297891290LL)) ? (var_1) : (34359738336LL))))))));
                /* LoopNest 2 */
                for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                {
                    for (unsigned char i_17 = 0; i_17 < 14; i_17 += 4) 
                    {
                        {
                            var_17 += ((/* implicit */unsigned short) ((((((/* implicit */int) arr_6 [i_17] [i_16 - 1] [i_16 - 1] [i_16 - 1])) >> (((34359738344LL) - (34359738330LL))))) * (((/* implicit */int) var_5))));
                            var_18 = ((/* implicit */unsigned char) min((min((arr_51 [i_5] [i_5] [i_16 - 1] [i_16] [(unsigned char)3] [i_16]), (arr_51 [i_5] [i_5] [i_16 - 1] [i_16 - 1] [i_16] [i_17]))), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_51 [i_16] [i_16] [i_16 - 1] [i_16] [i_17] [i_17])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 |= ((/* implicit */unsigned char) max((var_8), (((/* implicit */unsigned long long int) var_2))));
}
