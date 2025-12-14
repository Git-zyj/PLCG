/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228874
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
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) arr_4 [i_1]);
                var_14 = (((+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-4936))))))) - (((/* implicit */int) arr_1 [(short)12])));
            }
        } 
    } 
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */long long int) var_10)) ^ (var_5)))) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) (unsigned short)30585)))))) - (((/* implicit */int) var_4)))))));
}
