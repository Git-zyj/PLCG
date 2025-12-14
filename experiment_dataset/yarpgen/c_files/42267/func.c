/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42267
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
    for (signed char i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    arr_7 [i_0 + 2] [i_1] [i_0] = 1682725148U;
                    var_20 = ((/* implicit */unsigned int) max(((signed char)-112), ((signed char)108)));
                }
                arr_8 [i_0] [i_0] [i_0] = ((short) ((((((/* implicit */int) (signed char)16)) > (((/* implicit */int) (signed char)114)))) ? (min((467311816U), (1682725150U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_18))))));
                arr_9 [i_0] = (signed char)98;
                var_21 ^= ((/* implicit */short) (signed char)0);
            }
        } 
    } 
    var_22 |= ((/* implicit */short) var_4);
}
