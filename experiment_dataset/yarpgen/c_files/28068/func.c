/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28068
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
    var_14 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        arr_4 [i_0 + 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
        var_15 = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_0))))));
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) ((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))))));
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) 826182756U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1]))) : (170755550U))))));
    }
}
