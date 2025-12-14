/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244804
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
    var_10 = ((/* implicit */long long int) var_6);
    var_11 = ((((/* implicit */_Bool) var_1)) ? (((long long int) var_1)) : ((+(var_0))));
    var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)63627)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : ((-2147483647 - 1))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_4 [i_0] = ((/* implicit */long long int) (-((+(((/* implicit */int) arr_1 [i_0]))))));
        var_13 = ((/* implicit */signed char) min((var_13), (var_7)));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
    }
    var_14 = ((/* implicit */long long int) var_8);
}
