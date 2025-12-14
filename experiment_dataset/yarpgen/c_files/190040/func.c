/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190040
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
    var_18 |= ((/* implicit */signed char) max((((/* implicit */int) (unsigned short)38355)), ((+(((/* implicit */int) var_2))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)72)) || (((/* implicit */_Bool) (signed char)-72))));
                    arr_9 [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) (+(min((min((2199023255551LL), (((/* implicit */long long int) (signed char)127)))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)127)) * (((/* implicit */int) (short)9905)))))))));
                }
            } 
        } 
    } 
}
