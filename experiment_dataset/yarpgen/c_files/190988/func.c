/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190988
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
    var_17 = ((/* implicit */int) var_8);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (9280635105772407308ULL))))));
                    arr_7 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) -2100065530);
                    var_19 ^= ((/* implicit */_Bool) 2100065529);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) (+(((((((/* implicit */int) var_6)) + (2147483647))) << (((((var_8) ? (2100065529) : (2100065529))) - (2100065529)))))));
}
