/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37097
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
    var_11 = ((/* implicit */unsigned int) min((var_11), (var_6)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_0]) <= (arr_0 [i_0]))))) > ((+(arr_0 [i_0])))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    var_13 ^= ((unsigned int) 1266546083U);
                    arr_10 [2U] [10U] [i_2 - 1] [i_2 - 1] = ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((2912618110U) > (1662824163U))))) | (var_5)));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        var_14 = ((unsigned int) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (var_1) : (arr_11 [i_0] [i_2 - 2] [i_0]))));
                        arr_13 [i_0] [i_1] [i_2 - 2] [i_3] = max((max((max((1570600577U), (1620197681U))), ((~(arr_1 [i_1]))))), (max((((arr_12 [i_0] [i_3]) & (var_3))), (((unsigned int) var_9)))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_4 = 1; i_4 < 18; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (+(3850695253U)))))))));
                    arr_20 [i_5] [i_4] [i_4] = (((+(max((var_2), (var_6))))) - (((((/* implicit */_Bool) ((var_0) | (4294967295U)))) ? ((-(var_4))) : (min((var_8), (var_6))))));
                    arr_21 [i_5] [i_4] = min((min((((((/* implicit */_Bool) var_6)) ? (var_5) : (var_3))), (((var_10) % (607557396U))))), ((~(min((var_2), (3810021664U))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned int) max((var_16), (min(((+(min((0U), (0U))))), ((((-(var_6))) ^ (((((/* implicit */_Bool) var_3)) ? (0U) : (var_6)))))))));
                        arr_26 [i_5] [i_5] [i_5] = arr_7 [i_0] [i_0] [i_5] [i_6];
                    }
                    arr_27 [i_0] [i_4 + 1] [i_5] [i_4 + 1] = ((((((/* implicit */_Bool) arr_14 [i_4 + 1] [i_4 - 1] [i_4])) ? (arr_14 [i_4 + 1] [i_4 - 1] [i_5]) : (arr_14 [i_4 - 1] [i_4 + 1] [i_5]))) & (((unsigned int) arr_23 [i_4 + 1] [i_4] [i_4 - 1] [i_4] [i_5])));
                }
            } 
        } 
    }
    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 4) /* same iter space */
    {
        arr_30 [i_7] = ((1073741823U) & ((-((-(2632143133U))))));
        /* LoopSeq 1 */
        for (unsigned int i_8 = 1; i_8 < 17; i_8 += 4) 
        {
            var_17 &= (~(1382349185U));
            arr_34 [i_7] [i_7] [i_8] = ((unsigned int) (+(arr_1 [i_8 + 1])));
            arr_35 [7U] [i_7] [i_8 + 2] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (305837408U) : (arr_7 [i_7] [4U] [i_8 + 1] [i_8])))) ? ((-(arr_2 [i_7]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) * (((((/* implicit */_Bool) max((419554112U), (978198185U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((1662824163U) > (385527513U))))) : (((((/* implicit */_Bool) var_2)) ? (var_1) : (arr_5 [i_7] [i_8 + 1] [i_8 + 2]))))));
        }
    }
}
