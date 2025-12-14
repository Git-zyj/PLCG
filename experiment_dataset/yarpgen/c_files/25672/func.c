/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25672
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
    var_17 = ((/* implicit */unsigned short) var_15);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)86))));
        var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_11), (((/* implicit */int) ((((/* implicit */int) (unsigned short)5961)) == (((/* implicit */int) (unsigned short)45964)))))))) ? (((/* implicit */int) var_15)) : ((+(((/* implicit */int) (_Bool)1))))));
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) arr_0 [i_0]))));
        var_20 = ((/* implicit */short) ((((/* implicit */int) ((995041895) > (1255956347)))) >= (((((((/* implicit */int) (signed char)-122)) | (((/* implicit */int) (signed char)-9)))) - (((/* implicit */int) ((_Bool) var_10)))))));
    }
}
