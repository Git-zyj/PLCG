/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226618
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
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) 2938268111U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_3))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_17 = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1356699207U)) || (((/* implicit */_Bool) 3919970573U))))), (min((var_14), (arr_1 [i_0] [i_0])))))));
        var_18 = ((/* implicit */_Bool) ((unsigned int) (signed char)-23));
    }
    /* LoopNest 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (unsigned int i_2 = 2; i_2 < 23; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_11 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (3919970577U) : (arr_5 [i_1] [i_1])))) ? (((/* implicit */int) min((((/* implicit */signed char) var_12)), (arr_3 [i_1] [i_1])))) : (((/* implicit */int) arr_3 [i_2 - 1] [i_2 + 1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((arr_10 [i_1] [i_1] [i_1]) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) / ((-(((/* implicit */int) arr_4 [i_1]))))))) : (((arr_7 [i_2 - 2] [i_2 + 1]) | (arr_9 [i_2 + 1] [i_2 - 2]))));
                    var_19 = ((/* implicit */unsigned int) max((var_19), (min((67092480U), (((/* implicit */unsigned int) var_4))))));
                    arr_12 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1534940834U)) ? (2760026480U) : (arr_7 [i_2 - 2] [i_2 - 2]))) <= ((-(var_6)))));
                }
            } 
        } 
    } 
}
