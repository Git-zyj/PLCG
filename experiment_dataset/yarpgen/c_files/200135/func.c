/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200135
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
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_4))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_1 [i_0]))));
                var_22 = arr_5 [(signed char)10] [i_1];
                arr_7 [10U] [16LL] = ((/* implicit */short) arr_0 [i_0] [(unsigned short)2]);
                var_23 += ((/* implicit */unsigned char) arr_1 [11ULL]);
            }
        } 
    } 
    var_24 = var_16;
}
