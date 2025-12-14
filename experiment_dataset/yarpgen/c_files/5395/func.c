/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5395
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
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))))), (min(((unsigned short)2044), (((/* implicit */unsigned short) var_7)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 ^= arr_2 [i_0];
        var_17 = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) | (max((((/* implicit */int) (unsigned short)2041)), (((((/* implicit */int) arr_0 [(unsigned char)6])) & (((/* implicit */int) (unsigned short)34379))))))));
    }
}
