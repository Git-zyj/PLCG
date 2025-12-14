/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32239
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
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            var_11 &= ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
            var_12 = ((/* implicit */unsigned char) var_10);
            arr_5 [i_1] [i_0] = -6968632784967806685LL;
        }
        arr_6 [3U] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (arr_2 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */int) arr_4 [i_0] [(unsigned char)7])))))))) || (((/* implicit */_Bool) (~(arr_1 [i_0]))))));
        arr_7 [(short)4] [(short)4] = ((/* implicit */long long int) max((((/* implicit */unsigned int) arr_1 [i_0])), (max((((/* implicit */unsigned int) arr_1 [i_0])), (var_7)))));
        arr_8 [i_0] = ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
    }
    var_13 = ((((/* implicit */unsigned long long int) min((var_10), (((/* implicit */int) (unsigned char)235))))) / (var_5));
    var_14 = ((/* implicit */int) min((var_2), (var_3)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        arr_12 [i_2] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2])) ? (arr_9 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (6968632784967806675LL) : (((/* implicit */long long int) var_4))));
        var_15 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_9 [i_2]))));
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) << (((((-6968632784967806711LL) + (6968632784967806738LL))) - (27LL)))));
        /* LoopSeq 2 */
        for (unsigned int i_3 = 1; i_3 < 21; i_3 += 1) /* same iter space */
        {
            arr_18 [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_15 [i_3] [i_3 - 1])) / (arr_9 [i_2])));
            /* LoopNest 3 */
            for (unsigned char i_4 = 3; i_4 < 21; i_4 += 3) 
            {
                for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    for (int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        {
                            arr_27 [i_6] = ((/* implicit */long long int) arr_22 [i_3] [i_3 + 1] [i_3]);
                            var_16 = ((/* implicit */unsigned short) arr_20 [i_2] [i_2] [i_2]);
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) 6968632784967806685LL))));
                            var_18 = ((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_2]);
                        }
                    } 
                } 
            } 
            arr_28 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_17 [i_3 + 1] [i_3 - 1])) >= (arr_11 [i_3 + 1])));
            /* LoopSeq 1 */
            for (short i_7 = 1; i_7 < 19; i_7 += 1) 
            {
                arr_31 [i_2] [i_3 + 1] = ((/* implicit */unsigned short) ((-6968632784967806691LL) + (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_3 + 1] [i_7 + 2])))));
                arr_32 [i_7] = ((/* implicit */unsigned short) arr_25 [i_2] [i_3] [i_2] [i_7 + 2] [i_7]);
                arr_33 [i_7] [i_3] [(unsigned short)21] = ((/* implicit */unsigned int) ((unsigned char) arr_22 [i_7 + 2] [i_3 + 1] [i_7 + 3]));
                arr_34 [i_3 - 1] [i_7] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) <= (var_5)));
            }
        }
        for (unsigned int i_8 = 1; i_8 < 21; i_8 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_9 = 3; i_9 < 21; i_9 += 3) 
            {
                for (short i_10 = 0; i_10 < 22; i_10 += 3) 
                {
                    for (short i_11 = 2; i_11 < 21; i_11 += 3) 
                    {
                        {
                            arr_47 [i_11] [i_8] [i_9] [i_8] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_2] [i_8 + 1])) ? (((/* implicit */int) arr_23 [i_9 - 2] [i_8 - 1] [i_8 + 1] [i_8 - 1])) : (((/* implicit */int) arr_17 [i_9 - 1] [i_9]))));
                            arr_48 [i_2] [i_2] [i_9] [i_10] [i_2] [i_8] = ((/* implicit */int) var_9);
                        }
                    } 
                } 
            } 
            arr_49 [i_2] [i_8] [i_8] = ((/* implicit */unsigned char) -1745412468);
            arr_50 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_42 [i_8 + 1] [i_8 + 1])) > (arr_22 [i_8 + 1] [i_8] [i_8])));
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 3) 
            {
                var_19 = ((/* implicit */unsigned char) 3465587397U);
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */unsigned int) 1745412468)) - (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8])))));
                arr_53 [i_12] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_41 [17U] [17U] [(_Bool)1] [i_8])) - (((/* implicit */int) var_0))))) - (arr_29 [i_2] [(unsigned char)12] [i_8 + 1] [i_12])));
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 3) 
                {
                    for (long long int i_14 = 0; i_14 < 22; i_14 += 4) 
                    {
                        {
                            arr_60 [i_8] [i_13] [i_12] [i_8 + 1] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_8 + 1] [i_8 - 1] [i_8 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_8 - 1] [i_8 + 1] [i_8 + 1]))) : (arr_29 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_12])));
                            var_21 = arr_20 [i_8 + 1] [i_8 - 1] [i_8 + 1];
                        }
                    } 
                } 
                arr_61 [i_2] [i_8] [i_12] [(unsigned short)14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_36 [i_8 + 1] [i_12] [i_12])) : (((arr_39 [i_8]) << (((/* implicit */int) arr_57 [i_2] [i_8] [i_12]))))));
            }
        }
    }
    for (unsigned short i_15 = 0; i_15 < 17; i_15 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2111172531562386363LL)) ? (3162643450U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)19620)))));
        var_23 = ((/* implicit */int) 6968632784967806682LL);
    }
}
