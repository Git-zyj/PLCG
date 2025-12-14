/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235701
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
    var_19 *= ((283726776524341248ULL) == (max(((-(18163017297185210374ULL))), (((/* implicit */unsigned long long int) var_6)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) var_8);
        var_20 = (((!(((/* implicit */_Bool) -1LL)))) && (((/* implicit */_Bool) var_14)));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_18) ? (283726776524341250ULL) : (((/* implicit */unsigned long long int) var_10))))) ? (((var_15) ? (18163017297185210374ULL) : (((/* implicit */unsigned long long int) var_14)))) : (18163017297185210377ULL)));
        var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) <= (18163017297185210367ULL)));
    }
    var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) <= (var_8)));
    var_23 = ((/* implicit */long long int) var_6);
}
