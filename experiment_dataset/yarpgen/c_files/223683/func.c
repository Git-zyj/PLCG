/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223683
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
    var_13 = ((/* implicit */signed char) var_8);
    var_14 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_7))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1348690080)) ? (var_12) : (((/* implicit */int) (unsigned char)9))))) ? ((~(3145728))) : (((/* implicit */int) max((var_0), (((/* implicit */unsigned char) arr_1 [i_0])))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)245))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) 2139536700U);
    }
    var_15 = ((/* implicit */int) var_2);
}
