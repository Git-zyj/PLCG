/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239634
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
    var_18 = (-(var_12));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_19 = ((/* implicit */signed char) max((var_19), (((signed char) (~(((/* implicit */int) arr_2 [i_0] [i_0])))))));
        var_20 = ((/* implicit */signed char) var_8);
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        var_21 += ((/* implicit */int) max((var_13), (((/* implicit */signed char) (!(((((/* implicit */int) arr_0 [i_1] [i_1])) >= (((/* implicit */int) (signed char)93)))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                {
                    var_22 &= ((/* implicit */signed char) min((((/* implicit */int) ((signed char) var_14))), (min((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) arr_6 [i_3] [i_2]))))), (((((/* implicit */int) var_13)) << (((((/* implicit */int) arr_2 [15] [i_3])) - (11)))))))));
                    var_23 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((var_12) <= (1863655636))), (((((/* implicit */_Bool) arr_7 [i_3] [i_1])) && (((/* implicit */_Bool) -1768719275))))))), (max((arr_8 [i_1]), (((/* implicit */unsigned long long int) var_11))))));
                }
            } 
        } 
    }
}
