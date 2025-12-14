/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236708
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
    var_12 &= ((/* implicit */long long int) ((var_7) >= (((/* implicit */long long int) var_5))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            {
                var_13 |= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 3])) ? (((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (arr_2 [(signed char)0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [(_Bool)1] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) min((var_6), (var_6))))))), (((/* implicit */long long int) max((arr_4 [i_1 - 1] [i_1 + 3]), (arr_4 [i_1 + 4] [i_1 + 3]))))));
                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_4 [i_1 + 4] [i_1 + 3])) ? (arr_4 [i_1 + 2] [i_1 + 3]) : (((/* implicit */int) ((arr_0 [(signed char)4]) < (((/* implicit */unsigned long long int) arr_4 [14] [i_0])))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((var_2) ^ (((/* implicit */long long int) var_9))));
    var_16 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (var_3)))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    var_17 *= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-391883176), (((/* implicit */int) (signed char)-52))))) && (((/* implicit */_Bool) max((var_5), (var_3))))))), (((var_10) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_9))))))));
}
