/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34210
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
    var_15 = ((/* implicit */unsigned long long int) min((var_3), (((/* implicit */int) var_8))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_16 = (~(((int) arr_0 [i_0] [i_0 - 1])));
        arr_2 [i_0] = ((unsigned int) arr_1 [i_0 + 3] [i_0 + 1]);
        arr_3 [i_0 + 1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1]))));
        arr_4 [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) ((long long int) 2745023282U));
    }
    for (int i_1 = 1; i_1 < 21; i_1 += 3) 
    {
        arr_8 [i_1 - 1] [i_1 + 1] = ((long long int) ((((/* implicit */_Bool) arr_7 [(unsigned short)20] [i_1 - 1])) ? (1549944013U) : (((/* implicit */unsigned int) -70810817))));
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((short) max(((unsigned short)56247), ((unsigned short)9289)))))));
        arr_9 [i_1] = (((+(arr_5 [i_1 - 1]))) ^ (((arr_5 [i_1 - 1]) / (arr_5 [i_1 - 1]))));
    }
}
