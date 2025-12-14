/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52453
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
    var_16 = ((((/* implicit */int) (short)12344)) < (((/* implicit */int) ((_Bool) (+(var_10))))));
    var_17 += ((/* implicit */int) var_5);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_18 *= ((/* implicit */_Bool) ((unsigned short) arr_1 [i_0] [i_0]));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) (short)-2700)) ? (((/* implicit */long long int) 3075810771U)) : (-1LL)));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                arr_9 [4U] [i_1] [i_1] [i_2] = (+(var_1));
                /* LoopNest 2 */
                for (short i_3 = 1; i_3 < 22; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_19 ^= var_15;
                            var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)6))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) <= (arr_12 [i_4] [i_1] [i_1] [i_2 + 3])));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (+(arr_12 [(unsigned short)18] [i_0] [i_0] [i_2 + 2]))))));
            }
            for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                var_23 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_5] [i_1] [i_5] [i_5] [i_5])) & (((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_1] [i_1]))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 3; i_6 < 23; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 3; i_7 < 22; i_7 += 2) 
                    {
                        {
                            var_24 = ((((/* implicit */_Bool) arr_15 [i_6 - 2] [i_1])) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (short)-27718)));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1] [i_1] [19U]))) >= (arr_21 [(short)22] [i_7] [i_5] [i_1] [(short)22] [i_7] [i_6])));
                        }
                    } 
                } 
                var_26 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [(signed char)7] [i_1] [22U]))));
            }
            var_27 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)110)) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) var_7))));
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_0 [i_0] [2ULL])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)186)))) : ((~(((/* implicit */int) (short)(-32767 - 1)))))));
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (signed char i_9 = 1; i_9 < 20; i_9 += 1) 
                {
                    {
                        var_29 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) var_2)))));
                        arr_26 [i_1] [i_1] [i_1] [i_9] [i_9 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [18ULL] [i_9 - 1] [6])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_7 [i_0] [i_9 - 1] [i_8])));
                    }
                } 
            } 
        }
        for (signed char i_10 = 0; i_10 < 24; i_10 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 1) 
                {
                    {
                        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((17179865088LL) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_10] [i_0] [8U])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0] [i_12] [i_11])))))))))));
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_12] [i_12] [i_12] [i_12])) ? (arr_8 [i_12] [i_12] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                        arr_36 [i_0] [i_12] [i_12] [i_12] [i_12] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_10] [i_11] [(short)7])) ? (arr_34 [i_0] [i_10] [(short)6] [(unsigned short)18] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [4ULL] [i_0] [i_11]))))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) arr_24 [i_0])))))));
                        arr_37 [i_11] = ((var_5) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_11])) + (((/* implicit */int) var_7))))));
                    }
                } 
            } 
            var_32 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_0] [i_0])) < (((/* implicit */int) arr_15 [i_0] [i_10]))));
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 3) 
            {
                for (long long int i_14 = 1; i_14 < 22; i_14 += 2) 
                {
                    {
                        var_33 = ((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_13] [6U] [(unsigned short)8])) >= (((/* implicit */int) arr_17 [i_13] [i_10] [i_10]))));
                        var_34 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-120))) | (1LL)));
                        var_35 *= ((/* implicit */unsigned long long int) ((unsigned char) (short)-28509));
                    }
                } 
            } 
            var_36 ^= ((/* implicit */long long int) ((arr_6 [i_0] [i_0] [i_0] [i_10]) >= (((/* implicit */unsigned long long int) arr_22 [i_10] [i_10]))));
        }
        for (long long int i_15 = 1; i_15 < 23; i_15 += 1) 
        {
            arr_44 [(signed char)23] [i_0] = (-(arr_0 [i_15 + 1] [i_15 + 1]));
            var_37 ^= ((/* implicit */unsigned int) arr_15 [i_15] [i_0]);
            var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_15 + 1] [i_0] [i_15 + 1])) ? (((/* implicit */int) arr_16 [i_15 + 1] [i_0] [i_15 + 1])) : (((/* implicit */int) arr_16 [i_15 - 1] [i_0] [i_15 + 1]))));
        }
        arr_45 [i_0] [i_0] = var_5;
    }
    /* LoopNest 3 */
    for (unsigned short i_16 = 0; i_16 < 24; i_16 += 4) 
    {
        for (long long int i_17 = 0; i_17 < 24; i_17 += 2) 
        {
            for (unsigned short i_18 = 2; i_18 < 23; i_18 += 2) 
            {
                {
                    var_39 = ((/* implicit */long long int) min((var_39), (arr_13 [(_Bool)1] [i_17])));
                    arr_54 [i_16] [i_16] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */long long int) min((((unsigned int) arr_7 [i_16] [i_17] [i_17])), (((/* implicit */unsigned int) var_14))))) - (((((/* implicit */long long int) arr_3 [i_18 - 2] [i_18 + 1] [21ULL])) & (7165353909229378368LL)))));
                    var_40 -= ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_18 - 1] [i_18 + 1] [i_18 - 1] [i_16] [i_18 + 1] [i_18 + 1] [i_18 - 2])))))));
                }
            } 
        } 
    } 
}
