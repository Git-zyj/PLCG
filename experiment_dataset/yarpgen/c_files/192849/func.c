/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192849
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_13 ^= ((/* implicit */long long int) (((~((~(((/* implicit */int) var_0)))))) <= ((~(((/* implicit */int) var_3))))));
                    arr_7 [i_2] [i_2] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) var_5)) % ((~(((/* implicit */int) var_6)))))), (((/* implicit */int) (signed char)16))));
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) var_5))))) < (var_2)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) max((var_15), (max((var_2), (var_4)))));
    var_16 = max((var_7), (((/* implicit */long long int) var_10)));
    var_17 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_5))))) : (max((((/* implicit */long long int) var_0)), (var_4)))))));
}
