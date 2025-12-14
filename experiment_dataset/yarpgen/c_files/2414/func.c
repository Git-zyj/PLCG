/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2414
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
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_10 = arr_0 [i_0];
                    var_11 += ((min((((/* implicit */long long int) arr_2 [i_1])), (min((arr_8 [i_0] [i_0] [i_0]), (arr_8 [i_0] [i_0] [i_0]))))) + (((/* implicit */long long int) ((/* implicit */int) min(((short)-21769), ((short)-21769))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) min(((~(((0ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65531))))))), (var_2))))));
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) var_0))));
    var_14 = ((/* implicit */unsigned long long int) min((var_5), (((unsigned short) 3912793211U))));
}
