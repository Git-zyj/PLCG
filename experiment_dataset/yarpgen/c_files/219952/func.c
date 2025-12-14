/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219952
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
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) var_4);
        arr_2 [i_0] [i_0 + 1] = ((/* implicit */_Bool) (signed char)71);
        arr_3 [i_0 - 2] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1]))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) (+(((/* implicit */int) var_18)))));
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_20 &= ((/* implicit */short) (unsigned char)135);
        arr_8 [i_1] = (unsigned char)14;
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_9))));
    }
    var_22 = ((/* implicit */unsigned char) var_17);
}
