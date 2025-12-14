/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25037
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
    var_11 = ((/* implicit */unsigned char) var_5);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1]))));
        arr_3 [i_0 + 2] [i_0] = ((/* implicit */unsigned char) (~((~((~(((/* implicit */int) arr_0 [i_0 + 3]))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_13 = ((/* implicit */signed char) ((((((/* implicit */int) arr_4 [i_1] [i_1])) ^ (((/* implicit */int) arr_4 [i_1] [i_1])))) & (((/* implicit */int) arr_4 [i_1] [i_1]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    {
                        var_14 = ((/* implicit */signed char) arr_5 [i_4]);
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_2]))) / (arr_11 [i_1] [i_2] [i_4] [i_4])));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (int i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                var_16 = ((/* implicit */unsigned long long int) arr_5 [i_5]);
                arr_19 [i_1] [i_5] = ((/* implicit */unsigned char) (-(((arr_11 [i_1] [i_2] [i_5] [i_5]) & (var_0)))));
                arr_20 [i_1] [i_2] [i_5] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_2]))) + (var_0)));
                var_17 = ((/* implicit */int) var_6);
            }
            for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
            {
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    for (unsigned short i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) arr_25 [i_1] [i_1] [i_6] [i_7]))));
                            arr_30 [i_1] [i_1] [i_6] [i_7] [i_6] = ((/* implicit */int) ((arr_29 [i_1] [i_6] [i_1] [i_6] [i_6] [i_7] [i_8]) + (arr_29 [i_1] [i_6] [i_1] [(signed char)7] [7LL] [i_1] [i_1])));
                            arr_31 [i_6] [i_6] [(unsigned short)18] [i_6] [i_8] [i_7] = ((/* implicit */int) arr_1 [i_1]);
                            arr_32 [i_1] [i_1] [i_1] [i_7] [i_6] = ((/* implicit */long long int) (~(var_5)));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_14 [(signed char)8] [(signed char)8] [(signed char)8] [(signed char)8])) ^ (((/* implicit */int) arr_16 [i_1] [i_2] [i_6]))))));
            }
            for (int i_9 = 3; i_9 < 15; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 19; i_10 += 4) 
                {
                    for (int i_11 = 0; i_11 < 19; i_11 += 3) 
                    {
                        {
                            arr_42 [i_1] [i_1] [i_1] [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((arr_24 [i_10] [i_9 - 2]) ^ (arr_24 [i_1] [i_9 + 2])));
                            var_20 ^= ((/* implicit */_Bool) arr_17 [i_9] [i_9]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_12 = 0; i_12 < 19; i_12 += 3) 
                {
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_9 - 2] [i_9 + 1] [i_9 - 3] [i_9 + 3] [i_9])))))));
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_36 [i_1] [i_2] [i_9] [i_9 - 3]))));
                }
                arr_45 [i_1] [i_2] [i_9 - 3] [i_9] = ((/* implicit */int) arr_0 [i_1]);
                arr_46 [i_1] [i_1] [i_9 - 1] [i_9 + 2] = ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_1]))));
            }
            var_23 = ((/* implicit */short) var_10);
            /* LoopNest 3 */
            for (long long int i_13 = 2; i_13 < 18; i_13 += 4) 
            {
                for (short i_14 = 0; i_14 < 19; i_14 += 3) 
                {
                    for (signed char i_15 = 0; i_15 < 19; i_15 += 2) 
                    {
                        {
                            var_24 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_22 [i_13 - 1])) + (((/* implicit */int) var_8))));
                            arr_55 [i_14] [i_14] [i_14] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_13] [i_13] [i_2]))));
                            arr_56 [i_1] [i_14] [i_2] [i_2] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_13 + 1] [i_13 - 2] [i_13 - 1] [i_13 - 2]))));
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (-(var_4))))));
                        }
                    } 
                } 
            } 
        }
    }
}
