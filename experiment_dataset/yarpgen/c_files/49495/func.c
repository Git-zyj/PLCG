/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49495
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
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_10 = ((/* implicit */short) ((((/* implicit */_Bool) 2315677771265980932LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)31))) : (-2763732781410937564LL)));
        var_11 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((long long int) var_7))), (((var_8) - (arr_1 [i_0])))));
    }
    /* LoopNest 3 */
    for (unsigned int i_1 = 1; i_1 < 12; i_1 += 2) 
    {
        for (signed char i_2 = 1; i_2 < 10; i_2 += 3) 
        {
            for (unsigned char i_3 = 2; i_3 < 11; i_3 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2763732781410937563LL)) ? (((/* implicit */int) (unsigned char)166)) : (((/* implicit */int) (signed char)-89))));
                        var_13 ^= min((((long long int) arr_13 [0LL] [i_1] [i_1 + 1] [i_4] [i_4])), (((/* implicit */long long int) arr_4 [i_2] [i_2] [i_2])));
                    }
                    var_14 = ((/* implicit */short) (~(((/* implicit */int) ((signed char) var_0)))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_5 = 4; i_5 < 13; i_5 += 4) 
    {
        arr_16 [i_5 + 2] = ((/* implicit */unsigned char) ((int) ((unsigned int) 15619993211955771303ULL)));
        arr_17 [i_5] [(unsigned short)7] = ((/* implicit */unsigned long long int) ((unsigned short) (-(((/* implicit */int) arr_14 [i_5 - 4] [i_5 - 3])))));
    }
    for (unsigned short i_6 = 1; i_6 < 9; i_6 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_8 = 3; i_8 < 9; i_8 += 1) 
            {
                for (signed char i_9 = 0; i_9 < 12; i_9 += 4) 
                {
                    {
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_6] [i_7] [i_8] [i_8 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_8 - 2] [i_8]))) : (arr_23 [i_8 - 1] [i_8 - 1] [i_8] [(signed char)4])));
                        /* LoopSeq 2 */
                        for (unsigned int i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned char) arr_21 [i_6 + 2] [11U]);
                            arr_30 [8LL] [i_7] [i_7] [i_7] [i_8] [4LL] = ((/* implicit */long long int) var_8);
                            arr_31 [i_6 + 1] [i_6 + 1] [10U] [i_6 + 1] [i_6] [i_8] = ((/* implicit */signed char) arr_4 [i_6] [i_6 + 3] [i_6 + 3]);
                        }
                        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 1) /* same iter space */
                        {
                            arr_35 [i_7] |= ((/* implicit */short) arr_23 [i_8] [i_6 + 2] [i_8] [i_8 - 3]);
                            var_17 = ((/* implicit */int) ((var_9) ^ (((unsigned long long int) arr_10 [i_6] [i_6]))));
                        }
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */int) arr_18 [i_6 + 2] [i_6 + 3]))));
        }
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_24 [i_6 + 3] [i_6])))) ? (((/* implicit */int) arr_20 [i_6] [3] [7ULL])) : (((/* implicit */int) ((unsigned char) (signed char)105)))));
    }
    for (int i_12 = 1; i_12 < 12; i_12 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_13 = 0; i_13 < 14; i_13 += 4) 
        {
            for (signed char i_14 = 0; i_14 < 14; i_14 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_15 = 1; i_15 < 13; i_15 += 4) 
                    {
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_0))));
                        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) arr_15 [i_12]))));
                    }
                    for (unsigned long long int i_16 = 1; i_16 < 12; i_16 += 2) 
                    {
                        var_22 *= ((/* implicit */unsigned long long int) arr_43 [i_12 + 1] [i_12 + 2] [i_16 + 2] [12]);
                        var_23 = ((/* implicit */unsigned int) arr_45 [i_12 - 1] [i_13] [i_16 + 1] [i_16 + 1]);
                        arr_48 [i_12] [i_12] [12LL] [i_16] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_41 [i_14])) ? (arr_41 [i_12 + 2]) : (((/* implicit */unsigned long long int) 5875254983003448782LL)))));
                    }
                    var_24 = arr_38 [i_12] [i_12] [i_12 + 2];
                }
            } 
        } 
        arr_49 [i_12] [i_12 + 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((1745598553162391177ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_12] [i_12] [i_12]))))))));
    }
}
