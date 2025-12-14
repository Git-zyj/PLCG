/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52327
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) (+(((/* implicit */int) arr_2 [10LL])))))) + (((/* implicit */int) arr_1 [i_0] [i_0]))));
                var_18 = ((/* implicit */long long int) var_12);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) (_Bool)1))) << (((((/* implicit */int) (unsigned char)31)) - (11)))));
}
