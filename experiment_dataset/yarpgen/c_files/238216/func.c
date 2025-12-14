/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238216
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((max((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) (signed char)-9)) & (((/* implicit */int) (_Bool)1)))))) & (((/* implicit */int) (unsigned short)0)));
        var_10 = ((/* implicit */long long int) (unsigned short)61096);
        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) max((9223372036854775807LL), (max((-6874343027954575396LL), (((/* implicit */long long int) (unsigned short)19))))))) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)48110))) ^ (-6874343027954575400LL)))))) : (((/* implicit */unsigned long long int) 745780904U))));
        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) (short)-7600)), (4202674118558537383ULL))))));
    }
    var_13 = ((/* implicit */long long int) (unsigned short)27159);
}
