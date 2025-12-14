/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216785
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
    for (signed char i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((-664571283) | (((/* implicit */int) arr_1 [i_0 - 1]))))) ? ((~(((/* implicit */int) (unsigned char)255)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_6 [i_2]) : (arr_0 [3] [i_2])))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) var_0)) & (((/* implicit */int) arr_7 [23] [i_1]))))))));
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_3)), (arr_1 [i_1])))) ? (((3309217161U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [(short)12] [20ULL]))))) : (var_1)))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-25613)))) : (((((arr_6 [i_2]) / (((/* implicit */int) (unsigned short)65521)))) / (((/* implicit */int) (short)25613))))));
                    arr_8 [i_0] [1] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_0] [i_1] [i_0])) + (2147483647))) << (((arr_3 [4U]) - (892294299U)))));
                }
            } 
        } 
    } 
    var_19 = var_7;
}
