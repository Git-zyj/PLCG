/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34220
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
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_1))));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1] [i_2]))))) ? (((/* implicit */int) min((max((((/* implicit */unsigned char) arr_3 [(unsigned char)9])), (arr_5 [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1]))), (var_7)))) : (((/* implicit */int) (((~(var_13))) != ((-(((/* implicit */int) (unsigned short)34183)))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_7);
    var_23 &= var_16;
    var_24 = ((/* implicit */signed char) var_16);
}
