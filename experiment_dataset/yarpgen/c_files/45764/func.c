/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45764
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
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_4))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_18 = ((/* implicit */int) var_16);
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((var_15) * (((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_1))))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_14) <= (((/* implicit */int) var_16))))) <= ((~(938862459)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_0 [i_0] [i_0])))) / (((/* implicit */int) ((_Bool) var_2)))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (unsigned char)105);
    }
}
