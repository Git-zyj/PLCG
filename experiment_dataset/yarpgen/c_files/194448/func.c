/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194448
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
    var_12 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) arr_1 [i_0 + 1]);
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (var_2)));
    }
    for (unsigned short i_1 = 1; i_1 < 21; i_1 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) var_2);
        var_15 = ((/* implicit */unsigned char) ((long long int) (unsigned short)49357));
    }
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */unsigned long long int) min((var_2), (var_2)))) ^ (((unsigned long long int) 1878094589U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 716823350)) ? (((/* implicit */unsigned int) var_2)) : (2279351458U))) >= (((/* implicit */unsigned int) var_0))))))));
}
