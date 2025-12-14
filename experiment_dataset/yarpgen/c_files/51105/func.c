/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51105
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
    var_18 *= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)65)) << (((unsigned long long int) var_2))));
    var_19 = ((/* implicit */_Bool) var_9);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_20 ^= ((/* implicit */unsigned char) -2002278360);
        arr_3 [i_0] = (-(arr_2 [i_0] [i_0]));
    }
    var_21 = ((/* implicit */long long int) max((var_21), ((+(min((-2342016466887649698LL), (var_8)))))));
}
