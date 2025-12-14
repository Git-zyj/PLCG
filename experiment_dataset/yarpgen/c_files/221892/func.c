/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221892
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_20 = 3750885316U;
                arr_5 [i_0] [i_0] |= ((/* implicit */unsigned int) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 544081980U))))), (((3181743939U) - (var_7))))) >= (((((/* implicit */_Bool) ((unsigned int) var_18))) ? (arr_2 [i_1]) : (((var_3) - (544081980U)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    arr_8 [i_0] [i_1] [i_2] = arr_3 [i_0] [i_0] [i_2];
                    var_21 = 150724693U;
                    var_22 = (~(var_4));
                    var_23 &= ((((/* implicit */_Bool) var_9)) ? (arr_2 [i_0]) : (arr_7 [i_1] [i_1]));
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    var_24 = ((((/* implicit */_Bool) ((unsigned int) var_4))) ? (((2147483647U) ^ (arr_11 [i_3] [i_0]))) : (((((/* implicit */_Bool) arr_10 [i_1])) ? (arr_1 [i_3]) : (607205047U))));
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 2; i_4 < 13; i_4 += 2) 
                    {
                        var_25 = var_15;
                        arr_14 [i_3] [i_1] [i_3] [i_4] [i_1] [i_3] &= ((((/* implicit */_Bool) arr_12 [i_4 + 2] [i_4] [i_4 + 3] [i_3])) ? (544081980U) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_9 [i_4] [i_4] [i_4]) <= (1426706349U))))));
                    }
                    var_26 = ((/* implicit */unsigned int) ((3750885316U) != ((~(arr_4 [i_3])))));
                    arr_15 [i_0] [i_0] [i_0] [i_0] |= ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1])) ? (arr_10 [i_0]) : (var_2));
                }
                var_27 = max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_1]) : (arr_0 [i_0] [i_0]))), (min((((4294967286U) - (22U))), (((var_0) & (var_12))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    var_28 = ((/* implicit */unsigned int) ((var_3) >= (arr_1 [i_0])));
                    arr_20 [i_5] = (+(arr_6 [i_5] [i_5] [i_5]));
                    var_29 = ((((/* implicit */_Bool) 31U)) ? (arr_2 [i_0]) : (arr_13 [i_0]));
                    arr_21 [i_0] [i_0] [i_5] [i_5] = 1038404113U;
                    var_30 = ((/* implicit */unsigned int) ((arr_12 [i_0] [i_1] [i_1] [i_0]) < (arr_13 [i_1])));
                }
            }
        } 
    } 
    var_31 = min((max((max((var_11), (4294967295U))), (3181743939U))), (var_2));
    var_32 = ((unsigned int) ((((/* implicit */_Bool) ((unsigned int) 26U))) ? (((((/* implicit */_Bool) 1038404113U)) ? (var_12) : (var_15))) : (1038404113U)));
}
