/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230647
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
    var_10 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (signed char)52)), (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17))) : (var_5))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_8)), (-6383320939377473631LL))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((unsigned int) max((((/* implicit */unsigned short) arr_6 [i_0] [i_0 + 2] [i_1 - 4])), (arr_3 [i_0 + 3]))));
                    arr_9 [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) arr_2 [(signed char)18] [(signed char)18]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1 - 4]))) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((var_2) ? (((/* implicit */int) arr_1 [i_0 + 2] [i_1])) : (((/* implicit */int) arr_4 [i_0]))))), (arr_0 [i_0 - 1] [i_2]))))));
                }
            } 
        } 
    } 
}
