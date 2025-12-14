/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22031
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
    var_17 = ((/* implicit */_Bool) var_12);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        arr_3 [(unsigned char)4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10489486926424325693ULL))))) ? (arr_0 [i_0]) : (((/* implicit */int) ((short) arr_0 [i_0])))));
    }
    for (unsigned int i_1 = 1; i_1 < 16; i_1 += 1) 
    {
        arr_6 [i_1] = ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (arr_0 [i_1 + 1])))) ? (min((arr_0 [i_1 + 1]), (((/* implicit */int) (signed char)-94)))) : (((((/* implicit */_Bool) 7957257147285225920ULL)) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 - 1]))));
        var_18 = ((/* implicit */_Bool) 2147483640);
    }
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        arr_9 [i_2] = ((((/* implicit */_Bool) (signed char)58)) ? ((~(0ULL))) : (min((((/* implicit */unsigned long long int) 7321638631370678634LL)), (((((/* implicit */_Bool) 10489486926424325696ULL)) ? (10489486926424325705ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
        arr_10 [i_2] [i_2] |= arr_0 [i_2];
        arr_11 [(signed char)0] [i_2] = ((/* implicit */long long int) arr_0 [i_2]);
    }
}
