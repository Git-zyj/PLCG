/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245049
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
    var_14 = ((/* implicit */_Bool) var_11);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */long long int) arr_2 [i_0] [i_1] [i_0]);
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((max((arr_1 [i_0]), (arr_1 [7LL]))) + (2147483647))) << (((((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) var_7))))) - (26559)))))) ? (arr_2 [i_0] [1LL] [i_1 - 1]) : (((/* implicit */unsigned long long int) max((arr_3 [i_0 + 2]), (arr_3 [i_0 - 2]))))));
            }
        } 
    } 
}
