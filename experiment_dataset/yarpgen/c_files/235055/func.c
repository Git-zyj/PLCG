/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235055
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
    var_20 = ((/* implicit */int) var_14);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */signed char) ((((((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_0 [i_0])))) ? (((unsigned int) arr_7 [i_2] [5ULL])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)127))))))) * (min((((/* implicit */unsigned int) ((var_15) / (((/* implicit */int) var_10))))), (var_13)))));
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((unsigned long long int) max((((((/* implicit */unsigned long long int) var_13)) - (arr_4 [i_0]))), (((/* implicit */unsigned long long int) var_13))))))));
                }
            } 
        } 
    } 
    var_23 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_16)), ((-((+(var_19)))))));
    /* LoopSeq 1 */
    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        arr_11 [i_3] = ((/* implicit */unsigned long long int) (signed char)127);
        arr_12 [i_3] = ((/* implicit */unsigned int) ((((((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) arr_6 [20])))) ? (((/* implicit */int) min((arr_7 [(signed char)6] [(signed char)6]), (((/* implicit */signed char) var_9))))) : (((/* implicit */int) (signed char)-102)))) | (((((/* implicit */int) arr_9 [i_3])) + (((((/* implicit */_Bool) arr_3 [i_3] [(_Bool)1])) ? (((/* implicit */int) (signed char)-72)) : (((/* implicit */int) var_11))))))));
    }
}
