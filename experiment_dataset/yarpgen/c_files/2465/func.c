/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2465
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
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        arr_4 [i_0 - 1] [i_0 - 1] &= ((/* implicit */unsigned char) arr_2 [i_0] [(short)7]);
        var_18 = ((/* implicit */short) ((arr_3 [i_0 - 1]) >> (((arr_3 [i_0 - 1]) - (1183500946)))));
        var_19 = ((/* implicit */short) arr_3 [i_0]);
        var_20 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_1 [i_0])))));
        var_21 = ((/* implicit */unsigned char) ((290290765U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128)))));
    }
    var_22 |= ((/* implicit */unsigned int) min((5376291417713649333LL), (((/* implicit */long long int) 290290772U))));
}
