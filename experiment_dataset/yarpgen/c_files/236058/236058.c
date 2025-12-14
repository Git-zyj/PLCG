/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = (((((max(4319112156271172707, (-9223372036854775807 - 1))) >> ((((max(249, (arr_7 [i_0] [i_0] [i_2])))) - 20077)))) != (!39059)));
                    arr_9 [i_2] [i_1] [i_0] = arr_2 [i_0];
                }
            }
        }
    }
    var_16 = ((var_1 && (1679073070228353123 - -var_3)));
    var_17 = var_15;
    var_18 = ((min(((16767671003481198491 ? 16767671003481198505 : 239)), (max(9223372036854775807, var_11)))) <= (((-1 ? var_10 : var_14))));
    #pragma endscop
}
