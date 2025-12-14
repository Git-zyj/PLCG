/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54504
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
    for (short i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned char) (((((-(((/* implicit */int) arr_3 [i_0 + 3])))) + (2147483647))) << (((((/* implicit */int) (unsigned short)5535)) * (((/* implicit */int) (_Bool)0))))));
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) var_8))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)205)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 2] [i_0 - 1]))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_1)) <= (var_0))) ? (var_5) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12)))))));
    var_16 = ((/* implicit */int) var_1);
}
