/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223908
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
    var_18 = ((/* implicit */signed char) 6481635146651409914LL);
    var_19 = ((/* implicit */_Bool) ((2008685022767533250LL) + (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_8))) - (((/* implicit */int) var_10)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((arr_1 [i_0]) <= (2008685022767533250LL)));
    }
}
