/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232442
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
    var_16 = var_3;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_5 [i_2 + 1] [i_2] [i_0] [i_2 + 1])) : (((/* implicit */int) arr_5 [i_2 + 1] [i_2 - 1] [i_3] [i_2 + 1]))))) ? (((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 1] [i_0] [i_2 + 1])) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [i_2 + 1] [(unsigned short)2] [i_3] [i_2])) : (((/* implicit */int) arr_5 [i_2 + 1] [i_2] [i_3] [i_2])))))))));
                                var_18 = ((/* implicit */unsigned int) (-(((arr_8 [i_4] [i_4 + 2] [i_4] [(unsigned char)15] [i_4]) % (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_1] [i_2] = ((/* implicit */short) max((((((/* implicit */_Bool) (short)18565)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1]))) & (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_12 [(short)1] [i_1] [(short)2] [i_0] [i_2] [i_2 - 2]), (((/* implicit */unsigned char) var_0)))))))), (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))) >= (arr_11 [i_2] [i_2 + 1] [12ULL] [i_2] [i_2])))), (((((/* implicit */int) var_0)) >> (((((/* implicit */int) arr_3 [(short)7])) - (17795))))))))));
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned short) (_Bool)1))))) ? (arr_8 [i_2 + 1] [i_2] [i_2 - 3] [i_2] [i_2]) : (max((((/* implicit */long long int) (short)18580)), (arr_0 [i_1])))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_9 [i_0] [6ULL])), (var_4)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_7 [i_2] [i_1] [i_1] [i_0]))))))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((var_0) ? (((min((((/* implicit */unsigned long long int) var_9)), (var_4))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) <= ((-(((/* implicit */int) var_5))))))))));
}
