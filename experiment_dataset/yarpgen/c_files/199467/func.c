/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199467
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
    var_13 = ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] = (!(((_Bool) 18216085149532680734ULL)));
                    var_14 = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (var_6)))))));
                    var_15 -= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1])))))));
                    var_16 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)28832)) ^ (((/* implicit */int) (signed char)127))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_10);
    var_18 = ((/* implicit */signed char) var_5);
}
