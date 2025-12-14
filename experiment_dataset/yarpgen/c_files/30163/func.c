/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30163
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
    var_13 *= (~(((/* implicit */int) (_Bool)1)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) (((-(((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) var_12))));
                arr_6 [i_1] [i_1] [i_1] &= max((((/* implicit */unsigned long long int) var_5)), (arr_0 [i_1]));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_5))));
}
