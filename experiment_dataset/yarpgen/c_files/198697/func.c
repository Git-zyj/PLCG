/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198697
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
    var_16 = ((/* implicit */short) var_10);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min((((/* implicit */int) var_8)), (((arr_0 [i_0 + 1]) % (arr_0 [i_0 - 1]))))))));
        var_18 = ((/* implicit */unsigned int) (-(var_13)));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_2))))))) ? (arr_1 [i_0 - 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((var_12) == (((/* implicit */int) (_Bool)1))))))))));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((unsigned int) (((_Bool)1) && (((/* implicit */_Bool) arr_0 [i_0 + 1]))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 11; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] [i_1 + 1] |= ((/* implicit */int) (-(arr_3 [i_1 - 1])));
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1])) ? (var_3) : ((~(1916668053402821695LL)))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        arr_12 [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4053)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) var_5)))));
        var_20 ^= ((/* implicit */_Bool) ((((/* implicit */int) ((arr_8 [i_2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) << (((((((/* implicit */_Bool) var_2)) ? (arr_10 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) - (11797267296876101511ULL)))));
    }
}
