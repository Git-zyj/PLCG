/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209617
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) < (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7433))) - (arr_0 [i_0])))));
        var_13 = ((/* implicit */short) ((max((((/* implicit */long long int) var_0)), (var_6))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
        var_14 = ((/* implicit */unsigned int) min((var_14), (max(((+(arr_0 [(unsigned short)3]))), (((/* implicit */unsigned int) (unsigned short)0))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                {
                    var_15 = ((/* implicit */long long int) arr_4 [(signed char)2] [(signed char)2] [i_3]);
                    arr_8 [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_4 [i_1] [i_2] [i_3]))));
                    arr_9 [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65534))));
                }
            } 
        } 
        var_16 = ((/* implicit */_Bool) arr_6 [i_1] [i_1]);
        var_17 = ((/* implicit */signed char) arr_3 [i_1]);
    }
    for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 2) 
    {
        arr_14 [i_4] [21LL] = min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) > ((~(((/* implicit */int) var_8))))))), (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)20))))), (((unsigned long long int) arr_11 [7LL])))));
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                arr_20 [9U] [i_5] = ((/* implicit */long long int) (unsigned short)1);
                var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_19 [(short)15] [(short)15]))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    for (signed char i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        {
                            arr_26 [i_4] [i_5] [16LL] [16LL] [i_4] [i_8] [i_8] = ((/* implicit */unsigned char) var_6);
                            var_19 = ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_24 [6U] [(signed char)12])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_7] [(signed char)6]))))) + (9223372036854775807LL))) >> (((((long long int) var_4)) - (6788539226362322903LL)))))) && (((/* implicit */_Bool) arr_10 [i_5] [i_7])));
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (unsigned char i_9 = 2; i_9 < 21; i_9 += 2) 
            {
                for (short i_10 = 0; i_10 < 25; i_10 += 2) 
                {
                    for (signed char i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) arr_31 [i_9] [i_9 - 1] [(signed char)19] [i_5] [i_9] [i_9 + 2])), (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_9] [i_9 + 2] [(unsigned short)2])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_9 + 2] [i_9] [(unsigned char)7]))))))));
                            arr_33 [i_4 + 2] [i_4 + 2] [i_9 + 1] [i_5] [i_4 + 2] = ((/* implicit */unsigned long long int) min((min((arr_13 [i_4 - 1]), (arr_13 [i_9 + 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)1)) ? (min((((/* implicit */int) arr_32 [i_5] [(_Bool)1] [i_9 + 3])), (arr_17 [i_5]))) : ((-(((/* implicit */int) arr_32 [i_5] [i_5] [3U])))))))));
                            arr_34 [i_4] [i_4 + 2] [i_4 + 2] [(unsigned char)9] [i_5] [12U] [(unsigned char)13] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_23 [12U] [i_5] [12U] [i_10] [i_10] [12U])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_4 - 2] [i_5]))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_29 [i_4] [i_5] [i_9] [6] [i_10] [i_9]) : (var_9))))), (((/* implicit */long long int) arr_16 [i_10] [i_5]))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_12 = 4; i_12 < 24; i_12 += 3) 
        {
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) min((((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_24 [i_4] [i_4 - 1])), ((unsigned short)65510))))) & ((~(var_4))))), (max((arr_23 [i_12] [i_12 - 2] [i_12] [i_12 - 2] [i_12 - 4] [i_12]), (arr_23 [i_12] [i_12 - 2] [i_12 - 1] [20U] [i_12 - 4] [(unsigned short)9]))))))));
            var_22 = ((/* implicit */short) max((((/* implicit */long long int) (!(((((/* implicit */int) (signed char)-48)) != (((/* implicit */int) (signed char)-1))))))), (arr_13 [i_12 - 2])));
            arr_38 [i_4 + 1] [i_12 - 4] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) (unsigned short)22)), (((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [(signed char)17] [i_4]))))))) << (((((unsigned int) arr_28 [i_4 + 2] [i_4])) - (1026735525U)))));
        }
        arr_39 [i_4] |= ((/* implicit */unsigned char) arr_29 [i_4] [i_4] [i_4] [i_4 - 2] [i_4] [i_4]);
    }
    var_23 = ((/* implicit */long long int) var_8);
}
