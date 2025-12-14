/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39719
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
    var_11 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((4294967285U) <= (4294967281U))))));
        var_13 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)224))));
        var_14 |= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_0]))));
    }
    var_15 &= ((/* implicit */signed char) ((long long int) (~(((var_2) / (((/* implicit */int) var_6)))))));
}
