/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230833
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
    var_19 = ((/* implicit */unsigned long long int) var_10);
    var_20 = ((/* implicit */long long int) ((var_2) != (((/* implicit */int) max(((signed char)119), ((signed char)109))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 11; i_1 += 3) 
        {
            {
                var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_15)))), (((/* implicit */int) (signed char)127))))) ? (((/* implicit */long long int) ((arr_0 [i_0]) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)230)))))))) : (((arr_3 [6ULL]) >> (((arr_3 [i_1 - 3]) - (106852162409173095LL)))))));
                var_22 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_11))) > (arr_1 [i_0 + 1]))));
            }
        } 
    } 
}
