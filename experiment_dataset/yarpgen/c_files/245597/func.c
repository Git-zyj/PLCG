/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245597
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
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        var_10 = ((/* implicit */long long int) var_3);
                        var_11 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(8388604)))) & (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_2 [i_0])))));
                        var_12 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (unsigned short)52379))))));
                    }
                    var_13 = ((/* implicit */_Bool) ((int) (~((-(-5468115173695071421LL))))));
                    arr_9 [i_2] [i_2] [i_2] = ((/* implicit */int) (unsigned short)5068);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (-5468115173695071421LL)))) ? (((((/* implicit */_Bool) var_8)) ? (var_4) : (var_7))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
    /* LoopNest 3 */
    for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (int i_6 = 1; i_6 < 11; i_6 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_7 = 2; i_7 < 11; i_7 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned char) (~(5468115173695071418LL)));
                        arr_18 [i_7] [i_6] [i_6] [i_6] [i_4] = ((((/* implicit */_Bool) arr_8 [i_6 - 1] [i_6 - 1] [i_6] [i_6 + 1] [i_6])) ? (((/* implicit */int) var_2)) : (arr_8 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1] [i_6 + 1]));
                        arr_19 [i_4] [i_6] [i_6] = ((/* implicit */int) (unsigned char)10);
                        /* LoopSeq 2 */
                        for (signed char i_8 = 0; i_8 < 13; i_8 += 2) 
                        {
                            arr_23 [i_4] [i_4] [i_6] [i_4] [i_4] [i_4] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_6 + 2] [i_6 + 1]))) - (((((/* implicit */_Bool) arr_7 [i_4] [i_5] [i_7] [i_8])) ? (var_5) : (arr_15 [i_6])))));
                            var_16 |= ((/* implicit */signed char) (~((-(arr_14 [i_4] [i_4] [i_4])))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 13; i_9 += 2) 
                        {
                            arr_28 [i_4] [i_4] [i_4] [i_6] [i_9] = ((/* implicit */int) (-(5468115173695071418LL)));
                            var_17 = ((/* implicit */_Bool) (-(arr_14 [i_4] [i_5] [i_7 + 2])));
                        }
                    }
                    for (signed char i_10 = 1; i_10 < 12; i_10 += 4) 
                    {
                        var_18 = (-((-(var_4))));
                        arr_32 [i_4] [i_5] [i_6] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
                    }
                    for (int i_11 = 2; i_11 < 11; i_11 += 3) 
                    {
                        arr_37 [i_4] [i_4] [i_6] [i_6] [i_11] = ((/* implicit */int) ((unsigned int) (~((-(-5468115173695071421LL))))));
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_21 [i_11] [i_6] [i_6 + 2] [i_6] [i_6 + 1] [i_6] [i_5])), (min((((/* implicit */long long int) var_5)), (5468115173695071420LL)))))) ? ((+(((5468115173695071418LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_4] [i_5] [i_6 + 2] [i_6] [i_11]))))))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)84), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-28149)))))))))));
                    }
                    var_20 ^= ((/* implicit */int) max(((short)-30422), (((/* implicit */short) ((_Bool) var_8)))));
                    arr_38 [i_6] [i_5] [i_6] = (!(((/* implicit */_Bool) (unsigned char)253)));
                    var_21 = ((/* implicit */long long int) (short)-17732);
                    arr_39 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_7 [i_6] [i_6] [i_6 + 1] [i_6 - 1])) ? (arr_21 [i_6 + 2] [i_6] [i_6 - 1] [i_6] [i_6] [i_6] [i_6 + 2]) : (arr_7 [i_6] [i_6] [i_6 + 2] [i_6])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_12 = 0; i_12 < 17; i_12 += 2) 
    {
        for (short i_13 = 0; i_13 < 17; i_13 += 3) 
        {
            {
                var_22 -= ((/* implicit */signed char) max((arr_7 [i_12] [i_13] [i_12] [i_13]), (((/* implicit */unsigned int) max((((((/* implicit */int) (unsigned char)84)) & (((/* implicit */int) var_2)))), ((~(((/* implicit */int) arr_40 [i_12])))))))));
                /* LoopSeq 2 */
                for (unsigned short i_14 = 3; i_14 < 16; i_14 += 1) 
                {
                    var_23 = ((/* implicit */long long int) (~(arr_0 [i_12])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 4; i_15 < 15; i_15 += 4) 
                    {
                        for (unsigned short i_16 = 2; i_16 < 14; i_16 += 2) 
                        {
                            {
                                var_24 &= ((/* implicit */unsigned int) arr_5 [i_16] [i_16 + 2] [i_15 + 1] [i_16 + 2]);
                                var_25 -= ((/* implicit */unsigned char) var_7);
                            }
                        } 
                    } 
                    arr_53 [i_12] [i_13] [i_12] |= max((((arr_42 [i_14 - 2]) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-30422))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))))));
                    var_26 = ((/* implicit */long long int) ((-562449971) == ((~(((int) 5468115173695071405LL))))));
                }
                /* vectorizable */
                for (signed char i_17 = 0; i_17 < 17; i_17 += 3) 
                {
                    arr_57 [i_12] [i_12] [i_17] [i_17] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_54 [i_12] [i_12] [i_17]))));
                    arr_58 [i_12] [i_17] [i_17] [i_17] = ((/* implicit */unsigned int) ((var_3) * (((/* implicit */unsigned long long int) 565610022))));
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 1; i_18 < 13; i_18 += 3) 
                    {
                        for (int i_19 = 0; i_19 < 17; i_19 += 2) 
                        {
                            {
                                var_27 |= ((/* implicit */int) arr_41 [i_12] [i_19]);
                                var_28 -= ((/* implicit */short) ((arr_42 [i_18 + 3]) == (((unsigned int) arr_59 [i_18] [i_18] [i_13] [i_13]))));
                                arr_65 [i_12] [i_13] [i_17] [i_18 + 1] [i_13] = (~(16777216));
                            }
                        } 
                    } 
                    var_29 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_49 [i_12] [i_13] [i_12])) ? (arr_49 [i_12] [i_13] [i_12]) : (((((/* implicit */long long int) var_5)) | (-5468115173695071421LL)))));
                }
            }
        } 
    } 
}
