/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37103
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
    var_18 += ((/* implicit */unsigned int) var_10);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_19 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 1U)) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)0))))))) : (1421453615U)));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                var_20 = ((/* implicit */signed char) var_2);
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_0))));
            }
            var_22 = max((((/* implicit */unsigned int) var_0)), (max(((+(arr_6 [i_1] [i_0]))), (((/* implicit */unsigned int) var_5)))));
            var_23 += ((/* implicit */short) max((arr_4 [i_1] [i_1] [i_0]), (arr_2 [i_1])));
            arr_8 [i_1] = ((long long int) 0U);
        }
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))));
        var_25 = ((/* implicit */_Bool) var_3);
    }
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_26 = ((/* implicit */short) var_13);
        var_27 *= ((/* implicit */_Bool) var_7);
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_10 [i_3]);
    }
    var_28 = ((/* implicit */long long int) var_15);
}
