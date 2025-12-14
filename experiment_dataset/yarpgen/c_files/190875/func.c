/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190875
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) | (((unsigned int) (unsigned short)24046))))));
    var_12 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (max((((/* implicit */unsigned long long int) var_1)), (var_4)))))) ? (((/* implicit */int) ((max((var_9), (((/* implicit */long long int) var_1)))) == (((/* implicit */long long int) ((/* implicit */int) var_3)))))) : (var_5)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */long long int) arr_3 [i_1] [i_0]);
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24061)) ? (((/* implicit */int) (unsigned short)24046)) : (((/* implicit */int) (unsigned short)41503))))) ? (((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */int) arr_4 [i_1])) : (arr_3 [i_0 + 3] [i_1]))) * (((var_2) / (2147483647)))))) : (((unsigned long long int) var_10))));
            }
        } 
    } 
}
