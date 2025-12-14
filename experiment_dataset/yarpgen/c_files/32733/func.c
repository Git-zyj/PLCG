/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32733
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */int) 1940551035114517831LL);
                    var_19 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_1 + 2] [i_1 - 1]))));
                    var_20 = ((/* implicit */long long int) ((_Bool) var_1));
                    arr_7 [i_2] [i_2] [i_1] [i_0] = (_Bool)1;
                }
            } 
        } 
    } 
    var_21 += ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_16)) ? (min((((/* implicit */long long int) (_Bool)1)), (var_1))) : (var_14))) : (((/* implicit */long long int) ((/* implicit */int) var_15))));
}
