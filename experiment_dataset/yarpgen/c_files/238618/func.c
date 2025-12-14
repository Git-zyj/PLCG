/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238618
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        var_20 = ((/* implicit */int) arr_2 [i_0 - 1]);
        var_21 = ((/* implicit */unsigned int) (~(arr_1 [4ULL])));
        arr_3 [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) arr_2 [i_0 + 1])), (max((4294967286U), (((/* implicit */unsigned int) 1452875416))))));
        arr_4 [i_0 + 4] = ((/* implicit */int) (!(((/* implicit */_Bool) min((502155320), (((/* implicit */int) (short)-24782)))))));
    }
    var_22 += ((/* implicit */unsigned short) max((-2535848725866399808LL), (((/* implicit */long long int) -502155321))));
}
