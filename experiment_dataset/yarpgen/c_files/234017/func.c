/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234017
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
    var_15 += var_0;
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_0);
                var_16 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (var_8)))) ? (var_11) : (var_11)))) ? (min((((/* implicit */unsigned long long int) arr_1 [(unsigned char)6] [i_1 - 2])), (arr_3 [i_0 + 2] [i_1 + 1]))) : (var_14)));
                var_17 += ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_8))))) << (((/* implicit */int) ((arr_2 [i_1] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (~(max((((/* implicit */long long int) var_2)), (min((((/* implicit */long long int) 524288U)), (var_11)))))));
}
