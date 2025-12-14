/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44558
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_1] = ((((int) var_11)) < (((/* implicit */int) arr_1 [i_0] [i_1])));
                    var_13 -= ((/* implicit */unsigned int) (~(((/* implicit */int) var_6))));
                }
                var_14 = min((((unsigned long long int) var_3)), (((/* implicit */unsigned long long int) ((0U) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
                arr_10 [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((4294967281U) >= (var_4))))) : (min((2114056372U), (((/* implicit */unsigned int) (_Bool)0)))))), (((/* implicit */unsigned int) min((((/* implicit */int) min((var_7), (((/* implicit */signed char) var_12))))), ((((_Bool)0) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_6)))))))));
                arr_11 [i_1] [i_1] = ((/* implicit */signed char) -2057317731);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-45)) / (-154576127)))) ? (((/* implicit */int) max((((/* implicit */signed char) var_1)), (var_2)))) : (((/* implicit */int) max((var_2), (var_8))))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))))) : (0U))))));
}
