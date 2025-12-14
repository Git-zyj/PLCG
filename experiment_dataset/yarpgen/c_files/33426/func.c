/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33426
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
    var_17 = min((((var_5) ? (min((var_9), (((/* implicit */unsigned int) var_15)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))))), (((/* implicit */unsigned int) ((_Bool) min((((/* implicit */unsigned short) var_1)), (var_4))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [(_Bool)1] = ((/* implicit */unsigned int) ((unsigned short) var_14));
                    arr_9 [i_0] [i_1] [i_2] |= var_10;
                    arr_10 [i_2] [i_1] [i_2] = ((/* implicit */signed char) var_0);
                }
            } 
        } 
    } 
}
