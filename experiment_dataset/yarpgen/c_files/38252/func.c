/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38252
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                var_13 = ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) % (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) (short)-15929)) : (((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_0]))));
                var_14 = ((/* implicit */unsigned char) -1);
            }
        } 
    } 
    var_15 |= ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
    var_16 = ((/* implicit */unsigned short) (unsigned char)216);
}
