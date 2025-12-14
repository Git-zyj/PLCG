/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234423
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_16 *= max((((((/* implicit */_Bool) var_2)) ? (arr_1 [i_0]) : (arr_1 [i_0]))), (max((((/* implicit */unsigned int) ((3003032495U) >= (var_0)))), (arr_1 [i_0]))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 2; i_1 < 6; i_1 += 3) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) min((((3003032513U) + (3003032495U))), (arr_3 [i_0] [i_0])))) ? (max((3003032513U), (201326592U))) : (max((((/* implicit */unsigned int) ((arr_3 [i_0] [i_1]) <= (1291934803U)))), (max((var_7), (567849781U))))));
            arr_8 [i_0] = ((unsigned int) (-(4294967294U)));
            arr_9 [i_0] [i_0] [i_1] = arr_0 [i_0] [i_1];
        }
        for (unsigned int i_2 = 2; i_2 < 6; i_2 += 2) 
        {
            var_17 = ((unsigned int) max((3528553043U), (3003032513U)));
            arr_13 [i_0] = max((65535U), (((unsigned int) (+(937584750U)))));
        }
    }
    var_18 = ((/* implicit */unsigned int) min((var_18), (var_9)));
}
