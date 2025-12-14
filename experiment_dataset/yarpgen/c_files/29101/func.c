/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29101
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
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_12)), (var_8)))) ? (((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) (signed char)-39)))) : (max((2147483647), (((/* implicit */int) var_16))))))), (var_10)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) arr_2 [i_0] [i_0])) : (((((/* implicit */long long int) ((/* implicit */int) var_1))) / (15LL)))));
        var_21 = ((/* implicit */signed char) 2147483647);
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) arr_0 [i_0]))));
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (+(arr_2 [i_0] [i_1 + 2]))))));
            var_23 -= ((/* implicit */unsigned int) ((_Bool) (signed char)-39));
        }
        arr_8 [i_0] [i_0] = ((/* implicit */_Bool) arr_4 [i_0] [i_0]);
    }
}
