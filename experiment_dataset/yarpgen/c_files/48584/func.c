/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48584
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
    var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)220)), (var_16)))) || (((((/* implicit */_Bool) 10165861858078871572ULL)) && (((/* implicit */_Bool) var_6))))))), ((-(max((((/* implicit */unsigned int) var_8)), (var_4)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 13; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((((var_1) + (9223372036854775807LL))) << (((((((/* implicit */int) (signed char)20)) << (((((/* implicit */int) var_6)) + (26262))))) - (83886080)))));
        var_18 = ((/* implicit */signed char) var_10);
    }
    /* vectorizable */
    for (unsigned int i_1 = 4; i_1 < 13; i_1 += 1) /* same iter space */
    {
        arr_5 [1] = ((/* implicit */unsigned char) var_9);
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (+(((/* implicit */int) var_9)))))));
        arr_6 [(signed char)5] = ((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) var_15))))) / (((((/* implicit */_Bool) arr_1 [i_1])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
    }
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (((var_14) + (var_13)))));
}
