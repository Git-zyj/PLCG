/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235338
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
    var_16 = ((/* implicit */unsigned long long int) 2544899217U);
    var_17 = ((/* implicit */int) (+((-(((((/* implicit */unsigned long long int) var_1)) | (2913699469555621750ULL)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (signed char)-83);
        arr_3 [i_0] [i_0] = var_11;
        arr_4 [i_0] [(unsigned short)6] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_13)) << (((((/* implicit */int) arr_1 [i_0])) - (87)))))) ? (min((((/* implicit */unsigned long long int) var_4)), (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((long long int) var_4)))))));
        arr_5 [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
    }
}
