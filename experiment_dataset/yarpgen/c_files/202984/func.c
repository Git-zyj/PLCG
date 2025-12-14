/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202984
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
    var_13 = var_8;
    var_14 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            arr_4 [i_0] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [1U] [i_0])) ? (arr_3 [i_0] [15U] [i_1]) : (arr_3 [i_0] [0U] [i_0])))) ? (arr_1 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((4294967295U) < (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))), ((+((~(arr_1 [i_0] [i_0]))))));
            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_0 [i_0] [i_1])) / (max((2691334200U), (642448264U)))))) ? (max((((((/* implicit */_Bool) arr_1 [i_0] [(short)4])) ? (1603633096U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) -1476605501)))) : (min((((/* implicit */unsigned int) ((short) arr_1 [i_1] [15]))), (((((/* implicit */_Bool) 530817411)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_3 [i_0] [2] [i_1]))))))))));
            arr_5 [(short)5] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((arr_3 [i_0] [i_1] [i_0]) >> (((arr_1 [i_0] [(short)15]) - (3299380473U))))) % (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_1 [i_0] [i_0])))))) ? ((+(var_3))) : (((/* implicit */int) (!(((/* implicit */_Bool) 331862590U)))))));
            arr_6 [i_0] [10U] [i_1] = ((/* implicit */short) (((!(((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) -530817416)))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1]))))), (max((2691334194U), (((/* implicit */unsigned int) -530817421)))))))));
        }
        for (unsigned int i_2 = 2; i_2 < 14; i_2 += 2) 
        {
            var_16 = min((((int) arr_3 [i_2 - 2] [(short)7] [i_2])), (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2 + 1]))))));
            var_17 = max((((/* implicit */unsigned int) min((arr_7 [6U] [i_2 + 1]), (var_5)))), (max((((/* implicit */unsigned int) var_11)), (3U))));
        }
        var_18 = ((/* implicit */unsigned int) max((min((((/* implicit */int) ((short) var_4))), (1874935349))), (-1366077508)));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 23; i_3 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((3167199236U) | (1603633087U))))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (arr_10 [i_3])));
    }
}
