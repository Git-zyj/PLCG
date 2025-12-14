/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24857
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
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)18))))));
    var_15 = ((/* implicit */short) 19);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (33) : (((/* implicit */int) (unsigned short)43841))));
        var_17 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) -1)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
    }
}
