/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219921
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_0 [i_0]))));
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 4; i_2 < 17; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1])) && (((/* implicit */_Bool) arr_5 [i_1]))));
                        arr_10 [i_0] [i_1] = ((/* implicit */unsigned char) (((-(arr_1 [i_1]))) + (arr_1 [i_1 + 1])));
                        var_20 = ((/* implicit */short) (~(arr_2 [i_1])));
                        var_21 = ((/* implicit */short) ((signed char) arr_3 [i_2 - 1] [i_3]));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3)))));
        arr_11 [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) arr_9 [i_0]))));
    }
    for (long long int i_4 = 4; i_4 < 13; i_4 += 4) 
    {
        arr_14 [i_4] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_7 [i_4 - 1] [i_4])) : ((-(((/* implicit */int) (unsigned short)36567))))))), (max((arr_1 [i_4 - 1]), (arr_1 [i_4 - 2])))));
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            for (unsigned short i_6 = 2; i_6 < 13; i_6 += 1) 
            {
                for (unsigned int i_7 = 2; i_7 < 13; i_7 += 3) 
                {
                    {
                        arr_21 [i_5] [i_5] [i_5] [i_5] [i_7] = (~(max((((/* implicit */int) (unsigned short)28968)), ((-(((/* implicit */int) arr_9 [i_7 - 1])))))));
                        var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_6] [i_6] [i_6 + 1] [0U])) || (((/* implicit */_Bool) (unsigned short)36560)))))));
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 14; i_8 += 4) 
    {
        for (int i_9 = 0; i_9 < 18; i_9 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (int i_10 = 0; i_10 < 18; i_10 += 3) 
                {
                    var_25 &= ((/* implicit */int) max(((unsigned short)28968), (((/* implicit */unsigned short) (!(((((/* implicit */_Bool) (unsigned short)28966)) && (((/* implicit */_Bool) arr_8 [i_8] [i_9] [i_8] [i_10] [i_10])))))))));
                    arr_29 [i_8] [i_9] [i_8] = var_14;
                }
                /* vectorizable */
                for (unsigned int i_11 = 0; i_11 < 18; i_11 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_26 &= ((/* implicit */signed char) (+(arr_27 [i_8 + 1] [i_9])));
                        arr_35 [i_9] = ((unsigned short) arr_9 [i_8 - 2]);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 18; i_13 += 2) 
                    {
                        for (unsigned short i_14 = 3; i_14 < 17; i_14 += 2) 
                        {
                            {
                                arr_41 [i_14] [i_9] [i_9] [i_8] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_28 [i_11] [i_9] [i_8])) && (((/* implicit */_Bool) var_7)))));
                                var_27 *= ((/* implicit */unsigned short) ((signed char) arr_32 [i_14] [i_14 + 1] [17] [i_14] [i_14]));
                            }
                        } 
                    } 
                    arr_42 [i_8] [i_9] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_9])) - (((/* implicit */int) arr_5 [i_9]))));
                }
                for (unsigned char i_15 = 0; i_15 < 18; i_15 += 1) 
                {
                    arr_45 [i_9] [i_9] [i_9] [i_8 + 3] = ((/* implicit */int) (~(max((min((arr_6 [i_8 + 3] [i_9] [i_8 + 3]), (var_13))), (((/* implicit */unsigned int) arr_7 [i_8 - 1] [i_8 - 2]))))));
                    var_28 = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned short)28968)), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_39 [i_9] [i_9] [i_9] [i_15] [(signed char)10] [i_9])), (arr_26 [i_8] [i_9])))) ? (((/* implicit */int) var_16)) : (((((/* implicit */_Bool) (unsigned short)34580)) ? (((/* implicit */int) (unsigned short)28981)) : (((/* implicit */int) (unsigned short)59747))))))));
                }
                var_29 = ((/* implicit */unsigned char) ((int) (~(((/* implicit */int) var_5)))));
                var_30 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_9] [i_8] [i_8 - 1])) ? (((/* implicit */int) arr_43 [i_8] [i_8 - 2] [(unsigned short)17] [i_8])) : (((/* implicit */int) arr_43 [i_8] [i_8 - 2] [i_8] [i_8 - 2]))))) ? (((/* implicit */int) arr_43 [i_8] [i_8 + 4] [i_9] [0U])) : (((/* implicit */int) max((arr_43 [i_8] [i_8 + 3] [i_9] [i_8]), (arr_43 [i_9] [i_8 + 4] [i_9] [i_8])))));
            }
        } 
    } 
}
