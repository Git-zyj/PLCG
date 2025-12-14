/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233758
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
    var_15 += var_1;
    var_16 = ((unsigned int) var_13);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0 + 2] = (-(((unsigned int) (-(var_4)))));
        arr_4 [i_0] = ((unsigned int) 440151705U);
    }
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_17 += var_2;
        var_18 *= arr_7 [i_1];
    }
    var_19 = (((!(((/* implicit */_Bool) var_3)))) ? (var_7) : (var_3));
    var_20 = max((var_3), ((+(max((var_4), (var_5))))));
}
