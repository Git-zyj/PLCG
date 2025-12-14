/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206316
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
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) ((signed char) ((640274087) | (((/* implicit */int) (_Bool)1)))));
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-21672)) <= (((/* implicit */int) max(((unsigned short)177), (((/* implicit */unsigned short) (short)721)))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65346)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)730))));
        arr_4 [i_0] [i_0] = arr_1 [i_0 + 1];
    }
    var_15 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) ? (((/* implicit */int) var_11)) : ((-(((/* implicit */int) var_12))))));
    var_16 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1083391109)) ? (((/* implicit */int) (short)14814)) : (-1083391109)))) ? (((((/* implicit */_Bool) (unsigned char)243)) ? (-1083391082) : (((/* implicit */int) (short)-22024)))) : (((/* implicit */int) var_9))));
}
