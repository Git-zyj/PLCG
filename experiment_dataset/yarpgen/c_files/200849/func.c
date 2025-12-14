/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200849
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0 + 1] [8] |= ((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1]))) >= (var_5))))) & (3371693499U))), (((/* implicit */unsigned int) var_12))));
                    arr_7 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0 + 2] [i_1 + 1]))))) ? (var_2) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-51)))))));
                    arr_8 [i_0] [i_2] [(_Bool)1] [i_0] = ((/* implicit */int) (_Bool)1);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -9223372036854775796LL))));
}
