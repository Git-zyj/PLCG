/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208835
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (var_17)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_2 [i_0] [i_0])))) : ((~((~(arr_1 [i_0] [i_1])))))));
                var_20 -= ((/* implicit */short) arr_1 [(unsigned char)6] [i_1 + 3]);
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)46)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_13)))), (((((/* implicit */_Bool) 2147483647)) ? (var_5) : (((/* implicit */int) var_13))))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_16))))), (max((((/* implicit */long long int) var_0)), (var_17))))) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
}
