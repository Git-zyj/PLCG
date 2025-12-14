/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220549
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
    var_13 = var_8;
    var_14 = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_9))))), (var_9)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_15 = ((/* implicit */_Bool) arr_0 [i_0]);
        var_16 = ((/* implicit */long long int) (-((-(((/* implicit */int) var_8))))));
        var_17 = ((/* implicit */unsigned long long int) ((var_5) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
    }
    for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        arr_6 [i_1] |= ((/* implicit */short) min((((((((/* implicit */int) (short)-24283)) + (2147483647))) << (((arr_4 [i_1]) - (692455707U))))), (((/* implicit */int) (unsigned short)14623))));
        var_18 = ((/* implicit */signed char) var_9);
    }
    var_19 = ((/* implicit */short) max((((/* implicit */unsigned int) ((int) ((unsigned long long int) var_4)))), (((((/* implicit */_Bool) (((_Bool)1) ? (7U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51610)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)117))) : (((((/* implicit */_Bool) (signed char)-15)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)117)))))))));
}
