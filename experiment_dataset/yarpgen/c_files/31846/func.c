/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31846
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)235))));
        var_13 |= ((/* implicit */long long int) ((var_8) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-103)) - (((/* implicit */int) var_5)))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 13; i_1 += 1) 
    {
        var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_8))) > ((~(((/* implicit */int) var_4))))));
        var_15 -= ((/* implicit */long long int) ((_Bool) arr_4 [i_1 + 2]));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */int) (unsigned char)230)))))));
        var_17 -= ((/* implicit */unsigned short) var_3);
    }
    var_18 = (unsigned char)230;
    var_19 = ((/* implicit */int) (unsigned char)235);
    var_20 &= ((/* implicit */int) (((!(((/* implicit */_Bool) var_10)))) ? (var_9) : (((/* implicit */long long int) var_10))));
}
