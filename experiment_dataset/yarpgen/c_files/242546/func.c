/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242546
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
    var_20 |= ((/* implicit */unsigned int) var_9);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) 11671330873098204964ULL))))))));
        arr_3 [i_0] [i_0] = min((max((((/* implicit */long long int) max((arr_0 [i_0]), (((/* implicit */short) (unsigned char)149))))), (min((var_9), (((/* implicit */long long int) arr_0 [i_0])))))), (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) arr_0 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) max((min((min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0])))), (((/* implicit */unsigned long long int) arr_0 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) (short)4949)))))));
        var_21 ^= ((/* implicit */unsigned long long int) var_4);
    }
}
