/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226658
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
    /* vectorizable */
    for (short i_0 = 2; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) (short)-7922);
        var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 5343890787970341053LL)) ? (((/* implicit */int) (short)-12316)) : (((/* implicit */int) arr_1 [i_0])))) * (((/* implicit */int) ((13149301306713670379ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22996))))))));
        var_17 += ((/* implicit */unsigned long long int) ((var_6) >= (((/* implicit */int) arr_1 [(signed char)14]))));
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) ((unsigned int) arr_3 [i_1 + 1]));
        var_19 = ((/* implicit */int) (short)27885);
    }
    var_20 = ((/* implicit */int) var_5);
}
