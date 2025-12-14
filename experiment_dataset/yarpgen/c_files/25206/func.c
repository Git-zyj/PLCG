/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25206
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] = 719917588;
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
    }
    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned int) var_6)), (2425371864U))), (var_13))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_1 = 3; i_1 < 11; i_1 += 2) 
    {
        var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_1])) ? (15) : (((/* implicit */int) (unsigned short)6)))) < (((/* implicit */int) ((_Bool) var_3)))));
        arr_7 [i_1 - 2] = ((unsigned short) -1944799000);
    }
}
