/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31107
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
    var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) max((var_10), (((/* implicit */int) var_12)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [(signed char)9] [i_1 - 1] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -238461542992801368LL)) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) (signed char)-50))));
                    arr_8 [i_2] = ((/* implicit */_Bool) var_15);
                    var_17 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-50))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (signed char)-102);
}
