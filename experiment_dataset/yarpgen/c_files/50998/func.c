/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50998
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
    var_11 = ((((/* implicit */_Bool) 750005874)) ? (((/* implicit */unsigned long long int) ((((-1616240650) / (750005858))) & ((+(-1616240650)))))) : (((unsigned long long int) ((unsigned long long int) 750005847))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_12 = ((/* implicit */short) (~(((1616240649) + (((/* implicit */int) var_5))))));
        var_13 -= (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) var_9);
        arr_5 [i_0] = ((/* implicit */_Bool) arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) ((((long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (12741511999703836874ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) >= (1ULL)))))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) -1616240656);
        var_15 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_7 [i_1] [i_1])), (-2147483642)))) ? (((/* implicit */int) ((unsigned short) (-(1296008427))))) : (((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (var_10) : (((/* implicit */int) arr_7 [i_1] [i_1]))))));
        var_16 = ((/* implicit */_Bool) min((var_16), ((!(((/* implicit */_Bool) 135788141))))));
    }
    var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) max(((-(1616240655))), (((/* implicit */int) (!(var_5))))))) ? (18158796904829435005ULL) : (((unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
}
