/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224911
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) - (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (-(((/* implicit */int) var_7))))))))));
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) min((var_6), (var_8))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) arr_0 [(unsigned short)3]);
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) min(((+(((/* implicit */int) arr_1 [i_0 + 1])))), (((/* implicit */int) arr_1 [i_0 + 1])))))));
        var_17 |= ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0 + 1])) + ((~(((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) arr_2 [i_0]))))))));
    }
    var_18 = ((/* implicit */short) min((((/* implicit */unsigned short) ((short) ((((/* implicit */int) var_13)) - (((/* implicit */int) var_5)))))), (min((((/* implicit */unsigned short) var_2)), (var_4)))));
    var_19 = ((/* implicit */unsigned short) var_0);
}
