/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249574
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_7 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (((!(((((/* implicit */_Bool) (short)5194)) && ((_Bool)0))))) ? (((((/* implicit */_Bool) (short)5181)) ? (((((/* implicit */_Bool) 1215644910U)) ? (((/* implicit */int) arr_0 [i_1] [i_0])) : (((/* implicit */int) (short)18883)))) : (((/* implicit */int) arr_6 [i_0])))) : (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_0]))))), (arr_4 [i_0]))))));
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3079322385U))) != (3079322385U)));
                arr_9 [i_1] [i_0] [i_0] |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)5194)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_1] [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0])) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)5196))));
}
