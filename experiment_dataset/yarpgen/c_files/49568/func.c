/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49568
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (signed char)-127))));
        var_20 = ((/* implicit */_Bool) arr_1 [i_0]);
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)196))))))))));
    }
    var_22 = ((/* implicit */int) ((unsigned char) var_17));
    var_23 = ((/* implicit */unsigned long long int) ((unsigned char) var_9));
}
