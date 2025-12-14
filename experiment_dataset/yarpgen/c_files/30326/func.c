/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30326
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
    var_12 = ((/* implicit */_Bool) (signed char)-4);
    var_13 &= ((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (((((-4569181995020339679LL) + (9223372036854775807LL))) >> (((max((var_8), (((/* implicit */unsigned long long int) var_9)))) - (8009880579049404632ULL)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) | (var_1)));
        var_14 |= ((/* implicit */signed char) ((unsigned char) arr_0 [i_0] [(signed char)0]));
    }
    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
}
