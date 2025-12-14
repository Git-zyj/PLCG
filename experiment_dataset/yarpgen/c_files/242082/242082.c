/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((~var_1) + 9223372036854775807)) << var_0));
    var_12 = ((32760 ? var_0 : (((!((max(var_3, var_10))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((((min(-32744, 32743))) ? (var_9 + -23691) : (((((max(32743, 1)))) * (max(-1109864299111741194, 32748))))));
                arr_7 [i_1] = 24112;
                var_13 = (min((((var_7 * var_6) ? (min(var_7, 1245618849)) : (var_9 > var_9))), (!var_10)));
                var_14 ^= var_0;
                var_15 ^= ((((min(-23691, var_4))) / ((min(var_3, -24113)))));
            }
        }
    }
    var_16 = (min(-32743, ((((((24113 ? var_2 : var_3))) <= ((var_2 ? 2342 : var_8)))))));
    #pragma endscop
}
