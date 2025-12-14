/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210028
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
    var_12 &= ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (min((var_4), (((/* implicit */unsigned int) (_Bool)0)))))) > (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        var_13 += ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > ((-(var_8))));
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (+(min((arr_1 [i_0 + 1]), (((/* implicit */int) arr_0 [i_0 - 1])))))))));
    }
}
