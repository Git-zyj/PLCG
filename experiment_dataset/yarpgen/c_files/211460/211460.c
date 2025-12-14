/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = 0;
                var_19 = (((~-10838) ? ((min(((((arr_0 [i_0] [i_1]) != var_15))), 19708))) : ((min(var_16, -10846)))));
                var_20 = var_13;
            }
        }
    }
    var_21 = 83;

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_8 [4] [i_2] [4] = (391353063 ? -10838 : -58);
            arr_9 [i_2] = 36028797018898432;
            arr_10 [i_2] [i_3] = -10838;
            var_22 ^= 3631495386;
        }
        arr_11 [i_2] [i_2] = (max(var_7, -10839));
    }
    #pragma endscop
}
