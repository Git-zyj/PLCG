/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!122);
    var_12 = (max(3136033986, 1158933309));
    var_13 *= (((1545059667588599165 / 3136033986) / -6289));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] = -7725;
                var_14 = (max(((8693668826470784638 & (min(19561, 0)))), -8693668826470784657));
                var_15 = 9987;
                var_16 = (max(1, ((-(max(0, 9223372036854775807))))));
            }
        }
    }
    #pragma endscop
}
