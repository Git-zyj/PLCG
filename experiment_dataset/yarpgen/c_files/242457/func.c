/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242457
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8046))) != (-1265738872250953247LL)));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) -2147483629)) || ((_Bool)1)));
        arr_2 [i_0] |= (+(min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)8048)))), (((/* implicit */int) (unsigned short)8052)))));
    }
}
