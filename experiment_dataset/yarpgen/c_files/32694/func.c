/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32694
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) != (var_5))))))) ? ((-(var_10))) : (((/* implicit */long long int) (+(((unsigned int) (unsigned short)62864)))))));
    var_16 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))) - (min((0ULL), (((/* implicit */unsigned long long int) var_8)))))), (((/* implicit */unsigned long long int) (unsigned short)62864))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */_Bool) min((min((((((/* implicit */int) (unsigned short)2671)) * (((/* implicit */int) var_0)))), (var_12))), (((((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1] [i_1])) ^ (((/* implicit */int) arr_2 [i_1 - 1] [i_1] [i_1]))))));
                var_18 = ((/* implicit */long long int) (-(min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_1 [i_1 + 3])))), (((((/* implicit */_Bool) 6727958327518364204LL)) ? (0ULL) : (((/* implicit */unsigned long long int) var_5))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) min((var_14), (var_9)))) > (((/* implicit */int) ((var_1) < (((/* implicit */long long int) ((/* implicit */int) var_14))))))))), (min(((+(var_1))), (((long long int) var_12))))));
}
