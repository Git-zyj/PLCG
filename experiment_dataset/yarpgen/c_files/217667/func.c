/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217667
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
    var_19 ^= ((/* implicit */signed char) (~(var_15)));
    var_20 = ((/* implicit */unsigned char) 16311793882060218728ULL);
    var_21 = ((/* implicit */long long int) var_18);
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_16))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_23 = ((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) (short)25765)), (var_15)))));
        var_24 -= (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))));
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */int) (_Bool)1);
        var_25 = ((/* implicit */short) var_5);
    }
}
