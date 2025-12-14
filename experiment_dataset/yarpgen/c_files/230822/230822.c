/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~var_9);
    var_14 = (1690681274 ? -26744 : 2604285991);
    var_15 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 -= (((~var_10) / ((var_4 ? ((var_5 >> (var_2 - 1820218189))) : var_7))));
                arr_6 [i_0] [i_1] = var_12;
                var_17 = (!var_6);
                arr_7 [6] |= (((((-1882613770 ? -var_5 : (((var_6 ? var_7 : var_9)))))) ? (((2604285991 ? 710353354 : (-127 - 1)))) : (((~var_6) / (-89 ^ 0)))));
            }
        }
    }
    #pragma endscop
}
