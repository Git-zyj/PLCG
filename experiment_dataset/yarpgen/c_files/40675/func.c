/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40675
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 7; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 6; i_1 += 3) 
        {
            var_19 = ((/* implicit */unsigned short) (unsigned char)105);
            var_20 = ((/* implicit */_Bool) var_6);
            arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) && ((_Bool)0))));
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_1])) ? (((/* implicit */int) (unsigned short)51452)) : (((/* implicit */int) (unsigned char)137))))) ? (arr_1 [i_1 - 3] [i_1 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0 - 2] [i_1])))));
        }
        var_22 = ((/* implicit */int) ((arr_1 [i_0 - 3] [i_0 + 2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 1])))));
        var_23 = ((/* implicit */long long int) 4172444637U);
        arr_6 [i_0] = ((/* implicit */signed char) (~(((((/* implicit */int) (signed char)110)) * (((/* implicit */int) arr_2 [i_0] [6] [6]))))));
    }
    var_24 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_17))))) ? (((/* implicit */long long int) (~(var_2)))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)51452))) + (var_18))))));
    var_25 = ((/* implicit */int) var_0);
}
