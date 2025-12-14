/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202950
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
    var_19 = ((/* implicit */signed char) (+(((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) != (var_11)))) + (((/* implicit */int) var_2))))));
    var_20 = ((/* implicit */long long int) var_8);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 6; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 7; i_1 += 1) 
        {
            {
                var_21 *= ((/* implicit */long long int) (((~(max((0), (((/* implicit */int) (signed char)63)))))) <= (((/* implicit */int) arr_3 [i_0 - 1]))));
                var_22 = ((/* implicit */int) (((-(0))) <= (((((/* implicit */int) (signed char)-108)) - (((/* implicit */int) (unsigned short)17691))))));
                var_23 = min((((/* implicit */unsigned short) var_3)), (max(((unsigned short)47864), ((unsigned short)39193))));
            }
        } 
    } 
}
