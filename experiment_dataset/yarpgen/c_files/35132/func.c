/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35132
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
    var_11 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_12 = ((/* implicit */signed char) (+(3286682093U)));
            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((long long int) arr_2 [i_0] [i_0 + 1] [i_0 + 1])))));
            var_14 += ((/* implicit */unsigned char) arr_2 [0ULL] [4U] [4U]);
            var_15 = ((/* implicit */unsigned short) ((arr_1 [i_0 + 1] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1))))));
        }
        var_16 = ((/* implicit */unsigned int) arr_4 [i_0 - 2] [i_0 + 1] [i_0 + 1]);
        var_17 = arr_3 [i_0] [12U] [i_0];
        var_18 = ((/* implicit */signed char) (+(((/* implicit */int) arr_4 [0ULL] [i_0 - 2] [(short)12]))));
    }
}
