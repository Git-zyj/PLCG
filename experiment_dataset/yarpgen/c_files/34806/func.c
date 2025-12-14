/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34806
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)64099)) % (((/* implicit */int) (unsigned short)56969))))) ? (var_0) : (((long long int) var_0))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_12 = ((/* implicit */int) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned int) min(((short)32763), (((/* implicit */short) ((((/* implicit */int) (unsigned short)56972)) <= (((/* implicit */int) arr_1 [i_0])))))));
    }
}
