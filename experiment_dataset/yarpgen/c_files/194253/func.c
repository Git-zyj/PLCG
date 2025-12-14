/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194253
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
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_3))));
    var_19 = ((/* implicit */long long int) max((max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (1773926956))), (max((var_16), (((/* implicit */int) (unsigned char)51)))))), ((~(((/* implicit */int) (unsigned char)51))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_4 [i_0] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (5504889285132530865ULL)))) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) 15360U)) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_0]) ? (8948276025572348538LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -35184372088832LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : ((-(((long long int) arr_0 [i_0] [i_0]))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            var_20 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_9 [i_1 - 2] [i_1 + 2] [i_1 + 2])) || (((/* implicit */_Bool) arr_8 [i_0] [i_1 - 2])))));
            arr_10 [i_0] [i_0] [i_0] = max((max((arr_2 [i_1 + 1]), (arr_2 [i_1 - 2]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1338653456U))))));
            var_21 = ((/* implicit */unsigned char) (((_Bool)0) ? (5504889285132530881ULL) : (((/* implicit */unsigned long long int) 622772320))));
        }
        for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            arr_13 [i_0] [i_0] = ((min((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) 1056964608LL)) : (13510798882111488ULL))), (((/* implicit */unsigned long long int) ((arr_0 [i_2] [i_0]) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 524288U))))))) >> ((((~(arr_9 [i_0] [i_0] [i_0]))) - (9273983589746964598ULL))));
            var_22 ^= ((/* implicit */signed char) ((short) (((~(6937496553617798736ULL))) & (((/* implicit */unsigned long long int) arr_3 [i_0])))));
        }
        var_23 ^= ((/* implicit */unsigned int) ((unsigned long long int) (~(((/* implicit */int) (_Bool)1)))));
    }
}
