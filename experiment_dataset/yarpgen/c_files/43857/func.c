/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43857
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
    var_11 = ((/* implicit */short) var_3);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
        var_13 = ((/* implicit */short) ((8689020055102484546ULL) == (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_6)))), (((/* implicit */int) var_1)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    for (unsigned short i_1 = 3; i_1 < 19; i_1 += 1) 
    {
        var_14 = ((/* implicit */int) var_0);
        arr_7 [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) * (((/* implicit */int) arr_6 [(unsigned short)6] [i_1 - 3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)-64)))) : (min((var_10), (((/* implicit */unsigned long long int) var_2))))));
    }
}
