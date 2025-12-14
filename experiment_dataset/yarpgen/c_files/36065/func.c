/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36065
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
    var_10 = max((var_9), (max(((~(11591865392499117286ULL))), (((((/* implicit */_Bool) -612989324)) ? (14941066887826318128ULL) : (((/* implicit */unsigned long long int) -9223372036854775786LL)))))));
    var_11 = 0ULL;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = min((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_3 [i_0] [6ULL])) <= (arr_2 [i_1] [i_1])))), (arr_2 [i_1] [i_0]))), ((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_1)) : (4925448679988882428ULL))))));
                arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 612989324)) && (((/* implicit */_Bool) 9223372036854775807LL))));
                var_12 = ((/* implicit */int) arr_3 [i_0] [i_1]);
            }
        } 
    } 
}
