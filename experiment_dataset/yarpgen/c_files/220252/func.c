/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220252
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_10 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((((/* implicit */int) arr_1 [i_0] [i_0])) >> (((((/* implicit */int) (short)-3504)) + (3535))))) : (((/* implicit */int) (unsigned short)21015)));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)44553)) ? (((/* implicit */int) (unsigned short)21034)) : (((/* implicit */int) (unsigned short)44520))));
    }
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) var_2))));
    var_12 |= var_1;
    var_13 = ((/* implicit */unsigned long long int) var_3);
}
