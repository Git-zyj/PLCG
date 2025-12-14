/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213923
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
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_2))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_15 += ((/* implicit */unsigned char) arr_0 [(signed char)15] [i_1]);
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((-1224823660) - (-1224823650))))) ? (((/* implicit */int) arr_5 [i_0 + 1] [(unsigned char)22] [i_0 - 1])) : (((/* implicit */int) ((signed char) ((int) arr_2 [19LL]))))));
            }
        } 
    } 
}
