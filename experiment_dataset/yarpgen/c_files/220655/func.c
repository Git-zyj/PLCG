/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220655
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
        var_17 *= ((/* implicit */unsigned char) min((((/* implicit */short) max((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))), ((!(arr_0 [i_0] [i_0])))))), (max((((/* implicit */short) (_Bool)0)), ((short)9569)))));
        arr_2 [i_0] |= max(((short)31661), (((/* implicit */short) (_Bool)1)));
    }
    var_18 = ((/* implicit */unsigned char) var_16);
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */int) (short)(-32767 - 1))) < ((-(((/* implicit */int) (_Bool)1)))))))));
    var_20 *= ((/* implicit */_Bool) max((min((((short) var_5)), (((/* implicit */short) max((var_8), (((/* implicit */unsigned char) var_9))))))), (((/* implicit */short) var_1))));
}
