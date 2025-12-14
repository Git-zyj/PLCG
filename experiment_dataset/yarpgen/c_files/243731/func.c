/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243731
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
    for (int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_12 &= ((/* implicit */short) ((signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65529))) < (640181820U))) || (((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_1 [i_1])))))));
                var_13 = ((/* implicit */long long int) var_6);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) & (((((/* implicit */int) max((var_3), (((/* implicit */unsigned char) var_5))))) / (((/* implicit */int) ((unsigned short) var_2)))))));
    var_15 *= max((12416778178561268257ULL), (((/* implicit */unsigned long long int) 1362830282U)));
}
