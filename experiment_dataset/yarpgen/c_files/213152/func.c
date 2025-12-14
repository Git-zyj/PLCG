/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213152
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
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_8), (arr_5 [i_2 - 2] [i_2] [i_2 - 2])))) ? ((+(((/* implicit */int) arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1])))) : (((((/* implicit */int) arr_5 [i_2] [(short)20] [i_2 - 2])) >> (((((/* implicit */int) arr_5 [i_2 + 2] [i_2 - 2] [i_2 - 2])) - (5073)))))));
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */int) arr_5 [i_0] [i_0] [i_0 - 2]))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_3))) == (((/* implicit */int) var_2)))))));
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (signed char)10))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) var_10);
    var_16 = ((/* implicit */unsigned short) var_9);
    var_17 = ((/* implicit */int) var_12);
}
