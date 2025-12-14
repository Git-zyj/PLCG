/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3466
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
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [6U] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((4294967295U) * (4294967295U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 0)) || (((/* implicit */_Bool) arr_2 [i_2 + 1] [i_2 - 1] [(_Bool)1]))))) : ((~(((/* implicit */int) arr_2 [i_2 + 1] [i_2 - 1] [(_Bool)1]))))));
                    arr_8 [(signed char)4] [(signed char)4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(min((1867516037), (((/* implicit */int) (short)20446))))))) ? (((((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) (short)20228))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [2LL] [i_2]))) : (max((((/* implicit */unsigned long long int) (short)20446)), (16430035402203245380ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [(signed char)0] [i_2 + 1] [(signed char)0])) & (((/* implicit */int) ((signed char) 18305485480671963935ULL))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) var_4);
}
