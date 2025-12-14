/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24463
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_19 = ((((/* implicit */_Bool) min((arr_0 [i_0 - 1]), (arr_0 [i_0 + 2])))) ? (((((/* implicit */_Bool) 4294967295U)) ? (1007484883U) : (arr_0 [i_0 + 2]))) : (arr_0 [i_0 + 1]));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) arr_1 [i_0 - 1])))));
                    var_20 = (-(var_0));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 2; i_4 < 8; i_4 += 2) 
                        {
                            var_21 *= ((unsigned int) ((unsigned int) 4294967295U));
                            var_22 = max((min(((+(arr_5 [i_0] [i_2]))), (((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0] [i_0 + 2] [i_0] [i_0 - 1])) ? (arr_1 [i_0]) : (var_11))))), (((((/* implicit */_Bool) 2609563700U)) ? (((((/* implicit */_Bool) var_16)) ? (var_15) : (arr_2 [i_0] [i_2]))) : (arr_10 [i_4 - 2] [i_0 + 2] [i_1] [i_0] [i_0 + 1]))));
                            var_23 = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1] [i_4]))))), (((((unsigned int) 4294967295U)) << ((((-(1754271487U))) - (2540695788U))))));
                        }
                        arr_13 [i_3] [i_1] [i_0] [i_1] [i_1] [i_0] = 0U;
                    }
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned int) ((arr_12 [i_0] [10U] [4U] [i_0] [i_0]) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_12) : (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((3025560697U) == (30488591U))))) : (((((/* implicit */_Bool) 600042693U)) ? (arr_1 [i_0]) : (2805938124U)))))));
        var_25 = ((/* implicit */unsigned int) min((var_25), (904440195U)));
    }
    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        arr_17 [i_5] = 4294967295U;
        var_26 = ((/* implicit */unsigned int) max((var_26), (arr_14 [i_5] [i_5])));
    }
    for (unsigned int i_6 = 2; i_6 < 18; i_6 += 3) /* same iter space */
    {
        var_27 = (-(4294967290U));
        var_28 = 4294967295U;
    }
    for (unsigned int i_7 = 2; i_7 < 18; i_7 += 3) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((var_13) << (((arr_21 [i_7] [4U]) - (2498086382U))))) - ((+(var_15))))))));
        var_30 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_7 + 2])) ? (115675939U) : (arr_18 [i_7 + 4])))) ? (((((/* implicit */_Bool) arr_18 [i_7 - 1])) ? (((unsigned int) var_6)) : (495233701U))) : ((-(2851495927U))));
    }
    var_31 = var_3;
}
