/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241713
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            arr_6 [i_0] [13U] = 1748075002U;
            var_15 = (-(((unsigned int) ((((/* implicit */_Bool) arr_3 [i_0 - 4] [i_0 - 4])) ? (arr_0 [i_0]) : (3457754528U)))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        {
                            arr_14 [i_0] [i_2 - 1] = ((((/* implicit */_Bool) ((unsigned int) ((unsigned int) 83312972U)))) ? ((-(min((var_14), (3716284377U))))) : (max((83312972U), (((unsigned int) arr_8 [i_0])))));
                            arr_15 [i_0] [i_3] [i_2 + 1] [i_0] [i_0] = ((((((unsigned int) arr_5 [i_0])) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) var_7))))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((max((arr_12 [i_0 - 4] [8U] [i_2 + 3] [i_1 + 2] [1U]), (4294967295U))) == (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_2] [i_4])) ? (arr_9 [i_3] [8U] [i_0]) : (arr_11 [i_1] [i_1]))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            var_16 = ((unsigned int) ((((/* implicit */_Bool) arr_7 [i_0 - 2])) && (((/* implicit */_Bool) arr_7 [i_0 + 2]))));
            arr_20 [i_0] [8U] &= (~((-(max((var_13), (arr_16 [i_0 - 3] [2U]))))));
            var_17 += ((((/* implicit */_Bool) arr_8 [i_0 - 4])) ? (((unsigned int) arr_13 [i_0 + 2] [12U] [i_0 - 1] [12U] [i_0 + 2])) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) 248U)))))) == (var_4))))));
            var_18 = ((/* implicit */unsigned int) max((var_18), (max((((min((arr_12 [i_0] [i_0] [i_0] [i_5] [i_5]), (4294967295U))) % (arr_3 [i_0] [i_5]))), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [0U]))))))))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_6 = 3; i_6 < 13; i_6 += 3) 
        {
            for (unsigned int i_7 = 1; i_7 < 12; i_7 += 1) 
            {
                {
                    var_19 ^= ((unsigned int) (+(var_14)));
                    arr_27 [i_0] [i_0] [i_6] [i_7] = min((max((((((/* implicit */_Bool) var_6)) ? (var_0) : (arr_2 [i_0]))), (((((/* implicit */_Bool) 66977792U)) ? (arr_3 [i_7 - 1] [i_6]) : (2075467510U))))), (arr_24 [i_6 - 3]));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_8 = 1; i_8 < 7; i_8 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), ((~(1574867744U)))));
        arr_30 [i_8] = ((/* implicit */unsigned int) (((-(552546158U))) >= (arr_3 [i_8 - 1] [i_8 - 1])));
    }
    var_21 = (+(((unsigned int) min((var_5), (2214883058U)))));
    var_22 = ((var_3) * (((((/* implicit */_Bool) var_4)) ? (((unsigned int) 732662172U)) : (((2775657540U) * (340954245U))))));
    var_23 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_10) : (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) == (var_2))))) : (((unsigned int) var_10)))), (((unsigned int) (+(var_10)))));
}
