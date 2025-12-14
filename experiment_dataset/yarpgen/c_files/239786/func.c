/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239786
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned int) min((((((/* implicit */int) (short)-17404)) - (((/* implicit */int) (short)17394)))), (((/* implicit */int) (signed char)-76))))) | ((-(var_2)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0 - 1] [i_0 + 1] = ((/* implicit */unsigned int) arr_1 [i_0]);
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                for (unsigned char i_3 = 1; i_3 < 12; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned char)252;
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            arr_13 [i_0 + 1] [i_1] [i_2 - 2] [i_3 + 1] [i_2] [i_4] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_5 [(short)9] [i_4])))) << (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_5 [i_2] [i_2])))))));
                            var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (short)0))) + (((((/* implicit */long long int) ((/* implicit */int) var_3))) & (var_1))))))));
                            var_14 = ((/* implicit */short) arr_12 [i_0] [i_1] [i_2] [i_3 + 1] [i_3] [i_4]);
                            var_15 = ((/* implicit */short) (unsigned char)151);
                        }
                        for (short i_5 = 2; i_5 < 11; i_5 += 2) 
                        {
                            arr_17 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967287U)) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) (short)-17404))));
                            var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((long long int) arr_5 [i_3] [(unsigned char)11])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)61)) < (((/* implicit */int) var_11))))))));
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5 + 1] [i_1] [i_2] [(short)0] [i_3 + 2] [i_1] [i_0]))) / (var_4))))));
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */int) arr_12 [i_5] [(unsigned char)4] [1LL] [i_1] [i_0 - 2] [i_0])) : (((/* implicit */int) var_3))));
                            var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)-5765)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(signed char)3] [i_2]))) : (2179346088U))) >> (((var_6) - (1573995187U)))));
                        }
                        for (unsigned char i_6 = 1; i_6 < 13; i_6 += 3) 
                        {
                            arr_20 [i_0] = ((/* implicit */unsigned short) (short)-32761);
                            arr_21 [i_0] [i_1] [i_2] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) & (((/* implicit */int) ((signed char) (unsigned char)254)))));
                        }
                        var_20 = ((/* implicit */unsigned short) var_9);
                        arr_22 [i_3 + 1] [i_1] [i_2 - 1] [i_3] [i_3] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) arr_4 [13U] [i_1] [i_2])) < (((/* implicit */int) arr_6 [i_0] [i_1] [i_2])))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_7 = 1; i_7 < 15; i_7 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            arr_28 [i_7] [i_7 + 2] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)146)) + (((/* implicit */int) (unsigned char)109))));
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_7 + 1] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_1)));
        }
        for (short i_9 = 0; i_9 < 17; i_9 += 3) /* same iter space */
        {
            arr_32 [i_7] [i_7] [i_9] = ((/* implicit */unsigned short) arr_31 [i_7 - 1] [(unsigned short)4]);
            var_22 = ((/* implicit */short) var_6);
        }
        for (short i_10 = 0; i_10 < 17; i_10 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */short) (+(((/* implicit */int) (signed char)-20))));
            var_24 -= ((/* implicit */signed char) (+(((/* implicit */int) ((arr_31 [(short)2] [i_10]) == (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
        }
        /* LoopSeq 2 */
        for (unsigned short i_11 = 0; i_11 < 17; i_11 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_12 = 3; i_12 < 16; i_12 += 2) 
            {
                for (unsigned int i_13 = 0; i_13 < 17; i_13 += 3) 
                {
                    {
                        arr_43 [i_7 + 2] [i_11] [i_11] [(unsigned char)2] [i_12] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [i_7 - 1] [i_12 - 2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_41 [i_13] [i_11] [i_12] [12U] [i_11])) : (((/* implicit */int) var_8))))) : (var_0)));
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) arr_25 [i_7] [(short)11]))));
                    }
                } 
            } 
            var_26 -= ((/* implicit */short) var_7);
            var_27 = ((/* implicit */long long int) ((arr_30 [i_7 + 1]) << (((var_2) - (1104446444U)))));
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_34 [i_7]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_7 + 1] [i_7 + 1] [i_7] [(unsigned char)12] [i_11]))) : (((((/* implicit */_Bool) arr_31 [i_7] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_11] [i_11] [i_7]))) : (var_1)))));
        }
        for (unsigned short i_14 = 0; i_14 < 17; i_14 += 2) /* same iter space */
        {
            var_29 -= ((/* implicit */unsigned short) (-(((((/* implicit */long long int) ((/* implicit */int) arr_39 [i_14] [i_14] [i_7 - 1] [i_7]))) + (var_4)))));
            arr_46 [i_7] [i_7 + 2] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (unsigned short)65535))) ? (((/* implicit */int) (short)-17395)) : (((/* implicit */int) ((short) var_9)))));
            /* LoopNest 3 */
            for (unsigned short i_15 = 0; i_15 < 17; i_15 += 3) 
            {
                for (unsigned int i_16 = 1; i_16 < 16; i_16 += 1) 
                {
                    for (short i_17 = 1; i_17 < 15; i_17 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 36028797018963967LL)) ? (var_7) : (var_9))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */int) (signed char)51)) : (((/* implicit */int) (signed char)-83))))))))));
                            var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_30 [i_7 - 1]))));
                            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) 4294967271U))));
                        }
                    } 
                } 
            } 
        }
        var_33 = ((/* implicit */unsigned char) (short)4906);
        arr_54 [i_7] = arr_51 [i_7 + 2];
    }
    /* LoopNest 2 */
    for (unsigned int i_18 = 2; i_18 < 17; i_18 += 3) 
    {
        for (short i_19 = 4; i_19 < 16; i_19 += 2) 
        {
            {
                var_34 = ((/* implicit */short) max((((((/* implicit */int) max((((/* implicit */unsigned short) var_3)), ((unsigned short)0)))) + (((/* implicit */int) ((unsigned char) var_6))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_57 [i_18] [i_19 + 1])) / (((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_57 [i_18 + 1] [(unsigned short)14])) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_58 [i_19] [i_18] [i_18 - 1])), (var_10))))))));
                var_35 ^= ((/* implicit */unsigned int) (short)57);
            }
        } 
    } 
}
