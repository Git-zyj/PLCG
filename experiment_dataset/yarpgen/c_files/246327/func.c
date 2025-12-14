/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246327
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
    for (long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [7LL] [i_1] = (-(((/* implicit */int) (short)(-32767 - 1))));
                arr_7 [i_1] = ((((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_0 - 2]))) == (((((/* implicit */_Bool) (unsigned short)8603)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1]))) : (var_4))));
            }
        } 
    } 
    var_10 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) > (((/* implicit */unsigned long long int) max((9223372036854775807LL), (((/* implicit */long long int) var_5)))))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) < (var_3)))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
    var_11 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (0U)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))) : (((/* implicit */int) var_8))));
}
