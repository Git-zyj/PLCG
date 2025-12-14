/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32675
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
    var_10 = ((/* implicit */short) var_6);
    var_11 = ((/* implicit */long long int) (unsigned char)255);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1752165727U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (short)0))));
    }
    var_12 = ((/* implicit */unsigned short) var_8);
}
