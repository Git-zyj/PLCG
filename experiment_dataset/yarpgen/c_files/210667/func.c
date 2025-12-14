/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210667
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
    var_12 += ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) var_2)), (((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned short)25519)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)40016)) : (((/* implicit */int) var_4))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [(_Bool)1] [i_0] = ((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) var_4))));
        arr_3 [i_0] = arr_0 [i_0] [i_0];
        arr_4 [i_0] = ((/* implicit */signed char) max((var_5), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0] [(unsigned short)13])))))));
        arr_5 [i_0] = ((/* implicit */_Bool) var_5);
        var_13 = ((/* implicit */unsigned int) var_10);
    }
}
