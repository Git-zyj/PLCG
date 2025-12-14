/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213764
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) max((max((arr_3 [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_0])))), (((/* implicit */unsigned long long int) arr_0 [i_0])))))));
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_3 [i_0]) == (arr_3 [i_1])))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) 4423203659146388067LL)) : (arr_3 [i_0])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29513)))))) ? (((/* implicit */long long int) -279911535)) : (max((((/* implicit */long long int) 3747219049U)), (5189013337890619786LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                var_19 = (~(((/* implicit */int) max((max((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */short) var_2)))), (((/* implicit */short) (!(((/* implicit */_Bool) -5189013337890619787LL)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -296684617)) ? (-5189013337890619787LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3])))))) ? (((/* implicit */int) (unsigned short)53555)) : (((/* implicit */int) max((var_17), (((/* implicit */unsigned short) var_8)))))))), (((((/* implicit */_Bool) var_1)) ? (min((((/* implicit */unsigned long long int) arr_6 [i_4] [i_3])), (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))))))))));
                    var_21 = ((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_4]))))) + (arr_0 [i_4])));
                    var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_2]))));
                    arr_13 [i_2] [i_2] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2] [i_2] [i_2])) >> (((((/* implicit */int) (unsigned short)11981)) - (11977)))))) ? (((/* implicit */int) (_Bool)1)) : (((int) arr_5 [i_2])))));
                }
            } 
        } 
    } 
}
