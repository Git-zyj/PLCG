/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230807
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
    for (short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((unsigned int) ((((/* implicit */_Bool) arr_0 [10ULL])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (arr_1 [i_0 + 1])));
        arr_3 [9LL] [i_0 - 1] = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    var_15 |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) ((short) var_4))), (var_2)))) ? (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-16292)))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) -1)), (733828815U)))) ? (min((((/* implicit */unsigned long long int) var_14)), (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_5))))))));
    var_16 = ((/* implicit */int) (+(var_11)));
}
