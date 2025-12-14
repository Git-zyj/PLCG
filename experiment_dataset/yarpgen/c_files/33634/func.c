/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33634
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
    var_14 = max((((/* implicit */unsigned int) 2147483646)), (30U));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_15 += ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) -1)), (arr_0 [i_0])))))))) == (arr_1 [i_0])));
        var_16 = ((/* implicit */unsigned short) ((max((arr_1 [i_0]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))) == (min((max((((/* implicit */unsigned int) 2147483646)), (arr_0 [i_0]))), (((/* implicit */unsigned int) ((unsigned short) 1611999711U)))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)19549)), (2147483646))))))) ? (((2823106695U) >> (((((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1])) - (1010))))) : (var_7)));
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) max((((2147483646) / (arr_4 [i_0] [i_2] [i_2]))), (((1764777797) / (((/* implicit */int) (unsigned short)50053))))))) + (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)65533)))) * (arr_0 [i_1 + 1]))))))));
                var_18 = min((((((arr_0 [i_0]) / (arr_2 [i_1 + 1] [i_1]))) * (3546829605U))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)15504), (var_11))))) == (536525269U)))));
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (!(((((/* implicit */unsigned int) ((695520690) >> (((2147483645) - (2147483617)))))) == (arr_6 [i_1 + 1] [i_1] [i_1]))))))));
                var_20 = ((((arr_6 [i_1 + 1] [i_1 - 1] [i_1 + 1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_0]))))) >> (((((((((/* implicit */_Bool) 2244878101U)) ? (((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_1])) : (536525271U))) >> (((((((/* implicit */int) arr_3 [i_0])) >> (((/* implicit */int) (unsigned short)6)))) - (267))))) - (3735224291U))));
            }
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    {
                        var_21 = (unsigned short)9874;
                        arr_13 [i_1] [i_1] [i_3] [i_4] = var_4;
                        var_22 = arr_3 [i_4];
                    }
                } 
            } 
        }
        var_23 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_8)), ((~(arr_6 [i_0] [i_0] [i_0])))));
    }
    for (unsigned short i_5 = 4; i_5 < 11; i_5 += 1) 
    {
        var_24 = (i_5 % 2 == 0) ? (((/* implicit */unsigned short) ((min((min((arr_8 [i_5] [i_5] [i_5]), (3758442035U))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)5168)) >> (((arr_8 [7U] [i_5] [7U]) - (2688392360U)))))))) == (((/* implicit */unsigned int) max((((/* implicit */int) arr_12 [i_5 - 4] [i_5 - 4] [i_5] [i_5 + 1])), (((((/* implicit */_Bool) 1073709056U)) ? (((/* implicit */int) (unsigned short)39799)) : (((/* implicit */int) var_2)))))))))) : (((/* implicit */unsigned short) ((min((min((arr_8 [i_5] [i_5] [i_5]), (3758442035U))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)5168)) >> (((((arr_8 [7U] [i_5] [7U]) - (2688392360U))) - (3141174030U)))))))) == (((/* implicit */unsigned int) max((((/* implicit */int) arr_12 [i_5 - 4] [i_5 - 4] [i_5] [i_5 + 1])), (((((/* implicit */_Bool) 1073709056U)) ? (((/* implicit */int) (unsigned short)39799)) : (((/* implicit */int) var_2))))))))));
        var_25 -= ((/* implicit */unsigned short) min((((var_3) / (1605478544))), (((/* implicit */int) arr_16 [4U] [i_5]))));
        var_26 -= ((/* implicit */unsigned short) ((min((var_4), (((/* implicit */unsigned int) arr_5 [i_5] [i_5])))) >> (((var_8) + (1737326459)))));
    }
    for (unsigned short i_6 = 1; i_6 < 11; i_6 += 2) 
    {
        arr_19 [i_6] = ((/* implicit */unsigned int) max((arr_14 [5] [i_6 - 1]), (((/* implicit */unsigned short) ((((/* implicit */int) min(((unsigned short)13779), (arr_5 [(unsigned short)13] [i_6])))) == (((((/* implicit */int) (unsigned short)31164)) >> (((2504436609U) - (2504436600U))))))))));
        var_27 -= max((((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) >> (((arr_2 [i_6] [(unsigned short)2]) - (1761538656U))))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(3840U))))))));
        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)46971)) / (arr_9 [20] [6U]))) / (((/* implicit */int) max(((unsigned short)39807), ((unsigned short)42207))))))) ? (((/* implicit */unsigned int) ((((arr_4 [i_6 + 1] [i_6 - 1] [i_6 - 1]) + (2147483647))) >> (((arr_4 [i_6 - 1] [i_6] [i_6]) + (559743009)))))) : (1790530694U))))));
        var_29 = ((/* implicit */unsigned short) ((((unsigned int) arr_2 [i_6 + 1] [10U])) >> ((((+(((/* implicit */int) max(((unsigned short)14336), ((unsigned short)1408)))))) - (14318)))));
    }
}
