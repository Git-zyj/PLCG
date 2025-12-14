/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30419
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
    var_20 ^= ((/* implicit */int) var_2);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_5 [i_0 + 3] [i_0 + 3] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1] [i_1]))) : (arr_1 [i_0])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (15006750773603453570ULL)))));
                    var_21 += ((/* implicit */short) var_3);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((arr_8 [i_0 + 3] [i_0 + 1] [i_0 + 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1]))))) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-31))))))));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((17924138145850206832ULL) < (13090317858835840748ULL))))))) < (((((/* implicit */_Bool) arr_9 [i_4] [i_3] [15U] [i_1] [i_0])) ? (min((((/* implicit */unsigned int) var_1)), (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -3437836601267025955LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)511)))))))));
                                var_24 &= ((/* implicit */_Bool) ((((/* implicit */int) ((var_12) == (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_4 [i_4])))))))) << (((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) == (var_0))))));
                                var_25 = (!(((/* implicit */_Bool) arr_8 [i_4] [i_3] [i_0])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        arr_14 [i_5] = ((/* implicit */_Bool) var_13);
        var_26 = ((/* implicit */signed char) ((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        /* LoopNest 2 */
        for (long long int i_6 = 1; i_6 < 9; i_6 += 3) 
        {
            for (int i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                {
                    var_27 = ((/* implicit */long long int) var_1);
                    arr_19 [i_5] [i_6] [i_6] = ((/* implicit */long long int) arr_8 [i_5] [i_6] [i_6]);
                }
            } 
        } 
    }
    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_9 = 1; i_9 < 18; i_9 += 3) 
        {
            for (signed char i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                {
                    arr_29 [i_10] [i_10] [i_10] [i_8] = ((((((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_10] [i_9 + 1] [i_8] [i_9]))) + (4294967276U))) + (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_26 [i_10] [i_10] [i_10])), ((unsigned char)122))))))) / (((/* implicit */unsigned int) ((/* implicit */int) (!((!((_Bool)1))))))));
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) arr_21 [i_8]))));
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned char) (-(((((/* implicit */long long int) ((/* implicit */int) var_17))) % (max((arr_22 [i_8] [i_8]), (((/* implicit */long long int) arr_27 [i_8] [i_8] [i_8] [i_8]))))))));
        var_30 = ((/* implicit */int) (_Bool)1);
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned short i_12 = 0; i_12 < 20; i_12 += 1) 
            {
                {
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((((((/* implicit */_Bool) arr_33 [i_8])) ? (arr_25 [i_8] [i_8] [19]) : (((/* implicit */int) arr_28 [i_8] [i_12] [i_11] [i_11])))) * (((/* implicit */int) (!(arr_27 [i_11] [(signed char)12] [i_12] [i_11])))))) : (((/* implicit */int) var_6))));
                    /* LoopNest 2 */
                    for (signed char i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        for (int i_14 = 1; i_14 < 17; i_14 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */_Bool) (((~(((/* implicit */int) (_Bool)1)))) + ((~(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_37 [i_8] [i_8] [i_12] [i_12] [i_14]))))))));
                                var_33 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_13] [i_12] [i_13] [i_14 - 1])) << (((((/* implicit */int) var_9)) - (3403)))))) ? (((long long int) 865921678528403651LL)) : (((/* implicit */long long int) ((arr_39 [i_8] [i_11] [i_12] [i_8]) * (((/* implicit */int) arr_34 [i_14] [i_11] [i_11] [i_14] [i_14] [19U])))))))) % ((~(min((arr_40 [i_8] [13ULL] [(_Bool)1] [i_13]), (((/* implicit */unsigned long long int) arr_26 [4] [i_13] [i_13]))))))));
                                arr_41 [i_13] [i_13] [i_13] [i_11] [i_13] = 4294967282U;
                                var_34 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_14 + 1] [i_13] [i_11] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (-8523073773708073029LL)))) : ((~(arr_21 [(unsigned char)7]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_15 = 2; i_15 < 19; i_15 += 4) 
                    {
                        for (signed char i_16 = 1; i_16 < 19; i_16 += 2) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) (unsigned char)134))));
                                var_36 = ((/* implicit */unsigned char) arr_38 [i_15]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
