/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190927
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((long long int) var_6)))));
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (long long int i_3 = 4; i_3 < 12; i_3 += 1) 
                {
                    {
                        var_16 += ((/* implicit */long long int) 3474647421U);
                        arr_13 [i_0 - 1] [i_3] [10LL] [i_1 + 1] [i_2] [i_3 - 2] = ((/* implicit */short) var_8);
                    }
                } 
            } 
        } 
    }
    for (int i_4 = 2; i_4 < 6; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_5 = 4; i_5 < 9; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_17 -= ((/* implicit */long long int) max((min((((((/* implicit */int) (unsigned short)65519)) * (((/* implicit */int) arr_0 [12])))), ((-(((/* implicit */int) arr_16 [(signed char)9] [(signed char)9] [i_6])))))), ((-(((/* implicit */int) arr_4 [i_6] [i_5 - 3] [i_4]))))));
                    var_18 *= ((/* implicit */_Bool) ((long long int) (unsigned short)2));
                    arr_22 [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) arr_15 [(unsigned short)0]);
                }
            } 
        } 
        arr_23 [i_4 + 3] [i_4 + 3] = ((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_4]))));
    }
    for (int i_7 = 0; i_7 < 18; i_7 += 1) 
    {
        var_19 = ((/* implicit */int) (~(max((((long long int) arr_24 [i_7] [i_7])), (((/* implicit */long long int) max((((/* implicit */unsigned char) (_Bool)1)), (var_3))))))));
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned short i_9 = 3; i_9 < 15; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 2; i_10 < 17; i_10 += 4) 
                    {
                        for (long long int i_11 = 1; i_11 < 16; i_11 += 4) 
                        {
                            {
                                arr_37 [i_11] [i_10 - 1] [i_8] [0U] [i_8] [i_8] [i_7] = ((/* implicit */unsigned int) ((short) 3U));
                                var_20 = var_4;
                            }
                        } 
                    } 
                    arr_38 [i_7] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) 653098928)), (arr_26 [i_9 - 1] [i_9 - 1])))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_36 [i_8] [i_8])) ? (((/* implicit */int) arr_25 [i_7])) : (56017666))), (((/* implicit */int) (unsigned char)105))))) : (min((min((var_11), (((/* implicit */long long int) arr_25 [i_8])))), (((/* implicit */long long int) arr_32 [i_7] [i_8] [i_9 + 2] [i_9]))))));
                    var_21 += ((min((arr_28 [6U] [6U]), (arr_28 [10U] [i_8]))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_8] [i_7]))))) ? ((-(3474647421U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_8])) ? (var_7) : (var_4)))))) : (((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_30 [i_9] [i_7] [i_8] [i_7])))), (((/* implicit */int) ((short) 1548620950969868672LL)))))));
                }
            } 
        } 
        arr_39 [i_7] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 9223372036854775802LL)) ? (((/* implicit */int) (short)14053)) : (((/* implicit */int) (unsigned char)126))))));
        /* LoopNest 2 */
        for (unsigned short i_12 = 1; i_12 < 17; i_12 += 2) 
        {
            for (int i_13 = 0; i_13 < 18; i_13 += 2) 
            {
                {
                    var_22 = ((/* implicit */signed char) min((((4294967284U) - (12U))), (((/* implicit */unsigned int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 18; i_14 += 2) 
                    {
                        for (int i_15 = 0; i_15 < 18; i_15 += 2) 
                        {
                            {
                                arr_50 [i_7] [i_12] [i_7] [i_7] [i_7] = ((/* implicit */signed char) max((-9223372036854775803LL), (((/* implicit */long long int) 15U))));
                                arr_51 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) (-((+(747336800)))));
                                arr_52 [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */int) max((((/* implicit */long long int) min(((+(1055840487U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_46 [i_7] [i_12 - 1] [i_13] [12U] [i_15])))))))), (max((((((/* implicit */_Bool) -9223372036854775794LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_8))), (((/* implicit */long long int) arr_29 [i_7] [i_12] [i_12] [i_15]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (int i_16 = 0; i_16 < 21; i_16 += 3) 
    {
        arr_57 [i_16] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))) & ((-(((((/* implicit */_Bool) arr_55 [i_16])) ? (((/* implicit */int) arr_54 [i_16])) : (var_4)))))));
        /* LoopNest 2 */
        for (long long int i_17 = 1; i_17 < 19; i_17 += 1) 
        {
            for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
            {
                {
                    arr_64 [i_16] [i_17 + 1] [i_16] [7LL] = var_11;
                    arr_65 [i_16] [i_17 + 2] [i_18 - 1] = ((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) (unsigned short)22679)))))))));
                    arr_66 [i_16] [i_17 + 2] [i_18] = ((/* implicit */short) ((_Bool) var_6));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned char) ((int) (short)22701));
    }
    var_24 = ((/* implicit */short) var_9);
}
