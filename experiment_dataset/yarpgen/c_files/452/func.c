/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/452
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
    var_14 = ((/* implicit */_Bool) var_4);
    var_15 = ((/* implicit */_Bool) var_4);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) (-(arr_2 [(short)9] [i_0])));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-256)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-256))) : (arr_3 [i_1 - 2] [i_1 - 3])))) ? (((((/* implicit */_Bool) arr_4 [i_1 - 4])) ? (arr_4 [i_1 + 1]) : (arr_4 [i_1 - 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 - 2] [i_1])))));
            var_17 = ((/* implicit */short) (((!(((/* implicit */_Bool) 576390383559245824LL)))) ? (((/* implicit */int) arr_5 [(unsigned short)3] [i_1 - 3])) : (((/* implicit */int) arr_5 [i_1] [i_1 - 3]))));
        }
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_18 = (+(((((/* implicit */_Bool) arr_13 [i_4 - 1] [i_4] [i_4 + 3] [i_5])) ? (((/* implicit */int) arr_13 [i_2] [(signed char)5] [i_4 + 3] [i_5])) : (((/* implicit */int) arr_10 [i_4 + 2])))));
                                var_19 ^= ((/* implicit */unsigned short) arr_11 [i_4] [i_4 + 3] [i_4] [i_4 + 2]);
                                var_20 = ((/* implicit */long long int) arr_7 [i_4 - 1] [i_4 - 1] [i_4 + 2]);
                                arr_17 [i_5] [i_3] [i_3] [(short)8] [(short)8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_4 - 1] [i_4] [i_4 + 3] [i_0])) ? ((+(arr_11 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_3]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_4 - 1])))))));
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) arr_11 [i_5] [i_4] [i_2] [i_2]))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-256))));
                    var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (((/* implicit */int) arr_1 [i_0] [i_2])) : (((/* implicit */int) arr_0 [i_2])))))));
                    arr_18 [1LL] [(signed char)8] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-245))))) ? ((~(arr_4 [i_0]))) : ((~(arr_4 [i_0])))));
                }
            } 
        } 
    }
    for (unsigned int i_6 = 3; i_6 < 20; i_6 += 4) 
    {
        var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6 - 2])) ? (((/* implicit */int) arr_20 [i_6 + 1])) : (((/* implicit */int) arr_19 [i_6 - 2] [10LL]))))) ? (((/* implicit */int) arr_19 [i_6 + 1] [i_6 + 1])) : (((/* implicit */int) (!(arr_19 [i_6 + 1] [i_6]))))));
        arr_21 [i_6] = ((/* implicit */short) arr_19 [i_6] [i_6]);
        var_25 = ((/* implicit */unsigned short) arr_19 [i_6 - 3] [(short)5]);
        /* LoopNest 2 */
        for (short i_7 = 3; i_7 < 21; i_7 += 2) 
        {
            for (short i_8 = 3; i_8 < 19; i_8 += 1) 
            {
                {
                    arr_28 [i_6] [i_7] = ((/* implicit */unsigned char) (-((~(arr_26 [i_8] [i_7] [i_6 - 2])))));
                    arr_29 [i_7] [i_8] = ((/* implicit */long long int) (+((~(arr_24 [(unsigned char)14] [(unsigned char)14])))));
                    arr_30 [i_7] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)256)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned char)0))))) ? (arr_27 [i_6 - 3]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_7] [i_7 - 3] [i_8 + 3])) ? (((/* implicit */int) arr_23 [i_7] [i_7 - 3] [i_8 - 1])) : (((/* implicit */int) arr_23 [i_7] [i_7 - 1] [i_8 - 3])))))));
                    var_26 |= ((/* implicit */unsigned int) (-((~(arr_26 [i_6] [i_8 - 3] [i_8 + 2])))));
                }
            } 
        } 
    }
    for (int i_9 = 0; i_9 < 25; i_9 += 4) 
    {
        arr_34 [i_9] = ((/* implicit */short) (-(((((/* implicit */_Bool) (short)32767)) ? (arr_33 [i_9]) : (((/* implicit */long long int) 4294967284U))))));
        arr_35 [i_9] = ((/* implicit */unsigned char) arr_33 [i_9]);
    }
    /* vectorizable */
    for (short i_10 = 0; i_10 < 10; i_10 += 4) 
    {
        var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)32767))));
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_10])) ? (((/* implicit */long long int) arr_2 [i_10] [i_10])) : (arr_33 [i_10])));
    }
    /* LoopNest 3 */
    for (int i_11 = 1; i_11 < 11; i_11 += 1) 
    {
        for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 2) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 13; i_14 += 4) 
                    {
                        for (short i_15 = 2; i_15 < 11; i_15 += 2) 
                        {
                            {
                                arr_56 [i_15] [i_14] [i_11] [(signed char)8] [i_11] = (!(((/* implicit */_Bool) (~(arr_42 [i_15 - 1])))));
                                var_29 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_43 [i_11 + 1] [i_11])) ? (((/* implicit */int) arr_43 [i_11 + 2] [i_11])) : (((/* implicit */int) arr_43 [i_11 + 2] [i_11]))))));
                                arr_57 [i_12] [i_13] [i_15] [i_14] [i_12] [i_11 - 1] [10] |= ((/* implicit */_Bool) (~(((/* implicit */int) (short)255))));
                                var_30 = ((((/* implicit */_Bool) (short)-243)) ? (2247401767174144ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-256))));
                                arr_58 [i_14] [i_15] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_51 [i_11 + 2] [3U] [i_15 - 1] [i_15] [i_15 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_11 + 2] [i_15] [i_15 + 2] [12ULL] [i_15 - 2]))) : ((-(4294967284U)))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [(short)15])) ? (((/* implicit */int) arr_23 [i_11] [i_11] [i_11])) : (((/* implicit */int) arr_23 [i_11] [i_12] [i_13]))))) ? ((+(((/* implicit */int) (signed char)127)))) : (((((/* implicit */_Bool) arr_22 [i_11])) ? (arr_32 [i_11 + 2]) : (((((/* implicit */_Bool) arr_31 [i_13])) ? (((/* implicit */int) arr_40 [i_12])) : (((/* implicit */int) arr_46 [i_11] [i_12] [12LL]))))))));
                    var_32 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_11] [i_11])) ? (((/* implicit */int) arr_48 [i_11] [i_11])) : (((/* implicit */int) arr_48 [i_11] [i_11]))))) ? (((/* implicit */int) arr_48 [i_11] [i_11])) : ((+(((/* implicit */int) arr_48 [i_11] [i_11])))));
                }
            } 
        } 
    } 
}
