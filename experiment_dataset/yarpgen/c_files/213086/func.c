/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213086
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
    for (short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1] [i_2])) ? (((/* implicit */int) arr_0 [i_1] [i_2 - 1])) : (((/* implicit */int) arr_2 [i_1] [11U] [i_2]))))))) ? (((arr_3 [i_2 + 1]) / (arr_3 [i_2 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 - 1] [i_0 + 1] [i_0 + 1])))));
                    arr_8 [i_0] [(short)10] [i_0] [i_2 - 2] = ((/* implicit */long long int) (+(((((((/* implicit */int) arr_0 [i_1] [i_1])) * (((/* implicit */int) var_6)))) | ((~(((/* implicit */int) (unsigned char)73))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_3))) | (var_10)))))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) var_8))));
}
