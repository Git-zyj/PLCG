/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200979
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
    var_20 = ((/* implicit */long long int) 219857917098275071ULL);
    var_21 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) max((var_11), (var_9)))) == (var_18))))) ^ (((unsigned int) max((var_2), (((/* implicit */int) (signed char)102))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */long long int) (~(max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_19)))), (((/* implicit */int) (signed char)-94))))));
                    arr_8 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2 - 1])) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_2 - 3]))))) : (var_9)));
                    var_23 -= ((/* implicit */unsigned int) var_15);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) 1513002952);
}
