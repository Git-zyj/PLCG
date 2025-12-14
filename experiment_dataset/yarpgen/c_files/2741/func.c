/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2741
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
    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (2506945977576630844ULL))))));
    var_14 ^= ((/* implicit */short) var_4);
    var_15 = min((((/* implicit */long long int) 1157819301U)), (var_10));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [(unsigned short)5] [i_0] = ((/* implicit */_Bool) var_10);
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (~((-((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_0] [i_0])))))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) && ((_Bool)0)));
        arr_8 [i_1] = ((/* implicit */unsigned int) min((var_9), (((/* implicit */unsigned short) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_2])) ? ((-(((/* implicit */int) (short)-641)))) : (((/* implicit */int) arr_5 [i_2]))));
        var_17 = ((/* implicit */long long int) arr_10 [i_2] [(unsigned short)7]);
    }
}
