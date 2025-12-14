/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30902
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) min((var_4), (((/* implicit */short) var_6))))) != (((/* implicit */int) max((arr_3 [i_1 - 1] [i_1 + 2]), (arr_3 [i_1 - 1] [i_1 + 2]))))));
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (arr_1 [i_1]))) == (((/* implicit */unsigned long long int) min((-1LL), (((/* implicit */long long int) arr_3 [i_0] [i_0])))))))), (min(((~(((/* implicit */int) arr_3 [i_1] [i_0])))), (((/* implicit */int) arr_3 [i_0] [i_1 + 2]))))));
            }
        } 
    } 
    var_10 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_2)) % (var_9)))) ? (max((-1405970302545822069LL), (((/* implicit */long long int) (signed char)(-127 - 1))))) : (var_9))))));
    var_11 = ((/* implicit */signed char) var_4);
    var_12 = ((/* implicit */long long int) var_8);
}
