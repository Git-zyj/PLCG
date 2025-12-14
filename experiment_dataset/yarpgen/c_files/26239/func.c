/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26239
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) max((max((var_3), (var_3))), (min((var_3), (var_8)))));
        var_10 = ((/* implicit */signed char) max(((+(((((/* implicit */_Bool) var_2)) ? (20LL) : (var_3))))), (((/* implicit */long long int) (short)32754))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (signed char)7);
    }
    var_11 = ((/* implicit */unsigned int) (~(var_0)));
}
