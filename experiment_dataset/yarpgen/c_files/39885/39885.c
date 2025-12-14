/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max(8887280909059445255, ((min((var_3 <= 3116582434), (-16169 + 20)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [3] [12] = arr_5 [i_0] [i_0] [i_0];
                var_18 += (min((max(-4704742350375042657, 1)), -98));
                arr_7 [i_1] = ((~(!3116582446)));
                arr_8 [9] [i_1] |= (max((((((1178384850 ? 248 : 3116582434))) ? 235 : -9449)), ((max(71, 41)))));
            }
        }
    }
    #pragma endscop
}
