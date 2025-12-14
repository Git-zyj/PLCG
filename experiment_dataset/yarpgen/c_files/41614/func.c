/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41614
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (short)1047))));
        arr_3 [i_0] = ((/* implicit */long long int) (short)1047);
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 15; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */short) ((signed char) (~(((/* implicit */int) arr_5 [(short)14] [(short)14])))));
        var_13 &= ((((/* implicit */int) (short)1047)) + (((/* implicit */int) (short)-1048)));
    }
    var_14 ^= ((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (var_6));
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1)))))));
    var_16 = ((/* implicit */short) (+(min(((+(-4718032355761269875LL))), (((/* implicit */long long int) (-(((/* implicit */int) (short)1047)))))))));
}
