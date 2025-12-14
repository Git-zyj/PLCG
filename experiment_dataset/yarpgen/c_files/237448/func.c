/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237448
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
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (_Bool)0)) != (var_7))))) ? (((((int) arr_1 [i_0])) + ((-(((/* implicit */int) (short)-22864)))))) : ((-(((/* implicit */int) (short)22866)))));
        arr_3 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
        var_15 = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (4159748825U)));
    }
    var_17 = ((/* implicit */unsigned int) var_0);
}
