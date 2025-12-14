/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45656
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
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_7);
        arr_4 [i_0] = ((/* implicit */unsigned short) var_10);
        var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)24094))))) && ((_Bool)1)))) != (max((((/* implicit */int) (signed char)-1)), (31457280)))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) var_2);
    }
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (+(((/* implicit */int) var_6)))))));
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_2))));
    var_14 = ((/* implicit */int) var_6);
}
