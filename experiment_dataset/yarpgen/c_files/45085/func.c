/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45085
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
    var_12 &= ((/* implicit */_Bool) var_11);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) 8ULL))))) <= (((/* implicit */int) var_11))));
        var_13 |= ((/* implicit */_Bool) ((((/* implicit */int) ((max((((/* implicit */unsigned long long int) (unsigned char)230)), (var_9))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_1))))))) * (((/* implicit */int) var_10))));
        var_14 = ((/* implicit */unsigned char) ((((unsigned long long int) max((var_5), (((/* implicit */unsigned long long int) var_0))))) << (((/* implicit */int) (!((_Bool)1))))));
        var_15 = ((/* implicit */unsigned int) min((var_2), (var_1)));
    }
    /* vectorizable */
    for (unsigned short i_1 = 3; i_1 < 21; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) arr_4 [20ULL]))))) % (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_10)))))));
        arr_6 [i_1] = ((/* implicit */long long int) ((arr_4 [i_1 + 1]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_1 + 1]))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) + (((/* implicit */int) var_11))));
    }
}
