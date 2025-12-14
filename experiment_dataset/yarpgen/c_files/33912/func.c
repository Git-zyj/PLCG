/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33912
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) min((((long long int) min((1322045889), (((/* implicit */int) (signed char)18))))), (((/* implicit */long long int) ((((((/* implicit */int) var_4)) >= (((/* implicit */int) arr_6 [i_1])))) ? (((/* implicit */int) arr_6 [i_0])) : ((-(((/* implicit */int) var_7)))))))));
                var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1802443114))));
                var_13 = ((/* implicit */long long int) max((max((3), (((/* implicit */int) (signed char)-113)))), (((/* implicit */int) min((arr_1 [i_1]), (arr_1 [i_1]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) (-(((/* implicit */int) min((((/* implicit */unsigned char) max((var_7), (((/* implicit */signed char) var_4))))), (var_6))))));
}
