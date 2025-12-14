/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32825
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
    var_11 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [14LL] [(signed char)12] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [(_Bool)1] [14LL] [i_1])) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1] [i_0] [i_0])) - (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((arr_3 [i_0] [i_1]) << (((var_6) - (1768819035U))))) : (((/* implicit */unsigned long long int) var_6)))) : (((((/* implicit */_Bool) 5104592825200288455LL)) ? (2953297494124105616ULL) : (((/* implicit */unsigned long long int) -5104592825200288456LL))))));
                var_12 = ((/* implicit */unsigned long long int) -5104592825200288456LL);
                var_13 = max((((/* implicit */unsigned int) ((-5104592825200288455LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)52)))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)55)) : (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                var_14 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)31494)) * (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_1])) : (((/* implicit */int) arr_2 [i_1] [i_0])))))) | (((/* implicit */int) ((_Bool) min((((/* implicit */long long int) arr_5 [i_0] [i_1])), (-5104592825200288482LL)))))));
            }
        } 
    } 
}
