/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236439
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
    for (long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_6 [12] [i_1 + 2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                    arr_7 [(short)13] [i_1 - 2] = ((/* implicit */short) (+(((((((/* implicit */int) arr_4 [i_1 + 2] [i_1 - 1] [i_0 - 1] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1] [i_0 - 2] [i_0])) + (12132)))))));
                    arr_8 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2] [i_0])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_1] [i_2 + 2]))))) : (min((((/* implicit */unsigned long long int) arr_0 [i_2] [i_0])), (arr_5 [i_0] [i_1] [i_1] [i_2]))))) / (min((min((arr_5 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_2] [(short)9])))))))));
                    var_12 = ((/* implicit */short) ((18446744073709551610ULL) & (281406257233920ULL)));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */unsigned int) var_0)) % (var_8))) : (((/* implicit */unsigned int) min((var_0), (((/* implicit */int) var_7))))))) : (var_8)));
}
