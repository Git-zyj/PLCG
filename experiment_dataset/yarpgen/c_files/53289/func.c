/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53289
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_18 = arr_1 [i_0];
        var_19 = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((-4194304) > (((/* implicit */int) (unsigned short)24)))))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)31))));
        arr_7 [i_1] = ((/* implicit */signed char) ((arr_3 [i_1]) + ((+(arr_3 [i_1])))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
    {
        arr_11 [i_2] [i_2] = ((/* implicit */long long int) ((-1) <= (arr_9 [i_2] [i_2])));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_2])) || (((/* implicit */_Bool) arr_10 [i_2]))));
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_2])) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!((_Bool)1)))))))));
    }
    var_23 = ((((/* implicit */_Bool) var_1)) ? (var_17) : (((/* implicit */unsigned long long int) ((var_2) << (((max((((/* implicit */long long int) (signed char)49)), (-1872432299899571692LL))) - (48LL)))))));
    var_24 = var_3;
}
