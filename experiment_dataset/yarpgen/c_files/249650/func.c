/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249650
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
    var_17 = min((18446744073709551593ULL), (18446744073709551593ULL));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0 - 1] [i_0 - 1] = max((((((/* implicit */_Bool) 8589803520ULL)) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1]))), (max((arr_1 [i_0 - 1]), (5184503340797373324ULL))));
        var_18 = arr_1 [i_0];
        var_19 = max((((((/* implicit */_Bool) 18446744073709551613ULL)) ? (arr_0 [i_0 - 1]) : (18446744065119748096ULL))), (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_1 [i_0 - 1]) : (16294809706488512335ULL))));
        var_20 *= 0ULL;
        arr_3 [i_0] = max((arr_1 [i_0]), (18446744073709551593ULL));
    }
    var_21 = var_1;
    var_22 = 18446744073709551615ULL;
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 4) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            {
                var_23 = arr_9 [8ULL];
                var_24 = 12760185491163161232ULL;
                arr_10 [i_2] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((16134761429962511230ULL) == (max((arr_1 [i_1 + 2]), (12ULL))))))));
            }
        } 
    } 
}
