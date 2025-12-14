/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41343
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
    var_17 = ((/* implicit */_Bool) ((long long int) var_7));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) (((+(((/* implicit */int) arr_3 [i_0])))) | (max((939911242), (((/* implicit */int) (short)62))))));
        var_18 ^= ((/* implicit */long long int) arr_3 [i_0]);
    }
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((min((4328833236826232414LL), (((/* implicit */long long int) 939911242)))), (((/* implicit */long long int) ((939911272) + (-939911243))))))) ? (min((((/* implicit */int) var_12)), ((+(((/* implicit */int) (short)16383)))))) : (min(((-(((/* implicit */int) (unsigned char)8)))), (((/* implicit */int) var_2))))));
    var_20 = ((/* implicit */long long int) var_9);
}
