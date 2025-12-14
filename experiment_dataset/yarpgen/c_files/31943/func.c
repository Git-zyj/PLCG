/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31943
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
    var_16 = ((/* implicit */signed char) var_5);
    var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)56029)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))) : (((0ULL) + (var_7))))) <= (((/* implicit */unsigned long long int) ((var_15) & (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
    var_18 *= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (1238996209)))) : (((unsigned long long int) -1238996192)))));
    var_19 = ((((/* implicit */_Bool) ((int) var_2))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)62326)) >> (((-1238996210) + (1238996230)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) -1238996204)))) : (var_12))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) -1238996210)) ? (565514558U) : (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47016)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 2; i_2 < 10; i_2 += 2) /* same iter space */
                {
                    var_20 = ((/* implicit */signed char) min((((((((/* implicit */_Bool) var_13)) ? (1238996201) : (((/* implicit */int) (unsigned char)0)))) << (((((((/* implicit */_Bool) arr_1 [i_1])) ? (3) : (((/* implicit */int) arr_0 [i_0] [i_2])))) - (3))))), (((1238996190) - (((((/* implicit */_Bool) 3273076524U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        arr_9 [i_3] [i_1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((var_12) * (((/* implicit */unsigned long long int) var_15))));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)125)))) != (var_12)));
                        arr_10 [i_3] = ((/* implicit */int) ((565514532U) >> (((251195539) - (251195525)))));
                    }
                    for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 2) 
                    {
                        arr_13 [i_0] [i_0] [7] [i_4] = ((/* implicit */unsigned long long int) ((1238996217) == (((/* implicit */int) ((((/* implicit */long long int) (-(3729452738U)))) != (9223372036854775807LL))))));
                        var_22 = ((/* implicit */short) ((((((((/* implicit */_Bool) 18446744073709551606ULL)) ? (565514549U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) << (((min((((arr_2 [i_2] [i_2]) - (((/* implicit */unsigned long long int) 1937117623U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2124460741)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-4968)))))))) - (3470341126ULL)))));
                    }
                    arr_14 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)67))))) ? (((/* implicit */int) ((_Bool) arr_4 [i_2 + 2] [6U] [6U]))) : (((/* implicit */int) ((var_8) == (((/* implicit */int) arr_4 [i_2 + 2] [i_2 + 2] [i_2])))))));
                    arr_15 [i_0] [(_Bool)1] [i_1] = ((/* implicit */int) ((short) min((((unsigned long long int) arr_0 [i_0] [i_0])), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_3 [(short)2] [(short)2] [8])), (565514556U)))))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 1; i_5 < 11; i_5 += 2) 
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((short) 2700692609U)))));
                        arr_19 [i_0] [i_0] [i_0] [10] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (short)23548))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)29347))))) : (((((/* implicit */_Bool) max(((unsigned short)59962), ((unsigned short)18529)))) ? (((/* implicit */int) arr_0 [i_1] [i_2 + 2])) : (((/* implicit */int) ((short) var_0)))))));
                        arr_20 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */short) max((min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)24395)) : (-1238996209))), (max((((/* implicit */int) (short)-29347)), (-1218525840))))), (arr_16 [i_0])));
                        arr_21 [i_0] = ((/* implicit */long long int) max((((/* implicit */int) ((unsigned char) arr_2 [i_2 - 1] [i_5 + 1]))), (((((((/* implicit */_Bool) 2043036042)) ? (((/* implicit */int) (unsigned short)47035)) : (((/* implicit */int) (unsigned short)47016)))) << (((((/* implicit */int) max(((unsigned short)5573), (((/* implicit */unsigned short) (unsigned char)254))))) - (5572)))))));
                    }
                }
                /* vectorizable */
                for (int i_6 = 2; i_6 < 10; i_6 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            {
                                arr_29 [i_8] [i_8] [i_7] [i_8] [i_8] [i_8] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) 1238996186)) - (arr_26 [i_0 - 2])));
                                arr_30 [i_0] [i_1] [i_7] [i_1] [i_1] [i_0] = -1238996220;
                                var_23 = ((/* implicit */unsigned char) arr_0 [i_6 + 1] [i_0 - 4]);
                                arr_31 [i_0] [(signed char)3] [i_0] [i_0] [i_7] [i_7] [i_0] = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_7] [i_7] [(signed char)1]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 11; i_9 += 4) 
                    {
                        for (short i_10 = 0; i_10 < 12; i_10 += 2) 
                        {
                            {
                                arr_38 [i_0] [(_Bool)1] [(_Bool)1] [6LL] [(_Bool)1] [2U] [i_10] = ((short) (-(var_3)));
                                arr_39 [i_0] [i_0] [i_6] [i_6] [i_10] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)60165)) | (((/* implicit */int) arr_3 [i_0] [i_0 - 4] [i_9 - 1]))));
                            }
                        } 
                    } 
                }
                arr_40 [i_0] [i_0] = ((/* implicit */unsigned short) (unsigned char)99);
                var_24 = ((/* implicit */int) (short)-17549);
                /* LoopNest 3 */
                for (int i_11 = 1; i_11 < 11; i_11 += 4) 
                {
                    for (int i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        for (long long int i_13 = 0; i_13 < 12; i_13 += 4) 
                        {
                            {
                                arr_49 [i_0] = min((((/* implicit */unsigned long long int) 565514549U)), (((((/* implicit */_Bool) (short)4096)) ? (((/* implicit */unsigned long long int) -635534159329751606LL)) : (3916271046458773700ULL))));
                                var_25 = ((/* implicit */unsigned int) ((((long long int) ((unsigned long long int) 635534159329751606LL))) / (((/* implicit */long long int) ((3729452736U) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_10)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
