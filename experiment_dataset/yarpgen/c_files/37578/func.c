/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37578
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1 - 2])) ? (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (arr_2 [i_0]))) << ((((-(((/* implicit */int) var_6)))) + (27850))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_9) ^ (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) < (arr_2 [i_0])))))))));
                var_18 = ((/* implicit */long long int) (~(((((/* implicit */int) var_5)) % (((/* implicit */int) arr_0 [i_1 - 2] [i_1 + 1]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) (~(((((/* implicit */int) ((unsigned char) var_1))) % (((/* implicit */int) var_4))))));
}
