/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242273
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
    var_10 = (-(((/* implicit */int) ((short) var_6))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned int) ((((var_2) % (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_2 [i_1]))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)32767))))));
                var_12 = ((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) * (9223372036854775800LL)));
            }
        } 
    } 
    var_13 = ((/* implicit */short) var_8);
    var_14 = ((/* implicit */short) var_7);
}
