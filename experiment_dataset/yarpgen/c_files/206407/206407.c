/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_3 ? var_11 : var_2))) >= ((4006979671 - (!287987598)))));
    var_13 = (((((((287987625 ? 6764309417096545096 : -19)) >= (var_5 >= var_5)))) * var_9));

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_14 = (((arr_0 [i_0] [i_0 + 1]) ? -2770750559334026124 : (((!59828) & (22660 | var_2)))));
        arr_2 [i_0] [6] |= ((!(!-var_0)));
        var_15 = (((((arr_1 [i_0 - 2]) / (arr_0 [i_0 - 2] [i_0])))) ? (arr_1 [i_0 - 2]) : (~4006979668));
    }
    var_16 -= var_0;
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    arr_12 [i_2] = 18;
                    var_17 = ((((((arr_3 [i_2]) << (65535 - 65515))) < var_5)));
                    var_18 *= ((!((((287987610 ? (-32767 - 1) : 0))))));
                }
            }
        }
    }
    #pragma endscop
}
