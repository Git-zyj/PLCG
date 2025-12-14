/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27303
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
    var_19 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) var_0)) : (1869106663U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 593850308U)) ? (var_18) : (1343405053U)))) : (var_10))), (((/* implicit */long long int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) min((((/* implicit */signed char) var_8)), (var_6))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 24; i_1 += 2) 
        {
            {
                var_20 &= ((/* implicit */signed char) arr_4 [10U]);
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (signed char)0))));
            }
        } 
    } 
}
