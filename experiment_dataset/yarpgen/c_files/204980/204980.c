/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((((var_9 << (var_0 - 990331087)))) ^ (~var_8)))) ? (((((var_6 ? var_11 : var_9)) * var_3))) : var_0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_1] [i_2] [i_3] = (((var_4 == 9) >= (~9)));
                        var_13 *= 4218304879341630380;
                    }
                }
            }
        }
        arr_10 [i_0] [i_0] = ((71776119061217280 ? 4486007441326080 : 242));
        var_14 ^= (arr_2 [i_0]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        arr_13 [i_4] [i_4] = 1;
        var_15 = -12767;
        var_16 = (((arr_8 [i_4] [i_4] [i_4] [i_4]) + (!-71776119061217280)));
    }
    var_17 -= var_4;
    var_18 = max(var_0, (max((var_5 - var_4), (var_2 / -526217778))));
    var_19 = ((var_8 - (0 >= var_3)));
    #pragma endscop
}
