/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195435
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_15 -= (_Bool)1;
        var_16 ^= ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) (_Bool)1)))));
        arr_2 [(signed char)3] = ((/* implicit */signed char) (_Bool)1);
        var_17 = ((/* implicit */_Bool) max((var_17), ((_Bool)0)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (+(((int) ((int) (unsigned char)135)))));
        var_18 = ((/* implicit */int) (unsigned char)134);
    }
    var_19 = var_6;
    var_20 += ((/* implicit */long long int) var_11);
}
