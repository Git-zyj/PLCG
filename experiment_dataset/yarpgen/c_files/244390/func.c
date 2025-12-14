/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244390
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                var_10 = ((min((((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 2] [i_1 - 2])), (((((/* implicit */int) (short)-16549)) / (var_2))))) + (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [9ULL]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [(short)12]))))))))));
                var_11 = ((/* implicit */unsigned long long int) arr_3 [0ULL]);
            }
        } 
    } 
    var_12 ^= (unsigned short)0;
}
