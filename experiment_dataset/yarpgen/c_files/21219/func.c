/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21219
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
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))), (((((/* implicit */long long int) ((/* implicit */int) (short)17249))) + (((var_5) % (((/* implicit */long long int) 32505856U))))))));
        var_12 = ((/* implicit */long long int) min((var_12), (var_6)));
        arr_4 [i_0] = ((/* implicit */unsigned int) (+((~(9223372036854775807LL)))));
        var_13 *= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_0 [10])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) - (arr_0 [(short)16])))) : ((+(var_11))))), (((/* implicit */unsigned long long int) (-(((var_4) / (-4545135639813415588LL))))))));
    }
    /* LoopSeq 1 */
    for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        arr_8 [0LL] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) var_5)) : ((-(arr_7 [i_1] [i_1])))));
        arr_9 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_2 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_1 [i_1] [i_1]), (((/* implicit */unsigned long long int) 0))))))))) : (((((/* implicit */_Bool) 2)) ? (arr_7 [i_1] [i_1]) : (arr_7 [i_1] [i_1])))));
        var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -4545135639813415587LL))));
        var_15 = ((/* implicit */unsigned char) ((min((min((((/* implicit */unsigned int) var_2)), (2712359765U))), (((/* implicit */unsigned int) 978390875)))) | (((((((/* implicit */long long int) 596539053U)) < (4545135639813415565LL))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)-25337)) : (0)))) : (80195879U)))));
    }
    var_16 = ((/* implicit */unsigned short) var_2);
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((var_5) / (((/* implicit */long long int) ((/* implicit */int) min((var_3), (((/* implicit */short) var_2))))))))) / ((-(((7192653224901107514ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
}
