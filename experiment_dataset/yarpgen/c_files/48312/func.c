/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48312
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) min(((unsigned char)133), (((/* implicit */unsigned char) (signed char)-12))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) arr_0 [i_0 + 1])))));
    }
    var_13 = ((/* implicit */long long int) ((short) var_3));
}
