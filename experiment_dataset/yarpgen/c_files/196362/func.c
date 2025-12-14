/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196362
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
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_11))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((max((((/* implicit */unsigned long long int) (unsigned short)43369)), (arr_2 [i_0 + 1]))), (arr_2 [i_0 + 1]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_17)), (var_10))) / (arr_2 [i_0 - 1])))) || (((/* implicit */_Bool) (short)26621))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_1]);
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)180)) ? (14945365597170984469ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)100)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)119)) ? (4294967291U) : (1149502636U))))));
    }
}
