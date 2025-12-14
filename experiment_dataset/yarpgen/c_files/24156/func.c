/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24156
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
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) -6400388400687393500LL))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    var_13 = arr_0 [i_1];
                    var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) var_4)) && ((!(((/* implicit */_Bool) arr_1 [i_1])))))))));
                    arr_9 [i_0] [i_1] [i_2 + 1] = (unsigned short)59843;
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) var_11))));
                }
            } 
        } 
    } 
    var_16 ^= ((/* implicit */signed char) 180404213U);
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_8))));
    var_18 = (+(((/* implicit */int) (signed char)-87)));
}
