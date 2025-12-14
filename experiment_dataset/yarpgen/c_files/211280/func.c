/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211280
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
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [3] [(signed char)0] = arr_4 [i_0] [(signed char)2] [i_1];
                arr_6 [i_0] [i_0] [(signed char)0] = ((/* implicit */int) var_13);
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        for (signed char i_3 = 4; i_3 < 10; i_3 += 2) 
        {
            for (int i_4 = 2; i_4 < 11; i_4 += 2) 
            {
                {
                    arr_13 [(signed char)5] [i_3 - 1] [i_4] = ((/* implicit */int) ((signed char) min((((/* implicit */int) min(((signed char)-45), ((signed char)109)))), (min((var_8), (((/* implicit */int) (signed char)124)))))));
                    arr_14 [i_3] [i_3] = arr_11 [i_2] [i_2] [i_2];
                    var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_10 [i_2] [i_2] [(signed char)7])), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) arr_12 [i_4 - 1] [i_4 + 1] [i_4] [i_4 - 2]))))))) ? (((/* implicit */int) max((min(((signed char)-63), ((signed char)-57))), (((/* implicit */signed char) ((-894571940) != (1065096707))))))) : (max((407934997), (-1065096707)))));
                    arr_15 [i_2] [(signed char)1] [i_4 + 1] = max((((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_4] [i_3 + 1])) + (((/* implicit */int) arr_10 [i_4] [i_4 + 1] [i_4]))))) ? (((((/* implicit */int) arr_12 [i_2] [i_3 + 1] [i_4] [i_4 - 2])) - (1023))) : (min((-300208736), (((/* implicit */int) (signed char)-45)))))), (max((min((-1783786732), (((/* implicit */int) (signed char)118)))), (((/* implicit */int) ((signed char) (signed char)-119))))));
                    arr_16 [5] [i_3 - 1] [i_4 + 1] = ((/* implicit */signed char) min((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_14)) : (var_7))) + (min((var_9), (((/* implicit */int) (signed char)-21)))))), (-2043674228)));
                }
            } 
        } 
    } 
}
