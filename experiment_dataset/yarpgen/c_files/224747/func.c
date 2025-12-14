/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224747
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
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0 - 2] [i_0 + 1])) + (((/* implicit */int) var_0))));
            var_14 = 3942800237U;
            var_15 = ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 3])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))) : ((+(var_5))));
        }
        var_16 = ((/* implicit */signed char) var_4);
        var_17 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) max((6015255277493339046ULL), (((/* implicit */unsigned long long int) arr_3 [0ULL] [(_Bool)1]))))) ? (((/* implicit */int) ((unsigned short) arr_0 [i_0]))) : (((/* implicit */int) var_8))))));
    }
    var_18 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((int) var_6))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (max((6015255277493339046ULL), (((/* implicit */unsigned long long int) var_11))))));
}
