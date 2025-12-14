/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21092
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) (-((-(arr_8 [i_1])))));
                    arr_9 [i_0] [5] [i_1] [i_1 - 1] = ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)110))))) % (((unsigned int) 107408313347180716LL))));
                    var_21 = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) arr_0 [i_0])), (arr_5 [i_0] [i_1]))) != (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_0 [i_0]))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_0 [i_0])))))));
                }
            } 
        } 
    } 
    var_22 &= (signed char)101;
}
