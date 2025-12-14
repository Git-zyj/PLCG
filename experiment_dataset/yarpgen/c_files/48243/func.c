/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48243
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [10LL] = ((/* implicit */unsigned int) max((((/* implicit */signed char) arr_1 [i_0])), (((signed char) max((((/* implicit */unsigned int) arr_3 [i_0])), (arr_4 [i_0]))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_13 [(unsigned short)11] [(unsigned short)11] [i_2] [(unsigned short)11] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */unsigned int) arr_5 [i_3 - 1] [i_2] [i_1])), (arr_4 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [i_3 - 1] [i_3 - 1] [i_3 - 1])) && (((/* implicit */_Bool) arr_5 [i_3] [i_3 - 1] [i_3 - 1])))) ? (((/* implicit */int) arr_5 [i_3] [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) arr_5 [i_3] [i_3 - 1] [i_3 - 1]))));
                        arr_15 [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned short) arr_1 [i_1]))), (min((arr_10 [i_3] [i_2] [i_1] [i_1] [i_0]), (((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_2] [i_0] [i_0] [(signed char)4]))))))) ? (((/* implicit */unsigned int) arr_2 [0LL] [i_1] [i_2])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3 - 1] [i_0] [i_1] [i_0]))) : (var_3)))) ? (max((var_8), (((/* implicit */unsigned int) var_18)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_0 [i_0]))))))));
                        arr_16 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3 - 1]))) * (((((_Bool) (_Bool)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3 - 1]))) : (arr_10 [i_0] [i_1] [i_3] [i_3] [i_2])))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        arr_19 [i_0] [i_4] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [i_0] [i_1] [i_4]), (((/* implicit */int) var_2))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_10 [i_0] [6ULL] [6ULL] [8] [i_4]))))))) : (((/* implicit */int) arr_6 [(unsigned char)4] [i_1] [i_1] [(unsigned char)3]))));
                        arr_20 [i_4] [i_1] [(unsigned char)4] = ((/* implicit */signed char) max((min((((/* implicit */int) arr_3 [i_0])), ((+(((/* implicit */int) (unsigned char)204)))))), (((/* implicit */int) min((arr_11 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) arr_17 [(signed char)11] [(signed char)11] [i_1] [7LL])))))));
                        arr_21 [i_4] [i_4] [i_4] [i_0] = ((/* implicit */signed char) arr_5 [i_0] [(signed char)4] [i_4]);
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) var_16);
}
