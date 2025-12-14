/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247806
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
    var_18 ^= (_Bool)1;
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_19 -= ((/* implicit */long long int) (short)12225);
        arr_2 [i_0] = ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) * (-2033989336929857456LL));
        arr_3 [i_0] = ((((/* implicit */int) var_9)) * (((int) (_Bool)0)));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((914492) > (((/* implicit */int) (_Bool)1)))) || (((/* implicit */_Bool) arr_0 [i_0]))));
        var_20 |= ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (var_5))) << (((/* implicit */int) var_4))));
    }
}
