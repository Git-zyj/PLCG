/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27026
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_14 += ((/* implicit */unsigned int) ((short) 2764353162U));
        var_15 += ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) 1634144983U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [2U]))) : (arr_1 [i_0]))) : (2147483648U));
    }
    for (unsigned int i_1 = 1; i_1 < 9; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
        {
            var_16 = ((/* implicit */short) var_12);
            /* LoopSeq 2 */
            for (short i_3 = 4; i_3 < 10; i_3 += 2) 
            {
                arr_14 [i_1] [i_1] [i_2] [i_3 - 2] = ((((/* implicit */_Bool) arr_8 [10U] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(short)6])) ? (arr_7 [i_1] [i_2]) : (2660822312U)))))))) : (arr_4 [i_3 - 1]));
                arr_15 [i_1] [i_2] [i_2] = arr_8 [i_1] [i_1] [2U];
                arr_16 [i_1] [i_1] = arr_6 [i_1 + 2] [i_1 + 2];
            }
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) arr_12 [i_4]))));
                arr_20 [i_2] [i_2] [1U] [i_4] = arr_11 [i_1 + 1];
            }
            var_18 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (-(62914560U)))) ? (((((/* implicit */_Bool) 2660822313U)) ? (((/* implicit */int) arr_12 [i_2])) : (((/* implicit */int) arr_9 [(short)3])))) : (((/* implicit */int) ((short) var_1)))))));
            arr_21 [i_1] = ((/* implicit */short) var_13);
        }
        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
        {
            var_19 |= ((unsigned int) ((unsigned int) max((((/* implicit */unsigned int) arr_9 [i_1])), (25U))));
            arr_24 [i_1] [i_1] [i_5] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) ((unsigned int) 1634144984U))))));
            var_20 = ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ ((-(62914560U))));
        }
        var_21 += ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (min((arr_7 [i_1] [i_1 - 1]), (1634144984U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1]))) : ((-(((4232052736U) + (var_11))))));
    }
    var_22 = (-(var_5));
    var_23 = ((/* implicit */short) ((var_13) > (var_6)));
}
