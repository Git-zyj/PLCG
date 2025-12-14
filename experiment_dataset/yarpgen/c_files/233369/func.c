/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233369
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
    /* vectorizable */
    for (short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) (+(arr_1 [i_0 + 1])));
        var_16 = ((/* implicit */unsigned long long int) arr_1 [i_0 - 1]);
    }
    var_17 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? ((+(-5613559906669791831LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_0)))))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))));
    var_18 -= ((/* implicit */unsigned short) 3901573212091493168LL);
    var_19 = max(((+(((((/* implicit */_Bool) var_13)) ? (4906040676101928951LL) : (-5613559906669791840LL))))), (((/* implicit */long long int) var_11)));
}
