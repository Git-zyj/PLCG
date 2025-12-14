/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38678
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
    var_16 = var_0;
    var_17 += ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (5ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) && (((/* implicit */_Bool) min((((/* implicit */int) var_8)), (var_3))))))), ((~(((/* implicit */int) var_14))))));
    var_18 = ((/* implicit */_Bool) var_4);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_19 -= max((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (arr_0 [i_0])))), (max((((/* implicit */unsigned short) arr_0 [i_0])), (arr_2 [i_0] [i_0]))));
        var_20 = ((/* implicit */_Bool) 9221120237041090560LL);
        var_21 *= ((/* implicit */int) ((unsigned long long int) max((((/* implicit */int) arr_0 [i_0])), ((~(((/* implicit */int) arr_1 [i_0])))))));
    }
    var_22 = ((/* implicit */int) var_4);
}
