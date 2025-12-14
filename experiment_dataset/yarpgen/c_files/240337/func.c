/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240337
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
    var_10 = ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 1ULL)) ? (var_7) : (((unsigned long long int) var_9)))) : (var_6));
    var_11 += min(((((!(((/* implicit */_Bool) 281474976710655LL)))) ? (((((/* implicit */unsigned long long int) var_3)) / (var_1))) : (((/* implicit */unsigned long long int) var_3)))), (var_6));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        arr_2 [0ULL] [i_0] = ((/* implicit */unsigned long long int) ((arr_0 [i_0 - 2] [i_0 - 1]) < (18446744073709551599ULL)));
        var_12 = ((/* implicit */unsigned long long int) max((var_12), ((-(arr_0 [i_0] [12ULL])))));
        arr_3 [i_0] = var_2;
        arr_4 [3ULL] = ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (arr_0 [i_0 - 2] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) == (arr_1 [i_0] [i_0]))))));
        var_13 = arr_0 [i_0] [i_0];
    }
}
