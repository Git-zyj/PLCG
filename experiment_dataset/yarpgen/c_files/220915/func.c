/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220915
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
    var_18 = (+(var_15));
    var_19 = ((/* implicit */unsigned short) (+(((unsigned int) ((int) var_4)))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (~(((int) var_16))))) : (((long long int) ((unsigned long long int) -5276382014948583858LL)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */long long int) (+(-463092069)));
                var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_0])))));
            }
        } 
    } 
}
