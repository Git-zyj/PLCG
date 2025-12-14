/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/433
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
    for (int i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) max((var_19), ((~(var_6)))));
        var_20 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (((~(arr_1 [i_1] [i_1]))) & (arr_1 [i_1] [i_1]))))));
        var_22 = ((/* implicit */unsigned long long int) ((((_Bool) -1135051402)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (-1560722897289495090LL)));
    }
    var_23 = ((/* implicit */_Bool) var_6);
}
