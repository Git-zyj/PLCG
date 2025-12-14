/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49861
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
    var_20 = ((/* implicit */short) var_3);
    var_21 = ((/* implicit */unsigned char) (-(var_0)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (unsigned short)15708);
        var_22 ^= ((/* implicit */long long int) (short)-978);
        var_23 = ((signed char) (signed char)-69);
        arr_5 [i_0] = (unsigned short)62925;
    }
    for (int i_1 = 4; i_1 < 24; i_1 += 1) 
    {
        arr_10 [i_1] [i_1] &= ((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) ((_Bool) (signed char)29))))));
        var_24 = ((/* implicit */_Bool) (signed char)-32);
    }
}
