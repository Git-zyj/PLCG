/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47885
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
    for (short i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        var_11 = ((/* implicit */long long int) arr_2 [i_0 - 3] [i_0 + 1]);
        var_12 = ((/* implicit */short) arr_0 [i_0]);
    }
    var_13 = ((/* implicit */unsigned int) ((signed char) -1357692891));
    /* LoopSeq 1 */
    for (int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        arr_6 [i_1] &= ((/* implicit */short) min((arr_3 [i_1]), (((/* implicit */unsigned char) (signed char)36))));
        var_14 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) max(((signed char)-41), ((signed char)14)))) ? (((int) var_3)) : ((+(((/* implicit */int) (signed char)69))))))));
        var_15 ^= arr_0 [i_1];
    }
}
