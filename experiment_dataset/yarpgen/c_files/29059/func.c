/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29059
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
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1)))))));
        var_14 += arr_0 [i_0 - 1];
    }
    var_15 = ((/* implicit */short) min((var_8), (((/* implicit */long long int) var_7))));
    var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))))), (((unsigned short) (_Bool)1))));
    var_17 = ((/* implicit */unsigned char) min((var_6), (var_3)));
}
