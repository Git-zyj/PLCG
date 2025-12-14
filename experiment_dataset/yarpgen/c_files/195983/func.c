/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195983
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (unsigned char)34))))));
        arr_4 [i_0] = (+((+(((/* implicit */int) arr_2 [i_0])))));
    }
    var_16 = ((/* implicit */int) (unsigned char)56);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (arr_7 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((arr_13 [i_1] [i_1]) == (((/* implicit */unsigned long long int) var_11))))))));
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_2] [i_1])) || (((/* implicit */_Bool) (unsigned short)53336))));
                        var_19 ^= ((/* implicit */int) ((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */unsigned int) var_2)) : (84394951U)));
                        arr_18 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */int) (+(arr_11 [i_2] [i_2] [i_2])));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) ((12969128601387940136ULL) >> (((((/* implicit */int) (unsigned short)22094)) - (22054)))));
                        arr_23 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_1] [i_5] [i_5])) ? (((/* implicit */unsigned int) (+(arr_21 [i_2] [i_2])))) : (((((/* implicit */_Bool) (unsigned short)12200)) ? (100663296U) : (84394951U)))));
                    }
                } 
            } 
            arr_24 [i_2] [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2]))));
        }
        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            var_21 -= ((/* implicit */unsigned int) ((signed char) arr_13 [i_1] [i_7]));
            arr_27 [i_7] = ((((/* implicit */_Bool) var_3)) ? ((-(1427428494))) : ((-(((/* implicit */int) var_15)))));
            /* LoopNest 2 */
            for (unsigned int i_8 = 0; i_8 < 17; i_8 += 4) 
            {
                for (int i_9 = 2; i_9 < 14; i_9 += 3) 
                {
                    {
                        var_22 &= ((/* implicit */unsigned char) (+((-(13600302063330760756ULL)))));
                        arr_34 [i_1] [i_7] [i_1] [i_7] [i_7] = ((/* implicit */unsigned int) (unsigned short)65535);
                        var_23 *= ((/* implicit */unsigned char) var_5);
                        var_24 = ((/* implicit */unsigned short) (_Bool)0);
                        /* LoopSeq 3 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned long long int) ((int) arr_36 [i_7]));
                            var_26 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_10] [i_9 + 1] [i_8])))));
                            var_27 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2949461496U))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            var_28 |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_8] [i_9 + 3] [i_9 + 3] [i_11] [i_11]))) ^ (arr_14 [i_9 + 2] [i_7] [i_7] [i_1])));
                            var_29 = ((/* implicit */short) (unsigned char)179);
                        }
                        for (unsigned int i_12 = 0; i_12 < 17; i_12 += 2) 
                        {
                            arr_44 [i_1] [i_7] [i_8] [i_7] [i_7] [i_12] = ((/* implicit */unsigned int) ((arr_21 [i_9 + 3] [i_9 + 3]) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_8] [i_9] [i_12])))))));
                            var_30 = ((/* implicit */unsigned short) (unsigned char)35);
                        }
                    }
                } 
            } 
            var_31 ^= ((/* implicit */unsigned char) ((unsigned long long int) arr_21 [i_1] [i_1]));
        }
        var_32 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_29 [i_1] [i_1] [i_1]))));
        arr_45 [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned int) 1035793143U));
    }
    /* LoopNest 3 */
    for (unsigned int i_13 = 0; i_13 < 14; i_13 += 2) 
    {
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (int i_15 = 0; i_15 < 14; i_15 += 4) 
            {
                {
                    var_33 -= ((/* implicit */unsigned short) arr_52 [i_13] [i_13] [i_13]);
                    arr_53 [i_13] [i_13] [i_15] = ((/* implicit */_Bool) var_5);
                    var_34 = ((/* implicit */int) 2949461525U);
                }
            } 
        } 
    } 
    var_35 = var_7;
}
