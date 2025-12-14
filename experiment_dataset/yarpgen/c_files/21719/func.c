/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21719
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
    for (short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4360)) ? ((-(((/* implicit */int) max((var_11), ((short)1677)))))) : (((((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_0))))) - (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) == (((/* implicit */int) var_4)))))))));
        arr_5 [i_0] = ((/* implicit */_Bool) min(((short)19), (((/* implicit */short) (signed char)32))));
    }
    var_14 = ((/* implicit */_Bool) var_13);
}
