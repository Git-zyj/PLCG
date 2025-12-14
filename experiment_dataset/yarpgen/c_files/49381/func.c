/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49381
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
    var_18 = ((/* implicit */unsigned char) var_5);
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_9))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_20 = ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)-60)) : (((/* implicit */int) (_Bool)0)))) : (var_5));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65507))) : (-1661776948841715441LL)))))));
    }
}
