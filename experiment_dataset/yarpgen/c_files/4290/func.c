/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4290
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
    for (int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (arr_4 [i_0 + 1]) : (max((((/* implicit */unsigned long long int) arr_0 [i_0 - 3])), (arr_4 [i_0 - 3])))));
            var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((signed char) 19)))));
        }
        var_12 ^= ((/* implicit */int) ((((/* implicit */unsigned int) 233560051)) == (((unsigned int) (signed char)(-127 - 1)))));
    }
    /* vectorizable */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_3 = 2; i_3 < 9; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    {
                        var_13 = ((/* implicit */unsigned char) (+(arr_2 [i_2 - 1] [i_3 - 1])));
                        var_14 = ((/* implicit */int) var_2);
                        var_15 = ((/* implicit */unsigned char) var_1);
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            arr_20 [(short)8] &= ((/* implicit */_Bool) (+(4294967288U)));
            var_16 = ((/* implicit */signed char) ((((((/* implicit */int) var_9)) + (2147483647))) << ((((((-(((/* implicit */int) arr_14 [i_2] [i_6])))) + (29))) - (28)))));
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                for (long long int i_8 = 1; i_8 < 9; i_8 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) -489456282)) == (((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [(unsigned short)3] [(unsigned short)3] [i_7])))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 3) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (-((~(arr_3 [(signed char)7] [(signed char)7]))))))));
                            var_19 += ((/* implicit */short) (unsigned short)65535);
                            arr_28 [i_2] [i_6] [i_2] [i_7] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) (~(arr_15 [i_8 - 1] [i_8 - 1] [i_6] [i_6] [i_2 - 1] [i_2 - 1])));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned char) 19);
                            arr_31 [i_8 - 1] [i_6] [(unsigned short)1] [i_6] [i_2 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) arr_12 [i_10] [i_6] [i_7] [i_6])))));
                        }
                        for (signed char i_11 = 0; i_11 < 10; i_11 += 2) 
                        {
                            arr_34 [i_6] [i_6] [i_7] [(_Bool)1] [2] = ((/* implicit */unsigned long long int) 19);
                            arr_35 [i_6] [1] [6ULL] [i_2 - 1] [i_11] = ((/* implicit */signed char) var_7);
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 2; i_12 < 9; i_12 += 2) 
                        {
                            var_21 = ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) -19)))));
                            arr_38 [i_6] [i_6] [i_6] [i_6] [i_6] [(unsigned short)7] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_6] [i_6] [i_6] [i_6])) ? (arr_22 [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */int) var_9))));
                            var_22 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_15 [i_2] [i_2] [6] [i_8] [i_8] [6])) ? (var_2) : (((/* implicit */unsigned long long int) arr_13 [4] [i_7] [i_12])))));
                            var_23 = ((/* implicit */unsigned char) ((arr_16 [i_2] [i_2] [i_2] [i_6] [5LL] [5LL]) ? (3635818855241432792ULL) : (((/* implicit */unsigned long long int) arr_10 [9ULL] [9ULL]))));
                        }
                    }
                } 
            } 
            arr_39 [i_2 - 1] [i_6] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) % (var_2)));
        }
        for (long long int i_13 = 2; i_13 < 8; i_13 += 1) 
        {
            arr_42 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_15 [(unsigned char)0] [(unsigned char)1] [0U] [0U] [(unsigned char)1] [0U])))) ? ((+(1865924273))) : (((/* implicit */int) ((short) (_Bool)1)))));
            var_24 |= ((((((/* implicit */_Bool) arr_10 [i_2] [9LL])) ? (((/* implicit */unsigned long long int) -1895200860828772985LL)) : (var_2))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))));
        }
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_2 [2ULL] [2ULL]))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2)))));
        var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_36 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))));
    }
    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? ((-(((((-1LL) + (9223372036854775807LL))) << (((var_8) - (1257194981))))))) : (var_5)));
}
