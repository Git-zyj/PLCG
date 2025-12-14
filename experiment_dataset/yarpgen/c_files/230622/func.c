/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230622
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
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) var_13))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)236))));
                arr_7 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)33))));
                var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_1])) : ((+(((/* implicit */int) arr_4 [(unsigned char)0] [(unsigned char)0]))))))) ? (((((((/* implicit */int) arr_1 [i_0])) + (2147483647))) << (((((/* implicit */int) arr_6 [18] [18])) - (193))))) : (((/* implicit */int) (unsigned char)149))));
                arr_8 [i_0] [i_0] = ((/* implicit */_Bool) arr_2 [i_0] [i_1]);
            }
        } 
    } 
    var_18 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (signed char)123)), (4769906412473418211ULL)));
}
