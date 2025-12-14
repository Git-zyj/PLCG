/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246466
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_1)) ? (min((arr_3 [i_0] [i_1] [i_0]), (((/* implicit */unsigned long long int) var_3)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) | (arr_3 [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_16))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_3 [i_0] [i_0] [7ULL])))));
                var_19 &= ((/* implicit */unsigned int) (-(arr_1 [i_1] [(unsigned short)6])));
                var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 567775407008212225LL)) ? (((/* implicit */int) (short)2863)) : (1273997284))) << (((((((/* implicit */_Bool) var_10)) ? (((unsigned int) var_14)) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))))) - (4294965593U)))));
                var_21 = ((/* implicit */unsigned short) (~(4323981269957887215LL)));
            }
        } 
    } 
    var_22 ^= var_17;
    var_23 &= ((/* implicit */long long int) (((!(((var_9) == (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))) || (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_3)))))))));
}
