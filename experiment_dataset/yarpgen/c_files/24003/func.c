/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24003
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
    var_12 ^= ((/* implicit */short) var_3);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            var_13 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((signed char) arr_0 [i_0 + 2] [i_0 + 2]))) : (arr_4 [i_0 + 2] [i_0 - 1] [i_0 - 1])))));
            var_14 = ((/* implicit */short) max((var_14), (((short) arr_3 [i_0 + 1]))));
            var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+(arr_4 [i_0 - 1] [i_1 + 1] [i_1 - 1])))), ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) : (var_10)))))));
            var_16 = ((/* implicit */_Bool) arr_2 [i_1 + 1]);
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            arr_8 [i_2] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 2]))));
            /* LoopNest 3 */
            for (short i_3 = 2; i_3 < 16; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_3] [i_3 + 1] [10ULL] [i_3 + 2] [i_2])) ? (((/* implicit */int) arr_12 [i_3 + 2] [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) arr_12 [i_0 + 1] [i_5] [i_5] [i_0 + 1] [i_5] [i_5]))));
                            arr_15 [i_4] [i_5] [i_4] [i_4] [i_4] [i_4] [i_4] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) arr_2 [i_5])) ? (arr_2 [i_0]) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_9))));
                            var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_3 - 2] [i_3 + 2])) ? (((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_3 + 2])) ? (arr_14 [i_0 - 1] [i_0 - 1] [i_5] [i_0] [i_0 - 1]) : (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0 + 1] [i_0] [i_5])))));
                            arr_16 [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0 + 1] [i_2])) ^ (((/* implicit */int) arr_1 [i_0] [i_2]))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_6 = 1; i_6 < 17; i_6 += 3) 
        {
            var_19 = ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 1])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_6 - 1] [i_0 + 1]))));
            var_20 *= ((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0 - 1] [i_6 + 1]))));
        }
        /* LoopNest 3 */
        for (short i_7 = 2; i_7 < 15; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 18; i_8 += 4) 
            {
                for (int i_9 = 2; i_9 < 17; i_9 += 1) 
                {
                    {
                        arr_25 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2147418112U)) ? (5952257410636941047ULL) : (((/* implicit */unsigned long long int) -1989063720))));
                        arr_26 [i_7] [i_7] = ((/* implicit */unsigned int) ((arr_4 [i_0 + 1] [i_0 - 1] [i_0 + 2]) - (arr_4 [i_0 + 1] [i_0 - 1] [i_0 + 2])));
                        /* LoopSeq 3 */
                        for (short i_10 = 0; i_10 < 18; i_10 += 2) 
                        {
                            arr_29 [i_0] [i_0] [i_7] [i_0] [5U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_7 - 2] [i_9 + 1])) ? (arr_4 [i_0] [i_7 + 1] [i_8]) : (((/* implicit */int) arr_22 [i_7 + 2] [i_0 + 2]))))) ? ((+(((/* implicit */int) arr_28 [i_0] [i_0 - 1] [i_0])))) : (arr_4 [i_0 - 1] [i_7 - 2] [i_10])));
                            var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned short) ((signed char) arr_20 [i_7]))), (max((((/* implicit */unsigned short) arr_5 [i_9 - 2] [i_9 - 2])), (var_0)))));
                        }
                        for (short i_11 = 0; i_11 < 18; i_11 += 4) /* same iter space */
                        {
                            arr_34 [i_0] [i_7 + 1] [i_7] [i_9] [i_7 + 1] [10ULL] = ((/* implicit */signed char) ((unsigned char) ((int) var_6)));
                            arr_35 [i_0] [14] [i_8] [i_7] [i_11] = ((/* implicit */_Bool) ((((arr_3 [i_0 + 1]) != (((/* implicit */unsigned long long int) var_8)))) ? (((arr_3 [i_0 + 1]) / (arr_3 [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_11))))));
                        }
                        for (short i_12 = 0; i_12 < 18; i_12 += 4) /* same iter space */
                        {
                            arr_39 [i_0 + 1] [i_7] [i_7 + 2] [i_8] [i_9] [i_7 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_23 [i_0 - 1] [i_7] [i_12]))) ? (((/* implicit */int) arr_23 [i_0] [i_9 - 1] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0] [i_0] [(short)10])))))));
                            arr_40 [i_0] [i_7] [i_7] [i_7] [i_0] = ((/* implicit */unsigned short) min(((~(((/* implicit */int) var_9)))), (max((arr_2 [i_9 - 2]), (arr_2 [i_7 + 2])))));
                        }
                    }
                } 
            } 
        } 
    }
}
