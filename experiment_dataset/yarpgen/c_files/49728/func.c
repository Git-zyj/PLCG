/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49728
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
    var_16 = ((/* implicit */unsigned int) ((long long int) var_14));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) max((min((((((/* implicit */_Bool) 3796973252528420311ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_1]))) : (14649770821181131305ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (1116901660)))))), (((/* implicit */unsigned long long int) (unsigned short)54006))));
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_11))));
                var_18 = ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? ((+(((/* implicit */int) (signed char)-55)))) : (((/* implicit */int) (signed char)2)));
            }
        } 
    } 
}
