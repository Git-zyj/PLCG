/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46069
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)6475)))))));
        arr_4 [(unsigned short)1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)65535)) << (((((/* implicit */int) arr_2 [i_0] [i_0])) - (33967))))) ^ (((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_2 [i_0] [(unsigned short)1])))))))));
        var_15 &= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)10))));
        var_16 = arr_2 [(unsigned short)5] [i_0];
    }
    var_17 = var_14;
    var_18 = var_7;
}
