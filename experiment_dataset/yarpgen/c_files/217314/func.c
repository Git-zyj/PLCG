/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217314
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
    var_20 &= ((/* implicit */int) var_5);
    var_21 = ((/* implicit */unsigned char) ((_Bool) var_19));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_22 = ((/* implicit */unsigned int) ((var_4) >= (((((/* implicit */_Bool) 4294967295U)) ? (3446917947U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))));
        arr_2 [(unsigned char)0] = ((((((/* implicit */_Bool) 12582912U)) ? (17547208921530195054ULL) : (((/* implicit */unsigned long long int) 80402199U)))) >> ((((~(var_12))) - (1502183821))));
    }
}
