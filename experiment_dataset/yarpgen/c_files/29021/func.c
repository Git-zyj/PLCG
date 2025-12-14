/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29021
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((min((arr_3 [i_1 - 2] [i_1]), (min((arr_4 [i_0]), (((/* implicit */unsigned int) (signed char)51)))))) & (((((var_5) <= (((/* implicit */long long int) ((/* implicit */int) var_3))))) ? (arr_3 [i_1 - 1] [i_1]) : ((+(arr_4 [i_0]))))));
                var_20 *= ((((((/* implicit */_Bool) 1378135116U)) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50210))) : (arr_3 [i_0] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-52))))) | (((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_1 + 2] [i_1 + 3] [i_1 + 2]))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])), (min((var_11), (((/* implicit */unsigned long long int) arr_5 [i_1 + 2] [i_1 + 3] [i_0]))))));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)24469)) + (((/* implicit */int) (unsigned short)15326))))) && (((arr_3 [i_0] [i_1]) != (var_15)))))) - (((/* implicit */int) (_Bool)0))));
            }
        } 
    } 
    var_22 *= ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 144115188075855871ULL)) && (((/* implicit */_Bool) 9223372036854775807LL))))) & (((/* implicit */int) min(((short)11117), (((/* implicit */short) var_12))))))));
    var_23 = var_7;
}
