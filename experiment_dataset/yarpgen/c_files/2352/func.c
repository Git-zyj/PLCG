/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2352
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
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)47)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (min((((/* implicit */int) (short)-18736)), (-154330678))) : (var_11))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) max((var_15), (var_8)))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((unsigned long long int) (+(arr_0 [i_0])))), (((/* implicit */unsigned long long int) var_8))));
                    var_20 = ((/* implicit */unsigned long long int) var_1);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) ((unsigned int) (~((-(var_10))))));
    var_22 &= ((/* implicit */long long int) var_18);
}
