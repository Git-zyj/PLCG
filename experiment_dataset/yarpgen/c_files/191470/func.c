/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191470
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
    var_12 = 795854370;
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_13 = ((/* implicit */int) var_4);
        arr_4 [i_0] = ((/* implicit */int) ((var_7) >= (((unsigned long long int) 1518669050))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((int) ((int) var_0)));
        var_14 = min((min(((+(arr_5 [i_1 + 1]))), (var_0))), ((+(-1774084978))));
    }
    var_15 += ((((var_2) + (2147483647))) >> (((((min((((/* implicit */unsigned long long int) -994481074)), (var_11))) >> (((((var_7) * (((/* implicit */unsigned long long int) var_9)))) - (69278240857251522ULL))))) - (235686579804788ULL))));
    var_16 = ((int) ((unsigned long long int) ((int) var_4)));
}
