/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35200
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 &= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (_Bool)1)), (922343350U)));
        arr_4 [(signed char)15] [(signed char)15] = ((/* implicit */unsigned char) min((((/* implicit */int) var_9)), (max((((/* implicit */int) var_3)), (((((/* implicit */int) var_1)) | (((/* implicit */int) (_Bool)1))))))));
        var_14 = ((/* implicit */_Bool) var_3);
        var_15 = ((/* implicit */_Bool) 1879048192);
    }
    var_16 = ((/* implicit */int) var_11);
}
