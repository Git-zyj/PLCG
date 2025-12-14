/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193642
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
    var_17 = min((((/* implicit */unsigned int) ((((var_15) ? (((/* implicit */int) var_7)) : (var_10))) * (((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) var_7)))))))), (((((((/* implicit */int) var_11)) > (((/* implicit */int) var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (0U))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    var_18 ^= ((/* implicit */long long int) min((((/* implicit */int) ((unsigned char) arr_3 [i_2 - 1] [i_0 - 1]))), (-1515472289)));
                    arr_8 [i_0 + 2] [i_0 + 3] [i_0 + 2] [i_2] = ((/* implicit */unsigned long long int) (short)4095);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) min((var_6), (((/* implicit */unsigned int) var_8))));
}
