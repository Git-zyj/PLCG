/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24796
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
    var_10 = min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), (var_6)))) ? (min((2751215312U), (((/* implicit */unsigned int) var_9)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_1))))), (max((((((/* implicit */_Bool) 2751215312U)) ? (var_6) : (var_6))), (var_6))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) 1543751966U);
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) >= (arr_2 [i_1] [i_1] [i_0])));
            }
        } 
    } 
    var_12 = ((/* implicit */int) max((var_12), (max((((/* implicit */int) ((var_0) >= (var_0)))), (max((((/* implicit */int) min((var_2), (((/* implicit */unsigned char) (_Bool)1))))), (((int) var_8))))))));
    var_13 &= ((/* implicit */signed char) 2667544664U);
}
