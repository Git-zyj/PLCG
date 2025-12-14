/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27708
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
    var_14 = ((/* implicit */_Bool) var_8);
    var_15 = ((/* implicit */unsigned long long int) -3638851073796755404LL);
    var_16 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (+(arr_0 [i_0] [i_0])));
        var_17 = max(((~((~(3638851073796755404LL))))), (((/* implicit */long long int) ((signed char) 1454757281))));
    }
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (signed char)2))));
}
