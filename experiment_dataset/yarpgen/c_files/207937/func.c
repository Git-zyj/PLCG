/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207937
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
    var_11 = ((/* implicit */short) var_8);
    var_12 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((unsigned long long int) var_3)) : ((-(var_8))))) - (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */long long int) ((var_0) * (((/* implicit */int) var_7))))))))));
    var_13 ^= ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = var_7;
                var_15 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)-23377))))) : (7957295445483772356LL)))) ? ((-((-(((/* implicit */int) (unsigned char)162)))))) : (((/* implicit */int) arr_0 [i_0] [i_1])));
                var_16 &= ((/* implicit */unsigned long long int) arr_1 [i_0]);
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [4LL]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) (~(((((((/* implicit */int) arr_1 [i_0 - 2])) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0 - 3])) + (138)))))));
            }
        } 
    } 
}
