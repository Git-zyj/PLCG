/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216282
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
    var_20 -= (+(min((max((((/* implicit */unsigned long long int) (unsigned char)0)), (var_16))), (min((((/* implicit */unsigned long long int) var_3)), (var_6))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_19))));
                arr_4 [i_0 - 1] [(_Bool)1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_2 [i_0 - 4] [(unsigned char)2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) | (var_5))) : (((/* implicit */unsigned int) ((int) (unsigned short)22088)))))) : (6393745483406726119ULL));
            }
        } 
    } 
}
