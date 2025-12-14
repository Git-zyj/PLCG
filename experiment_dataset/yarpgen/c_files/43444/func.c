/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43444
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
    var_11 += min((var_1), (((((/* implicit */int) ((signed char) var_7))) >= (((/* implicit */int) var_10)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] [10ULL] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned int) ((arr_1 [i_0]) == (((unsigned int) arr_1 [i_0])))));
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) ((unsigned short) ((arr_4 [i_1]) <= (arr_1 [13LL]))));
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) arr_4 [i_1]);
    }
}
