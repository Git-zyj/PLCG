/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232336
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) var_12);
        arr_3 [i_0] [12ULL] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)9343)) - (687372360)));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_16 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (4323455642275676160LL)))));
        arr_7 [(unsigned char)5] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (arr_4 [i_1] [i_1])));
    }
    var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) min(((short)6733), ((short)6733))))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)6736)) || (((/* implicit */_Bool) (short)6730))));
    var_19 &= ((/* implicit */long long int) min((4028329604U), (((/* implicit */unsigned int) (unsigned char)68))));
}
