/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241821
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_12 = ((/* implicit */int) arr_2 [i_0] [i_0]);
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_6)))), (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_1 [i_0]))))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_3 [i_0]), (((/* implicit */short) (_Bool)1)))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 3; i_1 < 14; i_1 += 2) 
    {
        for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_3 = 2; i_3 < 13; i_3 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_0), (arr_11 [i_1] [15] [i_1 + 1] [i_4 - 1]))))) >= ((+(((6270955839422945837ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1 + 2] [i_1 + 2] [i_1])))))))));
                        arr_13 [4LL] [i_3 + 2] [i_3] [i_3] [i_3 + 2] = ((/* implicit */short) min((min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1])))), (((int) arr_9 [i_1 + 3] [i_1 + 3] [i_3])))), (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_7 [i_3 + 1] [i_4 - 2]))))));
                        var_15 ^= ((/* implicit */long long int) min((((unsigned int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [11U] [i_2] [i_3] [i_4]))) : (var_2)))), (((/* implicit */unsigned int) arr_12 [i_1] [i_4 + 2] [i_3] [i_3]))));
                    }
                    for (short i_5 = 1; i_5 < 14; i_5 += 2) 
                    {
                        arr_16 [i_1 - 1] [i_5] [i_3] [i_5 + 3] = ((/* implicit */long long int) (+((-(((/* implicit */int) arr_12 [i_1] [i_2] [i_1] [i_5 - 1]))))));
                        arr_17 [i_5 + 3] [i_5] = ((/* implicit */unsigned short) max(((-(((((/* implicit */_Bool) var_11)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 - 2] [i_1]))))))), (((/* implicit */unsigned long long int) var_7))));
                    }
                    var_16 = ((/* implicit */unsigned short) var_1);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            {
                                arr_23 [i_1] [0ULL] [0ULL] [i_6] [i_7] = ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1 - 3]))))), (arr_21 [i_3 + 1])));
                                arr_24 [i_1] [i_1] [i_2] [0LL] [i_6] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
                                arr_25 [i_6] [i_3] [i_1] = ((/* implicit */short) min((max((((/* implicit */long long int) max((arr_11 [i_1] [i_2] [i_3] [i_2]), (((/* implicit */unsigned short) (_Bool)1))))), (((((/* implicit */_Bool) arr_7 [i_1] [i_2])) ? (var_5) : (var_1))))), (((/* implicit */long long int) ((arr_12 [i_1 - 2] [i_3 - 2] [i_3] [i_2]) ? (((/* implicit */int) arr_12 [i_1 - 1] [i_3 + 4] [i_3 + 1] [(unsigned short)9])) : (((/* implicit */int) var_10)))))));
                            }
                        } 
                    } 
                    var_17 ^= ((/* implicit */_Bool) ((short) ((((/* implicit */unsigned long long int) (~(2199021158400LL)))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (0ULL))))));
                }
                var_18 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_0)), (max((((/* implicit */unsigned long long int) ((unsigned short) 18446744073709551610ULL))), (((18446744073709551615ULL) / (((/* implicit */unsigned long long int) arr_18 [i_1]))))))));
                arr_26 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((var_4), (var_10))))))) : (max((min((((/* implicit */unsigned long long int) var_7)), (var_3))), (((/* implicit */unsigned long long int) var_5))))));
                arr_27 [i_1] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_1 + 1] [i_1])))))))) ? (((/* implicit */int) ((arr_5 [i_1 - 3]) >= (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */long long int) 4294967295U)))))))) : (var_11)));
                var_19 = min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1 - 2] [i_1 + 2] [i_1 + 1] [i_1 + 1]))) : (arr_18 [i_1 + 3]))), (((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1 - 2]))) - (var_1))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
    var_21 = ((/* implicit */long long int) (-(var_11)));
}
