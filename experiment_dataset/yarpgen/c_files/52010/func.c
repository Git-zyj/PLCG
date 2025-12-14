/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52010
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [i_0] |= (unsigned char)47;
                var_10 = max((arr_1 [i_0]), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (short)-13464)))) <= ((~(var_8)))))));
                var_11 = ((/* implicit */int) max((var_11), (var_9)));
            }
        } 
    } 
    var_12 = ((/* implicit */short) var_0);
    var_13 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) var_5)) ? (var_7) : (6824844083658558155LL))), (max((var_7), (((/* implicit */long long int) var_4)))))) & (((/* implicit */long long int) min((((int) -22819898)), (min((((/* implicit */int) var_0)), (var_3))))))));
}
