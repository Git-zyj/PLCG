/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235198
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_20 = max((((((arr_1 [i_0] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) var_19))))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [6U])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_0]))))))), (0U));
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) 771328276U)) ? (771328285U) : (4288519616U))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_5 = 3; i_5 < 20; i_5 += 4) 
                    {
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */int) max((arr_8 [i_5 - 1] [i_2] [i_2]), (arr_8 [i_5 - 1] [i_2] [12U])))) == (((((/* implicit */int) var_10)) - (((/* implicit */int) arr_8 [i_5 - 3] [i_2] [i_2])))))))));
                        var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((((/* implicit */int) (short)22678)) - (((/* implicit */int) (short)12262)))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)(-32767 - 1)))))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)4516)) : (((/* implicit */int) var_7)))) | (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_5]))))) : (((((/* implicit */_Bool) 4288519590U)) ? (1837829655U) : (3523639020U))));
                    }
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 2; i_7 < 21; i_7 += 2) 
                        {
                            {
                                var_24 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_7] [i_7]))));
                                var_25 ^= ((/* implicit */short) 4023176056U);
                                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 + 2] [2U] [2U])) ? (max((((/* implicit */unsigned int) arr_4 [i_2])), (arr_3 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3138360952U))))))))) || (((/* implicit */_Bool) ((max((6447677U), (((/* implicit */unsigned int) var_13)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_19)) >> (((((/* implicit */int) var_0)) - (13788)))))) : (max((4144652114U), (786171677U)))))) ? (((unsigned int) var_11)) : (((((((/* implicit */unsigned int) ((/* implicit */int) (short)32750))) == (6447680U))) ? (6447680U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))));
    var_28 = var_6;
}
