/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227812
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] = max((((/* implicit */long long int) min((((/* implicit */int) (unsigned char)176)), ((+(((/* implicit */int) (signed char)-5))))))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)11))) + (3933170208212853058LL))));
        arr_4 [i_0] = ((/* implicit */short) max((max((min((var_8), (((/* implicit */unsigned char) (signed char)96)))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)8))))))), (((/* implicit */unsigned char) (signed char)3))));
    }
    var_18 = ((/* implicit */unsigned char) var_10);
    var_19 = ((/* implicit */signed char) var_6);
}
