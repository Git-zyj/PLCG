/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221626
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
    var_13 = ((/* implicit */unsigned long long int) var_8);
    var_14 = ((/* implicit */long long int) var_7);
    var_15 = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) min((arr_1 [(signed char)10] [i_0]), (((/* implicit */unsigned short) ((signed char) arr_1 [i_0] [i_0])))));
        arr_3 [i_0] = ((/* implicit */int) arr_0 [i_0]);
    }
    var_16 = ((/* implicit */_Bool) ((unsigned char) (signed char)-4));
}
