/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42046
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(signed char)9] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)33141))))) ? (((/* implicit */int) (unsigned short)33141)) : (((/* implicit */int) arr_0 [i_0]))));
        arr_4 [i_0] |= ((/* implicit */unsigned char) ((signed char) max((arr_1 [i_0]), (arr_2 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1]))))) : ((~(((/* implicit */int) (unsigned short)33158))))));
        var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) (unsigned short)33158))));
    }
    var_11 = ((/* implicit */short) 4545456450356236067ULL);
}
