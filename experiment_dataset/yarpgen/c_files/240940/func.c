/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240940
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                arr_7 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
                arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */int) var_3);
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                /* LoopSeq 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_5 = 2; i_5 < 8; i_5 += 2) 
                    {
                        arr_18 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (arr_17 [i_5] [i_5] [i_5] [i_5 + 3] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)205)))));
                        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [5] [i_0])) : (((/* implicit */int) arr_12 [i_5] [i_1] [i_3] [i_1] [i_0]))));
                    }
                    var_14 = ((/* implicit */short) (~(arr_11 [i_0] [i_1] [i_3])));
                }
                for (long long int i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
                {
                    var_15 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)10)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        arr_24 [i_7] [i_1] [(short)8] [i_7] [i_7] = ((/* implicit */_Bool) var_0);
                        var_16 -= ((/* implicit */unsigned int) -654500984793090743LL);
                    }
                    arr_25 [i_0] [i_0] [i_3] [i_1] [i_6] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */unsigned long long int) (+(arr_6 [i_1])))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_6 [i_1])) : (var_2)))));
                }
                for (long long int i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
                {
                    var_17 &= ((/* implicit */long long int) (~(888544307)));
                    var_18 ^= ((/* implicit */short) arr_5 [i_0] [i_1] [i_3] [i_8]);
                    arr_30 [i_8] &= ((/* implicit */signed char) ((unsigned int) arr_12 [i_0] [i_3] [i_0] [i_0] [i_0]));
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        var_19 = ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_21 [i_0] [i_3] [8U]))));
                    }
                    for (unsigned short i_10 = 1; i_10 < 10; i_10 += 2) 
                    {
                        var_21 = ((/* implicit */short) var_8);
                        arr_37 [(_Bool)1] [i_10] [i_10] [i_1] [i_10] [i_10] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_1] [i_8] [i_10] [i_1] [i_10 + 1] [i_1])) ? (arr_27 [i_3] [1] [i_10] [i_1] [i_10 + 1] [(signed char)8]) : (arr_27 [i_8] [(short)6] [i_10] [i_1] [i_10 + 1] [i_10])));
                        arr_38 [i_8] [i_1] [i_8] [i_0] = ((/* implicit */unsigned int) arr_31 [i_8] [10ULL] [i_10] [i_8] [i_10 + 1] [i_10] [i_10 - 1]);
                        arr_39 [i_0] [6] [i_1] [(signed char)5] [i_0] = var_2;
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        var_22 = (-(arr_23 [i_8] [i_8] [i_8] [i_11 - 1] [i_11 - 1]));
                        arr_42 [i_1] [i_0] [(unsigned char)4] [(signed char)8] [i_8] [(unsigned char)5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_20 [i_1] [i_8] [i_3] [8LL]))));
                        arr_43 [i_0] [7U] [i_3] [i_1] = ((/* implicit */short) (~((-(((/* implicit */int) arr_12 [(short)6] [i_1] [(unsigned char)10] [(signed char)2] [i_11 - 1]))))));
                        arr_44 [(_Bool)1] [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_11] [i_1] [i_11 - 1] [(short)0] [i_11]))));
                    }
                }
                var_23 = ((((/* implicit */_Bool) arr_32 [i_0] [i_1])) && (((arr_23 [i_0] [i_0] [i_0] [i_3] [i_3]) == (((/* implicit */long long int) var_6)))));
                arr_45 [(_Bool)1] [i_3] [i_0] &= ((/* implicit */short) arr_12 [i_0] [i_3] [i_3] [i_0] [i_0]);
            }
            for (signed char i_12 = 0; i_12 < 11; i_12 += 1) 
            {
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) < (((/* implicit */int) (unsigned short)30826))));
                var_25 += ((/* implicit */signed char) ((long long int) var_0));
                arr_49 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((short) (+(((/* implicit */int) (signed char)118)))));
            }
            var_26 = ((/* implicit */unsigned int) var_12);
        }
        for (short i_13 = 0; i_13 < 11; i_13 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */long long int) var_2);
            /* LoopNest 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (unsigned char i_15 = 0; i_15 < 11; i_15 += 3) 
                {
                    {
                        arr_59 [i_15] [i_15] [i_15] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_14] [i_15])) ? (((/* implicit */int) arr_10 [i_0] [i_0])) : (((/* implicit */int) arr_5 [(signed char)3] [i_14] [2LL] [i_0])))))));
                        arr_60 [(unsigned char)6] [i_15] [2LL] [i_13] [i_14] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(7)))) ? (arr_29 [i_13] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42840)))));
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_34 [i_0] [(short)6] [i_15])) == ((~(((/* implicit */int) (short)-24605))))));
                        arr_61 [i_15] [6] [i_15] = ((/* implicit */signed char) var_7);
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned long long int) var_7);
        }
        /* LoopNest 3 */
        for (unsigned int i_16 = 0; i_16 < 11; i_16 += 2) 
        {
            for (signed char i_17 = 4; i_17 < 8; i_17 += 1) 
            {
                for (long long int i_18 = 0; i_18 < 11; i_18 += 3) 
                {
                    {
                        var_30 = ((var_7) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3791)))))));
                        var_31 = ((/* implicit */_Bool) (signed char)-117);
                    }
                } 
            } 
        } 
        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_46 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) -888544307)) : (var_1)));
        var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) (unsigned short)30826))));
    }
    var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) -1395676598))));
}
