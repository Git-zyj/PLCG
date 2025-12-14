/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51660
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((arr_3 [i_0] [i_0]) < (((/* implicit */int) arr_4 [i_0] [i_1 - 1]))))) | ((-(arr_3 [i_0] [i_0])))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        var_14 *= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_9 [i_1 + 2] [i_3])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_9 [i_1 - 2] [i_3]))))));
                        arr_13 [(unsigned short)5] [(unsigned short)5] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)252)))) ^ (((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 2] [i_1] [i_1 + 2])) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_1 - 2] [i_1 + 2])) : (var_1)))));
                    }
                    /* vectorizable */
                    for (short i_4 = 4; i_4 < 11; i_4 += 4) 
                    {
                        var_15 = ((/* implicit */long long int) var_7);
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 2; i_5 < 8; i_5 += 2) 
                        {
                            arr_21 [i_2] [i_0] = ((/* implicit */unsigned char) var_9);
                            arr_22 [i_0] [i_0] [(unsigned short)1] = ((/* implicit */short) var_9);
                        }
                        for (signed char i_6 = 1; i_6 < 11; i_6 += 3) 
                        {
                            arr_26 [i_0] = var_6;
                            arr_27 [i_1] [i_1 - 1] [i_1 + 2] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_6);
                            var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_6)) * (arr_7 [i_0])));
                        }
                        for (unsigned int i_7 = 1; i_7 < 10; i_7 += 3) 
                        {
                            arr_31 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)252)) - (((/* implicit */int) (short)-23399))));
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_1) | (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65519))))) : (arr_11 [i_7 + 1] [i_2] [i_1 + 1] [i_1 + 1])));
                            arr_32 [i_7] [i_0] [i_2] [i_1 + 2] [(unsigned char)0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_13))))) ? (((/* implicit */int) arr_25 [i_4 - 4] [i_4 - 4] [i_4 - 2] [i_0] [i_7 + 1] [i_0] [i_4 - 2])) : (((/* implicit */int) ((signed char) arr_0 [i_1 + 1])))));
                            var_18 *= ((/* implicit */signed char) ((((((/* implicit */int) var_13)) >> (((var_5) + (2112090240875945787LL))))) + ((-(((/* implicit */int) (unsigned char)249))))));
                            arr_33 [i_0] [i_0] [i_0] [i_0] [5] = ((/* implicit */unsigned short) (+(var_7)));
                        }
                        arr_34 [i_0] [i_1] [i_2] [(unsigned char)7] [i_2] = ((/* implicit */unsigned char) var_2);
                        var_19 = ((/* implicit */unsigned short) ((arr_5 [i_0] [i_4 - 4] [i_4 + 1] [i_4 - 2]) & (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                    }
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) (unsigned char)245)))) >> (((((/* implicit */int) (unsigned char)221)) - (210))))))));
                }
            } 
        } 
    } 
    var_21 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_13))))))) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13))))))) : ((((!(((/* implicit */_Bool) var_9)))) ? ((+((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_5))));
}
