/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195589
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
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) -1)) ^ (3811530376158471429LL)));
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) 14906037859777342488ULL))));
        var_17 |= ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((_Bool) 3803621922473868332ULL))) - (((/* implicit */int) arr_0 [14LL])))) != (((/* implicit */int) (signed char)0))));
    }
    var_18 = ((/* implicit */long long int) var_6);
    var_19 = ((/* implicit */short) ((int) 14441431645763326937ULL));
}
