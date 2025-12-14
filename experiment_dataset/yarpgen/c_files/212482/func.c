/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212482
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
    var_14 ^= ((/* implicit */short) (-(max((((/* implicit */long long int) max((var_6), (var_6)))), (((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_5))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_4 [i_0] &= ((/* implicit */long long int) arr_0 [i_0]);
                var_16 -= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (7U)))) ? (((long long int) 11013872711594901623ULL)) : (((/* implicit */long long int) min((6U), (var_5))))))), (arr_3 [i_0] [i_1])));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) (short)32767);
}
