/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228424
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
    var_13 |= ((/* implicit */_Bool) var_6);
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        var_14 = ((/* implicit */short) (!(((((/* implicit */int) var_6)) == (((/* implicit */int) min((var_2), (((/* implicit */short) var_8)))))))));
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_4)) < (((/* implicit */int) ((unsigned short) ((unsigned short) var_6))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) var_6);
        arr_4 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_0)))) & (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10))))))));
    }
}
