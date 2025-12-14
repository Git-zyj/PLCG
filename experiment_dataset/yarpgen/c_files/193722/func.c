/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193722
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) var_1);
        var_17 = ((/* implicit */_Bool) var_13);
        arr_3 [i_0] = ((/* implicit */long long int) var_0);
    }
    for (unsigned short i_1 = 1; i_1 < 18; i_1 += 2) 
    {
        arr_6 [i_1] [(signed char)8] = ((/* implicit */short) var_6);
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_3 = 3; i_3 < 15; i_3 += 3) 
            {
                arr_13 [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) var_3);
                var_18 = ((/* implicit */_Bool) var_0);
                var_19 = var_4;
                var_20 = ((/* implicit */int) var_11);
            }
            var_21 += ((/* implicit */unsigned long long int) var_7);
            arr_14 [i_1] [(unsigned short)6] = var_4;
        }
        for (short i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            var_22 = ((/* implicit */unsigned short) max((var_22), (var_3)));
            arr_19 [i_4] [i_1] = var_13;
            var_23 = var_6;
            arr_20 [i_1] [i_1] [i_1] |= ((/* implicit */unsigned char) var_14);
            arr_21 [i_1] [i_1] = ((/* implicit */unsigned int) var_2);
        }
    }
    var_24 = ((/* implicit */signed char) var_6);
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        var_25 = ((/* implicit */signed char) var_11);
        /* LoopSeq 2 */
        for (long long int i_6 = 1; i_6 < 12; i_6 += 4) 
        {
            arr_28 [i_5] = ((/* implicit */unsigned short) var_4);
            arr_29 [3LL] [i_6] [(unsigned short)4] = ((/* implicit */_Bool) var_1);
        }
        for (short i_7 = 0; i_7 < 13; i_7 += 3) 
        {
            arr_32 [i_5] [i_7] [i_7] = ((/* implicit */unsigned short) var_9);
            var_26 = ((/* implicit */int) var_11);
            var_27 = ((/* implicit */short) var_15);
            var_28 ^= ((/* implicit */unsigned char) var_4);
        }
        /* LoopSeq 4 */
        for (int i_8 = 0; i_8 < 13; i_8 += 4) 
        {
            var_29 = ((/* implicit */signed char) var_12);
            var_30 = ((/* implicit */unsigned int) var_16);
            arr_37 [i_5] [i_8] [i_8] = ((/* implicit */unsigned long long int) var_3);
        }
        /* vectorizable */
        for (unsigned char i_9 = 1; i_9 < 11; i_9 += 2) 
        {
            arr_41 [(signed char)12] [i_9] = ((/* implicit */unsigned long long int) var_15);
            arr_42 [i_9] [i_9] = ((/* implicit */short) var_4);
        }
        for (signed char i_10 = 2; i_10 < 10; i_10 += 4) 
        {
            arr_47 [i_10] [i_5] = ((/* implicit */long long int) var_11);
            var_31 = ((/* implicit */unsigned long long int) var_13);
        }
        for (unsigned short i_11 = 0; i_11 < 13; i_11 += 3) 
        {
            var_32 &= ((/* implicit */unsigned char) var_13);
            var_33 = ((/* implicit */unsigned char) var_14);
        }
        arr_50 [i_5] = ((/* implicit */long long int) var_16);
    }
    var_34 = ((/* implicit */_Bool) var_16);
    var_35 = ((/* implicit */unsigned char) var_11);
}
