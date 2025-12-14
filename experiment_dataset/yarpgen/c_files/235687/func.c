/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235687
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (~(max((var_7), (((/* implicit */long long int) var_10)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) ((short) ((long long int) var_3)));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((599330095) - (((/* implicit */int) (short)6774))))) ? (((/* implicit */long long int) (-(233898045U)))) : (-1LL)));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        arr_7 [(unsigned short)0] = ((/* implicit */unsigned int) min((var_5), ((~(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) arr_5 [i_1])) : (var_7)))))));
        var_13 ^= ((/* implicit */unsigned int) arr_2 [(unsigned short)2]);
    }
}
