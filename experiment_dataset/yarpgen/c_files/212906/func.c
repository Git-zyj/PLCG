/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212906
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_2] [i_2] [i_2] = (unsigned char)92;
                    arr_10 [(_Bool)1] [(_Bool)1] [i_2] [(_Bool)1] = ((/* implicit */unsigned char) var_15);
                }
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */_Bool) (~(max((1061117503), (((/* implicit */int) arr_7 [i_0] [16] [i_0]))))));
    }
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_9))));
}
