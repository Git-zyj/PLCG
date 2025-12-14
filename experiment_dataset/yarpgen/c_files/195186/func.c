/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195186
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
    var_15 = min((var_14), (((unsigned int) ((2501382527U) * (2501382526U)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 24; i_1 += 2) 
        {
            {
                arr_5 [i_0] = 3236087393U;
                var_16 = ((/* implicit */unsigned int) ((var_11) <= (min((((((/* implicit */_Bool) 1058879891U)) ? (arr_2 [i_1] [i_0]) : (8U))), (((((/* implicit */_Bool) 1058879903U)) ? (488958530U) : (2501382545U)))))));
                var_17 = ((unsigned int) 891360689U);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned int i_3 = 2; i_3 < 23; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
                            {
                                var_18 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4084816587U))));
                                var_19 |= (-(max((arr_2 [i_1 - 4] [i_3 + 2]), (arr_2 [i_1 - 1] [i_3 - 2]))));
                            }
                            /* vectorizable */
                            for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) 
                            {
                                var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((2446424189U) / (var_4)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [12U] [i_0] [i_0] [5U])) ? (arr_10 [i_5] [i_3] [i_3] [i_2] [i_1] [12U]) : (var_13))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1793584768U)) ? (4194303U) : (1951672969U)))) ? (((((/* implicit */_Bool) 4084816589U)) ? (3946791301U) : (2501382527U))) : (1142372962U));
                            }
                            for (unsigned int i_6 = 1; i_6 < 24; i_6 += 2) 
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = max(((-(1694349623U))), (((/* implicit */unsigned int) ((min((var_10), (arr_4 [i_3] [i_2]))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((arr_15 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0] [i_6]) < (arr_6 [i_6] [i_6] [i_2] [i_3])))))))));
                                var_21 = arr_20 [i_0] [i_0] [i_6 - 1] [i_3] [i_0];
                                var_22 = ((unsigned int) 528482304U);
                            }
                            for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
                            {
                                arr_24 [i_0] [i_0] [i_0] [i_3] [i_7] = min((668676979U), (56754334U));
                                var_23 = 348175994U;
                            }
                            var_24 = ((/* implicit */unsigned int) max((var_24), (max((arr_20 [i_0] [i_0] [i_0] [i_0] [i_3]), (1058879905U)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = var_8;
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1058879905U)) || (((/* implicit */_Bool) 1793584770U))));
}
