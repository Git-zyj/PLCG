/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249500
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
    var_11 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_6)), (var_7)))) ? (min((((/* implicit */unsigned long long int) var_4)), (25ULL))) : (((/* implicit */unsigned long long int) var_4))))));
    var_12 |= ((/* implicit */unsigned int) ((_Bool) ((min((((/* implicit */int) (unsigned short)17664)), (var_3))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_13 = (+(((((/* implicit */int) arr_0 [i_0] [i_1 + 2])) << (((arr_3 [i_0] [i_1 + 1] [i_1]) - (13578171740729322612ULL))))));
                var_14 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_1)), (arr_2 [i_0])))), (max((((((/* implicit */_Bool) var_5)) ? (arr_3 [i_0] [(unsigned char)1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24444))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (arr_2 [i_0]) : (((/* implicit */long long int) var_4)))))))));
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_7))));
                var_16 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) 423107883))))) ? (min((((/* implicit */unsigned int) -2147483646)), (11U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 + 2])))))));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (+((+(7726630624619374768LL))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_7);
    var_18 = ((/* implicit */signed char) var_0);
}
