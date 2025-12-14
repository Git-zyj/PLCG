/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40563
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */signed char) min((max((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)17))) : (3730128222U))), (((/* implicit */unsigned int) min((((/* implicit */int) arr_3 [i_1] [i_1])), (arr_4 [i_0] [i_0])))))), (((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3730128236U)))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_2] [i_2])) : (((/* implicit */int) (unsigned short)65535)))), (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))));
                    var_14 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-17))));
                }
                for (signed char i_3 = 1; i_3 < 10; i_3 += 2) 
                {
                    var_15 = ((/* implicit */unsigned long long int) arr_2 [i_1] [i_1] [i_0]);
                    arr_12 [i_0] [(signed char)8] [i_1] [i_1] |= ((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_0] [i_1]);
                    arr_13 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */signed char) (~(max((arr_9 [i_0] [i_3 + 1] [i_3]), (arr_9 [i_3] [i_3 - 1] [i_3])))));
                    arr_14 [i_0] [i_0] [4LL] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [(signed char)7] [i_0] [i_0])), (arr_0 [i_0])))) ? (arr_11 [i_3 + 3] [i_3 - 1] [i_3 + 3] [i_0]) : (((/* implicit */unsigned long long int) arr_7 [i_3 + 3]))))));
                    arr_15 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) min((564839041U), (((/* implicit */unsigned int) min((((/* implicit */int) min(((signed char)-23), ((signed char)31)))), (arr_4 [i_0] [i_0]))))));
                }
            }
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (3730128220U)));
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            {
                arr_22 [i_4] [i_4] = ((/* implicit */unsigned long long int) -536870912);
                /* LoopNest 2 */
                for (long long int i_6 = 1; i_6 < 11; i_6 += 1) 
                {
                    for (signed char i_7 = 1; i_7 < 9; i_7 += 4) 
                    {
                        {
                            var_17 += ((/* implicit */signed char) -6714218014541026797LL);
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                            {
                                var_18 = ((/* implicit */signed char) arr_1 [i_4] [i_4]);
                                var_19 = ((/* implicit */unsigned short) arr_10 [i_4] [i_4]);
                                var_20 = ((/* implicit */long long int) arr_29 [i_7 - 1] [i_7 - 1]);
                            }
                            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                            {
                                var_21 *= ((/* implicit */long long int) arr_16 [i_9 - 1]);
                                arr_32 [i_4] = arr_28 [i_4] [(signed char)7] [i_6];
                                arr_33 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_21 [i_4] [i_4]);
                                var_22 = ((/* implicit */unsigned short) arr_20 [i_9 - 1] [i_7 + 3] [i_6 + 1]);
                            }
                            var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [i_4] [i_7 + 2] [i_7 + 2]), (arr_2 [6LL] [i_7 + 1] [i_7 + 1])))) ? ((+(2080374784))) : (((/* implicit */int) arr_31 [i_6 + 1] [(signed char)8] [i_6 - 1] [i_6 + 1] [i_6 - 1]))));
                            var_24 = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_23 [i_7 + 2] [i_7 + 2] [i_6] [(unsigned char)8]))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned char) max((max((9223372036854775807LL), (((/* implicit */long long int) 4294967295U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_5] [i_5] [i_5] [i_4]))) : (3730128224U))))));
                /* LoopNest 3 */
                for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    for (unsigned char i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        for (short i_12 = 0; i_12 < 12; i_12 += 4) 
                        {
                            {
                                arr_43 [i_4] [i_5] [i_10] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_4] [i_4] [i_10] [2U])) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */unsigned long long int) arr_2 [i_4] [i_5] [i_10])), (arr_11 [i_4] [i_4] [i_4] [i_10]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_10 [i_4] [i_4])), ((unsigned short)43348))))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 3297021721845506383LL)) ? (((/* implicit */unsigned int) 6)) : (3730128222U))), (((/* implicit */unsigned int) (unsigned short)43348)))))));
                                var_26 = ((/* implicit */unsigned char) (((+(3730128222U))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)-17))))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) arr_17 [i_4] [i_4])))))))));
                                arr_44 [i_4] [i_4] [i_10] [i_11] [i_12] = ((((/* implicit */_Bool) arr_7 [i_4])) ? (max((9223372036854775807LL), (((/* implicit */long long int) min(((unsigned short)35730), (((/* implicit */unsigned short) arr_23 [i_4] [i_4] [i_4] [i_4]))))))) : (((/* implicit */long long int) arr_36 [i_12])));
                            }
                        } 
                    } 
                } 
                arr_45 [i_5] [i_4] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_4] [i_4] [i_4] [i_4]))))) > (arr_35 [i_4] [i_4] [i_4] [i_5]));
            }
        } 
    } 
    var_27 &= ((/* implicit */signed char) var_5);
}
