/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232465
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
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_11 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max((arr_6 [i_2] [i_2 + 1] [i_2] [i_2 + 1]), (((/* implicit */unsigned char) (signed char)26))))), (arr_7 [(_Bool)1] [(_Bool)1] [i_0] [7ULL])));
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
                }
            } 
        } 
    } 
    var_12 *= ((/* implicit */short) 1299449928U);
    var_13 = ((/* implicit */int) var_2);
}
