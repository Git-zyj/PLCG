/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197476
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
    var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (min((1105245350U), (1006632960U))) : (min((4294967291U), (var_14)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (var_16) : (1131946854U)))) ? (1576798258U) : (max((3017659806U), (var_10))))) : (633281765U));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 22; i_2 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 2; i_4 < 22; i_4 += 1) 
                        {
                            var_19 = 3861063963U;
                            arr_15 [i_1] [i_3] [13U] [i_3] [13U] = arr_14 [i_4 + 1] [i_3] [i_2] [i_1] [17U];
                            var_20 = var_10;
                            var_21 = (~((~(3189721945U))));
                        }
                        arr_16 [i_0] [i_0] [i_3] [2U] = var_13;
                    }
                    for (unsigned int i_5 = 2; i_5 < 21; i_5 += 2) 
                    {
                        arr_19 [i_5] [12U] [i_1] [12U] |= ((((/* implicit */_Bool) max((arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2]), (arr_6 [i_2 - 1] [i_2] [i_2 + 1] [i_2 + 1])))) ? (((unsigned int) var_11)) : (min((2147483648U), (1452040166U))));
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((((/* implicit */_Bool) min((1835324778U), (var_12)))) ? (min((((unsigned int) arr_12 [i_5] [i_5] [i_2] [i_5] [i_0])), (max((436280893U), (3962355288U))))) : (min((arr_3 [i_5 + 2] [i_2 - 2]), (arr_3 [i_5 + 2] [i_2 + 1])))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        arr_22 [i_6] [i_2] [i_0] [i_1] [i_0] |= 1006632934U;
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((unsigned int) ((unsigned int) 3644434635U)))));
                    }
                    var_24 = ((/* implicit */unsigned int) max((var_24), (max((((unsigned int) var_4)), (((unsigned int) arr_10 [i_1]))))));
                }
                arr_23 [i_0] [19U] [i_1] = min((((22U) >> (((arr_6 [i_0] [16U] [16U] [3U]) - (710359910U))))), (((unsigned int) ((unsigned int) 2088078025U))));
                arr_24 [i_1] = max((((2540390226U) - (158450614U))), (max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]), (arr_8 [i_0] [i_1] [i_1] [10U] [2U] [i_0]))));
                var_25 = ((/* implicit */unsigned int) max((var_25), (((((/* implicit */_Bool) ((unsigned int) ((unsigned int) arr_0 [i_0])))) ? (arr_18 [i_0] [i_1]) : (arr_2 [i_0])))));
            }
        } 
    } 
    var_26 = ((unsigned int) var_7);
    var_27 = max((601282015U), (2364248633U));
}
