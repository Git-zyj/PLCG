/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20589
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_20 ^= ((/* implicit */short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)94)) | (((/* implicit */int) (unsigned char)239))))), (max((18446744073709551608ULL), (((/* implicit */unsigned long long int) var_12)))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((/* implicit */int) max((var_18), (var_18)))) : (((/* implicit */int) var_14)))))));
                                arr_13 [i_3] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_6) | (((/* implicit */int) var_0))))) != (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_19) : (((/* implicit */unsigned long long int) 4294967295U)))))))) & ((-((+(var_10)))))));
                                arr_14 [(short)8] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned long long int) arr_11 [i_0] [i_0] [i_2] [i_3 + 1] [i_0])));
                            }
                        } 
                    } 
                    arr_15 [i_0] = ((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])))));
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 15; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned char i_7 = 0; i_7 < 17; i_7 += 2) 
                            {
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [(_Bool)1] [i_0] [i_0]))))) / ((~(((/* implicit */int) (signed char)-52))))))) || (((/* implicit */_Bool) (signed char)-96)))))));
                                var_22 = ((/* implicit */unsigned int) ((int) (~(arr_4 [i_5 - 2] [i_5]))));
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_12)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2)) ? (var_6) : (((/* implicit */int) arr_19 [(unsigned char)11]))))) ? (((long long int) var_17)) : (((/* implicit */long long int) arr_0 [i_6])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)52))))))));
                                arr_23 [i_7] [i_6] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (~(arr_17 [i_0] [i_0] [i_0] [i_0])))) ? (arr_17 [i_0] [i_1] [i_5] [i_1]) : (((unsigned long long int) 4294967295U)))));
                                arr_24 [i_0] [i_6] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [(short)2] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_2 [i_5]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5]))) : (((unsigned int) ((var_3) || (((/* implicit */_Bool) var_15)))))));
                            }
                            var_24 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_6 [i_5 + 1] [i_5 + 2] [i_1 + 2]))))));
                            var_25 = ((/* implicit */_Bool) (signed char)0);
                            /* LoopSeq 1 */
                            for (unsigned char i_8 = 2; i_8 < 16; i_8 += 3) 
                            {
                                arr_27 [i_0] [i_1] [i_0] [i_6] [i_8] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 1779203493U)) || (((/* implicit */_Bool) arr_22 [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_1]))));
                                var_26 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_18 [i_8] [i_8 - 1] [i_1 - 2] [i_1 - 2]), (arr_18 [i_8] [i_8 - 2] [i_6] [i_1 - 2])))) ? (((((/* implicit */int) var_4)) / (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) arr_18 [i_8] [i_8 - 2] [i_1 - 3] [i_1 - 3])) ? (((/* implicit */int) arr_18 [i_1 - 2] [i_8 + 1] [i_5] [i_1 - 2])) : (((/* implicit */int) arr_18 [i_8 + 1] [i_8 + 1] [i_1 + 2] [i_1 + 2]))))));
                                arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */short) arr_11 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]);
                                arr_29 [(unsigned short)12] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((_Bool) arr_6 [i_0] [i_0] [i_0])) ? (arr_7 [i_6] [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8U))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0]))) : (var_19)));
                                arr_30 [(short)1] [i_0] [(short)1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(arr_25 [i_8 + 1] [i_5 - 1] [i_5] [i_1 + 2] [i_0])))), (max(((~(7661704228618475112ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 0LL)) != (arr_7 [i_0] [i_6] [i_0] [i_1] [i_0]))))))));
                            }
                            arr_31 [i_0] [i_0] [i_5] [i_5] [i_5] [i_0] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_22 [i_0] [i_0] [i_0] [i_0])))) | (max((var_9), (var_17))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(var_15)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_5] [i_1])) ? (((/* implicit */unsigned long long int) 4174823513U)) : (0ULL)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) 4174823513U);
    var_28 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 4174823500U)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 1U)) != (10785039845091076504ULL)))) : (((/* implicit */int) ((14346208405568404244ULL) < (((/* implicit */unsigned long long int) -5066659885676449143LL)))))))));
    /* LoopNest 2 */
    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 2) 
    {
        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            {
                var_29 *= ((/* implicit */int) 1U);
                /* LoopNest 3 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (signed char i_12 = 2; i_12 < 13; i_12 += 2) 
                    {
                        for (int i_13 = 0; i_13 < 14; i_13 += 3) 
                        {
                            {
                                arr_45 [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_9] [i_9])) ? (((/* implicit */int) (unsigned short)40896)) : (((/* implicit */int) (unsigned short)2881))))), (((arr_7 [i_10] [i_10] [i_10] [i_10] [i_10]) / (((/* implicit */unsigned long long int) arr_41 [i_10] [i_10] [i_12] [i_13])))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_13] [i_10] [4ULL] [i_10] [i_9]))) / ((-(var_19)))))));
                                var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 520129523590519439ULL))) ? (((/* implicit */int) arr_34 [i_9])) : (((((/* implicit */int) (short)17733)) / (((/* implicit */int) arr_20 [i_9] [(unsigned char)7] [(unsigned char)7] [i_12] [i_13]))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */int) (signed char)-52)) : (((((/* implicit */int) var_0)) & (((/* implicit */int) arr_5 [i_11] [i_11] [i_11] [i_11])))))))));
                                arr_46 [i_9] [i_9] [i_9] [i_9] [i_13] |= ((/* implicit */int) ((signed char) (+(max((4278872967U), (((/* implicit */unsigned int) (unsigned short)65535)))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_14 = 0; i_14 < 14; i_14 += 2) 
                {
                    arr_49 [i_14] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) (_Bool)1);
                    var_31 = ((/* implicit */int) (-((-(arr_32 [i_9])))));
                    var_32 = ((unsigned short) arr_47 [i_14] [i_10] [i_9]);
                }
            }
        } 
    } 
    var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) -1285789827))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) ^ ((~(((/* implicit */int) (signed char)-1))))))) : (((var_18) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : ((-(12146696317074517830ULL)))))));
}
