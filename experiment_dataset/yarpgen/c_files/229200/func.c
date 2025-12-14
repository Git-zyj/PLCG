/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229200
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
    var_13 = ((/* implicit */short) var_4);
    var_14 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 24; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) ((short) ((int) 216172782113783808ULL)));
                    var_16 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) -1)) & (((((/* implicit */_Bool) var_12)) ? (14493201468885300147ULL) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_2 - 1] [i_2] [i_2 - 1]))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) var_3);
    var_18 = ((/* implicit */short) min((0ULL), (((/* implicit */unsigned long long int) ((long long int) ((long long int) 4294967295U))))));
}
