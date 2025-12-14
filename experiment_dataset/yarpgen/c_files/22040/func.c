/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22040
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned char i_2 = 2; i_2 < 8; i_2 += 1) 
                {
                    arr_6 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */long long int) (~(-11)));
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */long long int) arr_0 [i_0] [i_0])) : (max((((var_11) ? (var_13) : (var_13))), (((/* implicit */long long int) (~(0U)))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_2] [i_1])) & ((~(((/* implicit */int) arr_8 [i_2] [i_2]))))))), ((~(max((var_13), (((/* implicit */long long int) arr_8 [i_2] [i_2 - 2]))))))));
                                arr_12 [i_0] [i_1] [i_2] [i_3 - 3] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((var_7) < (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4 - 2] [i_1 + 1] [i_2 + 1] [i_2 - 1] [i_3 + 1]))))))) > (((long long int) arr_10 [i_4 - 2] [i_1 - 1] [i_2 + 4] [i_3] [i_3 + 1]))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned int) arr_4 [i_2 - 2] [i_1 - 1] [i_0] [i_0]);
                }
                for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 1; i_6 < 9; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) max((var_9), (((/* implicit */signed char) arr_5 [i_0] [i_0] [i_5]))))), (max((var_0), (((/* implicit */unsigned int) var_4)))))) | (max((((/* implicit */unsigned int) max((arr_16 [i_0] [i_1] [i_7] [i_0] [i_7]), (((/* implicit */unsigned short) var_1))))), ((~(arr_15 [i_0] [i_6] [i_6] [i_0])))))));
                                var_18 = ((/* implicit */int) max((max((((((/* implicit */_Bool) var_5)) ? (arr_2 [i_5] [i_7]) : (0U))), (((/* implicit */unsigned int) var_4)))), ((~(max((arr_0 [i_1] [i_5]), (((/* implicit */unsigned int) var_2))))))));
                                var_19 = ((/* implicit */int) ((((long long int) arr_19 [i_1 - 1] [i_1 + 2] [i_1 + 3] [i_1 + 2] [i_1 - 1])) < (((/* implicit */long long int) var_4))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) -9)) && ((_Bool)1))));
                    var_21 = ((/* implicit */_Bool) var_10);
                    var_22 ^= var_10;
                }
                for (unsigned short i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    var_23 = ((/* implicit */long long int) var_11);
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        for (signed char i_10 = 0; i_10 < 12; i_10 += 3) 
                        {
                            {
                                arr_28 [i_0] [i_10] [i_10] [i_0] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */long long int) ((/* implicit */int) var_5))) >= (min((arr_18 [i_1]), (((/* implicit */long long int) arr_9 [i_0] [i_1 + 2] [i_8] [i_1] [i_10] [i_8])))))), (((((/* implicit */_Bool) min((arr_1 [i_0] [i_9]), (((/* implicit */unsigned char) arr_26 [i_0] [i_1] [i_10]))))) && (((/* implicit */_Bool) max((arr_18 [i_1]), (var_10))))))));
                                var_24 *= ((/* implicit */unsigned short) var_9);
                                var_25 = ((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_8] [i_9] [i_10]);
                                arr_29 [i_10] [i_9] [i_0] [i_8] [i_8] [i_1] [i_10] = arr_3 [i_0] [i_1] [i_0];
                                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((_Bool) ((signed char) var_8)))) : (((/* implicit */int) var_1)))))));
                            }
                        } 
                    } 
                    var_27 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((max((var_8), (((/* implicit */unsigned int) var_2)))) * (((/* implicit */unsigned int) min((-17), (((/* implicit */int) arr_20 [10] [i_1 + 2] [i_8] [i_8] [i_8]))))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_11 = 2; i_11 < 11; i_11 += 2) 
                {
                    var_28 = ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]);
                    arr_32 [i_1] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) ^ (((((/* implicit */_Bool) arr_25 [i_0] [i_1 + 1] [i_11] [i_11])) ? (((/* implicit */int) arr_26 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_25 [i_11] [i_1 + 3] [i_1 + 3] [i_0]))))));
                    arr_33 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_8 [i_11] [i_11 + 1])) + (2147483647))) >> (((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1 + 1] [i_11] [i_11])) - (220)))));
                    /* LoopSeq 2 */
                    for (signed char i_12 = 3; i_12 < 11; i_12 += 3) /* same iter space */
                    {
                        arr_36 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_9 [i_12] [i_11 - 1] [i_11 + 1] [i_11] [i_1] [i_0])) : (((/* implicit */int) ((var_8) < (arr_15 [i_0] [i_11] [i_11] [i_11]))))));
                        var_29 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_0 [i_0] [i_1])))) || (arr_5 [i_11 + 1] [i_11 - 2] [i_11])));
                        arr_37 [i_0] [i_12] = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) arr_25 [i_0] [i_1 - 1] [i_11] [i_12])))));
                        arr_38 [i_0] [i_0] [i_1 - 1] [i_11] [i_12 - 3] = ((((/* implicit */int) arr_21 [i_12] [i_12 - 2])) & (((/* implicit */int) arr_21 [i_12 - 3] [i_12 - 3])));
                    }
                    for (signed char i_13 = 3; i_13 < 11; i_13 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_14 = 2; i_14 < 11; i_14 += 1) 
                        {
                            arr_45 [i_0] [i_1 + 1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_42 [i_11 - 2] [i_14] [i_14] [i_14] [i_14] [i_14 + 1] [i_14 - 1]))));
                            arr_46 [i_0] [i_1] [i_1] [i_13] [i_14] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))));
                        }
                        arr_47 [i_0] [i_1 - 2] [i_1] = ((/* implicit */_Bool) var_12);
                    }
                    var_30 = ((/* implicit */long long int) ((((/* implicit */int) arr_42 [i_11 - 1] [i_11] [i_1] [i_1] [i_0] [i_0] [i_0])) | (var_4)));
                }
                /* LoopNest 3 */
                for (unsigned long long int i_15 = 3; i_15 < 11; i_15 += 3) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 4) 
                    {
                        for (signed char i_17 = 3; i_17 < 8; i_17 += 4) 
                        {
                            {
                                arr_55 [i_17] = ((/* implicit */signed char) arr_22 [i_0] [i_15]);
                                var_31 = ((/* implicit */unsigned int) arr_25 [i_0] [i_1] [i_0] [i_17 + 1]);
                                arr_56 [i_0] [i_0] [i_1] [i_0] [i_15] [i_0] [i_17] = ((/* implicit */unsigned short) var_3);
                            }
                        } 
                    } 
                } 
                arr_57 [i_0] [i_1] &= ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned char) ((var_13) != (((/* implicit */long long int) ((/* implicit */int) var_11)))))), (arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1])))) >= ((~(((/* implicit */int) var_2))))));
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned int) var_13);
    var_33 = ((/* implicit */unsigned int) min((((/* implicit */long long int) max((((/* implicit */unsigned int) var_3)), (min((((/* implicit */unsigned int) var_2)), (var_0)))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (var_10)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (var_7)))) : (var_10)))));
    var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)255))))), ((((+(var_8))) / (((/* implicit */unsigned int) min((((/* implicit */int) var_1)), (var_14)))))))))));
}
