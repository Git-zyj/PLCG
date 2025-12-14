/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31598
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
    var_11 = 5706726208743899813LL;
    var_12 *= ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) var_0))), (((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_2)), (var_8)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [i_0 + 1] &= ((/* implicit */_Bool) arr_2 [i_0] [i_1]);
                var_13 ^= ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0 + 3])) >= (((/* implicit */int) arr_0 [i_0] [i_0 + 1])))))));
                arr_7 [i_0 + 2] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((short) arr_4 [i_0 + 3] [i_0 - 1] [i_0 - 1]))) > (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)107)) || (((/* implicit */_Bool) 4294967270U)))))));
            }
        } 
    } 
}
