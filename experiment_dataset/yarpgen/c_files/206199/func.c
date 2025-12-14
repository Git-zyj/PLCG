/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206199
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 |= max((min((((/* implicit */int) var_7)), (((int) (_Bool)0)))), (((/* implicit */int) var_3)));
        arr_3 [i_0] = ((((_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) ((signed char) -1638599918))) : (((/* implicit */int) var_10)));
        arr_4 [(signed char)4] = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)57818)) : (-1638599918)))));
    }
    var_12 = ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        for (short i_2 = 2; i_2 < 16; i_2 += 4) 
        {
            {
                var_13 = ((/* implicit */short) arr_7 [i_1]);
                var_14 = ((/* implicit */int) arr_7 [i_1 + 1]);
            }
        } 
    } 
}
