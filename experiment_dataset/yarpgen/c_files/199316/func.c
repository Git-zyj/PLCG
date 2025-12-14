/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199316
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
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    var_19 = ((/* implicit */unsigned long long int) (short)-31301);
                    arr_7 [i_0] [i_0] [i_0] [i_1] &= ((/* implicit */unsigned char) (short)731);
                    var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)731))) : (min((16653539118946785989ULL), (((/* implicit */unsigned long long int) 4294967295U)))))) / (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_0)) ? (arr_5 [i_2] [i_2] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-30197))))))))));
                    arr_8 [i_0] [i_2] = ((unsigned long long int) 132120576ULL);
                    arr_9 [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((max((((/* implicit */long long int) arr_6 [(unsigned char)14] [i_1] [i_2])), (-3663887936575030484LL))) <= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_2])))))) << (((/* implicit */int) ((((/* implicit */int) (short)749)) < (((/* implicit */int) ((unsigned short) var_18))))))));
                }
                for (short i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned short) 1107721449);
                    arr_13 [i_3] [i_3] [i_3] = ((/* implicit */short) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 2] [i_0 - 1]))) % (arr_12 [i_0 + 1] [i_0] [i_0 + 1]))));
                    var_22 = ((/* implicit */unsigned long long int) (short)-8073);
                }
                for (short i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0 + 1] [11ULL] [11ULL])))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            {
                                var_24 = max((arr_21 [i_0] [i_1] [4U] [i_5] [i_6] [i_0]), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)18000)))) < (3655922432U)))));
                                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0ULL)) ? (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_23 [i_5] [i_5] [i_0 + 1] [i_0 + 2] [i_0 + 2])))) : (((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 2] [i_0]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 1; i_7 < 13; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            {
                                arr_28 [i_1] [i_1] = ((/* implicit */short) arr_22 [i_0] [i_1] [i_4] [i_7 + 1] [i_8]);
                                var_26 += ((/* implicit */short) 508850610U);
                                arr_29 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -9094297609465393422LL)) ? (((/* implicit */int) (short)-4175)) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_7] [i_8])))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)1)) > (((/* implicit */int) (unsigned short)27656)))))))) ? (((unsigned int) arr_0 [14ULL] [i_0 + 2])) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49654)))));
                            }
                        } 
                    } 
                    var_27 = ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) - (((-1107721449) + (((/* implicit */int) arr_2 [i_0] [i_0 - 1]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 210223168U)) ? (((/* implicit */int) (unsigned short)60985)) : (((/* implicit */int) (unsigned short)65535))))))) : (((((-1LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40026))))) / (((/* implicit */long long int) ((unsigned int) var_8))))));
                }
                for (unsigned short i_9 = 0; i_9 < 16; i_9 += 2) 
                {
                    var_28 = ((((/* implicit */_Bool) arr_4 [15])) ? (((/* implicit */unsigned long long int) ((arr_22 [1U] [i_9] [i_1] [i_0] [i_0 + 2]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45685)))))) : (arr_10 [i_9] [i_0]));
                    arr_33 [i_0 + 2] [i_9] [i_9] = min((arr_12 [i_0 + 1] [6LL] [i_9]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) >= (((((/* implicit */int) (unsigned short)1)) + (((/* implicit */int) arr_23 [i_0 + 2] [i_0] [i_0] [i_0] [i_9]))))))));
                    arr_34 [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (arr_32 [i_0] [i_0] [(short)9] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */int) arr_15 [i_1])) : (((/* implicit */int) arr_14 [i_0 + 1] [i_0] [(unsigned short)14] [i_0]))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4551))) + (var_14)))))))));
                }
                arr_35 [12ULL] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((int) ((unsigned int) (unsigned char)255)))), (((long long int) 2097151U))));
                var_29 = (+(((((/* implicit */_Bool) arr_20 [i_0] [i_0 + 2] [i_0 + 2] [i_0 - 1])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))));
                arr_36 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [i_0 + 2] [i_0 - 1] [i_0] [i_0 + 2])) <= (((((/* implicit */_Bool) ((var_14) >> (((((/* implicit */int) (unsigned char)127)) - (100)))))) ? (((unsigned long long int) 6257269104219575705LL)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (arr_19 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_1] [(unsigned short)1] [(unsigned short)1]))))))))));
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-713)))))) ? (min(((+(var_1))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)57)) <= (((/* implicit */int) (unsigned char)131))))))) : (576460752303423488LL)));
}
