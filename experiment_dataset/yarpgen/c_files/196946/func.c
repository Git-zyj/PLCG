/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196946
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
    var_15 = ((/* implicit */long long int) var_13);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] [(unsigned char)21] = ((/* implicit */long long int) ((max((arr_0 [i_0]), (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) * (arr_0 [i_0]))))) >> (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (+(12037262959276228738ULL)))))))));
                arr_8 [i_0] = ((/* implicit */unsigned short) var_12);
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) max((16841711710013516390ULL), (((/* implicit */unsigned long long int) 2203670770U))));
}
