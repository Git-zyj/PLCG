/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41484
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
    var_10 = ((/* implicit */_Bool) ((var_5) + (((/* implicit */unsigned long long int) ((((unsigned int) var_1)) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (((((/* implicit */long long int) ((/* implicit */int) var_8))) + (var_4)))));
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (((((_Bool)1) ? (((/* implicit */int) arr_0 [(unsigned short)10] [i_0])) : (((/* implicit */int) max(((unsigned short)25524), ((unsigned short)37261)))))) ^ (((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)78))))) + (((/* implicit */int) arr_2 [(short)22])))))))));
    }
    var_13 = ((/* implicit */unsigned short) (signed char)-65);
}
