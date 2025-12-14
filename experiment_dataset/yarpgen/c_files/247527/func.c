/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247527
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
    var_11 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)3))))) <= (((/* implicit */int) var_3)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */unsigned int) ((int) var_3))) : (var_1)))) * (var_4)));
                arr_8 [i_0] = ((/* implicit */_Bool) var_6);
            }
        } 
    } 
}
