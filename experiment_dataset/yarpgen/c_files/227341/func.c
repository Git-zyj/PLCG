/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227341
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_10 = ((/* implicit */short) arr_0 [i_0]);
        var_11 = ((/* implicit */unsigned int) (_Bool)0);
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */short) arr_0 [8ULL]);
        arr_7 [i_1] [7LL] = ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3503)) ? (((/* implicit */int) (signed char)-84)) : (((/* implicit */int) (signed char)-84))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)3498)), (8220810439830533091ULL))))))), (((short) max((arr_3 [i_1] [i_1]), (((/* implicit */signed char) arr_2 [i_1])))))));
    }
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) var_8))));
}
