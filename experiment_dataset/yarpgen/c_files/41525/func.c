/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41525
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) max((((long long int) arr_6 [i_1])), (max((arr_5 [i_1]), (((/* implicit */long long int) arr_0 [i_1]))))));
                var_21 = ((/* implicit */signed char) arr_4 [i_0]);
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) (-((~(((/* implicit */int) (short)15553))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                {
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_3]))) : (arr_6 [i_2]))))));
                    arr_17 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_8 [i_2] [i_3]))));
                    var_24 = ((/* implicit */unsigned short) (signed char)-82);
                }
            } 
        } 
        arr_18 [i_2] = ((/* implicit */int) arr_1 [i_2]);
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 3; i_5 < 8; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) || (arr_10 [i_5 + 1] [i_5])));
                    var_26 = ((/* implicit */unsigned int) (((_Bool)1) ? (6625704562946376145LL) : (6625704562946376145LL)));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned short i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    {
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((((/* implicit */int) arr_23 [i_9] [(short)2] [i_7])) + (2147483647))) << (((arr_15 [i_9]) - (11293524725094491499ULL))))))));
                        arr_30 [i_2] [i_7] [i_2] [i_7] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_7]))) - (arr_4 [(signed char)8]))));
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2]))) == (arr_1 [i_2])));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */_Bool) (unsigned short)49177);
    }
    for (long long int i_10 = 0; i_10 < 13; i_10 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 2; i_11 < 11; i_11 += 1) 
        {
            for (unsigned short i_12 = 0; i_12 < 13; i_12 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_13 = 0; i_13 < 13; i_13 += 4) 
                    {
                        for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)49177)) % ((~(((/* implicit */int) (unsigned char)255))))));
                                var_31 = ((/* implicit */_Bool) (unsigned short)16359);
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_35 [11U])) | (((/* implicit */int) var_5))));
                    arr_43 [i_12] [i_11] [i_10] = ((((((/* implicit */_Bool) (signed char)0)) ? (1706689834U) : (arr_40 [i_11 - 1] [i_11 - 2] [i_11 + 1] [i_11 - 1]))) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16830))));
                    var_33 = ((/* implicit */_Bool) arr_40 [(signed char)4] [i_11] [i_12] [i_12]);
                }
            } 
        } 
        arr_44 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_42 [i_10] [i_10])) >= ((-(((/* implicit */int) arr_35 [i_10]))))));
    }
    for (long long int i_15 = 0; i_15 < 13; i_15 += 4) /* same iter space */
    {
        arr_49 [i_15] = max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_35 [(unsigned short)11]))))), (((((/* implicit */_Bool) (unsigned char)1)) ? (arr_33 [i_15] [i_15]) : (arr_33 [i_15] [i_15]))));
        arr_50 [i_15] = ((/* implicit */int) (unsigned char)255);
    }
    for (long long int i_16 = 0; i_16 < 13; i_16 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            var_34 = ((/* implicit */signed char) ((((-6625704562946376146LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)49177)) - (49134)))));
            arr_56 [i_16] [i_17] [(signed char)9] = ((/* implicit */signed char) (~(min((((7683187179018950243ULL) << (((((/* implicit */int) var_1)) - (99))))), (((/* implicit */unsigned long long int) (unsigned char)139))))));
        }
        var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) (-(6625704562946376145LL))))));
        var_36 = (unsigned char)139;
        /* LoopSeq 1 */
        for (long long int i_18 = 1; i_18 < 12; i_18 += 2) 
        {
            arr_60 [i_18] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)88)) >> (((/* implicit */int) (unsigned short)1))))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) - (6625704562946376145LL)))));
            arr_61 [i_18] = ((/* implicit */short) max((min((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_53 [i_18 - 1] [i_16])) : (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) arr_35 [(signed char)9])))), (((/* implicit */int) ((((((/* implicit */unsigned long long int) -6625704562946376146LL)) % (18446744073709551615ULL))) == (((/* implicit */unsigned long long int) 2914865505U)))))));
        }
    }
}
