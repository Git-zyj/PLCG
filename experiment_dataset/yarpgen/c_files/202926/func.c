/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202926
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) 18446744073709551615ULL)))));
        arr_4 [i_0] |= ((/* implicit */int) min((((((/* implicit */_Bool) arr_2 [i_0])) ? (max((((/* implicit */unsigned int) (_Bool)1)), (arr_3 [i_0]))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-19402))) : (arr_3 [i_0]))))), (((/* implicit */unsigned int) var_10))));
        arr_5 [i_0] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) var_16)), (arr_0 [i_0]))), (((/* implicit */unsigned long long int) ((arr_3 [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
        arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */int) var_17)) | (((/* implicit */int) (signed char)4)))), (((/* implicit */int) ((signed char) 1152921504573292544ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (((((/* implicit */_Bool) (+(arr_1 [i_0])))) ? (min((((/* implicit */unsigned int) (unsigned char)181)), (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        arr_10 [(unsigned char)9] [i_1] = ((/* implicit */long long int) var_2);
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                {
                    arr_15 [i_3] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6299708597622918142LL)) ? (-6299708597622918142LL) : (((/* implicit */long long int) 4294967295U))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (var_13)))) ? (((/* implicit */long long int) (+(667764210U)))) : (min((-1177037006590489961LL), (6299708597622918133LL))))) : (((/* implicit */long long int) var_13))));
                    arr_16 [i_1] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) (unsigned char)133)) ? (((/* implicit */int) (unsigned char)75)) : (((/* implicit */int) arr_8 [i_1])))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) min((arr_3 [(short)13]), (min((((/* implicit */unsigned int) arr_8 [i_4])), (arr_3 [i_4])))));
                    arr_22 [i_4] [i_5] = ((/* implicit */signed char) min((((unsigned long long int) arr_12 [i_4] [i_5])), (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */int) arr_12 [i_1] [i_5])))))));
                    arr_23 [i_1] [i_1] = ((/* implicit */unsigned long long int) max((var_10), (var_11)));
                    arr_24 [i_5] [i_5] [i_4] [i_1] = ((/* implicit */_Bool) arr_7 [(signed char)3]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            for (unsigned int i_7 = 3; i_7 < 8; i_7 += 4) 
            {
                {
                    var_20 *= ((/* implicit */short) var_9);
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        var_21 += ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_20 [i_1] [(unsigned char)2] [i_8])), (arr_13 [i_8]))), (((/* implicit */unsigned long long int) var_3))))) ? ((+(var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                        var_22 = ((/* implicit */int) min((-6299708597622918112LL), (((/* implicit */long long int) (-(((/* implicit */int) arr_21 [i_6] [i_7 + 1] [i_6] [i_7])))))));
                        arr_32 [(short)10] [(short)10] = ((/* implicit */unsigned short) var_6);
                        arr_33 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 3795365419U)), (min((((/* implicit */unsigned long long int) var_5)), (var_9)))));
                    }
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_10 = 0; i_10 < 11; i_10 += 3) 
                        {
                            var_23 = ((/* implicit */int) var_1);
                            arr_39 [i_1] [(unsigned char)7] [i_7 - 3] [i_9 - 1] [i_9 - 1] [i_10] [i_10] = ((/* implicit */unsigned long long int) 481621469);
                        }
                        var_24 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_9 - 1] [i_7 + 3] [i_7 + 3] [i_7 + 2])) ? (((/* implicit */int) max((var_2), (((/* implicit */short) (unsigned char)75))))) : (((/* implicit */int) (signed char)84)))));
                        /* LoopSeq 3 */
                        for (unsigned int i_11 = 2; i_11 < 9; i_11 += 1) /* same iter space */
                        {
                            arr_42 [7] [7] [i_9] [i_11] = ((/* implicit */long long int) min((min((arr_27 [i_9 - 1] [i_9 - 1]), (arr_27 [i_9 - 1] [i_9 - 1]))), (((/* implicit */int) (signed char)-85))));
                            var_25 = ((/* implicit */unsigned short) (-(((unsigned long long int) arr_21 [i_1] [i_6] [i_9 - 1] [(signed char)1]))));
                            var_26 = ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) 331354379))), ((~(((/* implicit */int) arr_2 [i_7 - 3]))))));
                        }
                        for (unsigned int i_12 = 2; i_12 < 9; i_12 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */int) ((((((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (arr_28 [i_6] [i_9] [i_12 - 2])))) >= (((/* implicit */int) max(((signed char)84), (((/* implicit */signed char) var_15))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_1] [i_7 - 1] [i_7] [i_7] [i_7])) ? (arr_44 [i_6] [i_7 - 3] [7LL] [i_12] [i_7 - 3]) : (((/* implicit */int) (short)19401)))))));
                            var_28 = ((/* implicit */short) min(((~(((/* implicit */int) arr_31 [i_6] [i_7 + 1] [i_7 + 1] [i_7 - 2] [i_12 - 1] [5])))), (((/* implicit */int) (short)32767))));
                        }
                        for (unsigned int i_13 = 2; i_13 < 9; i_13 += 1) /* same iter space */
                        {
                            var_29 = ((int) ((var_3) ? (min((3034554696448559400LL), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                            arr_48 [i_1] [i_6] [i_7 + 3] [i_9] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_40 [i_13 - 1] [i_13] [i_13] [i_7 - 1] [i_6]))) ? (((((/* implicit */_Bool) 6299708597622918141LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_40 [i_13 + 1] [i_7 + 3] [i_7 + 1] [i_7 + 1] [i_1]))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_40 [i_13 - 2] [7LL] [i_13 + 2] [i_9] [i_9])))));
                        }
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (arr_18 [i_6] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_30 [i_9 - 1] [i_9 - 1] [i_7 + 2]))))));
                    }
                }
            } 
        } 
    }
    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)13)) + (((int) min((var_16), (((/* implicit */unsigned short) var_8)))))));
    var_32 &= ((/* implicit */short) var_15);
    /* LoopNest 3 */
    for (long long int i_14 = 0; i_14 < 14; i_14 += 4) 
    {
        for (int i_15 = 0; i_15 < 14; i_15 += 2) 
        {
            for (unsigned long long int i_16 = 4; i_16 < 13; i_16 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_17 = 0; i_17 < 14; i_17 += 2) 
                    {
                        for (short i_18 = 0; i_18 < 14; i_18 += 3) 
                        {
                            {
                                arr_64 [i_15] [i_17] [i_15] [i_15] = ((/* implicit */unsigned long long int) var_6);
                                var_33 = ((/* implicit */unsigned long long int) min((var_33), (max((((/* implicit */unsigned long long int) arr_52 [i_16 + 1] [i_16 - 1] [i_16 - 4])), (min((((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned int) arr_61 [i_16] [i_14] [i_14]))))), (min((((/* implicit */unsigned long long int) 6299708597622918133LL)), (arr_0 [i_16])))))))));
                            }
                        } 
                    } 
                    arr_65 [i_14] [i_15] [i_16] [i_16 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_14]), (arr_2 [i_15]))))) == (11095642809248689864ULL)));
                    /* LoopNest 2 */
                    for (signed char i_19 = 3; i_19 < 12; i_19 += 2) 
                    {
                        for (unsigned long long int i_20 = 0; i_20 < 14; i_20 += 3) 
                        {
                            {
                                arr_70 [i_16 + 1] [i_16 + 1] = min((var_5), (min((arr_69 [i_16] [i_16] [i_16 + 1] [i_16] [i_16]), (var_5))));
                                var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) min((min((((/* implicit */unsigned long long int) -871613573)), ((+(arr_0 [9LL]))))), (((/* implicit */unsigned long long int) max((((/* implicit */short) ((_Bool) var_15))), (min((var_4), (((/* implicit */short) var_11))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_35 &= ((/* implicit */unsigned long long int) (unsigned char)235);
}
