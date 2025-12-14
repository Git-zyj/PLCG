/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38370
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_20 += ((/* implicit */short) ((long long int) ((unsigned char) (_Bool)1)));
        var_21 = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) var_14)))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        arr_4 [i_1] = ((/* implicit */_Bool) ((((var_8) | (((/* implicit */long long int) ((/* implicit */int) var_19))))) % (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_14))))));
        var_22 = ((/* implicit */signed char) ((unsigned int) var_17));
    }
    var_23 = ((/* implicit */unsigned char) (~(((long long int) ((unsigned short) var_14)))));
    var_24 = ((/* implicit */long long int) ((signed char) (((+(((/* implicit */int) var_3)))) >= (((((/* implicit */int) var_15)) | (((/* implicit */int) var_16)))))));
    var_25 = ((/* implicit */_Bool) var_13);
}
