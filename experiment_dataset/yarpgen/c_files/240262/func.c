/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240262
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
    var_15 = ((/* implicit */unsigned short) max((((unsigned int) var_0)), (((/* implicit */unsigned int) var_6))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_16 = ((unsigned int) 352707586U);
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_3 = 1; i_3 < 9; i_3 += 2) 
                {
                    var_17 &= ((/* implicit */unsigned int) max((max((var_2), (var_11))), (((unsigned short) 4171293235U))));
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (!(min(((!(((/* implicit */_Bool) var_7)))), (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) var_3)))))))))));
                    var_19 -= max((min((var_13), (((/* implicit */unsigned int) var_14)))), (((unsigned int) arr_9 [i_3 + 1] [i_3 + 2] [i_3] [i_3] [i_3])));
                    arr_10 [i_0] [i_2] [i_2] = ((unsigned int) (+(min((((/* implicit */unsigned int) var_10)), (var_7)))));
                }
                for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    arr_14 [i_2] [4U] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned short) ((unsigned int) arr_7 [11U] [i_1] [i_2])));
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 1; i_5 < 11; i_5 += 3) 
                    {
                        arr_17 [i_0] [i_2] [i_0] [i_0] [i_5 - 1] [i_5 + 1] = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))))), (((arr_5 [i_5 - 1] [i_5 - 1] [i_5 + 1]) - (arr_5 [i_5 + 1] [i_5 + 1] [i_5 - 1]))));
                        arr_18 [2U] [i_1] [i_1] [i_1] [i_1] [i_4] [8U] |= max((max((max((((/* implicit */unsigned int) var_14)), (var_5))), (max((arr_5 [i_0] [i_1] [i_2]), (arr_11 [i_0] [i_1] [i_2] [i_4]))))), (((unsigned int) var_9)));
                        var_20 += max((((/* implicit */unsigned int) ((unsigned short) max((arr_13 [i_1] [i_1]), (((/* implicit */unsigned int) arr_16 [i_0] [i_0] [i_0] [i_0])))))), (((unsigned int) max((arr_1 [i_4] [i_1]), (((/* implicit */unsigned int) var_10))))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) max((arr_5 [i_0] [i_0] [i_0]), (((unsigned int) min((var_0), (((/* implicit */unsigned int) var_12))))))))));
                    }
                    for (unsigned int i_6 = 2; i_6 < 11; i_6 += 2) 
                    {
                        var_22 = min((((/* implicit */unsigned int) arr_9 [11U] [i_4] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((unsigned int) arr_11 [i_6] [i_4] [i_1] [5U])))));
                        var_23 ^= ((/* implicit */unsigned short) max((min((max((arr_11 [3U] [i_1] [3U] [i_6]), (((/* implicit */unsigned int) arr_16 [i_1] [i_2] [i_1] [i_6])))), (((/* implicit */unsigned int) var_12)))), (((unsigned int) var_8))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        var_24 = ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_0] [i_0] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((unsigned short) var_5)), (((unsigned short) arr_16 [i_1] [i_1] [1U] [11U])))))) : (var_4));
                        var_25 = max((((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_2] [4U] [i_4] [i_7]))))), (((/* implicit */unsigned int) max((var_6), (var_2)))));
                        var_26 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) var_6)) % (((/* implicit */int) var_14)))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        var_27 |= ((/* implicit */unsigned short) var_0);
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((unsigned short) (!(((((/* implicit */_Bool) arr_25 [i_4] [i_1] [i_2] [0U] [0U])) || (((/* implicit */_Bool) arr_26 [i_0] [i_1] [i_1] [i_0] [i_8] [i_0] [i_2]))))))))));
                    }
                    arr_29 [i_2] [i_1] [i_1] = ((unsigned int) min((var_14), (var_10)));
                }
                var_29 *= max(((+(((unsigned int) var_12)))), (((unsigned int) max((3942259709U), (2799257273U)))));
                var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (max((((/* implicit */unsigned int) arr_20 [8U] [i_0] [8U] [i_0] [i_0] [10U])), (arr_5 [i_0] [i_0] [9U]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_0)))) ? (((((/* implicit */_Bool) var_7)) ? (arr_13 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_0] [6U] [i_1] [i_0] [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((max((var_12), (var_2))), (arr_20 [i_0] [i_1] [(unsigned short)10] [i_0] [i_0] [i_1]))))))))));
            }
            arr_30 [i_0] [i_0] = ((/* implicit */unsigned short) (-(max((arr_25 [i_0] [i_0] [i_0] [i_1] [i_1]), (arr_25 [i_1] [i_0] [6U] [i_1] [i_1])))));
            arr_31 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_27 [i_0] [i_1] [i_1] [8U] [i_0] [i_0] [i_0])));
        }
        for (unsigned int i_9 = 3; i_9 < 11; i_9 += 1) 
        {
            var_31 *= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_26 [i_0] [i_9] [i_9] [i_9 - 3] [i_9 - 3] [i_0] [i_0]))))), (max((((unsigned int) var_8)), (var_8)))));
            var_32 += ((unsigned int) max((((unsigned int) var_10)), (arr_13 [i_0] [i_9 - 2])));
            var_33 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
        }
        for (unsigned int i_10 = 4; i_10 < 11; i_10 += 4) 
        {
            var_34 = (+(((((/* implicit */_Bool) (+(var_1)))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))));
            var_35 = ((/* implicit */unsigned int) var_14);
            var_36 = ((/* implicit */unsigned int) min((var_36), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_7)))))) : (((unsigned int) arr_28 [i_0] [i_10 - 2] [i_10 - 2] [i_10 + 1]))))));
            arr_37 [i_0] [i_10 - 3] [i_0] |= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((unsigned short) arr_15 [i_0] [i_10 - 2] [i_10] [i_10 - 2] [i_10 - 4] [i_10 - 4]))), (((unsigned int) arr_2 [i_0]))));
            arr_38 [i_0] = ((unsigned int) var_8);
        }
    }
    for (unsigned short i_11 = 0; i_11 < 12; i_11 += 2) /* same iter space */
    {
        var_37 -= ((/* implicit */unsigned short) max((((arr_2 [i_11]) / (arr_2 [i_11]))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_11] [i_11] [i_11] [i_11] [2U]))) & (arr_36 [i_11] [i_11])))));
        arr_41 [0U] = ((((/* implicit */_Bool) arr_28 [i_11] [10U] [i_11] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_14), (arr_6 [i_11] [i_11]))))) : (arr_1 [i_11] [i_11]));
        arr_42 [i_11] = ((max((((((/* implicit */_Bool) var_2)) ? (var_7) : (var_1))), (((unsigned int) var_2)))) + (max((((/* implicit */unsigned int) arr_3 [i_11])), (var_7))));
    }
}
