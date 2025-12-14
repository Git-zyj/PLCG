/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32973
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
    var_19 = var_17;
    var_20 |= ((/* implicit */unsigned short) var_16);
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (max((max((((/* implicit */unsigned long long int) 4130564163U)), (2752230513059198805ULL))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 24U)) : (4972123548370079017ULL))))) : (max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) var_7)) ? (var_4) : (13474620525339472598ULL)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) arr_0 [i_0]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            arr_5 [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) var_18);
            var_23 = ((((/* implicit */_Bool) (unsigned short)19148)) ? (7259416317360654554ULL) : (2604867037498944094ULL));
        }
        /* vectorizable */
        for (unsigned short i_2 = 1; i_2 < 8; i_2 += 2) 
        {
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2 + 2])) ? (arr_7 [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1])))));
            arr_8 [i_0] [i_2] = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)46389));
        }
        for (unsigned int i_3 = 1; i_3 < 9; i_3 += 4) 
        {
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4972123548370079005ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27218))) : (((((/* implicit */_Bool) 2358290873U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2650))) : (2713795496U)))));
            arr_11 [i_3] = 0U;
            var_26 ^= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_10 [2U] [2U])) ? (((((/* implicit */_Bool) 2756998870U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_3] [i_3]))) : (arr_4 [(unsigned short)8] [(unsigned short)9]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [3U]))))), (arr_10 [6ULL] [6ULL])));
        }
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_0 - 1] [i_0 + 1] [i_0 - 1])), (3246245129U)))) ? (((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1] [i_0 - 1])))) : (((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1] [i_0 + 1]))))));
        arr_13 [i_0] = ((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_0 + 1]);
    }
}
