/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26369
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-127)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        var_16 |= ((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0]))));
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) -5676674536047736812LL))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            arr_7 [i_0] [i_1 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 1])) ? (arr_3 [i_1 + 2] [i_1] [0U]) : (1235186983U)));
            var_18 = ((/* implicit */long long int) ((arr_3 [i_1] [i_1 + 2] [i_1]) | (arr_3 [0LL] [i_1 + 2] [i_0])));
        }
    }
}
