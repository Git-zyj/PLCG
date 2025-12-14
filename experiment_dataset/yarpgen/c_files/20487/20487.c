/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 117;
    var_18 = (~(+-86));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_19 = (max(var_19, 793291884));
        var_20 *= (!64);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_21 ^= 1764357684;
        var_22 = (max(var_22, ((((58 >= 1407607940) << (59 - 57))))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        var_23 = (min(var_23, (!-65)));
        var_24 -= -70;
    }
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        arr_12 [i_3] = -1250874208;
        arr_13 [i_3] = -120;
        arr_14 [i_3] = 2780566459;
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            {
                var_25 -= -50;
                arr_19 [i_4] = (!983490544);
            }
        }
    }
    #pragma endscop
}
