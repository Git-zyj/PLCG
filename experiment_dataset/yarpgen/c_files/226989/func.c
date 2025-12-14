/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226989
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
    for (signed char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0 - 2] = ((/* implicit */signed char) var_10);
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 4; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] [i_2] [i_1 + 1] = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)15141)), ((-2147483647 - 1))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_15 [i_0 - 2] [i_1 - 1] [i_2] [i_3 - 1] [i_0] = ((/* implicit */short) -1357975803);
                        arr_16 [i_0 + 2] [i_3] [i_2] [i_1 - 1] [i_2] [i_1 + 1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-106))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_15)));
                        arr_17 [i_3 - 1] [i_2 - 3] [i_0] [i_0] = ((/* implicit */int) arr_1 [i_0] [i_1]);
                        arr_18 [i_0] [i_0] [i_2 + 1] [i_0] [i_3] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_13 [i_3 - 1] [i_2 - 1] [i_0])) : (((/* implicit */int) (unsigned char)227))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 4; i_4 < 21; i_4 += 3) /* same iter space */
                        {
                            arr_21 [i_4] [i_4] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) 2147483647));
                            arr_22 [i_4] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_0 + 3] [i_4] [i_2])) ? (((/* implicit */unsigned long long int) -2147483640)) : (14512204471887063768ULL))) * (((/* implicit */unsigned long long int) 1357975783))));
                        }
                        for (unsigned int i_5 = 4; i_5 < 21; i_5 += 3) /* same iter space */
                        {
                            arr_26 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1] [i_5 + 1] [i_1 - 2] [i_3 - 1] = ((/* implicit */signed char) ((((2155368623U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)32756))))) ? (((/* implicit */unsigned long long int) var_9)) : (arr_12 [i_0 + 4] [i_5 - 1] [i_5 - 4] [i_3] [i_5] [i_5 - 4])));
                            arr_27 [i_0] [i_0] [i_1 - 2] [i_2 + 1] [i_2] [i_2 + 1] [i_5 - 1] &= ((/* implicit */unsigned char) var_13);
                            arr_28 [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_5 - 2] [i_5 - 2] [i_5] [i_5 - 2]))));
                            arr_29 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) arr_19 [i_1] [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_1 - 2] [i_3 - 1]));
                        }
                    }
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        arr_32 [i_0] [i_1] [i_0] [i_0] [i_6] = ((/* implicit */signed char) var_13);
                        arr_33 [i_6] [i_6] [i_6] [i_1] [i_6] [i_0] = ((/* implicit */int) 9223372036854775807LL);
                    }
                    arr_34 [i_2] = ((/* implicit */unsigned short) (-(max((max((((/* implicit */long long int) var_8)), (var_17))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-72)) - (((/* implicit */int) var_16)))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) 
                        {
                            arr_43 [i_8] [i_8] [i_8] [i_8] [i_8] [i_7] [i_7 + 1] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) * (arr_24 [i_0] [i_0])));
                            arr_44 [i_7] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */int) arr_13 [i_1 - 1] [i_1] [i_1 - 1]);
                            arr_45 [i_7] [i_1] [i_1 - 2] [i_1 - 1] [i_1 - 1] = ((/* implicit */int) var_16);
                            arr_46 [i_7] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) arr_3 [i_2] [i_0]);
                        }
                        for (signed char i_9 = 2; i_9 < 21; i_9 += 2) 
                        {
                            arr_50 [i_9 + 1] [i_7] [i_2 - 4] [i_7] [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)132)) / (((/* implicit */int) (signed char)106))));
                            arr_51 [i_0 + 4] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-24194)))))));
                        }
                        arr_52 [i_1] [i_1] [i_0 + 4] [i_1] [i_0 + 4] = ((/* implicit */unsigned long long int) (short)32767);
                        arr_53 [i_7] = ((/* implicit */signed char) (short)(-32767 - 1));
                    }
                    for (signed char i_10 = 1; i_10 < 22; i_10 += 1) 
                    {
                        arr_56 [i_10 - 1] [i_2 - 2] [i_1 - 1] [i_0 + 2] [i_0] = ((/* implicit */int) (+(2791981385210466478ULL)));
                        arr_57 [i_0] [i_1 - 1] [i_1 - 1] [i_10 - 1] [i_0] [i_10 + 1] = ((/* implicit */int) ((max((arr_14 [i_0]), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)2047))))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((-1286048339), (((/* implicit */int) (_Bool)1))))) ? ((+(var_7))) : (max((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */int) arr_42 [i_1] [i_1] [i_1])))))))));
                        arr_58 [i_0 - 2] [i_1] [i_1] [i_2] [i_10] = ((/* implicit */int) (_Bool)1);
                        arr_59 [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (_Bool)0)), (8865092882060064802LL)));
                    }
                }
            } 
        } 
        arr_60 [i_0] = (+(554616983));
    }
    var_19 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (signed char i_11 = 1; i_11 < 10; i_11 += 1) 
    {
        for (int i_12 = 1; i_12 < 11; i_12 += 3) 
        {
            {
                arr_65 [i_11 - 1] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) max((max((arr_48 [i_12]), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) (+(3322184775801955428LL))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_7 [i_11])) : (max((((/* implicit */int) (signed char)105)), (var_9)))))) : (1071644672U)));
                arr_66 [i_11 + 1] [(unsigned char)2] = (~(((/* implicit */int) (unsigned char)199)));
            }
        } 
    } 
}
