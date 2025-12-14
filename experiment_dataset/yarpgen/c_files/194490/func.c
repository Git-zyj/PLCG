/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194490
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
    var_17 = ((/* implicit */short) ((_Bool) 100663296U));
    var_18 = ((/* implicit */unsigned short) 574202376U);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((var_16), ((+(var_3))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) 1048544);
        var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */short) var_2)), (var_11)))) << (((((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))) - (6210487910937837627ULL))))))));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) ((((/* implicit */int) var_14)) >> (((var_12) - (6210487910937837632ULL)))))), (max((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (var_9))))), (((/* implicit */unsigned int) min((arr_2 [i_0 - 1] [i_0 + 1]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))))))));
    }
}
