/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237802
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
    var_13 = ((/* implicit */signed char) max((((unsigned long long int) min(((unsigned short)37283), (((/* implicit */unsigned short) (unsigned char)242))))), (((/* implicit */unsigned long long int) ((unsigned int) var_7)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (arr_2 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)31), ((unsigned char)13))))) : (((arr_2 [i_0] [i_0]) << (((arr_2 [i_0] [i_0]) - (15223885477266114776ULL)))))));
                var_14 = ((/* implicit */signed char) var_4);
                var_15 = ((/* implicit */signed char) ((var_11) | (((((/* implicit */_Bool) (+(((/* implicit */int) (short)31400))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_5)))))) : (arr_2 [i_0] [i_0])))));
            }
        } 
    } 
}
