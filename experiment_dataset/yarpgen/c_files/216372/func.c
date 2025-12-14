/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216372
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
    var_11 &= (~(((/* implicit */int) var_6)));
    var_12 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_1))));
    var_13 -= ((/* implicit */unsigned int) max((min((min((0ULL), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) var_8))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */unsigned short) ((unsigned int) var_3));
                    arr_11 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */_Bool) arr_4 [i_0]);
                }
            } 
        } 
    } 
}
