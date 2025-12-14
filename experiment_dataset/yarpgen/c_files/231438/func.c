/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231438
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) var_13))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */int) (short)8771)) == (((/* implicit */int) ((_Bool) ((var_11) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)206)))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_13))))) ? (max((0U), (var_1))) : ((+(0U)))));
        var_17 = ((/* implicit */unsigned int) min(((-(2692202571940495113ULL))), (((/* implicit */unsigned long long int) (+(3929156516U))))));
        var_18 = ((/* implicit */int) var_5);
    }
    var_19 = ((/* implicit */short) var_13);
}
