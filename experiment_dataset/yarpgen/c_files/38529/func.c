/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38529
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
    var_18 ^= ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned short) ((unsigned int) var_11))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) (-(((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_1 [i_0 - 1]))))));
        var_20 -= ((/* implicit */unsigned long long int) min((arr_1 [i_0 - 1]), (((/* implicit */unsigned short) ((signed char) (unsigned short)51723)))));
    }
    var_21 = ((/* implicit */unsigned short) var_4);
}
