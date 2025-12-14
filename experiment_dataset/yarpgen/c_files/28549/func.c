/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28549
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
    var_16 += ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) % ((+(var_11))))), ((((!(((/* implicit */_Bool) -4712585312698882139LL)))) ? (min((((/* implicit */unsigned long long int) var_6)), (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-80)) > (((/* implicit */int) (unsigned char)211))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) var_7);
        arr_3 [i_0] = var_14;
    }
    var_18 = ((/* implicit */_Bool) var_8);
}
