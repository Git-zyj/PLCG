/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52357
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
        arr_3 [i_0] |= max((((/* implicit */long long int) (_Bool)1)), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)95))) : (arr_0 [i_0]))));
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) min(((short)-11270), (((/* implicit */short) (_Bool)1)))))));
    }
    var_18 = ((/* implicit */short) ((((/* implicit */int) (short)0)) / ((((_Bool)1) ? (370211932) : (((/* implicit */int) var_15))))));
}
