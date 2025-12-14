/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243207
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
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0 - 1] = ((signed char) (~(((/* implicit */int) var_5))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0 + 1]);
        var_17 = var_16;
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_9 [i_0 - 1] [(signed char)14]))));
                                var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(signed char)4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [9]))) : (var_14))))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) (unsigned char)200)) : (((/* implicit */int) (unsigned char)199))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_0] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)56))));
                        arr_19 [i_5] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_16))));
                    }
                    for (signed char i_6 = 1; i_6 < 14; i_6 += 3) 
                    {
                        arr_23 [i_1] [i_1] [i_0] [i_2] |= ((/* implicit */unsigned int) var_2);
                        var_21 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) arr_9 [i_6 - 1] [i_1]))))) ? (((/* implicit */int) arr_10 [(unsigned char)12] [(unsigned char)12] [i_2] [i_0 - 2])) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_9 [i_0] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))));
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0 - 2])) + (((/* implicit */int) arr_10 [i_0 - 3] [i_2] [i_6 + 2] [i_0 - 3])))))));
                        arr_24 [i_2] &= ((/* implicit */signed char) arr_6 [i_0] [i_1] [i_1]);
                    }
                    var_23 = ((/* implicit */signed char) var_12);
                    var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [6U] [(signed char)2] [i_2] [i_2]))) : (var_14))))));
                }
            } 
        } 
    }
    for (long long int i_7 = 0; i_7 < 16; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            for (long long int i_9 = 0; i_9 < 16; i_9 += 4) 
            {
                {
                    arr_32 [i_7] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_5))));
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 16; i_11 += 2) 
                        {
                            {
                                arr_38 [3] [3] [i_9] [(unsigned char)2] [i_11] = ((int) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) (unsigned short)248)) : (((/* implicit */int) (unsigned short)65287))));
                                arr_39 [i_7] [i_8] [(unsigned short)6] [i_10] = ((((/* implicit */int) (unsigned short)24245)) ^ (((/* implicit */int) (unsigned short)32764)));
                                var_25 += ((/* implicit */unsigned short) 2756843999648406436LL);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */signed char) var_7);
                    /* LoopSeq 2 */
                    for (signed char i_12 = 0; i_12 < 16; i_12 += 3) /* same iter space */
                    {
                        arr_42 [i_7] [i_9] [(signed char)13] [i_12] = ((/* implicit */long long int) arr_16 [i_12] [i_12] [i_9] [i_12]);
                        arr_43 [(unsigned char)7] [i_12] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-16)), (var_12)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)53)) : (((/* implicit */int) arr_27 [i_12]))))));
                        arr_44 [i_12] [(unsigned short)9] [i_12] = ((/* implicit */long long int) arr_34 [i_7] [i_7] [i_9] [i_12] [i_12]);
                    }
                    /* vectorizable */
                    for (signed char i_13 = 0; i_13 < 16; i_13 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)32782)) : (((/* implicit */int) (signed char)60)))))));
                        arr_48 [i_7] = ((/* implicit */unsigned short) var_3);
                    }
                }
            } 
        } 
        arr_49 [(unsigned char)13] = ((signed char) ((int) (-(((/* implicit */int) (unsigned char)12)))));
    }
    /* LoopNest 3 */
    for (signed char i_14 = 0; i_14 < 11; i_14 += 4) 
    {
        for (unsigned int i_15 = 0; i_15 < 11; i_15 += 4) 
        {
            for (unsigned char i_16 = 0; i_16 < 11; i_16 += 1) 
            {
                {
                    arr_57 [i_14] [i_14] [i_14] [i_16] = ((/* implicit */unsigned short) var_5);
                    var_28 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -625037984)) ? (((/* implicit */int) arr_11 [i_14] [i_15] [i_16] [i_16] [(signed char)11] [i_14])) : (((/* implicit */int) var_12))))), (((((/* implicit */_Bool) (signed char)49)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32782))) : (var_9))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)32782)) : (((/* implicit */int) var_8)))))))));
                    arr_58 [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_15] [i_15])) | (((/* implicit */int) arr_20 [i_14] [i_14]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) var_11)) ? (var_14) : (var_14)))));
                }
            } 
        } 
    } 
}
