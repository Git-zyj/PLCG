/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50209
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
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) -1496388245))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((var_8), (((/* implicit */unsigned short) var_10)))), (((/* implicit */unsigned short) ((signed char) arr_2 [i_1] [i_0] [i_0])))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0])))))));
                var_14 ^= ((/* implicit */_Bool) (unsigned short)46085);
            }
        } 
    } 
    var_15 = ((((/* implicit */int) var_4)) < (((/* implicit */int) ((unsigned char) ((long long int) -1585090807)))));
}
