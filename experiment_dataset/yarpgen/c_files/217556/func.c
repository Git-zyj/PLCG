/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217556
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
    var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) min((var_2), ((_Bool)0))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) ((_Bool) var_9));
                    var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)124))))) ? (((/* implicit */unsigned long long int) 1333773526U)) : (((arr_4 [i_2 - 2]) - (arr_4 [i_2 + 2])))));
                }
            } 
        } 
    } 
}
