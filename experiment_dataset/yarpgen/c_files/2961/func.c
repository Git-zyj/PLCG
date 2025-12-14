/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2961
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
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (((~(((/* implicit */int) (short)0)))) % (((/* implicit */int) arr_2 [i_0]))));
        arr_4 [i_0] = ((/* implicit */short) (((+(((/* implicit */int) (short)-4)))) + ((~(((/* implicit */int) arr_0 [i_0 - 2] [i_0]))))));
    }
    var_19 = ((/* implicit */unsigned int) max((((((/* implicit */int) max((((/* implicit */unsigned short) var_18)), (var_11)))) ^ ((-(((/* implicit */int) var_2)))))), (((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */int) min((var_16), (var_0)))) : (((/* implicit */int) var_4))))));
}
