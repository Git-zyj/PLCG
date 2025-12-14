/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209530
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
    var_11 = ((/* implicit */short) var_5);
    var_12 = ((/* implicit */_Bool) (-(var_8)));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_13 *= ((/* implicit */long long int) ((((/* implicit */int) max(((short)32751), ((short)32738)))) != ((+(((/* implicit */int) var_10))))));
                arr_5 [i_0] = ((/* implicit */_Bool) var_2);
            }
        } 
    } 
}
