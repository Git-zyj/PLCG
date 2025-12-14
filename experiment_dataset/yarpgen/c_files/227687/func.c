/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227687
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
    var_11 = ((/* implicit */int) var_10);
    var_12 &= ((/* implicit */unsigned short) min((((/* implicit */int) var_4)), ((-((-(((/* implicit */int) (signed char)127))))))));
    var_13 -= ((/* implicit */int) var_10);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)63))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23450))) : (522240ULL)))) ? (max((((/* implicit */unsigned long long int) (unsigned char)0)), (((18446744073709029375ULL) - (11484872700961967830ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [2] [i_1])))));
                    var_14 *= ((/* implicit */unsigned short) var_6);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 7; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)73))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))) : (((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)73))))))) - (min((((unsigned long long int) 30786325577728ULL)), (6988995088190667155ULL))))))));
                                var_16 ^= ((/* implicit */long long int) max((max((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (var_5))), (4294967295U))), (((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_10)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_20 [i_6] [i_2] [i_6] = ((/* implicit */unsigned short) arr_8 [i_1 + 1] [8ULL] [i_1 + 1] [i_5 - 1] [i_1 + 1] [i_5 - 1]);
                                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_13 [i_1 + 2] [i_1 + 2] [i_5 - 1] [i_5]))) && (((/* implicit */_Bool) var_5))));
                                var_18 |= ((/* implicit */int) (((-(min((((/* implicit */unsigned long long int) arr_2 [i_5] [i_2] [i_1])), (var_1))))) * (((/* implicit */unsigned long long int) max((-1939296411465416916LL), (((/* implicit */long long int) (unsigned short)0)))))));
                                var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (~(2432011939U))))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)21732)) + (arr_1 [i_2])))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))));
                                arr_21 [(signed char)5] [(signed char)5] [7ULL] [(signed char)5] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_14 [i_6]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */int) max((arr_5 [i_6] [i_6]), ((signed char)-23)))) : (((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) arr_10 [i_2] [i_1 - 1] [i_1 + 2] [i_5 - 2] [i_6] [i_5 - 2] [i_1 - 1])))))));
                            }
                        } 
                    } 
                    var_20 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)132))))) & (((((/* implicit */_Bool) arr_15 [i_1 + 1])) ? (3404444560U) : (((/* implicit */unsigned int) arr_15 [i_0]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        for (short i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    for (int i_10 = 1; i_10 < 16; i_10 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_7] [i_9] [i_9]))) / (arr_25 [i_10] [(signed char)8] [(signed char)8])))) ? (((/* implicit */int) (unsigned char)221)) : (((((/* implicit */int) (unsigned short)64349)) >> (((((((/* implicit */_Bool) arr_27 [i_7] [i_7] [i_9] [i_10 + 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_7] [i_9] [12]))) : (4194272ULL))) - (199ULL)))))))));
                            var_22 = ((/* implicit */int) ((max((((/* implicit */unsigned int) (short)24494)), (4095U))) - (((/* implicit */unsigned int) ((((/* implicit */int) arr_28 [i_7 - 1] [i_9] [i_9] [12ULL])) % (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) (signed char)14)))))))));
                        }
                    } 
                } 
                arr_32 [i_8] [i_7] [(signed char)17] &= ((/* implicit */_Bool) arr_23 [i_8]);
                /* LoopNest 2 */
                for (signed char i_11 = 1; i_11 < 16; i_11 += 3) 
                {
                    for (signed char i_12 = 2; i_12 < 18; i_12 += 3) 
                    {
                        {
                            arr_40 [i_7] [0ULL] [0ULL] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-30)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)202))) : (((((/* implicit */_Bool) (-(-1939296411465416916LL)))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) 777636103)) : (4255507143312443436LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35942)))))));
                            arr_41 [i_12 + 1] [(unsigned short)14] [(unsigned short)14] [i_7 - 1] &= ((/* implicit */long long int) (-(((/* implicit */int) min(((short)24494), (((/* implicit */short) (_Bool)1)))))));
                            var_23 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) var_5)), (4261412864ULL)))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) -5433567953566170984LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (4255507143312443436LL))) * (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))))));
                            var_24 |= ((/* implicit */long long int) ((unsigned long long int) min((arr_24 [i_8] [i_8] [i_8]), (((/* implicit */short) max((var_0), (var_6)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
