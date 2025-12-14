/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = var_2;
    var_12 = -var_8;
    var_13 = min((~3984271740192445385), var_1);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_14 = var_4;
                    var_15 = 63;
                }
                arr_11 [i_0] [i_0] = ((-(min(((((arr_10 [i_0 - 1] [i_0] [i_1] [i_1]) ? (arr_5 [i_0 - 1]) : 554725721))), (min((arr_1 [i_1] [i_0 - 3]), 10156157067787027360))))));
                var_16 = -var_7;
            }
        }
    }
    #pragma endscop
}
