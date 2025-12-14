/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234556
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
    var_11 &= ((/* implicit */long long int) min((var_9), (((/* implicit */unsigned char) var_6))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */long long int) var_3);
                    arr_11 [i_0] [(short)5] [i_0] [i_2 - 1] = ((/* implicit */unsigned char) min((max((arr_1 [i_0 + 2]), ((short)2694))), (((/* implicit */short) ((signed char) arr_1 [i_2 - 1])))));
                    var_13 ^= ((/* implicit */signed char) min((((((/* implicit */int) arr_0 [i_0] [(signed char)10])) & (((/* implicit */int) min((((/* implicit */short) var_3)), ((short)25402)))))), (((/* implicit */int) arr_3 [0LL] [i_1]))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) var_10);
    var_15 = ((/* implicit */unsigned char) ((var_10) % (((/* implicit */long long int) ((/* implicit */int) var_0)))));
}
