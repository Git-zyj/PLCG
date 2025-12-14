/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30492
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
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */int) arr_1 [i_0 + 1]);
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0] [8U]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (((/* implicit */unsigned long long int) 1141280994U)) : (((847511263507676418ULL) / (3587246428862302965ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_0 [i_0] [i_0 + 2])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 2]))) : (((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 2])) ? (var_15) : (-2145530314163397782LL)))))) : (((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (((((/* implicit */unsigned long long int) var_1)) + (arr_0 [i_0] [i_0 + 1])))))));
        var_19 *= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1] [i_0 - 1])) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_0 [i_0 - 1] [13ULL]))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0 - 1] [18])))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 20; i_1 += 2) /* same iter space */
    {
        var_20 |= ((((/* implicit */_Bool) arr_2 [i_1 + 2] [i_1 + 1])) ? (arr_2 [i_1 - 1] [i_1 + 1]) : (arr_2 [i_1 - 1] [i_1 - 1]));
        arr_5 [i_1] = arr_3 [i_1] [i_1 - 1];
    }
    var_21 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */long long int) (-(((/* implicit */int) var_7)))))))));
}
