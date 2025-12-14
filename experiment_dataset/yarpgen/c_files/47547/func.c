/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47547
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
    var_19 *= ((/* implicit */unsigned char) var_13);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) arr_2 [i_1] [i_1] [i_1]);
                    var_20 *= ((/* implicit */unsigned long long int) arr_3 [i_1]);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_6);
    /* LoopSeq 2 */
    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_7 [i_3] [i_3]), (arr_7 [i_3] [i_3])))) ? (((/* implicit */int) arr_9 [i_3] [i_3])) : (((/* implicit */int) var_0))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            for (short i_5 = 1; i_5 < 23; i_5 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) arr_14 [i_3] [i_5 - 1]);
                    var_24 = ((/* implicit */int) min((var_13), (((/* implicit */unsigned short) ((short) arr_8 [i_5 - 1])))));
                    var_25 = ((/* implicit */_Bool) arr_12 [i_5 + 1]);
                }
            } 
        } 
        arr_18 [i_3] [i_3] = ((/* implicit */short) (~(((long long int) ((_Bool) 3187121966U)))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 4) 
    {
        var_26 *= ((/* implicit */short) 1107845336U);
        var_27 = ((/* implicit */signed char) ((unsigned long long int) arr_20 [i_6]));
        /* LoopNest 3 */
        for (signed char i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            for (unsigned char i_8 = 0; i_8 < 25; i_8 += 2) 
            {
                for (unsigned char i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    {
                        var_28 = ((/* implicit */long long int) arr_15 [i_6] [i_6]);
                        var_29 = ((/* implicit */unsigned char) (+(var_2)));
                        var_30 = ((/* implicit */short) 3187121966U);
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (short i_10 = 3; i_10 < 24; i_10 += 2) 
        {
            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) 1892634988)) ^ (var_10))))))));
            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_20 [i_6])) : (((/* implicit */int) arr_24 [i_6] [i_6] [i_6] [i_10]))))) ? (((((/* implicit */int) var_4)) + (((/* implicit */int) var_8)))) : (arr_25 [i_10] [i_10 + 1])));
            arr_31 [i_10] [i_10 + 1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_6] [i_10 - 2]))) ^ (arr_22 [i_10] [i_10 - 1])));
            var_33 = ((/* implicit */_Bool) arr_8 [i_6]);
        }
        for (unsigned long long int i_11 = 1; i_11 < 21; i_11 += 4) /* same iter space */
        {
            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_11 + 4] [i_11 + 2])) ? (arr_22 [i_11 + 3] [i_11 + 4]) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_11 + 3] [i_11 + 2] [i_11 + 2] [i_11 - 1])))));
            arr_34 [i_11] [i_11 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_11 + 1] [i_11 + 2] [i_11 - 1])) ? (arr_32 [i_11 + 1] [i_11 + 2] [i_11 - 1]) : (368179531)));
        }
        for (unsigned long long int i_12 = 1; i_12 < 21; i_12 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 25; i_13 += 2) 
            {
                for (short i_14 = 2; i_14 < 21; i_14 += 3) 
                {
                    {
                        var_35 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-27525)) ? (((/* implicit */int) arr_7 [i_6] [i_13])) : (((/* implicit */int) arr_28 [i_14 + 2] [i_12] [i_6]))))) | (((arr_22 [i_6] [i_13]) - (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_7 [i_12 + 2] [i_14]))) ? (((/* implicit */int) arr_29 [i_12 + 3] [i_12] [i_14 + 1])) : (arr_39 [i_6] [i_12 + 1] [i_13] [i_12 + 1])));
                        var_37 &= ((/* implicit */_Bool) (short)2962);
                        var_38 = ((/* implicit */unsigned char) ((unsigned short) (-(((/* implicit */int) (unsigned short)65535)))));
                    }
                } 
            } 
            var_39 = ((/* implicit */int) (!(((((/* implicit */_Bool) 548450030)) && (((/* implicit */_Bool) arr_26 [i_6] [i_12] [i_12 + 2]))))));
            /* LoopNest 3 */
            for (signed char i_15 = 1; i_15 < 21; i_15 += 1) 
            {
                for (unsigned short i_16 = 0; i_16 < 25; i_16 += 4) 
                {
                    for (unsigned char i_17 = 0; i_17 < 25; i_17 += 2) 
                    {
                        {
                            var_40 *= ((/* implicit */unsigned long long int) ((_Bool) arr_37 [i_6] [i_16] [i_17]));
                            var_41 &= ((/* implicit */long long int) arr_43 [i_12] [i_16]);
                        }
                    } 
                } 
            } 
        }
    }
}
