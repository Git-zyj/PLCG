/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246236
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
    var_19 &= ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [i_0] [(signed char)12] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)37810))));
                arr_7 [16] [i_0] [16U] = ((/* implicit */_Bool) ((int) min(((short)21474), (((/* implicit */short) arr_1 [i_0])))));
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) var_18);
                var_20 = ((/* implicit */_Bool) min((arr_5 [1ULL] [i_0]), (((/* implicit */unsigned long long int) ((_Bool) 677417534U)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */_Bool) 0LL)) || (((/* implicit */_Bool) 4294967295U))))) >> (((/* implicit */int) ((_Bool) (unsigned short)37804))))) & (((/* implicit */int) (short)-4204))));
    var_22 = ((/* implicit */_Bool) min(((unsigned short)54057), (((/* implicit */unsigned short) (_Bool)1))));
}
