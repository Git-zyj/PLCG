/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_7;
    var_12 ^= (min(var_5, ((((min(13, 2953))) ? var_10 : var_0))));
    var_13 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = ((2763233347483568355 ? 12941331191753339907 : -2269));
                var_14 |= ((1 ? 16152419174583011652 : (~7638559358197808012)));
            }
        }
    }
    #pragma endscop
}
