/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238451
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
    /* vectorizable */
    for (short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) var_2);
        var_14 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(-7316261136445686709LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2] [i_0]))) : (var_7)));
        arr_3 [3] = ((/* implicit */int) (-(17ULL)));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((!(arr_1 [i_0 - 1] [i_0]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_6) : (var_3))))));
    }
    var_15 = ((/* implicit */int) min((7884558130330102883LL), (((/* implicit */long long int) (_Bool)1))));
}
