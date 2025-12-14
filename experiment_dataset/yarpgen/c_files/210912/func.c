/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210912
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
    var_20 = ((/* implicit */int) var_0);
    var_21 = ((/* implicit */short) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) (unsigned short)27683)) ? (5305626654535052955LL) : (((/* implicit */long long int) -1969261860)))) : (((/* implicit */long long int) ((int) var_6))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_17) : (((/* implicit */unsigned long long int) var_14))))) && (((_Bool) var_15)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) ((((unsigned long long int) ((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_0]))))) * (max((((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))), (((/* implicit */unsigned long long int) arr_6 [i_1 - 2] [i_1 + 3]))))));
                var_22 = min((((/* implicit */unsigned long long int) 1969261833)), (4820892354847407515ULL));
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_16))));
            }
        } 
    } 
}
