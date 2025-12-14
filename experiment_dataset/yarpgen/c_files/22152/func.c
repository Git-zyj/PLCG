/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22152
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
    var_15 = ((/* implicit */unsigned int) (+((-((~(((/* implicit */int) (unsigned char)212))))))));
    var_16 = ((/* implicit */short) ((int) var_5));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) 8620068883567696431LL);
        var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_6))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) 8620068883567696431LL))));
    }
}
