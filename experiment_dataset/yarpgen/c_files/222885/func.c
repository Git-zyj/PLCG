/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222885
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    arr_10 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) max((arr_1 [(signed char)4]), ((((((~(var_6))) + (2147483647))) >> (((min((var_10), (((/* implicit */int) (signed char)127)))) + (2127514484)))))));
                    var_20 -= ((/* implicit */signed char) min((var_11), (min((((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) (signed char)-1)))), (((/* implicit */int) min(((signed char)127), (arr_4 [i_0] [i_0]))))))));
                }
                arr_11 [i_1] [4] [(signed char)13] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [10])) : (((/* implicit */int) arr_9 [(signed char)6] [i_1] [i_1])))), (-180930141)));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((var_19) - (min((2147483635), (((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */int) (signed char)-102)) : (((/* implicit */int) (signed char)127))))))));
}
