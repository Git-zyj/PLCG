/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215554
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
    var_15 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12))))), (max((max((((/* implicit */unsigned int) var_6)), (var_2))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)192)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        var_16 *= ((/* implicit */signed char) (~(arr_4 [i_0] [i_1])));
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((arr_11 [i_1] [i_1] [i_2] [(unsigned char)1] [i_1]) - (arr_10 [(unsigned char)10] [(unsigned short)10] [i_1] [(unsigned short)10] [i_2] [i_3]))))));
                    }
                    arr_14 [i_0] = (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)92))))));
                    var_18 = ((/* implicit */signed char) (+(((/* implicit */int) arr_8 [i_0]))));
                }
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    var_19 = ((/* implicit */int) ((((arr_11 [10] [i_1] [i_1] [(unsigned short)5] [i_0]) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_13))))))) ? (((((/* implicit */_Bool) max(((unsigned char)184), (var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned char)232)))) : (min((4267554394U), (arr_4 [i_0] [(unsigned char)7]))))) : (min((((((/* implicit */_Bool) (unsigned char)178)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26194))) : (var_5))), (((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112)))))))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 4; i_5 < 10; i_5 += 3) 
                    {
                        arr_20 [(signed char)2] &= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [4] [i_0] [i_1] [i_4] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)96))) : (var_2)))) ? (min((arr_1 [i_0]), (((/* implicit */long long int) (unsigned short)9662)))) : (((/* implicit */long long int) (+(2250816266U)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (arr_1 [(signed char)8])))) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) max((arr_16 [5LL]), (((/* implicit */unsigned short) arr_0 [i_0] [i_5]))))))))));
                        var_20 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) arr_9 [i_5 - 2] [i_5 - 2] [i_1] [i_1])))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            {
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */signed char) (-((-(min((arr_1 [i_0]), (((/* implicit */long long int) (unsigned char)174))))))));
                                arr_28 [i_0] [i_4] [i_0] = ((/* implicit */long long int) (~((+(((/* implicit */int) arr_6 [i_0] [i_1] [i_4] [i_6]))))));
                                var_21 = ((/* implicit */int) max((var_0), (((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */unsigned char) var_0)), ((unsigned char)133)))) == ((-(((/* implicit */int) (unsigned char)139)))))))));
                                var_22 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (signed char)-111))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_13 [i_0] [i_0] [i_0])))) ? (arr_13 [i_0] [i_1] [i_4]) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)6)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 1; i_8 < 8; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 1; i_9 < 9; i_9 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_10 [i_9] [(unsigned char)9] [(signed char)3] [i_9 + 1] [i_9] [i_9 + 2]) : (arr_10 [i_9] [i_9] [i_9] [i_9 + 1] [i_9] [i_9 + 2])))));
                                var_25 *= ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) arr_19 [i_0] [i_1] [(unsigned short)4])) > (arr_4 [i_0] [i_1])))), (arr_10 [i_8 + 3] [i_8 + 2] [i_8 + 3] [i_8 + 2] [i_8 + 1] [i_8 - 1])))));
                                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (!(min(((!(((/* implicit */_Bool) var_11)))), (((((/* implicit */_Bool) (signed char)-48)) && (((/* implicit */_Bool) arr_31 [i_4] [(unsigned char)0] [(unsigned short)0])))))))))));
                            }
                        } 
                    } 
                }
                arr_33 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (min((2104651231), (((/* implicit */int) arr_5 [i_1] [i_0] [i_0])))) : (((/* implicit */int) max((var_13), (((/* implicit */unsigned char) arr_5 [(unsigned char)10] [i_0] [i_1])))))));
                var_27 = ((/* implicit */int) (unsigned char)213);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 10; i_10 += 3) 
    {
        for (unsigned char i_11 = 1; i_11 < 13; i_11 += 4) 
        {
            {
                arr_40 [i_10 + 1] = ((/* implicit */unsigned int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_13)), (4294967295U))))))), (arr_38 [i_10] [i_10] [i_11])));
                arr_41 [i_10] [i_11] [i_11] &= ((/* implicit */unsigned char) ((int) max((((/* implicit */int) arr_39 [i_11 - 1])), ((-(4))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_12 = 0; i_12 < 15; i_12 += 4) 
    {
        for (unsigned char i_13 = 3; i_13 < 12; i_13 += 1) 
        {
            {
                var_28 = ((/* implicit */unsigned int) (+((~(((/* implicit */int) (unsigned char)193))))));
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 15; i_14 += 3) 
                {
                    for (unsigned int i_15 = 0; i_15 < 15; i_15 += 3) 
                    {
                        for (unsigned char i_16 = 0; i_16 < 15; i_16 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned short) min((((signed char) (signed char)111)), (((signed char) ((unsigned int) (unsigned char)202)))));
                                var_30 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_46 [i_14] [i_13 + 3] [i_12]), (arr_52 [i_13] [i_13] [i_13 - 1] [i_12] [8U]))))));
                                arr_56 [(unsigned char)5] [(signed char)0] [i_14] [i_15] [i_13] [i_16] = ((/* implicit */int) max((((/* implicit */unsigned int) max((arr_55 [i_13 - 2] [i_13] [i_13] [i_13] [i_13]), (var_3)))), (max((1086463611U), (((/* implicit */unsigned int) arr_51 [i_13 + 1] [i_13] [i_13] [i_13] [i_13 + 1] [(signed char)13]))))));
                                var_31 = ((/* implicit */unsigned short) arr_49 [(unsigned char)7]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_17 = 0; i_17 < 20; i_17 += 2) 
    {
        for (unsigned char i_18 = 1; i_18 < 16; i_18 += 3) 
        {
            {
                arr_62 [i_18] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (unsigned char)9)), (384U)));
                arr_63 [i_18] = ((/* implicit */signed char) max((((/* implicit */int) (signed char)-112)), (max((((((/* implicit */_Bool) arr_61 [i_18] [9U] [i_18])) ? (((/* implicit */int) arr_60 [i_18])) : (((/* implicit */int) var_8)))), (((/* implicit */int) var_12))))));
                arr_64 [i_18] = ((/* implicit */signed char) (+((~((+(((/* implicit */int) (unsigned short)2048))))))));
                arr_65 [i_18] = var_13;
                var_32 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_60 [i_18]))));
            }
        } 
    } 
}
