/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196220
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_18 = ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) arr_2 [i_0] [i_0])))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            var_19 = ((/* implicit */signed char) (-((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-385265292)))));
            arr_7 [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1])) + (((/* implicit */int) arr_0 [i_1]))))) ? (arr_2 [i_1 + 3] [i_1 + 2]) : (((((/* implicit */int) (short)0)) / (((/* implicit */int) arr_0 [i_0]))))))));
        }
        var_20 = ((/* implicit */short) arr_1 [i_0] [i_0]);
        var_21 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (((unsigned int) var_9)))));
    }
    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) var_11))));
    var_23 = ((/* implicit */unsigned short) var_14);
}
