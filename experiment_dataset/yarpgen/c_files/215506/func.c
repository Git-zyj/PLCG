/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215506
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 4; i_2 < 23; i_2 += 1) 
                {
                    arr_7 [i_0] [i_1 - 2] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((unsigned short) arr_3 [i_0] [i_2 - 1]))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_3 [i_0 - 1] [(short)10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_2] [i_1 - 1] [i_0 + 1]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [(_Bool)1] [i_0] [i_1] [i_0])) * (((/* implicit */int) (short)15364))))))), (((/* implicit */unsigned int) ((short) (+(((/* implicit */int) arr_6 [i_0] [i_1] [(signed char)6] [i_0]))))))));
                    var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_6 [i_0] [i_2 + 1] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)27097))) : (arr_3 [i_0] [i_0]))))))));
                }
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        arr_13 [i_0] [i_0] = ((/* implicit */int) (((+(-6980087241398274193LL))) | (((/* implicit */long long int) (-(((/* implicit */int) var_5)))))));
                        var_16 = (-(max((min((arr_3 [i_3] [i_1]), (((/* implicit */unsigned int) (unsigned char)12)))), (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [(short)6])) ? (arr_10 [i_0] [i_1] [i_3] [9U]) : (arr_3 [i_0] [i_4]))))));
                        arr_14 [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_4] [i_3] [i_0 + 1]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 3; i_5 < 24; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 24; i_6 += 3) 
                        {
                            {
                                arr_21 [i_6] [(signed char)5] [18U] [i_0] [18U] [18U] [i_0] = ((/* implicit */signed char) arr_10 [i_0] [i_1] [i_1] [0LL]);
                                var_17 = ((/* implicit */unsigned int) var_8);
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_11)), (arr_3 [i_5] [i_1])))))))));
                                var_19 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [(unsigned short)20] [i_6]))) / (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [(short)0] [i_0 + 1])) ? (min((arr_3 [i_1 - 2] [i_5]), (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_3] [(_Bool)1])))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1] [i_1] [6LL] [i_5])) * (((/* implicit */int) var_5)))))))));
                            }
                        } 
                    } 
                    var_20 -= ((/* implicit */short) max((((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned char) (signed char)-18))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)34847))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)26321))) % (var_1))))), (((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [i_3] [i_1] [i_0] [i_0])), (arr_20 [i_0 + 1] [(unsigned short)16] [i_0 + 1] [i_0] [i_0] [i_0])))))))));
                }
                var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) (((~(((/* implicit */int) (unsigned char)65)))) < (((/* implicit */int) min((arr_18 [i_1 - 2] [i_1] [i_1] [i_1] [i_1] [i_0 + 1] [(short)3]), (arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0])))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_22 = ((/* implicit */signed char) (~(arr_16 [i_0 + 1] [(_Bool)1] [i_1] [i_7])));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2639953614U)) ? (((/* implicit */int) arr_19 [(unsigned short)24] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_9 [i_0] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_20 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_7] [i_7])))) : (((((/* implicit */_Bool) arr_15 [i_0 - 1] [i_0] [i_0 - 1] [i_0])) ? (arr_16 [i_1] [(short)24] [20] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [(unsigned char)19] [i_0] [(_Bool)1] [i_7])))))));
                }
                for (unsigned short i_8 = 0; i_8 < 25; i_8 += 2) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_1 [i_0 - 1]))));
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 25; i_9 += 2) 
                    {
                        for (unsigned char i_10 = 3; i_10 < 22; i_10 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((short) arr_9 [i_0] [6U])), (((/* implicit */short) ((arr_10 [i_9] [i_8] [i_1] [i_0]) >= (var_1)))))))));
                                var_26 = ((/* implicit */int) (((-(min((arr_22 [i_10] [i_8] [i_1] [i_0]), (((/* implicit */unsigned int) arr_29 [i_0 - 1] [i_1] [i_1] [i_9] [i_10])))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (-(((/* implicit */int) (signed char)-90)))))))));
                                arr_31 [i_9] [i_9] [i_8] [i_9] [i_9] [(unsigned short)22] [i_9] &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) / (arr_16 [(short)4] [i_8] [(unsigned char)21] [i_10])));
                                var_27 ^= (~(min((((/* implicit */unsigned int) arr_4 [i_0] [i_0] [(signed char)3] [i_0])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 + 1] [i_0]))) ^ (arr_10 [i_0] [i_1] [i_8] [i_10]))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_11 = 0; i_11 < 25; i_11 += 2) /* same iter space */
                {
                    var_28 ^= ((/* implicit */unsigned int) (+((-(956263457)))));
                    var_29 |= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_11 [i_11] [(unsigned short)4] [i_11] [(unsigned short)4])))))) | ((+(0)))));
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_12 = 0; i_12 < 13; i_12 += 4) 
    {
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) max(((unsigned short)42973), (((/* implicit */unsigned short) arr_11 [i_12] [(short)0] [i_12] [i_12]))))) | (((/* implicit */int) ((((/* implicit */int) arr_11 [i_12] [i_12] [i_12] [5LL])) > (((/* implicit */int) arr_11 [i_12] [i_12] [i_12] [i_12])))))));
        arr_37 [i_12] = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)12))));
        var_31 += arr_17 [i_12] [i_12] [i_12] [i_12];
    }
    for (long long int i_13 = 1; i_13 < 16; i_13 += 4) /* same iter space */
    {
        var_32 = ((/* implicit */short) min((min((arr_16 [i_13 + 3] [i_13 + 2] [i_13 + 4] [i_13 + 4]), (((/* implicit */long long int) arr_28 [i_13 + 2] [i_13 + 3] [i_13 + 3] [i_13 - 1] [i_13] [i_13 + 2])))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_32 [i_13]), (arr_8 [(unsigned short)13] [(unsigned short)13] [i_13] [(unsigned short)13])))) ? ((-(((/* implicit */int) arr_9 [i_13] [i_13])))) : (((((/* implicit */int) arr_8 [i_13 - 1] [i_13] [i_13] [i_13 + 1])) ^ (((/* implicit */int) arr_4 [i_13] [i_13 + 3] [i_13] [i_13 + 4])))))))));
        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) arr_25 [i_13 + 3] [i_13 + 4] [11U]))));
        arr_40 [i_13] = arr_9 [i_13 + 3] [i_13];
    }
    for (long long int i_14 = 1; i_14 < 16; i_14 += 4) /* same iter space */
    {
        arr_43 [i_14] = ((/* implicit */_Bool) ((unsigned short) (-(((((/* implicit */int) arr_1 [i_14 + 3])) + (((/* implicit */int) (signed char)-105)))))));
        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(min((((/* implicit */int) (unsigned char)167)), (arr_42 [(unsigned char)0])))))))))));
    }
}
