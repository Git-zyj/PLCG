/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214050
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) arr_0 [i_0]))));
        var_15 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */unsigned long long int) 642646017)) : (arr_2 [i_0])))) || (((/* implicit */_Bool) ((short) -146540255)))));
        var_16 = ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        arr_5 [i_1] [(unsigned char)3] = arr_0 [i_1];
        arr_6 [i_1] = ((/* implicit */signed char) ((unsigned char) (-(((/* implicit */int) var_0)))));
        var_17 = ((/* implicit */unsigned long long int) arr_3 [i_1]);
        var_18 = ((/* implicit */int) (~((~((~(arr_0 [i_1])))))));
    }
    /* vectorizable */
    for (short i_2 = 2; i_2 < 19; i_2 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((arr_2 [i_2 - 2]) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_8 [i_2 + 2])))))))));
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                for (unsigned char i_5 = 3; i_5 < 20; i_5 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) arr_13 [(unsigned char)15] [i_3] [(unsigned char)9] [i_5]);
                        var_21 = ((/* implicit */unsigned long long int) (short)-21705);
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            var_22 ^= ((/* implicit */signed char) arr_14 [i_2 + 1] [i_6] [i_2 + 1]);
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((unsigned long long int) arr_18 [i_2 + 1] [i_5 - 3] [i_5] [i_5 - 3])))));
                            var_24 ^= ((/* implicit */signed char) ((short) arr_1 [i_2 - 1]));
                        }
                        for (short i_7 = 0; i_7 < 21; i_7 += 1) 
                        {
                            var_25 += ((/* implicit */unsigned char) ((signed char) arr_19 [i_2] [i_3] [i_4] [i_5] [(unsigned char)20]));
                            arr_23 [i_7] [i_5 + 1] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_4] [i_5 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 642645989))))) : (((/* implicit */int) arr_21 [i_2] [i_3]))));
                        }
                    }
                } 
            } 
        } 
    }
    var_26 &= var_11;
    /* LoopNest 2 */
    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 3) 
    {
        for (int i_9 = 2; i_9 < 14; i_9 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (int i_10 = 0; i_10 < 15; i_10 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_11 = 4; i_11 < 13; i_11 += 1) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 15; i_12 += 1) 
                        {
                            {
                                arr_37 [i_11] = ((/* implicit */int) arr_0 [i_8]);
                                arr_38 [i_11] [i_11] [i_9] [i_9] [i_11] [i_11] [i_11] = ((unsigned char) min((((/* implicit */unsigned long long int) arr_14 [i_9 + 1] [i_9 + 1] [i_11 - 3])), (arr_17 [(short)7] [i_11 - 4] [3] [i_9 - 2])));
                                var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((signed char) var_10)))));
                                arr_39 [i_8] [i_8] [i_11] [i_8] [14] = ((unsigned char) arr_14 [i_9] [i_9 + 1] [i_11]);
                                var_28 ^= ((/* implicit */int) ((arr_27 [i_8] [i_8] [i_8]) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_21 [i_9 - 2] [i_9 - 1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 14; i_13 += 2) 
                    {
                        for (short i_14 = 0; i_14 < 15; i_14 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_9 + 1])) ? (((/* implicit */int) arr_24 [i_9 + 1])) : ((-(((/* implicit */int) arr_24 [i_9 + 1]))))));
                                var_30 = ((/* implicit */unsigned char) arr_40 [i_8] [i_9] [14ULL] [14ULL] [14ULL]);
                            }
                        } 
                    } 
                }
                var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) arr_21 [i_8] [i_9 - 2]))));
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_9 + 1])) ? (((/* implicit */int) arr_15 [i_8] [i_9] [9] [i_8])) : (((/* implicit */int) arr_15 [i_8] [i_8] [3] [(unsigned char)3]))))) ? (((/* implicit */int) arr_15 [i_8] [i_9] [i_8] [(signed char)4])) : (((((/* implicit */_Bool) arr_3 [i_8])) ? (((/* implicit */int) arr_15 [i_8] [i_8] [i_9] [i_9])) : (((/* implicit */int) arr_15 [i_8] [i_9 - 2] [i_8] [i_9 + 1]))))));
            }
        } 
    } 
}
