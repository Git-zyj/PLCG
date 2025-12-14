/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219194
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
    var_20 = ((/* implicit */short) max((3ULL), (((/* implicit */unsigned long long int) (signed char)-85))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (short)-2310))) ? (((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [6ULL]))) / (var_12))))) : (((/* implicit */int) ((short) ((((/* implicit */int) arr_2 [i_1])) % (((/* implicit */int) arr_2 [i_0]))))))));
                var_22 = ((/* implicit */_Bool) arr_2 [i_0 + 1]);
            }
        } 
    } 
    var_23 ^= ((/* implicit */long long int) var_4);
}
