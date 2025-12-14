/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235399
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
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((var_7), (((/* implicit */int) var_1))))), (arr_0 [i_0] [i_0])))) ? (min((2883238916U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_15)) : (var_17)))))) : ((~(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))))))));
        var_20 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+((+(var_11))))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_21 = ((/* implicit */short) (+((((-(((/* implicit */int) (short)7748)))) + (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_1 [i_1] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
            var_22 = ((/* implicit */short) arr_0 [i_1] [i_0]);
            var_23 += ((/* implicit */long long int) min((1411728353U), ((((-(arr_0 [i_0] [i_0]))) * (min((arr_0 [i_1] [3U]), (((/* implicit */unsigned int) var_1))))))));
            arr_4 [20LL] [8U] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(1411728353U)))) ? (min(((~(9223372036854775807LL))), (max((((/* implicit */long long int) var_7)), (arr_3 [10U] [(short)9] [i_1]))))) : (((/* implicit */long long int) (~(((((arr_2 [i_0] [i_1]) + (2147483647))) >> (((2292819675U) - (2292819655U))))))))));
        }
        arr_5 [i_0] = ((/* implicit */unsigned short) ((1411728398U) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (4704867406773021100LL)))) ? (((/* implicit */unsigned int) arr_2 [i_0] [i_0])) : (((((/* implicit */_Bool) 1592462861U)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) arr_2 [i_0] [i_0]))))))));
    }
    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) max((-268435456), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_18)) ^ (var_4))))))))))));
    var_25 = 841812137U;
}
