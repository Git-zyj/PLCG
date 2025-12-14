/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238617
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
    var_10 = ((/* implicit */_Bool) min((var_10), (var_4)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 += ((/* implicit */_Bool) var_3);
                    arr_6 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */signed char) arr_5 [i_1]);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (max((((/* implicit */long long int) var_5)), (((long long int) 3626682073U)))) : (((/* implicit */long long int) (~((+(((/* implicit */int) (signed char)-125)))))))));
}
