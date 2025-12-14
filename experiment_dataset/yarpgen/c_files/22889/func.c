/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22889
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
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        arr_4 [i_0 - 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) -4838379398445487813LL)) : (56850052145412113ULL)));
        var_14 ^= arr_0 [i_0] [i_0];
        arr_5 [i_0 + 3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 13961881484089579449ULL))));
        arr_6 [i_0] [i_0] &= 18389894021564139515ULL;
    }
    var_15 = ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 18389894021564139504ULL)))))) : (3956396943U));
}
