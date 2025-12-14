/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207844
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
    var_18 *= ((/* implicit */unsigned char) var_14);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        arr_2 [(signed char)19] [i_0] = ((/* implicit */_Bool) (unsigned char)112);
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0 + 1]);
    }
    var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_4))) ? ((+(31U))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ (var_8)))));
    var_20 &= var_10;
}
