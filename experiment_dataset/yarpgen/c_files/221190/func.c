/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221190
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
    var_14 = ((/* implicit */unsigned char) (+(var_6)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_15 = ((/* implicit */long long int) ((unsigned int) var_10));
        arr_3 [i_0] = var_2;
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
    }
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) 7))));
}
