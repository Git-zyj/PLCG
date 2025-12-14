/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240105
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
    var_11 = ((/* implicit */int) var_3);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_12 = ((/* implicit */_Bool) (~(max((((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) arr_0 [21]))))), (((((/* implicit */_Bool) (short)15360)) ? (((/* implicit */int) var_3)) : (-703816233)))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((signed char) var_7));
    }
    var_13 = ((/* implicit */int) var_6);
    var_14 = ((/* implicit */_Bool) (+(var_7)));
    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((var_2) - (((/* implicit */unsigned long long int) var_9)))), (var_10))))));
}
