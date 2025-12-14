/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27575
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
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [(signed char)12] |= ((/* implicit */signed char) ((unsigned long long int) (+(var_13))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */short) min((max((((/* implicit */long long int) ((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) var_8))))), (max((var_11), (((/* implicit */long long int) arr_0 [i_0])))))), (((/* implicit */long long int) ((((((/* implicit */int) var_9)) - (0))) <= (((/* implicit */int) arr_3 [i_1])))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_0)) - (103)))));
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) var_0)))))) : ((-(var_12))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((25ULL), (((/* implicit */unsigned long long int) -9))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) -7663563775540137308LL))))) : (((/* implicit */int) var_8)))))));
}
