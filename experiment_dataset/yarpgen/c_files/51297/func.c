/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51297
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */_Bool) (unsigned short)25859);
                var_12 = ((/* implicit */signed char) ((unsigned long long int) 0U));
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (-1391359798)))) : (((4016035289771592652ULL) >> (((arr_2 [(short)7] [(short)7]) - (2026484653164668646LL)))))))) ? ((~(((/* implicit */int) (signed char)6)))) : (545741905)));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-2))));
    var_14 = ((/* implicit */unsigned char) max((65536), (((/* implicit */int) (_Bool)0))));
}
