/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209031
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
    var_12 += ((/* implicit */unsigned int) min((var_3), (((/* implicit */unsigned long long int) ((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_0])) : (((/* implicit */int) var_6))))));
            arr_4 [i_0] [(unsigned short)0] [i_0] = (unsigned short)14213;
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    {
                        arr_10 [i_0] = ((/* implicit */_Bool) (unsigned char)126);
                        var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57481))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_15 = ((/* implicit */_Bool) min((var_15), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_1] [i_4])))))))));
                var_16 = ((/* implicit */short) (-(((/* implicit */int) arr_6 [i_1 - 1] [i_4]))));
                arr_13 [i_0] [i_0] [i_1] [11ULL] = ((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 3] [i_1 + 2]))));
            }
        }
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            arr_18 [i_0] [i_5] = ((/* implicit */signed char) (+(((((/* implicit */int) arr_0 [i_5] [i_5])) & (((/* implicit */int) var_0))))));
            /* LoopSeq 1 */
            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                arr_22 [i_0] [i_0] = ((/* implicit */unsigned short) var_4);
                var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1238828090)) ? (((/* implicit */int) (short)-30675)) : (((/* implicit */int) (unsigned char)224)))))));
                var_18 = (!(((/* implicit */_Bool) arr_6 [i_0] [i_6])));
                /* LoopSeq 2 */
                for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    var_19 *= ((/* implicit */unsigned int) (~(var_11)));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_9))) ? (4767835879346131486ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_0] [i_6])))))));
                    var_21 = ((/* implicit */unsigned char) var_2);
                }
                for (unsigned long long int i_8 = 1; i_8 < 10; i_8 += 4) 
                {
                    arr_29 [i_0] [i_0] [i_6] [i_8 + 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_11) * (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 0; i_9 < 13; i_9 += 1) /* same iter space */
                    {
                        arr_34 [i_9] &= ((/* implicit */signed char) (!(((((/* implicit */unsigned long long int) 521838343)) != (4637443758971145588ULL)))));
                        arr_35 [i_8] [i_8] [i_5] [i_5] [i_8] = (!(((/* implicit */_Bool) 4294967295U)));
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_0] [i_5] [i_6] [i_8 + 1] [i_9]))) * (var_4))))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 13; i_10 += 1) /* same iter space */
                    {
                        arr_40 [i_0] [i_0] [4ULL] [i_8] [i_10] = ((/* implicit */long long int) (-(((/* implicit */int) arr_38 [i_5] [i_5] [i_5] [i_0]))));
                        var_23 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_26 [i_0] [i_5] [i_6])) ? (arr_12 [i_0] [(unsigned char)7] [i_0]) : (arr_27 [i_0] [i_5] [i_6] [i_8] [i_10]))) / (((/* implicit */int) arr_32 [i_8] [i_8] [i_8] [i_8 + 1] [i_8]))));
                    }
                }
            }
        }
        /* vectorizable */
        for (short i_11 = 1; i_11 < 9; i_11 += 3) 
        {
            arr_45 [i_0] [i_11] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [(_Bool)0] [i_11 - 1] [i_11 - 1])) + (2147483647))) << (((var_11) - (1318661573273883103LL)))));
            arr_46 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38983))) | (arr_28 [i_0] [i_0] [i_0] [i_0]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
            var_24 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)-9166))));
            /* LoopSeq 1 */
            for (long long int i_12 = 1; i_12 < 10; i_12 += 3) 
            {
                var_25 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_0] [i_0] [i_0]))));
                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) var_4))));
            }
        }
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) / (((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_6))))));
        arr_50 [i_0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */int) min((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */short) min((arr_20 [i_0] [8ULL] [i_0]), (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) | (((((/* implicit */int) ((signed char) var_3))) ^ (((/* implicit */int) ((signed char) var_9)))))));
        arr_51 [i_0] [i_0] = ((/* implicit */unsigned int) ((int) arr_16 [i_0] [i_0] [i_0]));
        var_28 = ((/* implicit */short) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 1) 
    {
        arr_54 [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_52 [i_13] [i_13])) != (((((/* implicit */int) var_7)) | (((/* implicit */int) var_2))))));
        var_29 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_53 [i_13] [i_13]))));
        arr_55 [i_13] = (!(((/* implicit */_Bool) ((4697448182643148402ULL) - (7897789028540579903ULL)))));
    }
}
