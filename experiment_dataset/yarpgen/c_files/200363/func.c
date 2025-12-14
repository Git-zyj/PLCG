/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200363
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            {
                var_10 = max((3668991093U), (max((((/* implicit */unsigned int) (unsigned short)65535)), ((-(2035280981U))))));
                var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) 1160941693U))));
                arr_5 [i_0] [i_0] [i_0] = arr_3 [i_0] [i_1 - 3] [i_0];
                var_12 *= ((/* implicit */short) (~(((long long int) var_3))));
                var_13 -= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_4 [i_1 - 2] [(short)1] [i_1 - 2])) ? (4294967269U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) (unsigned short)65535))));
            }
        } 
    } 
    var_14 += ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41554))) != (((((/* implicit */_Bool) (unsigned short)23981)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7))) : (1337202748U)))));
}
