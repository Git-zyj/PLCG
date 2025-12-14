/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245526
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
    var_17 = ((/* implicit */int) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64))) ^ (288230376151711743ULL))) >= ((~(var_12)))))) > (((/* implicit */int) ((short) (unsigned short)3968)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) var_13))));
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((unsigned char) ((unsigned long long int) var_7))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        for (unsigned short i_2 = 1; i_2 < 9; i_2 += 4) 
        {
            {
                var_20 -= ((/* implicit */signed char) max((288230376151711736ULL), (var_6)));
                arr_7 [i_2] [i_2] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_2 + 3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1])))), (((/* implicit */int) ((((/* implicit */int) arr_4 [i_2 - 1] [i_2])) == (((/* implicit */int) arr_4 [i_2 - 1] [i_2])))))));
            }
        } 
    } 
}
